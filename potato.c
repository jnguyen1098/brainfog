    #include<stdio.h>
    int main(int argc,char*argv[]){FILE*in
=fopen(argv[1],"r");FILE*out=fopen(argv[2],"w");
int i=0;char c,tokens[9*9*9*9*9];while(!((c=fgetc(in))==-1))
if(c=='>'||c=='<'||c=='+'||c=='-'||c=='['||c==']'||c=='.'
||c==',')tokens[i++]=c;tokens[i]=0;char memory[10*99]={0};
char*ptr=     memory;for(int i=0,bal=0;     tokens[i];i++){
switch(tokens[i]){case'>':ptr++;continue;case'<':--ptr;
continue;case'+':++*ptr;continue;case'-':--*ptr;continue;
case'.'                                           :fputc(*ptr,out);
continue;case',':*ptr=getchar();if(*ptr==EOF||*ptr=='\r'||
*ptr=='\n')*ptr=0;continue;case'[':if(!*ptr){bal=-1;while(bal!=0&&
tokens[++i])if(tokens[i]=='[')bal--;else if(tokens[i]==']'&&
!++bal)break;}continue;case']':if(*ptr){bal=+1;while(bal!=0
&&--i>=0)if(tokens[i]==']')bal++;else if(tokens[i]=='['&&
!--bal)break;}continue;}}}
