#include <iostream>

using namespace std;
int cnt[10000000];//�� ���� ���� ��?..->
//���������� �޸� ������ ������ �Ҵ�Ǹ�,
//ũ�Ⱑ ū �迭�� �����ص� ���� ����  
int main(){
	
	int n;
	cin>>n;
	//int cnt[10000000]; ���������� 0���� �ʱ�ȭ�ȴٴ� �����̾��� �� 
	//�� �ϰ������ int cnt[10000000]={0,}; 
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n; j=j+i){// ����ϸ鼭 �����ִ°��� 
			cnt[j]++;	
		}
	}
	for(int i=1;i<=n;i++){
		cout<<cnt[i]<<" ";	
	}
	/*
	int cnt;
	for(int i=1; i<=n; i++){
		cnt=0;
		for(int j=1;j<=i;j++){
			if(i%j==0) cnt++;	
		}
		cout<<cnt<<"  ";
	}*/
	return 0;

	
};
