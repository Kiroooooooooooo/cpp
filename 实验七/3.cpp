#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[256];
	cin>>s;
	int size=strlen(s);
	for(int i=0;i<size;i++){
		if(s[i]>='0'&&s[i]<='9')
		    s[i]='0'+'9'-s[i];
		else if(s[i]>='a'&&s[i]<='z')
		    s[i]='a'+'Z'-s[i];
		else s[i]='A'+'z'-s[i];
	}
	cout<<s<<endl;
	return 0;
} 
