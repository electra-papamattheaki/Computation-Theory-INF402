%{
  #include <stdio.h>
  #include <string.h>
  #include "cgen.h"
  #include <math.h>
  #include "myanalyzer.tab.h"

  int line_num = 1;
%}

DIGIT       [0-9]
NUMBER      {DIGIT}{DIGIT}*
DECIMAL     ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)
REAL        {DECIMAL}([eE][+-]?{NUMBER})?
STRING      \"(\\.|[^"])*\"
ID          [a-zA-Z_][0-9a-zA-Z_]*

%%
integer     return KEYWORD_INTEGER;
scalar      return KEYWORD_SCALAR; 
str         return KEYWORD_STR; 
boolean     return KEYWORD_BOOLEAN; 
True        return BOOLEAN_TRUE; 
False       return BOOLEAN_FALSE; 
const       return KEYWORD_CONST; 
if          return KEYWORD_IF; 
else        return KEYWORD_ELSE; 
endif       return KEYWORD_ENDIF; 
for         return KEYWORD_FOR; 
in          return KEYWORD_IN; 
endfor      return KEYWORD_ENDFOR; 
while       return KEYWORD_WHILE; 
endwhile    return KEYWORD_ENDWHILE; 
break       return KEYWORD_BREAK; 
continue    return KEYWORD_CONTINUE; 
not         return KEYWORD_NOT;
and         return KEYWORD_AND;
or          return KEYWORD_OR; 
def         return KEYWORD_DEF; 
enddef      return KEYWORD_ENDDEF;
main        return KEYWORD_MAIN; 
return      return KEYWORD_RETURN;
comp        return KEYWORD_COMP; 
endcomp     return KEYWORD_ENDCOMP;
of          return KEYWORD_OF;

{STRING}    { yylval.str = strdup(yytext); return STRING; }
{NUMBER}    { yylval.str = strdup(yytext); return NUMBER; }
{DECIMAL}   { yylval.str = strdup(yytext); return DECIMAL; }
{REAL}      { yylval.str = strdup(yytext); return REAL; }
{ID}        { yylval.str = strdup(yytext); return ID; }

"+"         return '+';
"-"         return '-';
"*"         return '*';
"/"         return '/';
"%"         return '%';
"**"        return POWER_OP; 
"=="        return EQUAL_OP; 
"!="        return NOTEQUAL_OP; 
"<"         return LESSTHAN_OP; 
"<="        return LESSTHANEQUAL_OP; 
">"         return GREATERTHAN_OP; 
">="        return GREATERTHANEQUAL_OP; 
"="         return '='; 
"+="        return PLUSASSIGN_OP; 
"-="        return MINUSASSIGN_OP; 
"*="        return MULTASSIGN_OP; 
"/="        return DIVASSIGN_OP; 
"%="        return MODASSIGN_OP; 
";"         return ';';
"("	    return '(';
")"	    return ')';
","         return ','; 
"["         return '[';
"]"         return ']';
":"         return ':';
"#"         return HASHTAG_OP;

"--"[^\n]*  	printf("Line comment in line %d: %s\n", line_num, yytext);/* eat line comments */

[ \r\t]+    /* skip whitespace */
\n 	    ++line_num;

<<EOF>>     return EOF;

.           { printf("Lexical error in line %d: %s\n", line_num, yytext); }

%%
