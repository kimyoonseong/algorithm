#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,tmp,i,j;
	cin>>n;
	vector<int> ch(n+1);
	for(i=2;i<=n;i++){
		tmp=i;
		j=2;
		while(1){
			if(tmp%j==0){
				tmp=tmp/j;//몫 값 구해줌 
				ch[j]++;// 계속 j=2로 나누다가 안나눠질때 
			}
			else j++;//j++하는거 하나씩 더 큰수로 나눠야 함. 
			if(tmp==1) break;
		}
	}
	cout<<n<<"!=";
	for(i=2;i<=n;i++){
		if(ch[i]!=0)cout<<ch[i];// 0은 소인수가 아니니깐.  
	}
	return 0;
};
	
