#include <iostream>
using namespace std;

int main(){
	int  a[10],b[10],i,av=0,bv=0,lw=0;
	for(i=0;i<10;i++){
		cin>>a[i];	
	}
	for(i=0;i<10;i++){
		cin>>b[i];	
	}
	for(i=0;i<10;i++){
		if(a[i]>b[i]){
			av=av+3;
			lw=1;
		}
		else if(a[i]<b[i]){
			bv=bv+3;
			lw=2;	

		}
		else{
			av+=1;
			bv+=1;	
		}
		
	}
	cout<<av<<endl<<bv<<endl;
	if(av==bv){
		if(lw==1)
			cout<<"A";
		else if(lw==2)
			cout<<"B";
		else if(lw==0)
			cout<<"C";
	}
	else if(av>bv)
		cout<<"A";
	else 
		cout<<"B";
	return 0;
}
