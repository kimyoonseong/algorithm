#include <iostream>
using namespace std;

int main(){
	int  a[10],b[10],i,as=0,bs=0,lw=0;
	for(i=0;i<10;i++){
		cin>>a[i];	
	}
	for(i=0;i<10;i++){
		cin>>b[i];	
	}
	for(i=0;i<10;i++){
		if(a[i]>b[i]){
			as=as+3;
			lw=1;
		}
		else if(a[i]<b[i]){
			bs=bs+3;
			lw=2;	

		}
		else{
			as+=1;
			bs+=1;	
		}
		
	}
	cout<<as<<"  ";
	cout<<bs<<"\n";
	if(as==bs){
		if(lw==0) cout<<"D";
		else if(lw==1) cout<<"A";
		else cout<<"B";
	}
	else if(as>bs) cout<<"A";
	else cout<<"B";
	return 0;
};
