#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[51][51],b[11];

int main(){
	int h,w,n,m,i,j,k,s,sum=0,max=-214700000;
	cin>>h>>w;
	for(i=1;i<=h;i++){
		for(j=1;j<=w;j++){
			cin>>a[i][j];
		}
	}
	cin>>n>>m;
	for(i=1;i<=h-n+1;i++){
		for(j=1;j<=w-m+1;j++){//넘어가니깐 w,h까지 돌필요가 없음 
			sum=0;
			for(k=i;k<i+n;k++){//i행부터 시작 
				for(s=j;s<j+m;s++){//j열 부터 시작 
					sum=sum+a[k][s];
				}
			}
			if(sum>max){
				max=sum;
			}
		}
	}
	cout<<max;
	return 0;
}
