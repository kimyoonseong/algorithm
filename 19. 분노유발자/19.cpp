#include <iostream>
using namespace std;

int main(){
	int i,max,cnt=0;
	int m;
	int n[101];
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>n[i];	
	}
	max=n[m];
	for( i=m-1;i>=1;i--){
		if(n[i]>max){
			max=n[i];
			cnt++;	
		}
	}
	cout<<cnt;
	return 0;
};
