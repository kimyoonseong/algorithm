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
			if(a[j]<a[idx])idx=j;//�̶� idx�� ���� �������� �����Ѵ�  
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;//�����ϴ� �������ڵ� ^^ 
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";	
	}
	
	return 0;	
}
