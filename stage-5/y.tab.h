/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    BEG = 259,
    READ = 260,
    WRITE = 261,
    END = 262,
    ASGN = 263,
    ID = 264,
    IF = 265,
    THEN = 266,
    WHILE = 267,
    ENDWHILE = 268,
    ENDIF = 269,
    DO = 270,
    ELSE = 271,
    REPEAT = 272,
    UNTIL = 273,
    BREAK = 274,
    CONTINUE = 275,
    MAIN = 276,
    DECL = 277,
    ENDDECL = 278,
    INT = 279,
    STR = 280,
    CONN = 281,
    INTTYPE = 282,
    STRTYPE = 283,
    BOOLTYPE = 284,
    VARIABLE = 285,
    ARRAY = 286,
    FUNCTION = 287,
    RETURN = 288,
    AND = 289,
    OR = 290,
    NOT = 291,
    PLUS = 292,
    MINUS = 293,
    MUL = 294,
    DIV = 295,
    MOD = 296,
    LT = 297,
    GT = 298,
    LE = 299,
    GE = 300,
    EQ = 301,
    NEQ = 302
  };
#endif
/* Tokens.  */
#define NUM 258
#define BEG 259
#define READ 260
#define WRITE 261
#define END 262
#define ASGN 263
#define ID 264
#define IF 265
#define THEN 266
#define WHILE 267
#define ENDWHILE 268
#define ENDIF 269
#define DO 270
#define ELSE 271
#define REPEAT 272
#define UNTIL 273
#define BREAK 274
#define CONTINUE 275
#define MAIN 276
#define DECL 277
#define ENDDECL 278
#define INT 279
#define STR 280
#define CONN 281
#define INTTYPE 282
#define STRTYPE 283
#define BOOLTYPE 284
#define VARIABLE 285
#define ARRAY 286
#define FUNCTION 287
#define RETURN 288
#define AND 289
#define OR 290
#define NOT 291
#define PLUS 292
#define MINUS 293
#define MUL 294
#define DIV 295
#define MOD 296
#define LT 297
#define GT 298
#define LE 299
#define GE 300
#define EQ 301
#define NEQ 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
