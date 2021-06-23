#include <iostream>
using namespace std;

int main(){
	int sum=0,n,m,i,j,ans;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>m;
		cin>>ans;
		sum=0;
		for(j=1; j<=m;j++){
			sum+=j;
		}
		if(ans==sum) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
};
