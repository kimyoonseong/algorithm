#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,cnt=0,i,j;
	cin>>n;
	vector<int> a(n+1);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<("1 ");
	for(i=1;i<n;i++){
		cnt=0;//��� ��� �ʱ�ȭ ���Ѿ� ��  
		for(j=i-1;j>=1;j--){
			if(a[j]>=a[i]) cnt++;
		}
		cout<< cnt+1<<" ";
		
	}
		
	return 0;
};
