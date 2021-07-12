#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
	int a[10][10];
int main(){
	
	int n,i,j,k,sum,ave,res,tmp,min;
	
	for(i=1;i<=9;i++){
		sum=0;
		for(j=1;j<=9;i++){     
			cin>>a[i][j];                                                                      
			sum+=a[i][j];
		}
		ave=(sum/9.0)+0.5;
		cout<<ave;
		min=21470000;
		for(j=1;j<=9;j++){   
			tmp=abs(a[i][j]-ave);
			if(tmp<min){
				min=tmp;
				res=a[i][j];
			}
			else if(tmp==min){
				if(a[i][j]>res) res=a[i][j];
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
