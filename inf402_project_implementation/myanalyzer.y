%{
  #include <stdio.h>
  #include "cgen.h"
  #include <math.h>
  #include "kappalib.h"
  
  extern int yylex(void);
  extern int line_num;
%}


%union  
{
	char* str;
}

%token <str> STRING
%token <str> ID
%token <str> NUMBER
%token <str> DECIMAL
%token <str> REAL 

%token KEYWORD_INTEGER 
%token KEYWORD_SCALAR 
%token KEYWORD_STR 
%token KEYWORD_BOOLEAN 
%token BOOLEAN_TRUE 
%token BOOLEAN_FALSE
%token KEYWORD_CONST 
%token KEYWORD_IF 
%token KEYWORD_ELSE 
%token KEYWORD_ENDIF 
%token KEYWORD_FOR 
%token KEYWORD_IN
%token KEYWORD_ENDFOR 
%token KEYWORD_WHILE 
%token KEYWORD_ENDWHILE 
%token KEYWORD_BREAK 
%token KEYWORD_CONTINUE 
%token KEYWORD_DEF 
%token KEYWORD_ENDDEF 
%token KEYWORD_MAIN 
%token KEYWORD_RETURN 
%token KEYWORD_COMP
%token KEYWORD_ENDCOMP 
%token KEYWORD_OF;

%token POWER_OP; 
%token EQUAL_OP; 
%token NOTEQUAL_OP; 
%token LESSTHAN_OP; 
%token LESSTHANEQUAL_OP; 
%token GREATERTHAN_OP; 
%token GREATERTHANEQUAL_OP; 

%token PLUSASSIGN_OP
%token MINUSASSIGN_OP 
%token MULTASSIGN_OP 
%token DIVASSIGN_OP 
%token MODASSIGN_OP

%token HASHTAG_OP


%type <str> result // final result
%type <str> func_body
%type <str> main_func
%type <str> func_decl
%type <str> call_func
%type <str> func_input
%type <str> var_assign
%type <str> expr
%type <str> parameters
//%type <str> identifier
%type <str> type
%type <str> conditions more_conds
%type <str> statements var_update
%type <str> comp comp_var_decl comp_body
%type <str> complex_array

%start input

%right KEYWORD_NOT
%right POWER_OP

%left '*' '/' '%'
%left '+' '-' 

%left EQUAL_OP
%left NOTEQUAL_OP LESSTHAN_OP LESSTHANEQUAL_OP GREATERTHAN_OP GREATERTHANEQUAL_OP
%left PLUSASSIGN_OP MINUSASSIGN_OP MULTASSIGN_OP DIVASSIGN_OP MODASSIGN_OP
%left KEYWORD_AND KEYWORD_OR

%%
  input: 
	result  
	{
		if (yyerror_count == 0) 
		{
			printf("#include <stdio.h>\n");			
			printf("#include <math.h>\n");
			printf("#include \"thetalib.h\"\n");
			printf("\n/* program */\n");
			printf("%s\n", $1);	
		}
	}
	;

  func_body: 
        
        %empty {$$ = template("");};
        | var_assign func_body {$$ = template("%s;\n%s", $1, $2);}
        | conditions func_body {$$ = template("%s%s", $1, $2);}
        | func_decl func_body {$$ = template("%s%s", $1, $2);}
        ;
            	
  main_func:
  
	KEYWORD_DEF KEYWORD_MAIN '(' ')' ':' func_body KEYWORD_ENDDEF ';' { $$ = template("int main(){\n%s\n}", $6);}
	;

  func_decl:

	KEYWORD_DEF ID '(' parameters ')' '-' GREATERTHAN_OP type ':' func_body KEYWORD_ENDDEF ';'{$$ = template("%s %s (%s) {\n%s}\n\n", $8, $2, $4, $10);}
	;
          
  parameters:
  
  	%empty {$$ = template("");}
        | ID ':' type {$$ = template("%s %s", $3, $1);}
		| ID '['']' ':' type {$$ = template("%s %s", $5, $1);}
        | ID ':' type ',' parameters {$$ = template("%s %s, %s", $3, $1, $5);}
	;
	
  call_func:
  
		ID'(' func_input ')' {$$ = template("%s(%s)", $1, $3);}
        ;

  func_input:
  
        %empty {$$ = template("");}
        | expr ',' func_input {$$ = template("%s, %s", $1, $3);}
        | expr {$$ = $1;}
        ;
	    
  var_assign:
  
  	ID ':' type';' {$$ = template("%s %s", $3, $1);}
  	| ID ',' var_assign {$$ = template("%s, %s", $3, $1);}
  	| ID '=' expr ':' type ';' {$$ = template("%s %s = %s", $5, $1, $3);}
  	| ID '[' expr ']' ':' type ';' {$$ = template("%s %s = %s", $6, $1, $3);}
  	| KEYWORD_CONST var_assign {$$ = template("const %s", $2);}
  	;

  var_update:
  
    ID '=' expr ';'  {$$ = template("%s = %s", $1, $3);}
    | ID '[' expr ']' '=' expr ';' {$$ = template("%s[%s] = %s", $1, $3, $6);}
    ;
 	
  result:
  
   	%empty {$$ = template("");}
    | var_assign result {$$ = template("%s;\n%s", $1, $2);}
    | func_decl result {$$ = template("%s\n%s\n", $1, $2);}
    | main_func result {$$ = template("%s\n%s\n", $1, $2);}
	| comp result {$$ = template("%s\n%s\n", $1, $2);}
    ;
      
  conditions:
  	
  	var_update {$$ = template("%s;\n", $1);}
	| call_func ';' {$$ = template("%s;\n", $1);}
	| complex_array {$$ = template("%s;\n", $1);}
	| ID ':''=' '[' expr KEYWORD_FOR expr':'DECIMAL']'':' type ';'{$$ = template("\nfor(int %s = 0; %s < %s; ++%s)\n%s[%s]=%s;", $7, $7, $9, $7, $1, $7, $5);} /*array decl*/ 
	| ID '=' '[' expr KEYWORD_FOR expr':'expr']'':' type ';'{$$ = template("\nfor(int %s = 0; %s < %s; ++%s)\n%s[%s]=%s;", $6, $6, $8, $6, $1, $6, $4);} /*array decl 2*/ 
	| KEYWORD_IF '(' expr ')' ':' statements KEYWORD_ENDIF ';' {$$ = template("if (%s) {\n%s\n}", $3, $6);}
  	| KEYWORD_IF '(' expr ')' ':' statements KEYWORD_ELSE ':' statements KEYWORD_ENDIF ';' {$$ = template("if (%s) {\n%s\n}\nelse {\n%s\n}", $3, $6, $9);}
	| KEYWORD_FOR ID KEYWORD_IN '['expr ':' expr'-'expr']'':' statements KEYWORD_ENDFOR ';' {$$ = template("for (%s=%s;%s<%s;%s++) {\n%s\n}\n}", $2, $5, $2, $7, $2, $12);}
	| KEYWORD_FOR ID KEYWORD_IN '['expr ':' expr'+'expr']'':' statements KEYWORD_ENDFOR ';' {$$ = template("for (%s=%s;%s<%s+%s;%s++) {\n%s\n}\n}", $2, $5, $2, $7, $9, $2, $12);}
  	| KEYWORD_FOR ID KEYWORD_IN '['expr ':' expr'-'expr':'expr']'':' statements KEYWORD_ENDFOR ';' {$$ = template("for (%s=%s;%s<%s;%s+=%s) {\n%s\n}\n}", $2, $5, $2, $7, $2, $11, $14);}
  	| KEYWORD_FOR ID KEYWORD_IN '['expr ':' expr'+'expr':'expr']'':' statements KEYWORD_ENDFOR ';' {$$ = template("for (%s=%s;%s<%s+%s;%s+=%s) {\n%s\n}\n}", $2, $5, $2, $7, $9, $2, $11, $14);}
	| KEYWORD_WHILE '(' expr ')' ':' statements KEYWORD_ENDWHILE ';' {$$ = template("while (%s) {n%s\n}", $3, $6);}
	| KEYWORD_BREAK ';' {$$ = template("break;");}
	| KEYWORD_CONTINUE ';' {$$ = template("continue;");}
    | KEYWORD_RETURN ';' {$$ = template("return;");}
    | KEYWORD_RETURN expr ';' {$$ = template("return %s;", $2);}
  	; 

  complex_array:
    
	ID ':''=' '[' expr KEYWORD_FOR expr':'type KEYWORD_IN expr KEYWORD_OF expr']'':' type ';' {$$ = template("\n%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n%s[%s] = %s;", $16, $1, $16, $9, $16, $11, $11, $13, $11, $1, $11, $5);}    
	;

  more_conds:

    conditions {$$ = template("%s", $1);}
    | conditions more_conds {$$ = template("%s%s", $1, $2);}
    ;
         
  statements:
  	
  	more_conds {$$ = template("\n%s\n", $1);}
  	;
 
  comp:

	KEYWORD_COMP ID':' comp_body KEYWORD_ENDCOMP ';' {$$ = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n} %s\n", $2, $2, $4, $2);}
	;

  comp_body:

	%empty {$$ = template("");}
	| comp_var_decl comp_body {$$ = template("%s%s", $1, $2);}
	| func_decl comp_body {$$ = template("%s%s", $1, $2);}
	;

  comp_var_decl:

	HASHTAG_OP ID ':' type ';' { $$ = template("%s %s;\n", $4, $2);}
	| HASHTAG_OP ID ',' comp_var_decl { $$ = template("%s, %s", $4, $2);}
	;

  expr:

	ID {$$ = $1;}
	| DECIMAL {$$ = $1;}
	| REAL {$$ = $1;}
	| NUMBER {$$ = $1;}
	
	| call_func {$$ = $1;}
	
	| BOOLEAN_TRUE { $$ = template("1");}
	| BOOLEAN_FALSE{ $$ = template("0");}
	
	| '+' expr { $$ = template("+%s", $2);}
	| '-' expr { $$ = template("-%s", $2);}
	
	| expr POWER_OP expr {$$ = template("pow(%s, %s)", $1, $3);}

	| expr '*' expr { $$ = template("%s * %s", $1, $3);}
	| expr '/' expr { $$ = template("%s / %s", $1, $3);}
	| expr '%' expr { $$ = template("%s %% %s", $1, $3);}	
	| expr '+' expr { $$ = template("%s + %s", $1, $3);}
	| expr '-' expr { $$ = template("%s - %s", $1, $3);}
		
	| '(' expr ')' { $$ = template("(%s)", $2);} 
	| expr EQUAL_OP expr {$$ = template("%s == %s", $1, $3);}
	| expr NOTEQUAL_OP expr {$$ = template("%s != %s", $1, $3);}
	| expr LESSTHAN_OP expr {$$ = template("%s < %s", $1, $3);}
	| expr GREATERTHAN_OP expr {$$ = template("%s > %s", $1, $3);}
	| expr LESSTHANEQUAL_OP expr {$$ = template("%s <= %s", $1, $3);}
	| expr GREATERTHANEQUAL_OP expr {$$ = template("%s >= %s", $1, $3);}
	
	| expr KEYWORD_AND expr {$$ = template("%s && %s", $1, $3);}
	| expr KEYWORD_OR expr {$$ = template("%s || %s", $1, $3);}
	| expr KEYWORD_NOT expr {$$ = template("%s ! %s", $1, $3);}
	| expr PLUSASSIGN_OP expr {$$ = template("%s += %s", $1, $3);}
	| expr MINUSASSIGN_OP expr {$$ = template("%s -= %s", $1, $3);}
	| expr MULTASSIGN_OP expr {$$ = template("%s *= %s", $1, $3);}
	| expr DIVASSIGN_OP expr {$$ = template("%s /= %s", $1, $3);}
	| expr MODASSIGN_OP expr {$$ = template("%s %= %s", $1, $3);}
	| '[' expr ']' {$$ = template("[%s]",$2);}
	|';' {$$ = template(";");}
	;
	
  type:  
        KEYWORD_SCALAR  {$$ = template("double");}
        |KEYWORD_INTEGER {$$ = template("int");}
        |KEYWORD_STR {$$ = template("char*");}
        |KEYWORD_BOOLEAN {$$ = template("int");} 
        ;
%%

int main() 
{
	if ( yyparse() == 0 )
		printf("/* Accepted! */\n");
	else
		printf("/* Rejected! */\n");
}
