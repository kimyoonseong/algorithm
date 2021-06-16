#include <iostream>

using namespace std;

int main(){
	int i,A,B,sum=0;
	cin>>A;
	cin>>B;
	
	for(i=A;i<B;i++){
		
		cout<<i<<"+";
		sum+=i;
	}
	cout<<i;
	cout<<"="<<sum+i;
	
	return 0;
};
