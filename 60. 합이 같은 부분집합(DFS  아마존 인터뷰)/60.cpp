#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,a[11], total=0;
bool flag=false;
void DFS(int L, int sum){
	if(sum>total/2) return;//���ݳѾ�� ���ʿ䰡����
	 
	if(flag==true) return ;
	if(L==n+1){
		if(sum==(total-sum))
			flag=true;
		
		}
	
	else{
		DFS(L+1,sum+a[L]);
		DFS(L+1,sum);	
	}
}
	

int main(){
	int i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		total+=a[i];	
	}
	DFS(1,0);
	if(flag) cout<<"YES\n";
	else cout<<"NO";
	return 0;
}
