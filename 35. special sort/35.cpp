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
	for(i=0;i<n-1;i++){//�� n-1���� ?������ j�� �������� �ֱ⶧��! 
		for(j=0;j<n-i-1;j++){//�ǵڰ��� j+1�̶� ���ϴϱ� -1 
			if(a[j]>0&&a[j+1]<0){
				
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){//1������ ������ 0���� ���������ϱ� 
		
			cout<<a[i]<<" ";
		
		}
	

	
	return 0;	
}
