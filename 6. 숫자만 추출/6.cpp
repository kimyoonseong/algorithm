#include <iostream>

using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	char c[100];
	int res=0, cnt=0, i;
	cin>>c;
	for(i=0; c[i]!='\0'; i++){
		if(c[i]>=48 && c[i]<=57){
			res=res*10+(c[i]-48);
			
		}
		
	}
	cout<<res;
	for(i=1;i<=res;i++){
		if(res%i==0) cnt++;	
		
	}
	cout<< '\n'<<cnt;
	return 0;

	
};
