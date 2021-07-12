#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[101], b[101], c[300];
int main() {	
	int n, m, i, j, p1=0,p2=0,p3=0;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	cin>>m;
	vector<int> b(m),c(n+m);//얜 도대체뭐냐 
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b.begin(), b.end());// 작은거 부터 정 렬  
	while(p1<n&&p2<m){
		if(a[p1]<b[p2]){
			a[p1++];	
		}
		else if(a[p1]==b[p2]){
			c[p3++]=a[p1++];
			p2++;
		}
	
		else{
			b[p2++];
		}
	}
	//while(p1<=n) c[p3++]=a[p1++];
	//while(p2<=m) c[p3++]=b[p2++];
	
	for(i=0;i<p3;i++){//p3
		cout<<c[i]<<" ";
	}
	return 0;
}
