/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

  #include <stdio.h>
  #include "cgen.h"
  #include <math.h>
  #include "kappalib.h"
  
  extern int yylex(void);
  extern int line_num;

#line 81 "myanalyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "myanalyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRING = 3,                     /* STRING  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_NUMBER = 5,                     /* NUMBER  */
  YYSYMBOL_DECIMAL = 6,                    /* DECIMAL  */
  YYSYMBOL_REAL = 7,                       /* REAL  */
  YYSYMBOL_KEYWORD_INTEGER = 8,            /* KEYWORD_INTEGER  */
  YYSYMBOL_KEYWORD_SCALAR = 9,             /* KEYWORD_SCALAR  */
  YYSYMBOL_KEYWORD_STR = 10,               /* KEYWORD_STR  */
  YYSYMBOL_KEYWORD_BOOLEAN = 11,           /* KEYWORD_BOOLEAN  */
  YYSYMBOL_BOOLEAN_TRUE = 12,              /* BOOLEAN_TRUE  */
  YYSYMBOL_BOOLEAN_FALSE = 13,             /* BOOLEAN_FALSE  */
  YYSYMBOL_KEYWORD_CONST = 14,             /* KEYWORD_CONST  */
  YYSYMBOL_KEYWORD_IF = 15,                /* KEYWORD_IF  */
  YYSYMBOL_KEYWORD_ELSE = 16,              /* KEYWORD_ELSE  */
  YYSYMBOL_KEYWORD_ENDIF = 17,             /* KEYWORD_ENDIF  */
  YYSYMBOL_KEYWORD_FOR = 18,               /* KEYWORD_FOR  */
  YYSYMBOL_KEYWORD_IN = 19,                /* KEYWORD_IN  */
  YYSYMBOL_KEYWORD_ENDFOR = 20,            /* KEYWORD_ENDFOR  */
  YYSYMBOL_KEYWORD_WHILE = 21,             /* KEYWORD_WHILE  */
  YYSYMBOL_KEYWORD_ENDWHILE = 22,          /* KEYWORD_ENDWHILE  */
  YYSYMBOL_KEYWORD_BREAK = 23,             /* KEYWORD_BREAK  */
  YYSYMBOL_KEYWORD_CONTINUE = 24,          /* KEYWORD_CONTINUE  */
  YYSYMBOL_KEYWORD_DEF = 25,               /* KEYWORD_DEF  */
  YYSYMBOL_KEYWORD_ENDDEF = 26,            /* KEYWORD_ENDDEF  */
  YYSYMBOL_KEYWORD_MAIN = 27,              /* KEYWORD_MAIN  */
  YYSYMBOL_KEYWORD_RETURN = 28,            /* KEYWORD_RETURN  */
  YYSYMBOL_KEYWORD_COMP = 29,              /* KEYWORD_COMP  */
  YYSYMBOL_KEYWORD_ENDCOMP = 30,           /* KEYWORD_ENDCOMP  */
  YYSYMBOL_KEYWORD_OF = 31,                /* KEYWORD_OF  */
  YYSYMBOL_POWER_OP = 32,                  /* POWER_OP  */
  YYSYMBOL_EQUAL_OP = 33,                  /* EQUAL_OP  */
  YYSYMBOL_NOTEQUAL_OP = 34,               /* NOTEQUAL_OP  */
  YYSYMBOL_LESSTHAN_OP = 35,               /* LESSTHAN_OP  */
  YYSYMBOL_LESSTHANEQUAL_OP = 36,          /* LESSTHANEQUAL_OP  */
  YYSYMBOL_GREATERTHAN_OP = 37,            /* GREATERTHAN_OP  */
  YYSYMBOL_GREATERTHANEQUAL_OP = 38,       /* GREATERTHANEQUAL_OP  */
  YYSYMBOL_PLUSASSIGN_OP = 39,             /* PLUSASSIGN_OP  */
  YYSYMBOL_MINUSASSIGN_OP = 40,            /* MINUSASSIGN_OP  */
  YYSYMBOL_MULTASSIGN_OP = 41,             /* MULTASSIGN_OP  */
  YYSYMBOL_DIVASSIGN_OP = 42,              /* DIVASSIGN_OP  */
  YYSYMBOL_MODASSIGN_OP = 43,              /* MODASSIGN_OP  */
  YYSYMBOL_HASHTAG_OP = 44,                /* HASHTAG_OP  */
  YYSYMBOL_KEYWORD_NOT = 45,               /* KEYWORD_NOT  */
  YYSYMBOL_46_ = 46,                       /* '*'  */
  YYSYMBOL_47_ = 47,                       /* '/'  */
  YYSYMBOL_48_ = 48,                       /* '%'  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_KEYWORD_AND = 51,               /* KEYWORD_AND  */
  YYSYMBOL_KEYWORD_OR = 52,                /* KEYWORD_OR  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* ';'  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* '='  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_input = 62,                     /* input  */
  YYSYMBOL_func_body = 63,                 /* func_body  */
  YYSYMBOL_main_func = 64,                 /* main_func  */
  YYSYMBOL_func_decl = 65,                 /* func_decl  */
  YYSYMBOL_parameters = 66,                /* parameters  */
  YYSYMBOL_call_func = 67,                 /* call_func  */
  YYSYMBOL_func_input = 68,                /* func_input  */
  YYSYMBOL_var_assign = 69,                /* var_assign  */
  YYSYMBOL_var_update = 70,                /* var_update  */
  YYSYMBOL_result = 71,                    /* result  */
  YYSYMBOL_conditions = 72,                /* conditions  */
  YYSYMBOL_complex_array = 73,             /* complex_array  */
  YYSYMBOL_more_conds = 74,                /* more_conds  */
  YYSYMBOL_statements = 75,                /* statements  */
  YYSYMBOL_comp = 76,                      /* comp  */
  YYSYMBOL_comp_body = 77,                 /* comp_body  */
  YYSYMBOL_comp_var_decl = 78,             /* comp_var_decl  */
  YYSYMBOL_expr = 79,                      /* expr  */
  YYSYMBOL_type = 80                       /* type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1022

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    48,     2,     2,
      53,    54,    46,    49,    59,    50,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    56,
       2,    60,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,   111,   112,   113,   114,   119,   124,   129,
     130,   131,   132,   137,   142,   143,   144,   149,   150,   151,
     152,   153,   158,   159,   164,   165,   166,   167,   168,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   193,   198,   199,   204,   209,
     214,   215,   216,   221,   222,   227,   228,   229,   230,   232,
     234,   235,   237,   238,   240,   242,   243,   244,   245,   246,
     248,   249,   250,   251,   252,   253,   254,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   269,   270,   271,
     272
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STRING", "ID",
  "NUMBER", "DECIMAL", "REAL", "KEYWORD_INTEGER", "KEYWORD_SCALAR",
  "KEYWORD_STR", "KEYWORD_BOOLEAN", "BOOLEAN_TRUE", "BOOLEAN_FALSE",
  "KEYWORD_CONST", "KEYWORD_IF", "KEYWORD_ELSE", "KEYWORD_ENDIF",
  "KEYWORD_FOR", "KEYWORD_IN", "KEYWORD_ENDFOR", "KEYWORD_WHILE",
  "KEYWORD_ENDWHILE", "KEYWORD_BREAK", "KEYWORD_CONTINUE", "KEYWORD_DEF",
  "KEYWORD_ENDDEF", "KEYWORD_MAIN", "KEYWORD_RETURN", "KEYWORD_COMP",
  "KEYWORD_ENDCOMP", "KEYWORD_OF", "POWER_OP", "EQUAL_OP", "NOTEQUAL_OP",
  "LESSTHAN_OP", "LESSTHANEQUAL_OP", "GREATERTHAN_OP",
  "GREATERTHANEQUAL_OP", "PLUSASSIGN_OP", "MINUSASSIGN_OP",
  "MULTASSIGN_OP", "DIVASSIGN_OP", "MODASSIGN_OP", "HASHTAG_OP",
  "KEYWORD_NOT", "'*'", "'/'", "'%'", "'+'", "'-'", "KEYWORD_AND",
  "KEYWORD_OR", "'('", "')'", "':'", "';'", "'['", "']'", "','", "'='",
  "$accept", "input", "func_body", "main_func", "func_decl", "parameters",
  "call_func", "func_input", "var_assign", "var_update", "result",
  "conditions", "complex_array", "more_conds", "statements", "comp",
  "comp_body", "comp_var_decl", "expr", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   112,    59,     5,    25,    40,     6,     6,     6,  -116,
       6,    76,    70,    59,    70,  -116,    27,    41,    54,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,    69,    43,
    -116,  -116,  -116,  -116,  -116,    70,    70,    70,  -116,    70,
    -116,   278,  -116,   682,   125,    74,    37,  -116,    70,   951,
     951,   778,   305,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    75,    76,   -50,    77,    79,   134,   138,
      37,   118,    37,    96,    65,  -116,  -116,   911,   970,   498,
     498,   498,   498,   498,    15,    15,    15,    15,    15,   869,
     931,   931,   931,   951,   951,  -116,  -116,    76,    95,    76,
     104,   113,   685,   -51,  -116,    98,  -116,  -116,    70,   110,
    -116,   109,   121,   141,   124,   133,   184,   136,   135,   147,
     220,   171,   685,   148,   685,  -116,   685,  -116,    76,   161,
    -116,  -116,  -116,   125,    76,    76,     4,    70,   231,    70,
     190,    70,  -116,  -116,   670,   571,   163,  -116,  -116,  -116,
    -116,   164,  -116,  -116,  -116,   162,   165,   332,    70,   546,
     801,   172,   824,  -116,  -116,  -116,   685,    70,   -22,   213,
    -116,   173,    70,   175,   214,   257,    70,    70,   178,   706,
     178,   183,    70,   596,   730,   100,   178,  -116,    62,    70,
     219,  -116,   754,  -116,    70,   182,    70,   231,  -116,   202,
     210,   890,   211,   205,   359,   386,   621,   178,  -116,    70,
      70,  -116,   216,   249,   217,   218,   262,   493,   519,   227,
      70,    76,   229,    70,   228,    70,   246,    76,   848,   230,
    -116,   413,   178,   440,   178,   266,    70,  -116,   279,   329,
     303,   339,  -116,   467,   178,   304,   178,   306,   321,   341,
    -116,   365,  -116,    76,   330,   331,   333,  -116,  -116,  -116
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      24,     0,     0,     0,     0,     0,    24,    24,    24,     2,
      24,     0,     0,     0,     0,    21,     0,     0,     0,     1,
      27,    26,    25,    28,    88,    87,    89,    90,     0,    55,
      58,    56,    57,    60,    61,     0,     0,     0,    86,     0,
      59,     0,    18,     0,     9,     0,    50,    17,    14,    62,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,    50,     0,    16,    70,    85,    64,    71,    72,
      73,    75,    74,    76,    80,    81,    82,    83,    84,    79,
      65,    66,    67,    68,    69,    77,    78,     0,     0,     0,
       0,     0,     3,     0,    52,     0,    51,    13,    14,     0,
      19,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     3,    29,     3,    31,     0,     0,
      49,    15,    20,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    41,    42,    86,     0,     0,     6,    30,     4,
       5,     0,    54,    12,    11,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     7,    53,     3,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    48,     0,     0,
       0,     8,     0,    23,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,    40,     0,     0,     0,     0,     0,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
      37,     0,    36,     0,     0,     0,     0,    39,    38,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,  -115,  -116,   -43,   245,   -44,   285,     9,  -116,
     325,  -106,  -116,   234,   -95,  -116,   -64,   273,   -12,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,   131,     6,     7,    76,    40,    83,     8,   135,
       9,   196,   137,   197,   198,    10,    81,    82,    84,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   108,    43,    80,   138,   109,   136,   110,   139,    16,
       1,    15,    24,    25,    26,    27,   114,   157,   116,   159,
       2,   160,    42,    49,    50,    51,   136,    52,   136,    18,
     136,     3,    17,   107,   119,     4,   121,    80,   186,    80,
      19,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   184,    78,     1,   166,   161,    71,    72,   133,   132,
     136,   164,   165,     2,    29,    30,    31,    32,   209,   210,
      44,    79,    33,    34,    24,    25,    26,    27,   133,   132,
     133,   132,   133,   132,    45,   200,    48,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    46,
      65,    66,    67,    68,    69,    70,    71,    72,   155,    35,
      36,   134,   226,    37,   118,    47,    38,    39,    77,    75,
     107,   111,   133,   132,   112,   167,   169,   170,    16,   172,
     223,   134,   113,   134,   133,   134,   133,   249,   115,   251,
     117,   120,   133,    48,   140,   205,   179,   206,   239,   259,
     207,   261,   122,   123,   245,   185,   142,    11,   143,    12,
     189,    13,    14,   133,   193,   194,   144,    48,   145,   146,
     202,   147,   195,    13,   148,   134,   149,   211,   150,   151,
     266,   152,   214,   125,   215,   216,   126,   156,   133,   127,
     133,   128,   129,   153,   158,    79,   130,   227,   228,   171,
     133,   222,   133,    24,    25,    26,    27,   176,   238,   174,
     175,   241,   177,   243,    29,    30,    31,    32,   188,   182,
     190,   187,    33,    34,   253,    29,    30,    31,    32,   201,
     191,   212,   166,    33,    34,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   217,    65,    66,
      67,    68,    69,    70,    71,    72,   218,   221,   230,    35,
      36,    86,   231,    37,   229,   192,   154,    39,   186,   232,
      35,    36,   237,   242,    37,   240,   247,    38,   168,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   244,    65,    66,    67,    68,    69,    70,    71,    72,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,   252,    65,    66,    67,    68,    69,    70,    71,
      72,    20,    21,    22,   254,    23,    73,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   255,
      65,    66,    67,    68,    69,    70,    71,    72,   256,   257,
     260,   264,   262,    86,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   263,    65,    66,    67,
      68,    69,    70,    71,    72,   265,   267,   268,   163,   269,
     178,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   141,    65,    66,    67,    68,    69,    70,
      71,    72,   162,     0,     0,     0,     0,   224,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     208,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,     0,     0,   225,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,   248,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,   250,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,   258,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    60,    61,    62,
      63,    64,     0,     0,    71,    72,     0,     0,   233,    71,
      72,   234,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,     0,
      71,    72,     0,     0,   235,     0,     0,   236,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,   180,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,     0,     0,   173,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,   203,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,   -43,     0,     0,   180,     0,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   124,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,     2,
     125,     0,     0,   126,     0,     0,   127,     0,   128,   129,
      78,     0,     0,   130,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,   199,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,   204,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,   213,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    85,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,   181,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,    65,
      66,    67,    68,    69,    70,    71,    72,     0,   183,   246,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,    65,    66,    67,    68,   219,
     220,    71,    72,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
      69,    70,    71,    72,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
       0,    71,    72
};

static const yytype_int16 yycheck[] =
{
      12,    74,    14,    46,    55,    55,   112,    57,    59,     4,
       4,     2,     8,     9,    10,    11,    80,   132,    82,   134,
      14,   136,    13,    35,    36,    37,   132,    39,   134,     4,
     136,    25,    27,    55,   107,    29,   109,    80,    60,    82,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   176,    25,     4,    60,   138,    51,    52,   112,   112,
     176,   144,   145,    14,     4,     5,     6,     7,    16,    17,
      53,    44,    12,    13,     8,     9,    10,    11,   132,   132,
     134,   134,   136,   136,    53,   190,    53,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    55,
      45,    46,    47,    48,    49,    50,    51,    52,   130,    49,
      50,   112,   217,    53,    59,    56,    56,    57,    54,     4,
      55,    54,   176,   176,    55,   147,   148,   149,     4,   151,
     213,   132,     4,   134,   188,   136,   190,   242,    30,   244,
      54,    56,   196,    53,    56,    55,   168,    57,   231,   254,
      60,   256,    58,    50,   237,   177,    56,    55,    59,    57,
     182,    59,    60,   217,   186,   187,    55,    53,    37,    55,
     192,    57,     4,    59,    60,   176,    53,   199,     4,    53,
     263,    56,   204,    15,   206,   207,    18,    26,   242,    21,
     244,    23,    24,    56,    56,    44,    28,   219,   220,    19,
     254,     6,   256,     8,     9,    10,    11,    55,   230,    56,
      56,   233,    57,   235,     4,     5,     6,     7,    55,    57,
      55,    18,    12,    13,   246,     4,     5,     6,     7,    56,
      26,    22,    60,    12,    13,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    55,    45,    46,
      47,    48,    49,    50,    51,    52,    56,    56,    19,    49,
      50,    58,    55,    53,    58,    18,    56,    57,    60,    17,
      49,    50,    55,    55,    53,    56,    56,    56,    57,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    55,    45,    46,    47,    48,    49,    50,    51,    52,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    56,    45,    46,    47,    48,    49,    50,    51,
      52,     6,     7,     8,    55,    10,    58,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      45,    46,    47,    48,    49,    50,    51,    52,    55,    20,
      56,    20,    56,    58,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    55,    45,    46,    47,
      48,    49,    50,    51,    52,    20,    56,    56,   143,    56,
      58,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   118,    45,    46,    47,    48,    49,    50,
      51,    52,   139,    -1,    -1,    -1,    -1,    58,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     196,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    58,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    58,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    39,    40,    41,
      42,    43,    -1,    -1,    51,    52,    -1,    -1,    55,    51,
      52,    58,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    56,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    -1,    56,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    56,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,     4,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,     4,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    14,
      15,    -1,    -1,    18,    -1,    -1,    21,    -1,    23,    24,
      25,    -1,    -1,    28,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    55,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    55,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    -1,    55,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    14,    25,    29,    62,    64,    65,    69,    71,
      76,    55,    57,    59,    60,    69,     4,    27,     4,     0,
      71,    71,    71,    71,     8,     9,    10,    11,    80,     4,
       5,     6,     7,    12,    13,    49,    50,    53,    56,    57,
      67,    79,    69,    79,    53,    53,    55,    56,    53,    79,
      79,    79,    79,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    58,    55,     4,    66,    54,    25,    44,
      65,    77,    78,    68,    79,    54,    58,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    55,    80,    55,
      57,    54,    55,     4,    77,    30,    77,    54,    59,    80,
      56,    80,    58,    50,     4,    15,    18,    21,    23,    24,
      28,    63,    65,    67,    69,    70,    72,    73,    55,    59,
      56,    68,    56,    59,    55,    37,    55,    57,    60,    53,
       4,    53,    56,    56,    56,    79,    26,    63,    56,    63,
      63,    80,    78,    66,    80,    80,    60,    79,    57,    79,
      79,    19,    79,    56,    56,    56,    55,    57,    58,    79,
      56,    54,    57,    54,    63,    79,    60,    18,    55,    79,
      55,    26,    18,    79,    79,     4,    72,    74,    75,    55,
      75,    56,    79,    56,    55,    55,    57,    60,    74,    16,
      17,    79,    22,    55,    79,    79,    79,    55,    56,    49,
      50,    56,     6,    80,    58,    58,    75,    79,    79,    58,
      19,    55,    17,    55,    58,    55,    58,    55,    79,    80,
      56,    79,    55,    79,    55,    80,    31,    56,    58,    75,
      58,    75,    56,    79,    55,    20,    55,    20,    58,    75,
      56,    75,    56,    55,    20,    20,    80,    56,    56,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    63,    64,    65,    66,
      66,    66,    66,    67,    68,    68,    68,    69,    69,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    74,    74,    75,    76,
      77,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    80,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     8,    12,     0,
       3,     5,     5,     4,     0,     3,     1,     4,     3,     6,
       7,     2,     4,     7,     0,     2,     2,     2,     2,     1,
       2,     1,    13,    12,     8,    11,    14,    14,    16,    16,
       8,     2,     2,     2,     3,    17,     1,     2,     1,     6,
       0,     2,     2,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: result  */
#line 97 "myanalyzer.y"
        {
		if (yyerror_count == 0) 
		{
			printf("#include <stdio.h>\n");			
			printf("#include <math.h>\n");
			printf("#include \"thetalib.h\"\n");
			printf("\n/* program */\n");
			printf("%s\n", (yyvsp[0].str));	
		}
	}
#line 1474 "myanalyzer.tab.c"
    break;

  case 3: /* func_body: %empty  */
#line 111 "myanalyzer.y"
               {(yyval.str) = template("");}
#line 1480 "myanalyzer.tab.c"
    break;

  case 4: /* func_body: var_assign func_body  */
#line 112 "myanalyzer.y"
                               {(yyval.str) = template("%s;\n%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1486 "myanalyzer.tab.c"
    break;

  case 5: /* func_body: conditions func_body  */
#line 113 "myanalyzer.y"
                               {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1492 "myanalyzer.tab.c"
    break;

  case 6: /* func_body: func_decl func_body  */
#line 114 "myanalyzer.y"
                              {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1498 "myanalyzer.tab.c"
    break;

  case 7: /* main_func: KEYWORD_DEF KEYWORD_MAIN '(' ')' ':' func_body KEYWORD_ENDDEF ';'  */
#line 119 "myanalyzer.y"
                                                                          { (yyval.str) = template("int main(){\n%s\n}", (yyvsp[-2].str));}
#line 1504 "myanalyzer.tab.c"
    break;

  case 8: /* func_decl: KEYWORD_DEF ID '(' parameters ')' '-' GREATERTHAN_OP type ':' func_body KEYWORD_ENDDEF ';'  */
#line 124 "myanalyzer.y"
                                                                                                  {(yyval.str) = template("%s %s (%s) {\n%s}\n\n", (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-8].str), (yyvsp[-2].str));}
#line 1510 "myanalyzer.tab.c"
    break;

  case 9: /* parameters: %empty  */
#line 129 "myanalyzer.y"
               {(yyval.str) = template("");}
#line 1516 "myanalyzer.tab.c"
    break;

  case 10: /* parameters: ID ':' type  */
#line 130 "myanalyzer.y"
                      {(yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-2].str));}
#line 1522 "myanalyzer.tab.c"
    break;

  case 11: /* parameters: ID '[' ']' ':' type  */
#line 131 "myanalyzer.y"
                                     {(yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-4].str));}
#line 1528 "myanalyzer.tab.c"
    break;

  case 12: /* parameters: ID ':' type ',' parameters  */
#line 132 "myanalyzer.y"
                                     {(yyval.str) = template("%s %s, %s", (yyvsp[-2].str), (yyvsp[-4].str), (yyvsp[0].str));}
#line 1534 "myanalyzer.tab.c"
    break;

  case 13: /* call_func: ID '(' func_input ')'  */
#line 137 "myanalyzer.y"
                                     {(yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1540 "myanalyzer.tab.c"
    break;

  case 14: /* func_input: %empty  */
#line 142 "myanalyzer.y"
               {(yyval.str) = template("");}
#line 1546 "myanalyzer.tab.c"
    break;

  case 15: /* func_input: expr ',' func_input  */
#line 143 "myanalyzer.y"
                              {(yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1552 "myanalyzer.tab.c"
    break;

  case 16: /* func_input: expr  */
#line 144 "myanalyzer.y"
               {(yyval.str) = (yyvsp[0].str);}
#line 1558 "myanalyzer.tab.c"
    break;

  case 17: /* var_assign: ID ':' type ';'  */
#line 149 "myanalyzer.y"
                       {(yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[-3].str));}
#line 1564 "myanalyzer.tab.c"
    break;

  case 18: /* var_assign: ID ',' var_assign  */
#line 150 "myanalyzer.y"
                            {(yyval.str) = template("%s, %s", (yyvsp[0].str), (yyvsp[-2].str));}
#line 1570 "myanalyzer.tab.c"
    break;

  case 19: /* var_assign: ID '=' expr ':' type ';'  */
#line 151 "myanalyzer.y"
                                   {(yyval.str) = template("%s %s = %s", (yyvsp[-1].str), (yyvsp[-5].str), (yyvsp[-3].str));}
#line 1576 "myanalyzer.tab.c"
    break;

  case 20: /* var_assign: ID '[' expr ']' ':' type ';'  */
#line 152 "myanalyzer.y"
                                       {(yyval.str) = template("%s %s = %s", (yyvsp[-1].str), (yyvsp[-6].str), (yyvsp[-4].str));}
#line 1582 "myanalyzer.tab.c"
    break;

  case 21: /* var_assign: KEYWORD_CONST var_assign  */
#line 153 "myanalyzer.y"
                                   {(yyval.str) = template("const %s", (yyvsp[0].str));}
#line 1588 "myanalyzer.tab.c"
    break;

  case 22: /* var_update: ID '=' expr ';'  */
#line 158 "myanalyzer.y"
                     {(yyval.str) = template("%s = %s", (yyvsp[-3].str), (yyvsp[-1].str));}
#line 1594 "myanalyzer.tab.c"
    break;

  case 23: /* var_update: ID '[' expr ']' '=' expr ';'  */
#line 159 "myanalyzer.y"
                                   {(yyval.str) = template("%s[%s] = %s", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-1].str));}
#line 1600 "myanalyzer.tab.c"
    break;

  case 24: /* result: %empty  */
#line 164 "myanalyzer.y"
               {(yyval.str) = template("");}
#line 1606 "myanalyzer.tab.c"
    break;

  case 25: /* result: var_assign result  */
#line 165 "myanalyzer.y"
                        {(yyval.str) = template("%s;\n%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1612 "myanalyzer.tab.c"
    break;

  case 26: /* result: func_decl result  */
#line 166 "myanalyzer.y"
                       {(yyval.str) = template("%s\n%s\n", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1618 "myanalyzer.tab.c"
    break;

  case 27: /* result: main_func result  */
#line 167 "myanalyzer.y"
                       {(yyval.str) = template("%s\n%s\n", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1624 "myanalyzer.tab.c"
    break;

  case 28: /* result: comp result  */
#line 168 "myanalyzer.y"
                      {(yyval.str) = template("%s\n%s\n", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1630 "myanalyzer.tab.c"
    break;

  case 29: /* conditions: var_update  */
#line 173 "myanalyzer.y"
                   {(yyval.str) = template("%s;\n", (yyvsp[0].str));}
#line 1636 "myanalyzer.tab.c"
    break;

  case 30: /* conditions: call_func ';'  */
#line 174 "myanalyzer.y"
                        {(yyval.str) = template("%s;\n", (yyvsp[-1].str));}
#line 1642 "myanalyzer.tab.c"
    break;

  case 31: /* conditions: complex_array  */
#line 175 "myanalyzer.y"
                        {(yyval.str) = template("%s;\n", (yyvsp[0].str));}
#line 1648 "myanalyzer.tab.c"
    break;

  case 32: /* conditions: ID ':' '=' '[' expr KEYWORD_FOR expr ':' DECIMAL ']' ':' type ';'  */
#line 176 "myanalyzer.y"
                                                                      {(yyval.str) = template("\nfor(int %s = 0; %s < %s; ++%s)\n%s[%s]=%s;", (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-12].str), (yyvsp[-6].str), (yyvsp[-8].str));}
#line 1654 "myanalyzer.tab.c"
    break;

  case 33: /* conditions: ID '=' '[' expr KEYWORD_FOR expr ':' expr ']' ':' type ';'  */
#line 177 "myanalyzer.y"
                                                                {(yyval.str) = template("\nfor(int %s = 0; %s < %s; ++%s)\n%s[%s]=%s;", (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-11].str), (yyvsp[-6].str), (yyvsp[-8].str));}
#line 1660 "myanalyzer.tab.c"
    break;

  case 34: /* conditions: KEYWORD_IF '(' expr ')' ':' statements KEYWORD_ENDIF ';'  */
#line 178 "myanalyzer.y"
                                                                   {(yyval.str) = template("if (%s) {\n%s\n}", (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1666 "myanalyzer.tab.c"
    break;

  case 35: /* conditions: KEYWORD_IF '(' expr ')' ':' statements KEYWORD_ELSE ':' statements KEYWORD_ENDIF ';'  */
#line 179 "myanalyzer.y"
                                                                                               {(yyval.str) = template("if (%s) {\n%s\n}\nelse {\n%s\n}", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1672 "myanalyzer.tab.c"
    break;

  case 36: /* conditions: KEYWORD_FOR ID KEYWORD_IN '[' expr ':' expr '-' expr ']' ':' statements KEYWORD_ENDFOR ';'  */
#line 180 "myanalyzer.y"
                                                                                                {(yyval.str) = template("for (%s=%s;%s<%s;%s++) {\n%s\n}\n}", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-12].str), (yyvsp[-2].str));}
#line 1678 "myanalyzer.tab.c"
    break;

  case 37: /* conditions: KEYWORD_FOR ID KEYWORD_IN '[' expr ':' expr '+' expr ']' ':' statements KEYWORD_ENDFOR ';'  */
#line 181 "myanalyzer.y"
                                                                                                {(yyval.str) = template("for (%s=%s;%s<%s+%s;%s++) {\n%s\n}\n}", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-12].str), (yyvsp[-2].str));}
#line 1684 "myanalyzer.tab.c"
    break;

  case 38: /* conditions: KEYWORD_FOR ID KEYWORD_IN '[' expr ':' expr '-' expr ':' expr ']' ':' statements KEYWORD_ENDFOR ';'  */
#line 182 "myanalyzer.y"
                                                                                                       {(yyval.str) = template("for (%s=%s;%s<%s;%s+=%s) {\n%s\n}\n}", (yyvsp[-14].str), (yyvsp[-11].str), (yyvsp[-14].str), (yyvsp[-9].str), (yyvsp[-14].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1690 "myanalyzer.tab.c"
    break;

  case 39: /* conditions: KEYWORD_FOR ID KEYWORD_IN '[' expr ':' expr '+' expr ':' expr ']' ':' statements KEYWORD_ENDFOR ';'  */
#line 183 "myanalyzer.y"
                                                                                                       {(yyval.str) = template("for (%s=%s;%s<%s+%s;%s+=%s) {\n%s\n}\n}", (yyvsp[-14].str), (yyvsp[-11].str), (yyvsp[-14].str), (yyvsp[-9].str), (yyvsp[-7].str), (yyvsp[-14].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1696 "myanalyzer.tab.c"
    break;

  case 40: /* conditions: KEYWORD_WHILE '(' expr ')' ':' statements KEYWORD_ENDWHILE ';'  */
#line 184 "myanalyzer.y"
                                                                         {(yyval.str) = template("while (%s) {n%s\n}", (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1702 "myanalyzer.tab.c"
    break;

  case 41: /* conditions: KEYWORD_BREAK ';'  */
#line 185 "myanalyzer.y"
                            {(yyval.str) = template("break;");}
#line 1708 "myanalyzer.tab.c"
    break;

  case 42: /* conditions: KEYWORD_CONTINUE ';'  */
#line 186 "myanalyzer.y"
                               {(yyval.str) = template("continue;");}
#line 1714 "myanalyzer.tab.c"
    break;

  case 43: /* conditions: KEYWORD_RETURN ';'  */
#line 187 "myanalyzer.y"
                         {(yyval.str) = template("return;");}
#line 1720 "myanalyzer.tab.c"
    break;

  case 44: /* conditions: KEYWORD_RETURN expr ';'  */
#line 188 "myanalyzer.y"
                              {(yyval.str) = template("return %s;", (yyvsp[-1].str));}
#line 1726 "myanalyzer.tab.c"
    break;

  case 45: /* complex_array: ID ':' '=' '[' expr KEYWORD_FOR expr ':' type KEYWORD_IN expr KEYWORD_OF expr ']' ':' type ';'  */
#line 193 "myanalyzer.y"
                                                                                                  {(yyval.str) = template("\n%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n%s[%s] = %s;", (yyvsp[-1].str), (yyvsp[-16].str), (yyvsp[-1].str), (yyvsp[-8].str), (yyvsp[-1].str), (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-16].str), (yyvsp[-6].str), (yyvsp[-12].str));}
#line 1732 "myanalyzer.tab.c"
    break;

  case 46: /* more_conds: conditions  */
#line 198 "myanalyzer.y"
               {(yyval.str) = template("%s", (yyvsp[0].str));}
#line 1738 "myanalyzer.tab.c"
    break;

  case 47: /* more_conds: conditions more_conds  */
#line 199 "myanalyzer.y"
                            {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1744 "myanalyzer.tab.c"
    break;

  case 48: /* statements: more_conds  */
#line 204 "myanalyzer.y"
                   {(yyval.str) = template("\n%s\n", (yyvsp[0].str));}
#line 1750 "myanalyzer.tab.c"
    break;

  case 49: /* comp: KEYWORD_COMP ID ':' comp_body KEYWORD_ENDCOMP ';'  */
#line 209 "myanalyzer.y"
                                                         {(yyval.str) = template("#define SELF struct %s *self\ntypedef struct %s {\n%s\n} %s\n", (yyvsp[-4].str), (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str));}
#line 1756 "myanalyzer.tab.c"
    break;

  case 50: /* comp_body: %empty  */
#line 214 "myanalyzer.y"
               {(yyval.str) = template("");}
#line 1762 "myanalyzer.tab.c"
    break;

  case 51: /* comp_body: comp_var_decl comp_body  */
#line 215 "myanalyzer.y"
                                  {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1768 "myanalyzer.tab.c"
    break;

  case 52: /* comp_body: func_decl comp_body  */
#line 216 "myanalyzer.y"
                              {(yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str));}
#line 1774 "myanalyzer.tab.c"
    break;

  case 53: /* comp_var_decl: HASHTAG_OP ID ':' type ';'  */
#line 221 "myanalyzer.y"
                                   { (yyval.str) = template("%s %s;\n", (yyvsp[-1].str), (yyvsp[-3].str));}
#line 1780 "myanalyzer.tab.c"
    break;

  case 54: /* comp_var_decl: HASHTAG_OP ID ',' comp_var_decl  */
#line 222 "myanalyzer.y"
                                          { (yyval.str) = template("%s, %s", (yyvsp[0].str), (yyvsp[-2].str));}
#line 1786 "myanalyzer.tab.c"
    break;

  case 55: /* expr: ID  */
#line 227 "myanalyzer.y"
           {(yyval.str) = (yyvsp[0].str);}
#line 1792 "myanalyzer.tab.c"
    break;

  case 56: /* expr: DECIMAL  */
#line 228 "myanalyzer.y"
                  {(yyval.str) = (yyvsp[0].str);}
#line 1798 "myanalyzer.tab.c"
    break;

  case 57: /* expr: REAL  */
#line 229 "myanalyzer.y"
               {(yyval.str) = (yyvsp[0].str);}
#line 1804 "myanalyzer.tab.c"
    break;

  case 58: /* expr: NUMBER  */
#line 230 "myanalyzer.y"
                 {(yyval.str) = (yyvsp[0].str);}
#line 1810 "myanalyzer.tab.c"
    break;

  case 59: /* expr: call_func  */
#line 232 "myanalyzer.y"
                    {(yyval.str) = (yyvsp[0].str);}
#line 1816 "myanalyzer.tab.c"
    break;

  case 60: /* expr: BOOLEAN_TRUE  */
#line 234 "myanalyzer.y"
                       { (yyval.str) = template("1");}
#line 1822 "myanalyzer.tab.c"
    break;

  case 61: /* expr: BOOLEAN_FALSE  */
#line 235 "myanalyzer.y"
                       { (yyval.str) = template("0");}
#line 1828 "myanalyzer.tab.c"
    break;

  case 62: /* expr: '+' expr  */
#line 237 "myanalyzer.y"
                   { (yyval.str) = template("+%s", (yyvsp[0].str));}
#line 1834 "myanalyzer.tab.c"
    break;

  case 63: /* expr: '-' expr  */
#line 238 "myanalyzer.y"
                   { (yyval.str) = template("-%s", (yyvsp[0].str));}
#line 1840 "myanalyzer.tab.c"
    break;

  case 64: /* expr: expr POWER_OP expr  */
#line 240 "myanalyzer.y"
                             {(yyval.str) = template("pow(%s, %s)", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1846 "myanalyzer.tab.c"
    break;

  case 65: /* expr: expr '*' expr  */
#line 242 "myanalyzer.y"
                        { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1852 "myanalyzer.tab.c"
    break;

  case 66: /* expr: expr '/' expr  */
#line 243 "myanalyzer.y"
                        { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1858 "myanalyzer.tab.c"
    break;

  case 67: /* expr: expr '%' expr  */
#line 244 "myanalyzer.y"
                        { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1864 "myanalyzer.tab.c"
    break;

  case 68: /* expr: expr '+' expr  */
#line 245 "myanalyzer.y"
                        { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1870 "myanalyzer.tab.c"
    break;

  case 69: /* expr: expr '-' expr  */
#line 246 "myanalyzer.y"
                        { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1876 "myanalyzer.tab.c"
    break;

  case 70: /* expr: '(' expr ')'  */
#line 248 "myanalyzer.y"
                       { (yyval.str) = template("(%s)", (yyvsp[-1].str));}
#line 1882 "myanalyzer.tab.c"
    break;

  case 71: /* expr: expr EQUAL_OP expr  */
#line 249 "myanalyzer.y"
                             {(yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1888 "myanalyzer.tab.c"
    break;

  case 72: /* expr: expr NOTEQUAL_OP expr  */
#line 250 "myanalyzer.y"
                                {(yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1894 "myanalyzer.tab.c"
    break;

  case 73: /* expr: expr LESSTHAN_OP expr  */
#line 251 "myanalyzer.y"
                                {(yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1900 "myanalyzer.tab.c"
    break;

  case 74: /* expr: expr GREATERTHAN_OP expr  */
#line 252 "myanalyzer.y"
                                   {(yyval.str) = template("%s > %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1906 "myanalyzer.tab.c"
    break;

  case 75: /* expr: expr LESSTHANEQUAL_OP expr  */
#line 253 "myanalyzer.y"
                                     {(yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1912 "myanalyzer.tab.c"
    break;

  case 76: /* expr: expr GREATERTHANEQUAL_OP expr  */
#line 254 "myanalyzer.y"
                                        {(yyval.str) = template("%s >= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1918 "myanalyzer.tab.c"
    break;

  case 77: /* expr: expr KEYWORD_AND expr  */
#line 256 "myanalyzer.y"
                                {(yyval.str) = template("%s && %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1924 "myanalyzer.tab.c"
    break;

  case 78: /* expr: expr KEYWORD_OR expr  */
#line 257 "myanalyzer.y"
                               {(yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1930 "myanalyzer.tab.c"
    break;

  case 79: /* expr: expr KEYWORD_NOT expr  */
#line 258 "myanalyzer.y"
                                {(yyval.str) = template("%s ! %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1936 "myanalyzer.tab.c"
    break;

  case 80: /* expr: expr PLUSASSIGN_OP expr  */
#line 259 "myanalyzer.y"
                                  {(yyval.str) = template("%s += %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1942 "myanalyzer.tab.c"
    break;

  case 81: /* expr: expr MINUSASSIGN_OP expr  */
#line 260 "myanalyzer.y"
                                   {(yyval.str) = template("%s -= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1948 "myanalyzer.tab.c"
    break;

  case 82: /* expr: expr MULTASSIGN_OP expr  */
#line 261 "myanalyzer.y"
                                  {(yyval.str) = template("%s *= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1954 "myanalyzer.tab.c"
    break;

  case 83: /* expr: expr DIVASSIGN_OP expr  */
#line 262 "myanalyzer.y"
                                 {(yyval.str) = template("%s /= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1960 "myanalyzer.tab.c"
    break;

  case 84: /* expr: expr MODASSIGN_OP expr  */
#line 263 "myanalyzer.y"
                                 {(yyval.str) = template("%s %= %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1966 "myanalyzer.tab.c"
    break;

  case 85: /* expr: '[' expr ']'  */
#line 264 "myanalyzer.y"
                       {(yyval.str) = template("[%s]",(yyvsp[-1].str));}
#line 1972 "myanalyzer.tab.c"
    break;

  case 86: /* expr: ';'  */
#line 265 "myanalyzer.y"
             {(yyval.str) = template(";");}
#line 1978 "myanalyzer.tab.c"
    break;

  case 87: /* type: KEYWORD_SCALAR  */
#line 269 "myanalyzer.y"
                        {(yyval.str) = template("double");}
#line 1984 "myanalyzer.tab.c"
    break;

  case 88: /* type: KEYWORD_INTEGER  */
#line 270 "myanalyzer.y"
                         {(yyval.str) = template("int");}
#line 1990 "myanalyzer.tab.c"
    break;

  case 89: /* type: KEYWORD_STR  */
#line 271 "myanalyzer.y"
                     {(yyval.str) = template("char*");}
#line 1996 "myanalyzer.tab.c"
    break;

  case 90: /* type: KEYWORD_BOOLEAN  */
#line 272 "myanalyzer.y"
                         {(yyval.str) = template("int");}
#line 2002 "myanalyzer.tab.c"
    break;


#line 2006 "myanalyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 274 "myanalyzer.y"


int main() 
{
	if ( yyparse() == 0 )
		printf("/* Accepted! */\n");
	else
		printf("/* Rejected! */\n");
}
