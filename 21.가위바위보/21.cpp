#include <iostream>
using namespace std;

int main(){
	int n, a[100],b[100],i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		cin>>b[i];
	}
	for(i=1;i<=n;i++){
		if(a[i]==1&&b[i]==3)
			cout<<"A";
		else if(a[i]==2&&b[i]==1)
			cout<<"A";
		else if(a[i]==3&&b[i]==2)
			cout<<"A";
		else if(a[i]==b[i])
			cout<<"D";
		else
			cout<<"B";
	}
	return 0;
};
