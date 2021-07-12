#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int i,n,k,pos=0, bp=0, cnt=0;
	cin>>n;
	cin>>k;
	vector<int> prince(n+1);
	while(1){
		pos++;
		if(pos>n) pos=1;//8보다 커지는순간 1이된다 왜냐하면 돌고있으니깐 
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){
				prince[pos]=1;//
				cnt=0;// 다시 k랑 같을때까지 세야하니깐 초기화 
				bp++;// 못구하러가는왕자 하나씩 추가 
			}
		}
		if(bp==n-1) break;// 구하러갈 한명이 남아야하니깐 -1 
	}
	for(i=1;i<=n;i++){
		if(prince[i]==0){
			cout<<i;
			break;
		}
	}
	return 0;
}
