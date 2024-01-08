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
#line 1 "S++.y"

#include <iostream>
#include <vector>
#include <string>
#include "S++.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class symbolTable table;


string current_id;
string current_value;
string current_type;
string current_def="global";

#line 91 "S++.tab.c"

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

#include "S++.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TYPE = 3,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 5,                  /* CHAR_TYPE  */
  YYSYMBOL_STRING_TYPE = 6,                /* STRING_TYPE  */
  YYSYMBOL_BOOL_TYPE = 7,                  /* BOOL_TYPE  */
  YYSYMBOL_BOOL_TRUE = 8,                  /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 9,                 /* BOOL_FALSE  */
  YYSYMBOL_CLASS = 10,                     /* CLASS  */
  YYSYMBOL_EQUAL = 11,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 12,                 /* NOT_EQUAL  */
  YYSYMBOL_LOWER_EQUAL = 13,               /* LOWER_EQUAL  */
  YYSYMBOL_RIGHT_EQUAL = 14,               /* RIGHT_EQUAL  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_IMPORT = 16,                    /* IMPORT  */
  YYSYMBOL_NR = 17,                        /* NR  */
  YYSYMBOL_EXPORT = 18,                    /* EXPORT  */
  YYSYMBOL_GIVE = 19,                      /* GIVE  */
  YYSYMBOL_CONST = 20,                     /* CONST  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_IF_STATEMENT = 24,              /* IF_STATEMENT  */
  YYSYMBOL_ELSE_STATEMENT = 25,            /* ELSE_STATEMENT  */
  YYSYMBOL_ELSE_IF_STATEMENT = 26,         /* ELSE_IF_STATEMENT  */
  YYSYMBOL_WHILE_STATEMENT = 27,           /* WHILE_STATEMENT  */
  YYSYMBOL_FOR_STATEMENT = 28,             /* FOR_STATEMENT  */
  YYSYMBOL_LOOP_STATEMENT = 29,            /* LOOP_STATEMENT  */
  YYSYMBOL_STOP = 30,                      /* STOP  */
  YYSYMBOL_PLUS = 31,                      /* PLUS  */
  YYSYMBOL_MINUS = 32,                     /* MINUS  */
  YYSYMBOL_MUL = 33,                       /* MUL  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_MOD = 35,                       /* MOD  */
  YYSYMBOL_EVAL = 36,                      /* EVAL  */
  YYSYMBOL_TYPEOF = 37,                    /* TYPEOF  */
  YYSYMBOL_MAIN_START = 38,                /* MAIN_START  */
  YYSYMBOL_MAIN_STOP = 39,                 /* MAIN_STOP  */
  YYSYMBOL_DEF_FUNC = 40,                  /* DEF_FUNC  */
  YYSYMBOL_ID = 41,                        /* ID  */
  YYSYMBOL_STRING = 42,                    /* STRING  */
  YYSYMBOL_CHAR = 43,                      /* CHAR  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '-'  */
  YYSYMBOL_49_ = 49,                       /* '>'  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_54_ = 54,                       /* '.'  */
  YYSYMBOL_55_ = 55,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_types = 58,                     /* types  */
  YYSYMBOL_user_data_types_section = 59,   /* user_data_types_section  */
  YYSYMBOL_user_data_types_def = 60,       /* user_data_types_def  */
  YYSYMBOL_user_data_types = 61,           /* user_data_types  */
  YYSYMBOL_list_class = 62,                /* list_class  */
  YYSYMBOL_class = 63,                     /* class  */
  YYSYMBOL_global_var_section = 64,        /* global_var_section  */
  YYSYMBOL_global_var = 65,                /* global_var  */
  YYSYMBOL_func_section = 66,              /* func_section  */
  YYSYMBOL_list_functions = 67,            /* list_functions  */
  YYSYMBOL_functions = 68,                 /* functions  */
  YYSYMBOL_list_param = 69,                /* list_param  */
  YYSYMBOL_parameters = 70,                /* parameters  */
  YYSYMBOL_param = 71,                     /* param  */
  YYSYMBOL_main = 72,                      /* main  */
  YYSYMBOL_list_statements = 73,           /* list_statements  */
  YYSYMBOL_statements = 74,                /* statements  */
  YYSYMBOL_declarations = 75,              /* declarations  */
  YYSYMBOL_decl = 76,                      /* decl  */
  YYSYMBOL_assign_statements = 77,         /* assign_statements  */
  YYSYMBOL_assignments = 78,               /* assignments  */
  YYSYMBOL_left_value = 79,                /* left_value  */
  YYSYMBOL_value = 80,                     /* value  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_arithmetic_expression = 82,     /* arithmetic_expression  */
  YYSYMBOL_boolean_expression = 83,        /* boolean_expression  */
  YYSYMBOL_if_statement = 84,              /* if_statement  */
  YYSYMBOL_else_statement = 85,            /* else_statement  */
  YYSYMBOL_while_statement = 86,           /* while_statement  */
  YYSYMBOL_for_statement = 87,             /* for_statement  */
  YYSYMBOL_loop_statement = 88,            /* loop_statement  */
  YYSYMBOL_func_call = 89,                 /* func_call  */
  YYSYMBOL_list_calls = 90,                /* list_calls  */
  YYSYMBOL_give = 91,                      /* give  */
  YYSYMBOL_export = 92                     /* export  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    50,    48,    54,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      55,     2,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    50,    51,    52,    55,    56,
      59,    60,    62,    65,    66,    69,    70,    73,    74,    77,
      78,    81,    82,    85,    86,    89,    90,    93,    94,    97,
      98,   101,   104,   107,   108,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   126,   129,
     130,   131,   132,   135,   138,   141,   142,   143,   146,   147,
     148,   149,   150,   151,   152,   153,   156,   157,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   190,   191,   194,   195,   196,   199,
     202,   205,   207,   208,   209,   212,   213,   214,   217,   220,
     221
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
  "\"end of file\"", "error", "\"invalid token\"", "INT_TYPE",
  "FLOAT_TYPE", "CHAR_TYPE", "STRING_TYPE", "BOOL_TYPE", "BOOL_TRUE",
  "BOOL_FALSE", "CLASS", "EQUAL", "NOT_EQUAL", "LOWER_EQUAL",
  "RIGHT_EQUAL", "ASSIGN", "IMPORT", "NR", "EXPORT", "GIVE", "CONST",
  "AND", "OR", "NOT", "IF_STATEMENT", "ELSE_STATEMENT",
  "ELSE_IF_STATEMENT", "WHILE_STATEMENT", "FOR_STATEMENT",
  "LOOP_STATEMENT", "STOP", "PLUS", "MINUS", "MUL", "DIV", "MOD", "EVAL",
  "TYPEOF", "MAIN_START", "MAIN_STOP", "DEF_FUNC", "ID", "STRING", "CHAR",
  "'{'", "'}'", "'('", "')'", "'-'", "'>'", "','", "';'", "'['", "']'",
  "'.'", "'<'", "$accept", "program", "types", "user_data_types_section",
  "user_data_types_def", "user_data_types", "list_class", "class",
  "global_var_section", "global_var", "func_section", "list_functions",
  "functions", "list_param", "parameters", "param", "main",
  "list_statements", "statements", "declarations", "decl",
  "assign_statements", "assignments", "left_value", "value", "expression",
  "arithmetic_expression", "boolean_expression", "if_statement",
  "else_statement", "while_statement", "for_statement", "loop_statement",
  "func_call", "list_calls", "give", "export", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -18,    29,    94,   -72,     6,    10,   -72,   -72,   -72,
     -72,   -72,   -72,   124,    15,    11,   -72,    94,     8,   -72,
       7,    23,    13,   -72,    60,    34,    40,   -72,    11,   -72,
     -72,    35,     7,   -72,   -72,   -30,   -72,    32,    70,     0,
      37,    66,   -72,   -72,   -72,   -72,    71,    50,    52,   -72,
     -72,    55,     0,    65,    97,   -27,    99,     0,   -17,   145,
     -72,   136,   -72,   -72,   124,   111,    23,     0,   109,   112,
     114,    62,    61,   -26,   101,    66,   -72,   102,   -72,   -72,
     -72,   -72,   -72,   106,   -72,   108,   -72,   147,   148,   -72,
       0,     0,   119,   152,     0,    19,   123,   122,   131,    96,
      96,    96,    96,    96,    96,    96,    96,    96,   140,   135,
     -72,   133,    -7,    -1,   -72,   144,     0,     0,    23,    66,
     -72,   151,   -72,   -72,   -72,   -72,   -72,   -72,   137,   139,
     155,   146,   153,   158,   157,   104,   -72,   166,    96,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,    -5,
     124,   -72,   187,    23,   -72,   -72,   136,   169,   170,   167,
     174,   -72,   -72,   -72,   -72,   -72,     0,   -72,    96,    96,
      96,    96,    96,     0,     0,     0,     0,     0,     0,   171,
     175,    66,   172,   -72,   173,   -72,   179,   180,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   182,   124,   177,    66,    66,   178,   -72,
     181,   -72,   185,   186,    23,    66,    42,   -72,   188,   189,
     192,   191,   -72,   194,   -72,    66,     0,    66,   195,   196,
     197,   -72,   200,   -72,    66,   201,    42,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,    18,     8,    10,     0,     1,     3,     4,
       5,     6,     7,     0,     0,    22,    17,    19,     0,    11,
       0,     0,    49,    51,     0,     0,     0,    21,    23,    20,
      48,     0,    13,    16,    15,    55,    52,     0,     0,     0,
       0,     0,     2,    24,    12,    14,     0,     0,     0,    92,
      93,    58,     0,     0,     0,    63,     0,     0,     0,    78,
      53,    66,    67,    64,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    35,     0,    36,    37,
      38,    39,    40,     0,    42,     0,    57,    50,     0,    90,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    29,     0,     0,    47,     0,     0,     0,     0,     0,
      43,     0,    32,    34,    54,    41,    56,    59,     0,     0,
       0,     0,   105,     0,    79,    91,    61,     0,     0,    68,
      69,    70,    71,    72,    80,    81,    82,    83,    31,     0,
       0,    45,     0,     0,   109,   108,     0,     0,     0,     0,
       0,    44,   103,   104,    65,    62,   107,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,   110,     0,     0,     0,   101,
     106,    73,    74,    75,    76,    77,    84,    85,    86,    87,
      88,    89,    60,     0,     0,     0,     0,     0,     0,    26,
       0,    46,     0,     0,     0,     0,    94,    99,     0,     0,
       0,     0,    95,     0,    25,     0,     0,     0,     0,     0,
       0,    98,     0,   100,     0,     0,    97,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -72,   -72,   -11,   -72,   227,   -72,   207,   -72,   -72,   216,
     -72,   213,    20,   -72,    98,   -72,   -72,   -71,   -72,    57,
     -72,   -14,   -72,   -61,   -72,   -33,   107,   -54,   -72,    14,
     -72,   -72,   -72,   -40,    81,   -72,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    14,     3,     4,     5,    31,    32,    15,    16,
      26,    27,    28,   109,   110,   111,    42,    74,    75,    76,
      18,    77,    78,    24,    59,   132,   156,    62,    79,   222,
      80,    81,    82,    63,   133,    84,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    83,    21,    96,   123,   113,    60,    36,    49,    50,
       8,     9,    10,    11,    12,   121,     1,    51,    37,    89,
      94,    92,    46,    52,     6,    93,    97,    13,   -55,     7,
     104,   105,   106,   107,   115,    83,    53,    54,    98,   181,
      33,    55,    56,   182,   151,   152,    57,    25,   160,   153,
     154,    25,    33,   108,    20,    58,    22,   128,   129,    30,
      17,    37,   157,   158,    35,    38,   134,   220,   221,     8,
       9,    10,    11,    12,    17,    39,    40,    34,    41,    83,
      44,    47,    65,    64,    66,    67,    13,    48,    85,    34,
      68,    86,   113,    69,    70,    71,    72,     8,     9,    10,
      11,    12,    53,    54,   159,    87,   119,    35,    73,    88,
     203,    90,   120,    51,    13,   173,   174,   175,   176,   196,
     197,   198,   199,   200,   201,   177,   178,     8,     9,    10,
      11,    12,    53,    54,   208,   212,   213,    55,    56,   108,
     122,    83,   138,    91,   219,    94,    61,   104,   105,   106,
     107,    58,   112,   124,   228,   116,   230,   125,   117,    61,
     118,   126,   -56,   235,    95,   127,    83,    83,   130,   131,
     135,   136,   229,   137,    61,    83,    99,   100,   101,   102,
     103,   148,   149,   150,   162,    83,   163,    83,   168,   169,
     170,   171,   172,   210,    83,   155,   164,    61,    61,   165,
     218,    61,   161,   166,   184,   167,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   179,   186,   187,   188,   189,
     202,   204,   134,   206,   207,   215,   205,   209,   211,   214,
     216,   217,    19,    29,   224,   223,   225,   226,   227,    45,
     231,    43,   233,   232,   234,   180,   236,   190,   183,     0,
     237,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,     0,   191,   192,   193,   194,   195
};

static const yytype_int16 yycheck[] =
{
      14,    41,    13,    57,    75,    66,    39,    21,     8,     9,
       3,     4,     5,     6,     7,    41,    10,    17,    48,    52,
      46,    48,    52,    23,    42,    52,    43,    20,    15,     0,
      11,    12,    13,    14,    67,    75,    36,    37,    55,    44,
      20,    41,    42,    48,    51,    52,    46,    40,   119,    50,
      51,    40,    32,    64,    44,    55,    41,    90,    91,    51,
       3,    48,   116,   117,    41,    52,    47,    25,    26,     3,
       4,     5,     6,     7,    17,    15,    42,    20,    38,   119,
      45,    49,    16,    46,    18,    19,    20,    17,    17,    32,
      24,    41,   153,    27,    28,    29,    30,     3,     4,     5,
       6,     7,    36,    37,   118,    53,    44,    41,    42,    54,
     181,    46,    51,    17,    20,    11,    12,    13,    14,   173,
     174,   175,   176,   177,   178,    21,    22,     3,     4,     5,
       6,     7,    36,    37,   188,   206,   207,    41,    42,   150,
      39,   181,    46,    46,   215,    46,    39,    11,    12,    13,
      14,    55,    41,    51,   225,    46,   227,    51,    46,    52,
      46,    53,    15,   234,    57,    17,   206,   207,    49,    17,
      47,    49,   226,    42,    67,   215,    31,    32,    33,    34,
      35,    41,    47,    50,    47,   225,    47,   227,    31,    32,
      33,    34,    35,   204,   234,    51,    41,    90,    91,    53,
     214,    94,    51,    50,    17,    47,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    49,    47,    47,    51,    45,
      49,    49,    47,    44,    44,    44,    53,    45,    51,    51,
      45,    45,     5,    17,    45,    47,    44,    46,    44,    32,
      45,    28,    45,    47,    44,   138,    45,   166,   150,    -1,
     236,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,   168,   169,   170,   171,   172
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    57,    59,    60,    61,    42,     0,     3,     4,
       5,     6,     7,    20,    58,    64,    65,    75,    76,    60,
      44,    58,    41,    77,    79,    40,    66,    67,    68,    65,
      51,    62,    63,    68,    75,    41,    77,    48,    52,    15,
      42,    38,    72,    67,    45,    62,    52,    49,    17,     8,
       9,    17,    23,    36,    37,    41,    42,    46,    55,    80,
      81,    82,    83,    89,    46,    16,    18,    19,    24,    27,
      28,    29,    30,    42,    73,    74,    75,    77,    78,    84,
      86,    87,    88,    89,    91,    17,    41,    53,    54,    81,
      46,    46,    48,    52,    46,    82,    83,    43,    55,    31,
      32,    33,    34,    35,    11,    12,    13,    14,    58,    69,
      70,    71,    41,    79,    92,    81,    46,    46,    46,    44,
      51,    41,    39,    73,    51,    51,    53,    17,    81,    81,
      49,    17,    81,    90,    47,    47,    49,    42,    46,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    41,    47,
      50,    51,    52,    50,    51,    51,    82,    83,    83,    77,
      73,    51,    47,    47,    41,    53,    50,    47,    31,    32,
      33,    34,    35,    11,    12,    13,    14,    21,    22,    49,
      82,    44,    48,    70,    17,    92,    47,    47,    51,    45,
      90,    82,    82,    82,    82,    82,    83,    83,    83,    83,
      83,    83,    49,    73,    49,    53,    44,    44,    83,    45,
      58,    51,    73,    73,    51,    44,    45,    45,    77,    73,
      25,    26,    85,    47,    45,    44,    46,    44,    73,    83,
      73,    45,    47,    45,    44,    73,    45,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      76,    76,    76,    77,    78,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    88,    89,    89,    89,    90,    90,    90,    91,    92,
      92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     5,     1,     2,     1,     1,     1,     0,     1,
       2,     1,     0,     1,     2,    11,     8,     1,     0,     1,
       3,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     3,     3,     6,     2,     2,     2,
       5,     2,     3,     3,     2,     1,     4,     4,     1,     3,
       5,     3,     4,     1,     1,     4,     1,     1,     3,     3,
       3,     3,     3,     5,     5,     5,     5,     5,     1,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     5,     5,
       2,     3,     1,     1,     7,     8,     8,     7,     4,     7,
      11,     4,     4,     4,     4,     1,     3,     0,     3,     2,
       3
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
  case 2: /* program: user_data_types_section global_var_section func_section main  */
#line 45 "S++.y"
                                                                      {printf("The program is correct!\n");}
#line 1338 "S++.tab.c"
    break;

  case 3: /* types: INT_TYPE  */
#line 48 "S++.y"
                {current_type=(yyvsp[0].string);}
#line 1344 "S++.tab.c"
    break;

  case 4: /* types: FLOAT_TYPE  */
#line 49 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1350 "S++.tab.c"
    break;

  case 5: /* types: CHAR_TYPE  */
#line 50 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1356 "S++.tab.c"
    break;

  case 6: /* types: STRING_TYPE  */
#line 51 "S++.y"
                   {current_type=(yyvsp[0].string);}
#line 1362 "S++.tab.c"
    break;

  case 7: /* types: BOOL_TYPE  */
#line 52 "S++.y"
                  {current_type=(yyvsp[0].string);}
#line 1368 "S++.tab.c"
    break;

  case 12: /* user_data_types: CLASS STRING '{' list_class '}'  */
#line 62 "S++.y"
                                                 {current_def=string((yyvsp[-3].string));}
#line 1374 "S++.tab.c"
    break;

  case 17: /* global_var_section: global_var  */
#line 73 "S++.y"
                               {current_def="global";}
#line 1380 "S++.tab.c"
    break;

  case 25: /* functions: DEF_FUNC STRING '(' list_param ')' '-' '>' types '{' list_statements '}'  */
#line 89 "S++.y"
                                                                                   {current_def=string((yyvsp[-9].string));}
#line 1386 "S++.tab.c"
    break;

  case 26: /* functions: DEF_FUNC STRING '(' list_param ')' '{' list_statements '}'  */
#line 90 "S++.y"
                                                                      {current_def=string((yyvsp[-6].string));}
#line 1392 "S++.tab.c"
    break;

  case 32: /* main: MAIN_START list_statements MAIN_STOP  */
#line 104 "S++.y"
                                           {current_def="main";}
#line 1398 "S++.tab.c"
    break;

  case 49: /* decl: types ID  */
#line 129 "S++.y"
               { table.addVar(current_type, (yyvsp[0].string), "", current_def); }
#line 1404 "S++.tab.c"
    break;

  case 51: /* decl: types assign_statements  */
#line 131 "S++.y"
                              {table.addVar(current_type, current_id, current_value, current_def);}
#line 1410 "S++.tab.c"
    break;

  case 52: /* decl: CONST types assign_statements  */
#line 132 "S++.y"
                                    {table.addVar(string((yyvsp[-2].string))+" "+current_type, current_id, current_value, current_def);}
#line 1416 "S++.tab.c"
    break;

  case 55: /* left_value: ID  */
#line 141 "S++.y"
               {current_id=(yyvsp[0].string);}
#line 1422 "S++.tab.c"
    break;

  case 58: /* value: NR  */
#line 146 "S++.y"
            {current_value=(yyvsp[0].string);}
#line 1428 "S++.tab.c"
    break;

  case 59: /* value: NR '.' NR  */
#line 147 "S++.y"
                 {current_value=string((yyvsp[-2].string))+"."+string((yyvsp[0].string));}
#line 1434 "S++.tab.c"
    break;

  case 60: /* value: '<' '<' STRING '>' '>'  */
#line 148 "S++.y"
                            {current_value="<<"+string((yyvsp[-2].string))+">>";}
#line 1440 "S++.tab.c"
    break;

  case 62: /* value: ID '[' NR ']'  */
#line 150 "S++.y"
                    {current_value=string((yyvsp[-3].string))+"["+string((yyvsp[-1].string))+"]";}
#line 1446 "S++.tab.c"
    break;

  case 63: /* value: ID  */
#line 151 "S++.y"
         {current_value=(yyvsp[0].string);}
#line 1452 "S++.tab.c"
    break;

  case 65: /* value: ID '-' '>' ID  */
#line 153 "S++.y"
                   {current_value=string((yyvsp[-3].string))+"->"+string((yyvsp[0].string));}
#line 1458 "S++.tab.c"
    break;

  case 92: /* boolean_expression: BOOL_TRUE  */
#line 186 "S++.y"
                             {current_value=(yyvsp[0].string);}
#line 1464 "S++.tab.c"
    break;

  case 93: /* boolean_expression: BOOL_FALSE  */
#line 187 "S++.y"
                              {current_value=(yyvsp[0].string);}
#line 1470 "S++.tab.c"
    break;


#line 1474 "S++.tab.c"

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

#line 223 "S++.y"

void yyerror(const char * s){
    printf("error: %s at line:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    yyin=fopen(argv[1],"r");
    yyparse();
    table.printTable();
} 