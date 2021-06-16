#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, i, now, pre, pos;
	cin>>n;
	vector<int> ch(n);
	cin>>pre;
	for(i=1;i<n;i++){
		cin>>now;
		pos=abs(pre-now);//abs 절댓값화,pos는 차이 
		if(pos>0&&pos<n&&ch[pos]==0) ch[pos]=1;
		else{
			printf("NO\n");
			return 0;
		}
		pre=now;
		
	}
	printf("YES\n");
	return 0;
};
