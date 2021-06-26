#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main(){
	int tmp,n,a[101],i,j,cnt=0,idx;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){//왜 n-1이지 ?어차피 j가 마지막에 있기때문! 
		idx=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[idx])idx=j;//이때 idx는 가장 큰 값을 저장한다  
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;//스왑하는 간단한코드 ^^ 
	}
	for(i=1;i<n;i++){//1부터인 이유는 0번은 제일작으니깐 
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			cout<<a[i];
			break;
		}
	}

	
	return 0;	
}
