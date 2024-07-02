#include <stdio.h>
#include <string.h>
#include <math.h>
char ops[101];
int opsi=0;
int ovs[101];
int ovsi=0;
void opsin(char c)
{
    opsi++;
    ops[opsi]=c;
}
void ovsin(int num)
{
    ovsi++;
    ovs[ovsi]=num;
}
char opsout()
{
    opsi--;
    return ops[opsi+1];
}
int ovsout()
{
    ovsi--;
    return ovs[ovsi+1];
}
void count2(char c)
{
    int b=ovsout();
    int a=ovsout();
    switch(c)
    {
        case '+':ovsin(a+b);break;
        case '-':ovsin(a-b);break;
        case '*':ovsin(a*b);break;
        case '/':ovsin(a/b);break;
        case '^':ovsin(pow(a,b));break;
    }
}
int count(const char *str)
{
    ops[0]=0;
    int stri=0,lenstr=strlen(str);
    while(stri<=lenstr-1)
    {
        if(str[stri]=='(')opsin('(');
        else
        if(str[stri]=='^')opsin('^');
        else
        if(str[stri]==')')
        {
            char c=opsout();
            while(c!='(')
            {
                count2(c);
                c=opsout();
            }
        }
        else
        if(str[stri]=='+')
        {
            while(ops[opsi]=='+'||ops[opsi]=='-'||ops[opsi]=='*'||ops[opsi]=='/'||ops[opsi]=='^')count2(opsout());
            opsin('+');
        }
        else
        if(str[stri]=='-')
        {
            while(ops[opsi]=='+'||ops[opsi]=='-'||ops[opsi]=='*'||ops[opsi]=='/'||ops[opsi]=='^')count2(opsout());
            opsin('-');
        }
        else
        if(str[stri]=='*')
        {
            while(ops[opsi]=='*'||ops[opsi]=='/'||ops[opsi]=='^')count2(opsout());
            opsin('*');
        }
        else
        if(str[stri]=='/')
        {
            while(ops[opsi]=='*'||ops[opsi]=='/'||ops[opsi]=='^')count2(opsout());
            opsin('/');
        }
        else//num
        {
            if(stri>0)
            {
                if(str[stri-1]-48>=0&&str[stri-1]-48<=9)
                    ovsin(ovsout()*10+str[stri]-48);
                else
                    ovsin(str[stri]-48);
            }
            else
                ovsin(str[stri]-48);
        }
        stri++;
    }
    while(ovsi>1)count2(opsout());
    return ovs[1];
}
int main()
{
	int n;
	int a[256];
	char s[101];
    scanf("%d",&n);
	for(int i=0;i<n;i++){
        gets(s);
        a[i]=count(s);
	    
	} 
	for(int i=0;i<n;i++){
		printf("%s\r\n",a[i]);
	}
	
    return 0;
}
