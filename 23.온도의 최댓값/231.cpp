#include <iostream>
#include <vector>
using namespace std;

int main(){
	int  n,k,i,j,sum=0,max;
	cin>>n;
	cin>>k;
	vector<int> a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<k;i++){
		sum+=a[i];
	}
	max=sum;
	for(i=k;i<n;i++){
		sum=sum+a[i]-a[i-k];// 진짜 개어렵네 ㅅㅂ 
		if(sum>max) max=sum;
	}
	cout<<max;
	return 0;
};
