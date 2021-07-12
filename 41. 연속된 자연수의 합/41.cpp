#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[101], b[101], c[300];
int main() {	
	int n,m=1,cnt=0,tmp, i;
	cin>>n;
	tmp=n;
	n--;//1»© °í  
	while(n>0){
		m++;
		n=n-m;//2 »«°Å  
		if(n%m==0){
			for(i=1;i<m;i++){
				cout<<(n/m)+i <<"+";		
			}
			cout<<(n/m)+i<<"="<<tmp<<endl;
			cnt++;
	 	}
	}
	cout<<cnt;
	return 0;
}
