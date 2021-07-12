#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[51][51];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int main(){
	
	int n,i,j,k,cnt=0,flag;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			flag=0;
			for(k=0;k<4;k++){
				if(a[i][j]<=a[i+dx[k]][j+dy[k]]){//상하좌우가 자신보다 큰경우  
					flag=1;
					break;	
				}
			}
			if(flag==0) cnt++; 
		}
	}
	cout<<cnt;
	return 0;
}
