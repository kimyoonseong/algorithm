#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
	int tmp,n,i,j,a[101];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=1;i<n;i++){
		tmp=a[i];
		for(j=i-1;j>=0;j--){
			if(a[j]>tmp) a[j+1]=a[j];
			else break;
		}
		a[j+1]=tmp;
	}
	for(i=0;i<n;i++){
		
			cout<<a[i]<<" ";
		
		}
	

	
	return 0;	
}
