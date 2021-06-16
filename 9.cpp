#include <iostream>

using namespace std;
int cnt[500001];
int main(){
	int n;
	cin>>n;
	/*
	int cnt;
	for(int i=1; i<=n; i++){
		cnt=0;
		for(int j=1;j<=i;j++){
			if(i%j==0) cnt++;	
		}
		cout<<cnt<<"  ";
	}*/
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n; j=j+i){
			cnt[j]++;	
		}
		
	}
	for(int i=1;i<=n;i++){
		cout<<cnt[i]<<" ";	
	}

	return 0;

	
};
