%{
  #include <stdio.h>

  int lineno = 1;
%}

DIGIT       [0-9]
NUMBER      {DIGIT}{DIGIT}*
DECIMAL     ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL        {DECIMAL}([eE][+-]?{NUMBER})?
STRING      \"(\\.|[^"])*\"
ID          [a-zA-Z_][0-9a-zA-Z_]*

%%
integer     { printf("Token KEYWORD_INTEGER: %s\n", yytext); }
scalar      { printf("Token KEYWORD_SCALAR: %s\n", yytext); }
str         { printf("Token KEYWORD_STR: %s\n", yytext); }
boolean     { printf("Token KEYWORD_BOOLEAN: %s\n", yytext); }
True        { printf("Token BOOLEAN_TRUE: %s\n", yytext); }
False       { printf("Token BOOLEAN_FALSE: %s\n", yytext); }
const       { printf("Token KEYWORD_CONST: %s\n", yytext); }
if          { printf("Token KEYWORD_IF: %s\n", yytext); }
else        { printf("Token KEYWORD_ELSE: %s\n", yytext); }
endif       { printf("Token KEYWORD_ENDIF: %s\n", yytext); }
for         { printf("Token KEYWORD_FOR: %s\n", yytext); }
in          { printf("Token KEYWORD_IN: %s\n", yytext); }
endfor      { printf("Token KEYWORD_ENDFOR: %s\n", yytext); }
while       { printf("Token KEYWORD_WHILE: %s\n", yytext); }
endwhile    { printf("Token KEYWORD_ENDWHILE: %s\n", yytext); }
break       { printf("Token KEYWORD_BREAK: %s\n", yytext); }
continue    { printf("Token KEYWORD_CONTINUE: %s\n", yytext); } 
not         { printf("Token KEYWORD_NOT: %s\n", yytext); }
and         { printf("Token KEYWORD_AND: %s\n", yytext); }
or          { printf("Token KEYWORD_OR: %s\n", yytext); }
def         { printf("Token KEYWORD_DEF: %s\n", yytext); }
enddef      { printf("Token KEYWORD_ENDDEF: %s\n", yytext); }
main        { printf("Token KEYWORD_MAIN: %s\n", yytext); }
return      { printf("Token KEYWORD_RETURN: %s\n", yytext); }
comp        { printf("Token KEYWORD_COMP: %s\n", yytext); }
endcomp     { printf("Token KEYWORD_ENDCOMP: %s\n", yytext); }

"+"         printf("Token PLUS_OP: %s\n", yytext); 
"-"         printf("Token MINUS_OP: %s\n", yytext); 
"*"         printf("Token MULT_OP: %s\n", yytext); 
"/"         printf("Token DIV_OP: %s\n", yytext); 
"%"         printf("Token MOD_OP: %s\n", yytext); 
"**"        printf("Token POWER_OP: %s\n", yytext); 
"=="        printf("Token EQUAL_OP: %s\n", yytext); 
"!="        printf("Token NOTEQUAL_OP: %s\n", yytext); 
"<"         printf("Token LESSTHAN_OP: %s\n", yytext); 
"<="        printf("Token LESSTHANEQUAL_OP: %s\n", yytext); 
">"         printf("Token GREATERTHAN_OP: %s\n", yytext); 
">="        printf("Token GREATERTHANEQUAL_OP: %s\n", yytext); 
"="         printf("Token ASSIGN_OP: %s\n", yytext); 
"+="        printf("Token PLUSASSIGN_OP: %s\n", yytext); 
"-="        printf("Token MINUSASSIGN_OP: %s\n", yytext); 
"*="        printf("Token MULTASSIGN_OP: %s\n", yytext); 
"/="        printf("Token DIVASSIGN_OP: %s\n", yytext); 
"%="        printf("Token MODASSIGN_OP: %s\n", yytext); 
";"         printf("Token SEMICOLON: %s\n", yytext); 
"("	    printf("Token LEFT_PARENTHESIS: %s\n", yytext); 
")"	    printf("Token RIGHT_PARENTHESIS: %s\n", yytext);
","         printf("Token COMMA: %s\n", yytext); 
"["         printf("Token LEFT_HOOK: %s\n", yytext);
"]"         printf("Token RIGHT_HOOK: %s\n", yytext); 
":"         printf("Token COLON: %s\n", yytext);
"."         printf("Token DOT: %s\n", yytext); 

{DECIMAL}   { printf("Token INTEGER: %s\n", yytext); }
{REAL}      { printf("Token REAL: %s\n", yytext); }
{STRING}    { printf("Token CONST_STRING: %s\n", yytext);}
{ID}        { printf("Token IDENTIFIER: %s\n", yytext); }

"--"[^\n]*  printf("Line comment in line %d: %s\n", lineno, yytext);/* eat line comments */

[ \r\t]+	    /* skip whitespace */
\n 	    ++lineno;
<<EOF>>     return EOF;

.           { printf("Lexical error in line %d: %s\n", lineno, yytext); }


%%
int main() 
{ 
  yylex(); 
}
