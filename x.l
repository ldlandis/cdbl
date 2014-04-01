%{
#include <stdio.h>
#include <string.h>
char *kw[] = 
  {
    ".ext",
    ".GT",
    NULL
  };
%}

%%

ab?			{ printf("dot: %s\n", yytext);	}
defg			{ printf("tot: %s\n", yytext); yyless(1); }
[A-Z]+			{ printf("hot: %s\n", yytext);	}
"."			{ printf("fot: <period>\n");	}
"."[A-Za-z]+		{
			  char **k;
			  for (k = kw;  *k;  ++k)
			    if (strcmp(*k, yytext) == 0)
			      break;
			  if ( ! *k) REJECT;
			  printf("lot: %s\n", yytext);
			}
("+"|"-")?[0-9]+("."[0-9]*)? {
			  printf("got: %s\n", yytext);	}
[ ]			{ printf("fot: <space>\n");	}
[\t]			{ printf("fot: <tab>\n");	}
[\f]			{ printf("fot: <formfeed>\n");	}
\n/[ \t\f]*"&"		{ printf("cot: <continuation>\n");}
\"[^\"\n]*\"		{
			  printf("yytext[:-2]=%c yytext[:-1]=%c\n",
			          yytext[strlen(yytext)-2],
			          yytext[strlen(yytext)-1]);
			  if (yytext[strlen(yytext)-1] == '"')
			    yymore();
			  printf("qot: %s\n", yytext);
			}
\'[^\'\n]*\'		{
			  printf("yytext[:-2]=%c yytext[:-1]=%c\n",
			          yytext[strlen(yytext)-2],
			          yytext[strlen(yytext)-1]);
			  if (yytext[strlen(yytext)-1] == '\'')
			    yymore();
			  printf("sot: %s\n", yytext);
			}
\n			{ printf("---\n");		}
q			{ return;			}
.			{
			  printf("huh? '%c'0x%02x\n", yytext[0], yytext[0]);
			}

%%
main()			{ yylex();			}
yywrap()		{ return 1;			}
