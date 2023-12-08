/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRING = 258,                  /* STRING  */
    ID = 259,                      /* ID  */
    NUMBER = 260,                  /* NUMBER  */
    DECIMAL = 261,                 /* DECIMAL  */
    REAL = 262,                    /* REAL  */
    KEYWORD_INTEGER = 263,         /* KEYWORD_INTEGER  */
    KEYWORD_SCALAR = 264,          /* KEYWORD_SCALAR  */
    KEYWORD_STR = 265,             /* KEYWORD_STR  */
    KEYWORD_BOOLEAN = 266,         /* KEYWORD_BOOLEAN  */
    BOOLEAN_TRUE = 267,            /* BOOLEAN_TRUE  */
    BOOLEAN_FALSE = 268,           /* BOOLEAN_FALSE  */
    KEYWORD_CONST = 269,           /* KEYWORD_CONST  */
    KEYWORD_IF = 270,              /* KEYWORD_IF  */
    KEYWORD_ELSE = 271,            /* KEYWORD_ELSE  */
    KEYWORD_ENDIF = 272,           /* KEYWORD_ENDIF  */
    KEYWORD_FOR = 273,             /* KEYWORD_FOR  */
    KEYWORD_IN = 274,              /* KEYWORD_IN  */
    KEYWORD_ENDFOR = 275,          /* KEYWORD_ENDFOR  */
    KEYWORD_WHILE = 276,           /* KEYWORD_WHILE  */
    KEYWORD_ENDWHILE = 277,        /* KEYWORD_ENDWHILE  */
    KEYWORD_BREAK = 278,           /* KEYWORD_BREAK  */
    KEYWORD_CONTINUE = 279,        /* KEYWORD_CONTINUE  */
    KEYWORD_DEF = 280,             /* KEYWORD_DEF  */
    KEYWORD_ENDDEF = 281,          /* KEYWORD_ENDDEF  */
    KEYWORD_MAIN = 282,            /* KEYWORD_MAIN  */
    KEYWORD_RETURN = 283,          /* KEYWORD_RETURN  */
    KEYWORD_COMP = 284,            /* KEYWORD_COMP  */
    KEYWORD_ENDCOMP = 285,         /* KEYWORD_ENDCOMP  */
    KEYWORD_OF = 286,              /* KEYWORD_OF  */
    POWER_OP = 287,                /* POWER_OP  */
    EQUAL_OP = 288,                /* EQUAL_OP  */
    NOTEQUAL_OP = 289,             /* NOTEQUAL_OP  */
    LESSTHAN_OP = 290,             /* LESSTHAN_OP  */
    LESSTHANEQUAL_OP = 291,        /* LESSTHANEQUAL_OP  */
    GREATERTHAN_OP = 292,          /* GREATERTHAN_OP  */
    GREATERTHANEQUAL_OP = 293,     /* GREATERTHANEQUAL_OP  */
    PLUSASSIGN_OP = 294,           /* PLUSASSIGN_OP  */
    MINUSASSIGN_OP = 295,          /* MINUSASSIGN_OP  */
    MULTASSIGN_OP = 296,           /* MULTASSIGN_OP  */
    DIVASSIGN_OP = 297,            /* DIVASSIGN_OP  */
    MODASSIGN_OP = 298,            /* MODASSIGN_OP  */
    HASHTAG_OP = 299,              /* HASHTAG_OP  */
    KEYWORD_NOT = 300,             /* KEYWORD_NOT  */
    KEYWORD_AND = 301,             /* KEYWORD_AND  */
    KEYWORD_OR = 302               /* KEYWORD_OR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "myanalyzer.y"

	char* str;

#line 115 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
