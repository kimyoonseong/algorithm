#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[2001];
int main(){
	int i,n,k,p=0,cnt=0,tot=0;//p�� index �����°� 
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		tot+=a[i]; //tot�� total���� 
	}
	cin>>k;
	if(k>=tot){
		cout<<"-1";
		return 0;	
	}
	while(1){
		p++;
		if(p>n) p=1;//���� �Ѿ�� 1�� �ٽ� ���� ��  
		if(a[p]==0) continue;	
		a[p]--;
		cnt++;//��1 �þ�°�
		if(cnt==k) break; 
	}
	while(1){// ���� p������ ���������� �۾��� ���� 
			p++;
			if(p>n) p=1;
			if(a[p]!=0) break;
	}
	cout<<p;
	
	
	return 0;
}
