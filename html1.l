%{
#include <stdio.h>
int yywrap();
%}
%%
"<"                {printf("&lt;");}
">"                {printf("&gt;");}
"&"                {printf("&amp;");}
\t                {printf("&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;");}
" "                {printf("&nbsp;");}
&nbsp;                {printf("&nbsp;");}
%%
int main()
{
        yylex();
        return 0;
}
int yywrap()
{
        return 1;
}
