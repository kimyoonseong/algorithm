#include<iostream>


#include<vector>
#include<algorithm>
using namespace std;	
void D(int x){
	if(x==0) return;
	else{
		D(x/2);
		cout<< x%2;
	}
}	
int main(){
	int n;
	cin>>n;
	D(n);
	return 0;
}
