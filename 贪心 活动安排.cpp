#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int st;
	int ed;
}a[1005];
bool cmp(node x,node y){
	return x.ed<y.ed;
} 
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i].st>>a[i].ed;
	sort(a+1,a+n+1,cmp);
	int t=a[1].ed;
	int ans=1;
	for(int i=2;i<=n;i++)
	if(a[i].st>=t){
		ans++;
		t=a[i].ed;
	}
	cout<<ans<<endl;
	return 0;
}
