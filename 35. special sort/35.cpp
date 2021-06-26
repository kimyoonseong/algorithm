#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
	int tmp,n,i,j;
	float a[101];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){//왜 n-1이지 ?어차피 j가 마지막에 있기때문! 
		for(j=0;j<n-i-1;j++){//맨뒤값은 j+1이랑 비교하니깐 -1 
			if(a[j]>0&&a[j+1]<0){
				
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){//1부터인 이유는 0번은 제일작으니깐 
		
			cout<<a[i]<<" ";
		
		}
	

	
	return 0;	
}
