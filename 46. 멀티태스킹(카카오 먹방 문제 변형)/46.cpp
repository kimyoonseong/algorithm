#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[2001];
int main(){
	int i,n,k,p=0,cnt=0,tot=0;//p는 index 값도는거 
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		tot+=a[i]; //tot는 total총합 
	}
	cin>>k;
	if(k>=tot){
		cout<<"-1";
		return 0;	
	}
	while(1){
		p++;
		if(p>n) p=1;//숫자 넘어가면 1로 다시 돌아 옴  
		if(a[p]==0) continue;	
		a[p]--;
		cnt++;//초1 늘어나는거
		if(cnt==k) break; 
	}
	while(1){// 현재 p지점은 마지막으로 작업한 지점 
			p++;
			if(p>n) p=1;
			if(a[p]!=0) break;
	}
	cout<<p;
	
	
	return 0;
}
