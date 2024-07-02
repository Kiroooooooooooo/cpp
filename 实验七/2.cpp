#include <iostream>
using namespace std;

//转大写 
char* upr(char* src){
	while (*src!='\0'){
		if (*src>='a'&&*src<='z'){
			*src-=32;	
		}
		src++;
	}
	return src;
}

//转小写 
char* lwr(char* src){
	while (*src!='\0'){
		if (*src>='A'&&*src<='Z'){ 
			*src+=32;
		}
		src++;
	}
	return src;
}

//返回大小
int len(char* str)
{
    int count=0;
    while(*str){
        count++;
        str++;
    }
    return count;
} 

//复制
char *cpy (char *dest,const char *src)
{
  char c;
  char *s=(char*)src;
  const ptrdiff_t off=dest-s-1;

  do{
      c=*s++;
      s[off]=c;
    }
  while (c!='\0');
  return dest;
}

//连接
char* cat(char *a,char*b)
{
	while(a++){
		if(*a=='\0')
		{
			while(*a++=*b++);
			
			break;
		}
	}
	
	return a;
}  
 
int main(){	
	char k[256];

	cin>>k;

	cout<<len(k)<<endl;
	upr(k);
	cout<<k<<endl;
	lwr(k);
	cout<<k<<endl;
	char k2[256];
	cpy(k2,k);
	cout<<k2<<endl;
	cat(k2,k);
	cout<<k2<<endl;
	system("pause");
	return 0;
}
