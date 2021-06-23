#include <iostream>

using namespace std;

int main(){
	char c[100];
	int res=0, cnt=0, i;
	cin>>c;
	for(i=0;c[i]!='\0';i++){
		if(c[i]>=48&&c[i]<=57){
		res=(res*10)+(c[i]-48);
		}
	}
	for(i=1;i<=res;i++){
		if(res%i==0)
			cnt++;
	}
	cout<<res<<"\n";
	cout<<cnt;
	return 0;
}
