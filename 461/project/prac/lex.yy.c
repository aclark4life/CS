#include <stdio.h>
#define U(x) x
#define NLSTATE yyprevious = YYNEWLINE
#define BEGIN yybgin = yysvec + 1 +
#define INITIAL 0
#define YYLERR yysvec
#define YYSTATE (yyestate - yysvec - 1)
#define YYOPTIM 1
#define YYLMAX BUFSIZ
#ifndef __cplusplus
#define output(c) (void)putc(c, yyout)
#else
#define lex_output(c) (void)putc(c, yyout)
#endif

#if defined(__cplusplus) || defined(__STDC__)

#if defined(__cplusplus) && defined(__EXTERN_C__)
extern "C" {
#endif
int yyback(int *, int);
int yyinput(void);
int yylook(void);
void yyoutput(int);
int yyracc(int);
int yyreject(void);
void yyunput(int);
int yylex(void);
#ifdef YYLEX_E
void yywoutput(wchar_t);
wchar_t yywinput(void);
#endif
#ifndef yyless
int yyless(int);
#endif
#ifndef yywrap
int yywrap(void);
#endif
#ifdef LEXDEBUG
void allprint(char);
void sprint(char *);
#endif
#if defined(__cplusplus) && defined(__EXTERN_C__)
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
void exit(int);
#ifdef __cplusplus
}
#endif

#endif
#define unput(c)                                                               \
  {                                                                            \
    yytchar = (c);                                                             \
    if (yytchar == '\n')                                                       \
      yylineno--;                                                              \
    *yysptr++ = yytchar;                                                       \
  }
#define yymore() (yymorfg = 1)
#ifndef __cplusplus
#define input()                                                                \
  (((yytchar = yysptr > yysbuf ? U(*--yysptr) : getc(yyin)) == 10              \
        ? (yylineno++, yytchar)                                                \
        : yytchar) == EOF                                                      \
       ? 0                                                                     \
       : yytchar)
#else
#define lex_input()                                                            \
  (((yytchar = yysptr > yysbuf ? U(*--yysptr) : getc(yyin)) == 10              \
        ? (yylineno++, yytchar)                                                \
        : yytchar) == EOF                                                      \
       ? 0                                                                     \
       : yytchar)
#endif
#define ECHO fprintf(yyout, "%s", yytext)
#define REJECT                                                                 \
  {                                                                            \
    nstr = yyreject();                                                         \
    goto yyfussy;                                                              \
  }
int yyleng;
char yytext[YYLMAX];
int yymorfg;
extern char *yysptr, yysbuf[];
int yytchar;
FILE *yyin = {stdin}, *yyout = {stdout};
extern int yylineno;
struct yysvf {
  struct yywork *yystoff;
  struct yysvf *yyother;
  int *yystops;
};
struct yysvf *yyestate;
extern struct yysvf yysvec[], *yybgin;
#include <stdio.h>
printf("this_is_gay\n");
#define YYNEWLINE 10
yylex() {
  int nstr;
  extern int yyprevious;
#ifdef __cplusplus
  /* to avoid CC and lint complaining yyfussy not being used ...*/
  static int __lex_hack = 0;
  if (__lex_hack)
    goto yyfussy;
#endif
  while ((nstr = yylook()) >= 0)
  yyfussy:
    switch (nstr) {
    case 0:
      if (yywrap())
        return (0);
      break;
    case 1:

#line 10 "scan.l"
    {
      printf("I found a stego!\n");
      return ("stego");
    } break;
    case 2:

#line 11 "scan.l"
    {
      printf("this is gay!\n");
      return (0);
    } break;
    case 3:

#line 12 "scan.l"
    {
      printf("this is asinine\n");
      return ("asinine");
    } break;
    case 4:

#line 13 "scan.l"
    {
      return (yytext);
    } break;
    case 5:

#line 14 "scan.l"
    { /* ignore bad characters */
    } break;
    case -1:
      break;
    default:
      (void)fprintf(yyout, "bad switch yylook %d", nstr);
    }
  return (0);
}
/* end of yylex */

yywrap() { return (1); }
main() {
  int i;
  i = yylex();
  while (i > 0) {
    i = yylex();
  }
  return (0);
}

int yyvstop[] = {0,

                 5, 0,

                 2, 4, 5, 0,

                 2, 4, 5, 0,

                 2, 4, 5, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 1, 2, 4, 0,

                 2, 4, 0,

                 2, 4, 0,

                 2, 3, 4, 0, 0};
#define YYTYPE unsigned char
struct yywork {
  YYTYPE verify, advance;
} yycrank[] = {
    0, 0, 0,  0,  1,  3,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 1, 0,  2,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  1, 4, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0,  0,  0,  0,  0,
    0, 0, 0,  0,  0,  0,  0, 1, 5, 2, 5, 0, 0,  0,  0,  9,  11, 17, 18, 11, 13,
    0, 0, 10, 12, 14, 16, 0, 0, 0, 0, 0, 0, 12, 14, 13, 15, 16, 17, 0,  0,  0,
    0, 1, 6,  2,  6,  4,  7, 4, 7, 4, 7, 4, 7,  4,  7,  4,  7,  4,  7,  4,  7,
    4, 7, 4,  7,  4,  7,  4, 7, 4, 7, 4, 7, 4,  7,  4,  7,  4,  7,  4,  7,  4,
    7, 4, 7,  4,  7,  4,  7, 4, 7, 4, 7, 4, 7,  4,  7,  5,  8,  6,  9,  8,  10,
    0, 0, 4,  7,  0,  0,  4, 7, 4, 7, 4, 7, 4,  7,  4,  7,  4,  7,  4,  7,  4,
    7, 4, 7,  4,  7,  4,  7, 4, 7, 4, 7, 4, 7,  4,  7,  4,  7,  4,  7,  4,  7,
    4, 7, 4,  7,  4,  7,  4, 7, 4, 7, 4, 7, 4,  7,  4,  7,  0,  0};
struct yysvf yysvec[] = {0,
                         0,
                         0,
                         yycrank + -1,
                         0,
                         0,
                         yycrank + -2,
                         yysvec + 1,
                         0,
                         yycrank + 0,
                         0,
                         yyvstop + 1,
                         yycrank + 53,
                         0,
                         yyvstop + 3,
                         yycrank + 29,
                         yysvec + 4,
                         yyvstop + 7,
                         yycrank + 29,
                         yysvec + 4,
                         yyvstop + 11,
                         yycrank + 0,
                         yysvec + 4,
                         yyvstop + 15,
                         yycrank + 31,
                         yysvec + 4,
                         yyvstop + 18,
                         yycrank + 1,
                         yysvec + 4,
                         yyvstop + 21,
                         yycrank + 1,
                         yysvec + 4,
                         yyvstop + 24,
                         yycrank + 1,
                         yysvec + 4,
                         yyvstop + 27,
                         yycrank + 1,
                         yysvec + 4,
                         yyvstop + 30,
                         yycrank + 1,
                         yysvec + 4,
                         yyvstop + 33,
                         yycrank + 2,
                         yysvec + 4,
                         yyvstop + 36,
                         yycrank + 0,
                         yysvec + 4,
                         yyvstop + 39,
                         yycrank + 3,
                         yysvec + 4,
                         yyvstop + 43,
                         yycrank + 2,
                         yysvec + 4,
                         yyvstop + 46,
                         yycrank + 0,
                         yysvec + 4,
                         yyvstop + 49,
                         0,
                         0,
                         0};
struct yywork *yytop = yycrank + 175;
struct yysvf *yybgin = yysvec + 1;
char yymatch[] = {
    0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  10, 1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
    65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 1,  1,  1,  1,
    65, 1,  65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65, 65,
    65, 65, 65, 65, 65, 65, 65, 65, 65, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  0};
char yyextra[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
/*	Copyright (c) 1989 AT&T	*/
/*	  All Rights Reserved  	*/

/*	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T	*/
/*	The copyright notice above does not evidence any   	*/
/*	actual or intended publication of such source code.	*/

#pragma ident "@(#)ncform	6.8	95/02/11 SMI"

int yylineno = 1;
#define YYU(x) x
#define NLSTATE yyprevious = YYNEWLINE
struct yysvf *yylstate[YYLMAX], **yylsp, **yyolsp;
char yysbuf[YYLMAX];
char *yysptr = yysbuf;
int *yyfnd;
extern struct yysvf *yyestate;
int yyprevious = YYNEWLINE;
#if defined(__cplusplus) || defined(__STDC__)
int yylook(void)
#else
yylook()
#endif
{
  register struct yysvf *yystate, **lsp;
  register struct yywork *yyt;
  struct yysvf *yyz;
  int yych, yyfirst;
  struct yywork *yyr;
#ifdef LEXDEBUG
  int debug;
#endif
  char *yylastch;
  /* start off machines */
#ifdef LEXDEBUG
  debug = 0;
#endif
  yyfirst = 1;
  if (!yymorfg)
    yylastch = yytext;
  else {
    yymorfg = 0;
    yylastch = yytext + yyleng;
  }
  for (;;) {
    lsp = yylstate;
    yyestate = yystate = yybgin;
    if (yyprevious == YYNEWLINE)
      yystate++;
    for (;;) {
#ifdef LEXDEBUG
      if (debug)
        fprintf(yyout, "state %d\n", yystate - yysvec - 1);
#endif
      yyt = yystate->yystoff;
      if (yyt == yycrank && !yyfirst) { /* may not be any transitions */
        yyz = yystate->yyother;
        if (yyz == 0)
          break;
        if (yyz->yystoff == yycrank)
          break;
      }
#ifndef __cplusplus
      *yylastch++ = yych = input();
#else
      *yylastch++ = yych = lex_input();
#endif
      if (yylastch > &yytext[YYLMAX]) {
        fprintf(yyout, "Input string too long, limit %d\n", YYLMAX);
        exit(1);
      }
      yyfirst = 0;
    tryagain:
#ifdef LEXDEBUG
      if (debug) {
        fprintf(yyout, "char ");
        allprint(yych);
        putchar('\n');
      }
#endif
      yyr = yyt;
      if ((int)yyt > (int)yycrank) {
        yyt = yyr + yych;
        if (yyt <= yytop && yyt->verify + yysvec == yystate) {
          if (yyt->advance + yysvec == YYLERR) /* error transitions */
          {
            unput(*--yylastch);
            break;
          }
          *lsp++ = yystate = yyt->advance + yysvec;
          if (lsp > &yylstate[YYLMAX]) {
            fprintf(yyout, "Input string too long, limit %d\n", YYLMAX);
            exit(1);
          }
          goto contin;
        }
      }
#ifdef YYOPTIM
      else if ((int)yyt < (int)yycrank) { /* r < yycrank */
        yyt = yyr = yycrank + (yycrank - yyt);
#ifdef LEXDEBUG
        if (debug)
          fprintf(yyout, "compressed state\n");
#endif
        yyt = yyt + yych;
        if (yyt <= yytop && yyt->verify + yysvec == yystate) {
          if (yyt->advance + yysvec == YYLERR) /* error transitions */
          {
            unput(*--yylastch);
            break;
          }
          *lsp++ = yystate = yyt->advance + yysvec;
          if (lsp > &yylstate[YYLMAX]) {
            fprintf(yyout, "Input string too long, limit %d\n", YYLMAX);
            exit(1);
          }
          goto contin;
        }
        yyt = yyr + YYU(yymatch[yych]);
#ifdef LEXDEBUG
        if (debug) {
          fprintf(yyout, "try fall back character ");
          allprint(YYU(yymatch[yych]));
          putchar('\n');
        }
#endif
        if (yyt <= yytop && yyt->verify + yysvec == yystate) {
          if (yyt->advance + yysvec == YYLERR) /* error transition */
          {
            unput(*--yylastch);
            break;
          }
          *lsp++ = yystate = yyt->advance + yysvec;
          if (lsp > &yylstate[YYLMAX]) {
            fprintf(yyout, "Input string too long, limit %d\n", YYLMAX);
            exit(1);
          }
          goto contin;
        }
      }
      if ((yystate = yystate->yyother) && (yyt = yystate->yystoff) != yycrank) {
#ifdef LEXDEBUG
        if (debug)
          fprintf(yyout, "fall back to state %d\n", yystate - yysvec - 1);
#endif
        goto tryagain;
      }
#endif
      else {
        unput(*--yylastch);
        break;
      }
    contin:
#ifdef LEXDEBUG
      if (debug) {
        fprintf(yyout, "state %d char ", yystate - yysvec - 1);
        allprint(yych);
        putchar('\n');
      }
#endif
      ;
    }
#ifdef LEXDEBUG
    if (debug) {
      fprintf(yyout, "stopped at %d with ", *(lsp - 1) - yysvec - 1);
      allprint(yych);
      putchar('\n');
    }
#endif
    while (lsp-- > yylstate) {
      *yylastch-- = 0;
      if (*lsp != 0 && (yyfnd = (*lsp)->yystops) && *yyfnd > 0) {
        yyolsp = lsp;
        if (yyextra[*yyfnd]) { /* must backup */
          while (yyback((*lsp)->yystops, -*yyfnd) != 1 && lsp > yylstate) {
            lsp--;
            unput(*yylastch--);
          }
        }
        yyprevious = YYU(*yylastch);
        yylsp = lsp;
        yyleng = yylastch - yytext + 1;
        yytext[yyleng] = 0;
#ifdef LEXDEBUG
        if (debug) {
          fprintf(yyout, "\nmatch ");
          sprint(yytext);
          fprintf(yyout, " action %d\n", *yyfnd);
        }
#endif
        return (*yyfnd++);
      }
      unput(*yylastch);
    }
    if (yytext[0] == 0 /* && feof(yyin) */) {
      yysptr = yysbuf;
      return (0);
    }
#ifndef __cplusplus
    yyprevious = yytext[0] = input();
    if (yyprevious > 0)
      output(yyprevious);
#else
    yyprevious = yytext[0] = lex_input();
    if (yyprevious > 0)
      lex_output(yyprevious);
#endif
    yylastch = yytext;
#ifdef LEXDEBUG
    if (debug)
      putchar('\n');
#endif
  }
}
#if defined(__cplusplus) || defined(__STDC__)
int yyback(int *p, int m)
#else
yyback(p, m) int *p;
#endif
{
  if (p == 0)
    return (0);
  while (*p) {
    if (*p++ == m)
      return (1);
  }
  return (0);
}
/* the following are only used in the lex library */
#if defined(__cplusplus) || defined(__STDC__)
int yyinput(void)
#else
yyinput()
#endif
{
#ifndef __cplusplus
  return (input());
#else
  return (lex_input());
#endif
}
#if defined(__cplusplus) || defined(__STDC__)
void yyoutput(int c)
#else
yyoutput(c) int c;
#endif
{
#ifndef __cplusplus
  output(c);
#else
  lex_output(c);
#endif
}
#if defined(__cplusplus) || defined(__STDC__)
void yyunput(int c)
#else
yyunput(c) int c;
#endif
{
  unput(c);
}
