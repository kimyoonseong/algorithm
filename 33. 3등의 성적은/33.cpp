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
	for(i=0;i<n-1;i++){//�� n-1���� ?������ j�� �������� �ֱ⶧��! 
		idx=i;
		for(j=i+1;j<n;j++){
			if(a[j]>a[idx])idx=j;//�̶� idx�� ���� ū ���� �����Ѵ�  
		}
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;//�����ϴ� �������ڵ� ^^ 
	}
	for(i=1;i<n;i++){//1������ ������ 0���� ���������ϱ� 
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			cout<<a[i];
			break;
		}
	}

	
	return 0;	
}
