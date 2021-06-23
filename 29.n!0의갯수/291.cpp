#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,cnt1=0,cnt2=0,i,j,tmp;
	cin>>n;
	for(i=2; i<=n;i++){
		tmp=i;
		j=2; 
		while(1){
			if(tmp%j==0){
				if(j==2)cnt1++;
				else if(j==5) cnt2++;
				//10은 2와5의 곱으로 되어있으므로 2,5로 계속 나눠서 갯수 확인 한다  
				tmp=tmp/j;
			}
			else j++;
			if(tmp==1) break;
		}
	}
	if(cnt1<cnt2) cout<<cnt1;
	else cout<<cnt2;

	return 0;
};
