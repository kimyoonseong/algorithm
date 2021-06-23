#include <iostream>
using namespace std;

int main(){
	int n,cnt=0;
	bool sibal;
	cin>>n;
	for(int i=2;i<=n;i++){
			sibal=1;
		for(int j=2;j*j<=i;j++){
		 	if(i%j==0){
		 		sibal=0;
				break;	
		 	}
		}
		if(sibal==1) cnt++;
	}
	cout<<cnt;
	return 0;
};
