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
				tmp=tmp/j;
				ch[j]++;// ��� j=2�� �����ٰ� �ȳ������� 
			}
			else j++;//j++�ϴ°� 
			if(tmp==1) break;
		}
	}
	cout<<n<<"!=";
	for(i=2;i<=n;i++){
		if(ch[i]!=0)cout<<ch[i];	
	}
	return 0;
};
