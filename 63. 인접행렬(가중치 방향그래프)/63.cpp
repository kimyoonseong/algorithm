#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int map[51][51];

int main(){
	int n,m,i,a,b,c,j;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		cin>>a>>b>>c;
		map[a][b]=c;

	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<map[i][j];	
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
