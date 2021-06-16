#include <iostream>

using namespace std;

int main(){
	int n,i,pre,now,cnt,max;
	cin>>n;
	cin>>pre;
	cnt=1;max=1;
	for(i=2;i<=n;i++){
		cin>>now;
		if(now>=pre){
			cnt++;
			if(cnt>max) max=cnt;	
		}
		else cnt=1;
		pre=now;
	}
	cout<<max;
	
	/*
	int n, a[100001],cnt=0, max=-21470000;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		if(a[i]<=a[i+1]){
			cnt++;
			if(cnt>max)
				max=cnt;
		}
		else cnt=1;
	}
	cout<<max;*/
	return 0;
};
