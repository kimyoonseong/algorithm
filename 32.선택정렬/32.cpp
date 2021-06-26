#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
	int tmp,n,a[101],i,j,idx;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		idx=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[idx])idx=j;//이때 idx는 가장 작은값을 저장한다  
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;//스왑하는 간단한코드 ^^ 
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";	
	}
	
	return 0;	
}
