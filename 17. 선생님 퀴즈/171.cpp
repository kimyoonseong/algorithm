#include <iostream>
using namespace std;

int main(){
	int i,j,n,m,ans,sum=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>m;
		cin>>ans;
		sum=0;// 0으로 계속 초기화 해야함 
		for(j=1;j<=m;j++){
			sum+=j;
		}
		if(sum==ans) cout<<"YES";
			
		else cout<<"NO";
	}
	
	return 0;
}
