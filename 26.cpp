#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,a[101],b[101];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=1;	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j]>a[i]) b[i]++;	
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
};
