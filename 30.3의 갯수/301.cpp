#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, tmp, i, cnt=0, k;
	cin>>n;
	for(i=1;i<=n;i++){
		tmp=i;
		while(tmp>0){
			k=tmp%10;	
			if(k==3) cnt++;
			tmp=tmp/10;	
		}
	}
	cout<<cnt;
	return 0;
};
