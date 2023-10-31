%{
#include <stdio.h>
#define FALSE        0
#define TRUE         1
int yywrap();
%}
DIGIT                [0-9]
NUMBER                {DIGIT}+
LETTER                [a-zA-Z]  
WORD                {LETTER}+                   
WHITESPACE        [ \t]+                           

OPT ("+"|"-"|"*"|"/"|"+="|"-="|"*="|"/="|">="|"<="|"=="|"="|"++"|"--")   
BRACKET ("("|")"|"["|"]"|"{"|"}"|","|"\'"|"\""|"#") 
NL                \r?\n
QUOTATION        \"[^"\n]*\"           
KEYWORD       bool|break|case|catch|char|class|const|continue|cout|default|delete|do|double|endl|float|for|if|int|namespace|new|operator|private|protected|public|register|return|short|signed|sizeof|static|struct|switch|template|this|throw|try|typedef|union|unsigned|virtual|void|volatile|while
PREWORD       define|error|include|elif|if|line|else|ifdef|pragma|endif|ifndef|undef|if|else|endif
PREDEF               "#"{PREWORD}      
LINECOMMENT        "\/\/".*\n          
%%
"/*"                {
                        char c;
                        int done=FALSE;
                        printf("<font class=STYLE4>\n");
                        ECHO;
                        do
                        {
                                while((c=input())!='*')
                                {
                                        if(c=='\n') 
                                                printf("<br>\n");
                                        else
                                                putchar(c);
                                }
                                putchar(c);
                                while((c=input())=='*')
                                        putchar(c);
                                if(c=='\n') printf("<br>\n");
                                putchar(c);
                                if(c=='/') done=TRUE;
                        } while(!done);
                        printf("</font>\n");
                }
{LINECOMMENT}   {printf("<font class=\"STYLE3\">%s</font><br>\n",yytext);}
{QUOTATION}     {printf("<font class=\"STYLE4\">%s</font>",yytext);}
{PREDEF}        {printf("<font class=\"STYLE1\">%s</font>",yytext);}
{KEYWORD}       {printf("<font class=\"STYLE2\">%s</font>",yytext);}
{BRACKET}       {printf("<font class=\"STYLE5\">%s</font>",yytext);}
{OPT}           {printf("<font class=\"STYLE6\">%s</font>",yytext);}
{NL}            {printf("<br>\n");}
{WORD}          {ECHO;}
{NUMBER}        {ECHO;}
{WHITESPACE}    {ECHO;}
%%
int main()
{
        printf("<html>\n");
        printf("<head>\n");
	printf("<style type=\"text/css\"><!--\n");
printf(".STYLE1 {color: #669900;font-weight: bold;font-size: 14px;}\n");   //字体颜色：绿色，字体粗细：粗体，字体大小：14px
printf(".STYLE2 {color: #6699FF;font-size: 14px;font-weight: bold;}\n");   //字体颜色：浅蓝色，字体粗细：粗体，字体大小：14px
printf(".STYLE3 {font-size: 14px;color: #666666;}\n");                     //字体颜色：灰色，字体大小：14px
printf(".STYLE4 {font-size: 14px;color: #FF6600;}\n");          //字体颜色：橙色，字体大小：14px
printf(".STYLE5 {font-size: 14px;color: #FFD700;}\n");          //字体颜色：金色，字体大小：14px
printf(".STYLE6 {font-size: 14px;color: #FF0000;}--></style>\n");          //字体颜色：红色，字体大小：14px
        printf("</head>");
        printf("<body>\n");
        yylex();
        printf("</body>");
        printf("</html>");
        return 0;
}
int yywrap()
{
        return 1;}
