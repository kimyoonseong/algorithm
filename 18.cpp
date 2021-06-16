#include <iostream>
using namespace std;

int main(){
	int n,i,m,alt=0,num,max=-200000;
	cin>>n;
	cin>>m;
	
	for(i=0;i<n;i++){
		cin>>num;	
		if(num>m) alt++;
		else alt=0;
		if(alt>max)max=alt;
	}
	cout<< max;
	return 0;
};
