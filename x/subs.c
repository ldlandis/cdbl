/***
 * $Source$
 * $Revision$ $Date$
 *
 * Created: Thu Oct  5 04:01:31 1995
 * System:  Linux tularosa 1.1.52 #1 Fri Oct 14 20:18:11 CDT 1994 i486
 *
 * This program was created by cdbl 1.64 using the command line:
 *	$ cd /home/ldl/dbl/cdbl
 *	$ ../bin/cdbl -t subs.dbl 
 *
 * Environment variables (when created):
 *	ignoreeof=10
 *	LOGNAME=ldl
 *	MINICOM=-c on
 *	MAIL=/var/spool/mail/ldl
 *	TERM=console
 *	HOSTTYPE=i386
 *	PATH=/usr/local/bin:/usr/bin:/bin:/usr/bin/X11:/usr/TeX/bin:/usr/openwin/bin:/usr/games:.:~ldl/dbl/bin:/usr/local/src/linuxdoc-sgml/bin
 *	HOME=/home/ldl
 *	SHELL=/bin/sh
 *	MANPATH=/usr/man:/usr/man/preformat:/usr/X11/man:/usr/openwin/man
 *	LESS=-MM
 *	MAKEFLAGS=
 *	OPENWINHOME=/usr/openwin
 *	_=../bin/cdbl
 *	SHLVL=2
 *	MAKELEVEL=1
 *	BASH=/bin/sh
 *	MFLAGS=
 */

#include <stdio.h>
#include <cdbl/cdbl_rt.h>

struct
  {
    char    EXPR[25];                                   /* A25       	*/
    char    __1[2];                                     /* A2        	*/
    char    I_GOT[40];                                  /* A40       	*/
  }       GOT
= { /* GOT */
					/* EXPR                         */
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ',
					/* __1                          */
    '=', ' ',
					/* I_GOT                        */
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  };
struct
  {
    char    __2[25];                                    /* A25       	*/
    char    __3[2];                                     /* A2        	*/
    char    WANTED[40];                                 /* A40       	*/
  }       WANT
= { /* WANT */
					/* __2                          */
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', 'w', 'a', 'n', 't',
					/* __3                          */
    ' ', ' ',
					/* WANTED                       */
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  };
struct
  {
    char    DFLD[8];                                    /* D8        	*/
    char    AFLD[13];                                   /* A13       	*/
    char    MFLD[3][2][3];                              /* A3        	*/
  }       ABS
= { /* ABS */
					/* DFLD                         */
    '1', '0', '2', '0', '3', '4', '0', '5',
					/* AFLD                         */
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M',
					/* MFLD                         */
    'A', 'B', 'C',
    'D', 'E', 'F',
    'G', 'H', 'I',
    'J', 'K', 'L',
    'M', 'N', 'O',
    'P', 'Q', 'R',
  };
struct
  {
    char    ALPHA[3][4];                                /* D4        	*/
    char    BETA[6];                                    /* A6        	*/
    char    GAMMA[3];                                   /* D3        	*/
    char    DELTA[4][2];                                /* A2        	*/
  }       DEMO
= { /* DEMO */
					/* ALPHA                        */
    '0', '0', '0', '3',
    '9', '8', '7', '6',
    '4', '3', '2', '1',
					/* BETA                         */
    'A', 'B', 'C', 'D', 'E', 'F',
					/* GAMMA                        */
    '5', '4', '5',
					/* DELTA                        */
    'L', 'M',
    'N', 'P',
    'R', 'S',
    'T', 'V',
  };
#ifndef MAX_CALL_STACK
#define MAX_CALL_STACK 100
#endif/*MAX_CALL_STACK*/

static
void
call_push(__call_return, __call_stack, lab)		/* Function	*/
  int       __call_return[];
  int      *__call_stack;
  int       lab;
{
  if (*__call_stack >= MAX_CALL_STACK)
    drt_FATAL("CALL stack overflow");
  __call_return[++(*__call_stack)] = lab;
}


/* --------------------------------------------------------------------	*/
/*    Note: The #line directives point to the "end" of the statement.	*/
/* --------------------------------------------------------------------	*/

int       __argc;			/* Main's argc			*/
char    **__argv;			/*   "    argv			*/
char    **__arge;			/*   "    arge			*/
int       __exit = 0;			/* For main's return		*/
int      *__lineno;			/* Current source line		*/
char     *__errortrap = NULL;
int       __errortrap_trigger = 0;

void      cdbl_main	PROTOARGS((void));

int
main(argc, argv, arge)					/* MAIN		*/
  int       argc;
  char    **argv;
  char    **arge;
{
  __argc = argc;
  __argv = argv;
  __arge = arge;
  drt_INIT(argc, argv, arge);
  cdbl_main();
  return __exit;
} /* main */

void							/* PROGRAM	*/
cdbl_main(
         )
{
  char     *__blkname = "cdbl_main";
#ifndef	MAX_CALL_ARGS
#define MAX_CALL_ARGS 30
#define MAX_TMP_ARGS  20
#endif/*MAX_CALL_ARGS*/
  DBLArg_t  __an_arg, __arg[MAX_CALL_ARGS+MAX_TMP_ARGS];
  IOS_t     __io_status;
  int       __iexpr, __isize, __ipos;
  int       __io_channel, __row, __col;
  long      __loffset;
  int       __n_dec;
  long long __nexpr, __nby, __nthru;
  long long __n_0, __n_1, __n_2, __n_3, __n_4, __n_5, __n_6, __n_7, __n_8, __n_9;
  char      __string[BUFSIZ], __number[BUFSIZ], __format[BUFSIZ], __xargbuf[BUFSIZ];
  int       __call_return[MAX_CALL_STACK], __call_stack = -1;
  char     *__prev_errortrap;

  goto _call_return_end;
/**
 * Call return.
 *   This routine takes the top element of the call return
 *   stack, and does a 'goto' to the return label, which is
 *   was internally generated. If there is no active call,
 *   (stack empty), then this routine is returned from (like
 *   an XRETURN).
 */
_call_return:
  if (__call_stack < 0) goto _call_return_return;
  switch ( __call_return[__call_stack--] )
    {
      case 1: goto _call_return_1;
      case 2: goto _call_return_2;
      case 3: goto _call_return_3;
      case 4: goto _call_return_4;
      case 5: goto _call_return_5;
      case 6: goto _call_return_6;
      case 7: goto _call_return_7;
      case 8: goto _call_return_8;
      case 9: goto _call_return_9;
      case 10: goto _call_return_10;
      case 11: goto _call_return_11;
      case 12: goto _call_return_12;
      case 13: goto _call_return_13;
      case 14: goto _call_return_14;
      case 15: goto _call_return_15;
      case 16: goto _call_return_16;
      case 17: goto _call_return_17;
      case 18: goto _call_return_18;
      case 19: goto _call_return_19;
      case 20: goto _call_return_20;
      case 21: goto _call_return_21;
      case 22: goto _call_return_22;
      case 23: goto _call_return_23;
      case 24: goto _call_return_24;
      case 25: goto _call_return_25;
      case 26: goto _call_return_26;
      case 27: goto _call_return_27;
      case 28: goto _call_return_28;
      case 29: goto _call_return_29;
      case 30: goto _call_return_30;
      case 31: goto _call_return_31;
    }
  /* Fall-thru to return */
_call_return_return:
					/* Restore previous context	*/
  dbl_linkage(NULL, (int *)NULL, (int *)NULL);
  __errortrap = __prev_errortrap;
  drt_EXIT(0) /* from main cdbl_main */;

_call_return_end:


  goto _error_trap_end;
/**
 * Error trap.
 *   If the contents of __errortrap do not match any of the
 *   known labels, then a fatal error is generated.
 *   The translator diagnoses what it has at compile time,
 *   so the created source code (unmodified) should not have
 *   any "FATAL ERROR" error traps.
 */
_error_trap:
  __errortrap_trigger = 0;
  if ( ! __errortrap ) goto _error_trap_FATAL;
  if (strcmp("DISPLAY_IT",  __errortrap) == 0) goto CDBL_L_DISPLAY_IT;
  /* Fall-thru to FATAL */
_error_trap_FATAL:
  if (__prev_errortrap)
    {
      __errortrap_trigger = 1;
      dbl_linkage(NULL, (int *)NULL, (int *)NULL);
      return;				/* Let caller do error trap	*/
    }
  drt_errortrap(__errortrap);

_error_trap_end:

/* PROC cdbl_main*/
  __prev_errortrap = __errortrap;
  __errortrap      =  NULL;
  dbl_linkage("subs.dbl", __call_return, &__call_stack);
  *__lineno = 30;                                     	/*   [  384]	*/
							/* DISPLAY     	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __io_channel = (int)__nexpr;
  dbl_mkarg(&__arg[0], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  dbl_mkarg(&__arg[1], __blkname, (void *)"Subscripting", 12, "A*", ARG_ISCONST);
  dbl_mkarg(&__arg[2], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  drt_display(__io_channel,
              &__arg[0],
              &__arg[1],
              &__arg[2],
              (DBLArg_t *)NULL
             );
  *__lineno = 32;                                     	/*   [  399]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DEMO", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 33;                                     	/*   [  419]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO), 29, "A29", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 34;                                     	/*   [  435]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"000398764321ABCDEF545LMNPRSTV675123800", 38, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 34;                                     	/*   [  454]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 1);
  goto CDBL_L_DISPLAY_IT;
_call_return_1: ;
  *__lineno = 37;                                     	/*   [  467]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA", 5, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 38;                                     	/*   [  487]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA), 12, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 39;                                     	/*   [  503]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"0003", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 39;                                     	/*   [  522]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 2);
  goto CDBL_L_DISPLAY_IT;
_call_return_2: ;
  *__lineno = 42;                                     	/*   [  535]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA(1)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 43;                                     	/*   [  561]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 4;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA + __loffset), 4, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 44;                                     	/*   [  577]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"0003", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 44;                                     	/*   [  596]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 3);
  goto CDBL_L_DISPLAY_IT;
_call_return_3: ;
  *__lineno = 47;                                     	/*   [  609]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA(2)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 48;                                     	/*   [  635]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 4;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA + __loffset), 4, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 49;                                     	/*   [  651]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"9876", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 49;                                     	/*   [  670]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 4);
  goto CDBL_L_DISPLAY_IT;
_call_return_4: ;
  *__lineno = 52;                                     	/*   [  683]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA(3)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 53;                                     	/*   [  709]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 4;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA + __loffset), 4, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 54;                                     	/*   [  725]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"4321", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 54;                                     	/*   [  744]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 5);
  goto CDBL_L_DISPLAY_IT;
_call_return_5: ;
  *__lineno = 57;                                     	/*   [  757]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA(4)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 58;                                     	/*   [  783]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 4;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 4;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA + __loffset), 4, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 59;                                     	/*   [  799]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ABCD", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 59;                                     	/*   [  818]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 6);
  goto CDBL_L_DISPLAY_IT;
_call_return_6: ;
  *__lineno = 62;                                     	/*   [  831]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ALPHA(5)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 63;                                     	/*   [  857]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 5;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 4;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.ALPHA + __loffset), 4, "D4", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 64;                                     	/*   [  873]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"EF54", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 64;                                     	/*   [  892]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 7);
  goto CDBL_L_DISPLAY_IT;
_call_return_7: ;
  *__lineno = 67;                                     	/*   [  905]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"BETA", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 68;                                     	/*   [  925]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.BETA), 6, "A6", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 69;                                     	/*   [  941]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ABCDEF", 6, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 69;                                     	/*   [  960]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 8);
  goto CDBL_L_DISPLAY_IT;
_call_return_8: ;
  *__lineno = 72;                                     	/*   [  973]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"BETA(2)", 7, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 73;                                     	/*   [  989]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"bogus", 5, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 74;                                     	/*   [ 1005]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"545LMN", 6, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 74;                                     	/*   [ 1024]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 9);
  goto CDBL_L_DISPLAY_IT;
_call_return_9: ;
  *__lineno = 77;                                     	/*   [ 1037]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"GAMMA", 5, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 78;                                     	/*   [ 1057]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.GAMMA), 3, "D3", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 79;                                     	/*   [ 1073]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"545", 3, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 79;                                     	/*   [ 1092]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 10);
  goto CDBL_L_DISPLAY_IT;
_call_return_10: ;
  *__lineno = 82;                                     	/*   [ 1105]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"GAMMA(ALPHA(1))", 15, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 83;                                     	/*   [ 1121]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"bogus", 5, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 84;                                     	/*   [ 1137]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"PRS", 3, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 84;                                     	/*   [ 1156]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 11);
  goto CDBL_L_DISPLAY_IT;
_call_return_11: ;
  *__lineno = 87;                                     	/*   [ 1169]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DELTA", 5, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 88;                                     	/*   [ 1189]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.DELTA), 8, "A2", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 89;                                     	/*   [ 1205]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"LM", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 89;                                     	/*   [ 1224]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 12);
  goto CDBL_L_DISPLAY_IT;
_call_return_12: ;
  *__lineno = 92;                                     	/*   [ 1237]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DELTA(1)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 93;                                     	/*   [ 1263]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 2;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.DELTA + __loffset), 2, "A2", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 94;                                     	/*   [ 1279]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"LM", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 94;                                     	/*   [ 1298]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 13);
  goto CDBL_L_DISPLAY_IT;
_call_return_13: ;
  *__lineno = 97;                                     	/*   [ 1311]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DELTA(2)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 98;                                     	/*   [ 1337]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 2;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.DELTA + __loffset), 2, "A2", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 99;                                     	/*   [ 1353]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"NP", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 99;                                     	/*   [ 1372]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 14);
  goto CDBL_L_DISPLAY_IT;
_call_return_14: ;
  *__lineno = 102;                                    	/*   [ 1385]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DELTA(3)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 103;                                    	/*   [ 1411]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 2;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.DELTA + __loffset), 2, "A2", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 104;                                    	/*   [ 1427]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"RS", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 104;                                    	/*   [ 1446]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 15);
  goto CDBL_L_DISPLAY_IT;
_call_return_15: ;
  *__lineno = 107;                                    	/*   [ 1459]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DELTA(4)", 8, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 108;                                    	/*   [ 1485]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 4;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 2;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&DEMO.DELTA + __loffset), 2, "A2", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 109;                                    	/*   [ 1501]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"TV", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 109;                                    	/*   [ 1520]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 16);
  goto CDBL_L_DISPLAY_IT;
_call_return_16: ;
  *__lineno = 115;                                    	/*   [ 1542]	*/
							/* DISPLAY     	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __io_channel = (int)__nexpr;
  dbl_mkarg(&__arg[0], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  dbl_mkarg(&__arg[1], __blkname, (void *)"Absolute Ranging", 16, "A*", ARG_ISCONST);
  dbl_mkarg(&__arg[2], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  drt_display(__io_channel,
              &__arg[0],
              &__arg[1],
              &__arg[2],
              (DBLArg_t *)NULL
             );
  *__lineno = 118;                                    	/*   [ 1555]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DFLD(2,4)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 119;                                    	/*   [ 1589]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 4;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 120;                                    	/*   [ 1605]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"020", 3, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 120;                                    	/*   [ 1624]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 17);
  goto CDBL_L_DISPLAY_IT;
_call_return_17: ;
  *__lineno = 123;                                    	/*   [ 1637]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ABS(8,13)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 124;                                    	/*   [ 1671]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 8;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 13;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS + __loffset), __isize, "A39", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 125;                                    	/*   [ 1687]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"5ABCDE", 6, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 125;                                    	/*   [ 1706]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 18);
  goto CDBL_L_DISPLAY_IT;
_call_return_18: ;
  *__lineno = 128;                                    	/*   [ 1719]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(3,6)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 129;                                    	/*   [ 1753]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 6;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 130;                                    	/*   [ 1769]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"CDEF", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 130;                                    	/*   [ 1788]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 19);
  goto CDBL_L_DISPLAY_IT;
_call_return_19: ;
  *__lineno = 133;                                    	/*   [ 1801]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(DFLD(2,3),DFLD(7,8))", 25, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 134;                                    	/*   [ 1869]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 7;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 8;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 135;                                    	/*   [ 1885]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"BCDE", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 135;                                    	/*   [ 1904]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 20);
  goto CDBL_L_DISPLAY_IT;
_call_return_20: ;
  *__lineno = 138;                                    	/*   [ 1917]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(DFLD(2,3)+2,5)", 19, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 139;                                    	/*   [ 1973]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_0 = 3 + 2;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 5;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 140;                                    	/*   [ 1989]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DE", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 140;                                    	/*   [ 2008]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 21);
  goto CDBL_L_DISPLAY_IT;
_call_return_21: ;
  *__lineno = 143;                                    	/*   [ 2021]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(13,14)", 11, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 144;                                    	/*   [ 2055]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 13;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 14;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 145;                                    	/*   [ 2071]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MA", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 145;                                    	/*   [ 2090]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 22);
  goto CDBL_L_DISPLAY_IT;
_call_return_22: ;
  *__lineno = 148;                                    	/*   [ 2103]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MFLD[1,2](2,3)", 14, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 149;                                    	/*   [ 2143]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 6;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 3;
					/* Offset into substring	*/
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.MFLD + __loffset), __isize, "A3", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 150;                                    	/*   [ 2159]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"EF", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 150;                                    	/*   [ 2178]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 23);
  goto CDBL_L_DISPLAY_IT;
_call_return_23: ;
  *__lineno = 153;                                    	/*   [ 2191]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MFLD[2,2](3,6)", 14, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 154;                                    	/*   [ 2231]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 6;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 3;
					/* Offset into substring	*/
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 6;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.MFLD + __loffset), __isize, "A3", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 155;                                    	/*   [ 2247]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"LMNO", 4, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 155;                                    	/*   [ 2266]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 24);
  goto CDBL_L_DISPLAY_IT;
_call_return_24: ;
  *__lineno = 157;                                    	/*   [ 2288]	*/
							/* DISPLAY     	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __io_channel = (int)__nexpr;
  dbl_mkarg(&__arg[0], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  dbl_mkarg(&__arg[1], __blkname, (void *)"Relative Ranging", 16, "A*", ARG_ISCONST);
  dbl_mkarg(&__arg[2], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  drt_display(__io_channel,
              &__arg[0],
              &__arg[1],
              &__arg[2],
              (DBLArg_t *)NULL
             );
  *__lineno = 160;                                    	/*   [ 2301]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DFLD(3:1)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 161;                                    	/*   [ 2335]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 162;                                    	/*   [ 2351]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"2", 1, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 162;                                    	/*   [ 2370]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 25);
  goto CDBL_L_DISPLAY_IT;
_call_return_25: ;
  *__lineno = 165;                                    	/*   [ 2383]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DFLD(3:2)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 166;                                    	/*   [ 2417]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 3;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.DFLD + __loffset), __isize, "D8", ARG_ISVAR);
  __an_arg = __arg[30];
  __n_0 = dbl_num(&__an_arg);
  __n_dec = 0; __nexpr = __n_0;
  dbl_mkarg(&__an_arg, "cdbl_main", (void *)__string, -1, "A20.0", ARG_ISVAR);
  dbl_putn(&__an_arg, __nexpr, __n_dec);
  __string[20] = '\0';
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 167;                                    	/*   [ 2433]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"20", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 167;                                    	/*   [ 2452]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 26);
  goto CDBL_L_DISPLAY_IT;
_call_return_26: ;
  *__lineno = 170;                                    	/*   [ 2465]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ABS(6:-2)", 9, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 171;                                    	/*   [ 2503]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 6;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = -2;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS + __loffset), __isize, "A39", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 172;                                    	/*   [ 2519]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"34", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 172;                                    	/*   [ 2538]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 27);
  goto CDBL_L_DISPLAY_IT;
_call_return_27: ;
  *__lineno = 175;                                    	/*   [ 2551]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(1:-3)", 10, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 176;                                    	/*   [ 2589]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = -3;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 177;                                    	/*   [ 2605]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"05A", 3, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 177;                                    	/*   [ 2624]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 28);
  goto CDBL_L_DISPLAY_IT;
_call_return_28: ;
  *__lineno = 180;                                    	/*   [ 2637]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"AFLD(13:2)", 10, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 181;                                    	/*   [ 2671]	*/
							/* =           	*/
					/* Offset into substring	*/
  __loffset = 0;
  __n_0 = 13;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.AFLD + __loffset), __isize, "A13", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 182;                                    	/*   [ 2687]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MA", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 182;                                    	/*   [ 2706]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 29);
  goto CDBL_L_DISPLAY_IT;
_call_return_29: ;
  *__lineno = 185;                                    	/*   [ 2719]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MFLD[1,2](1:2)", 14, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 186;                                    	/*   [ 2759]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 6;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 3;
					/* Offset into substring	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 2;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.MFLD + __loffset), __isize, "A3", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 187;                                    	/*   [ 2775]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"DE", 2, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 187;                                    	/*   [ 2794]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 30);
  goto CDBL_L_DISPLAY_IT;
_call_return_30: ;
  *__lineno = 190;                                    	/*   [ 2807]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"MFLD[1,1](1:12)", 15, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.EXPR), 25, "A25", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 191;                                    	/*   [ 2847]	*/
							/* =           	*/
					/* Offset into array		*/
  __loffset = 0;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 6;
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __loffset += ((long)__nexpr - 1) * 3;
					/* Offset into substring	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __ipos = (int)__nexpr;
  __n_0 = 12;
  __n_dec = 0;  __nexpr = __n_0;
  __isize = (int)__nexpr - __ipos + 1;
  __loffset += __ipos - 1;
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&ABS.MFLD + __loffset), __isize, "A3", ARG_ISVAR);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&GOT.I_GOT), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 192;                                    	/*   [ 2863]	*/
							/* =           	*/
  dbl_mkarg(&__arg[30], __blkname, (void *)"ABCDEFGHIJKL", 12, "A*", ARG_ISCONST);
  __an_arg = __arg[30];
  sprintf(__string, "%.*s", __an_arg.size, __an_arg.addr);
  dbl_mkarg(&__arg[30], __blkname, (void *)((char *)&WANT.WANTED), 40, "A40", ARG_ISVAR);
  __an_arg = __arg[30];
  dbl_puts(&__an_arg, "", __string);
  *__lineno = 192;                                    	/*   [ 2882]	*/
							/* CALL        	*/
  call_push(__call_return, &__call_stack, 31);
  goto CDBL_L_DISPLAY_IT;
_call_return_31: ;
  *__lineno = 196;                                    	/*   [ 2889]	*/
							/* STOP        	*/
  drt_terminate();
CDBL_L_DISPLAY_IT:					/* LABEL	*/
  *__lineno = 197;                                    	/*   [ 2921]	*/
							/* DISPLAY     	*/
  __n_0 = 1;
  __n_dec = 0;  __nexpr = __n_0;
  __io_channel = (int)__nexpr;
  dbl_mkarg(&__arg[0], __blkname, (void *)((char *)&GOT), 67, "A67", ARG_ISVAR);
  dbl_mkarg(&__arg[1], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  dbl_mkarg(&__arg[2], __blkname, (void *)((char *)&WANT), 67, "A67", ARG_ISVAR);
  dbl_mkarg(&__arg[3], __blkname, (void *)"000000000000000010", 18, "D18", ARG_ISCONST);
  drt_display(__io_channel,
              &__arg[0],
              &__arg[1],
              &__arg[2],
              &__arg[3],
              (DBLArg_t *)NULL
             );
  *__lineno = 198;                                    	/*   [ 2930]	*/
							/* RETURN      	*/
  goto _call_return;
							/* END         	*/
  /* END BLOCK 1 */
  goto _call_return;
} /* cdbl_main */


/* End of subs.c : written by cdbl 1.64 */
