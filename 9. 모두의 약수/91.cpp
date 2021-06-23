#include <iostream>

using namespace std;
int cnt[10000000];//왜 전역 변수 로?..->
//전역변수는 메모리 데어터 영역에 할당되며,
//크기가 큰 배열을 선언해도 문제 없음  
int main(){
	
	int n;
	cin>>n;
	//int cnt[10000000]; 지역변수는 0으로 초기화된다는 보장이없음 꼭 
	//꼭 하고싶으면 int cnt[10000000]={0,}; 
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n; j=j+i){// 배수하면서 더해주는거임 
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
