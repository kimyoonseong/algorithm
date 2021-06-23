#include <iostream>
using namespace std;
int main(){
	int n,cnt=0,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		x=i;
		while(x>0){
			x=x/10;
			cnt++;
		}
		
	}
	cout<<cnt;
	return 0;	
}
