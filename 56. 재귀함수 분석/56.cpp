#include<iostream>
#include<stack>
#include <vector>
#include<algorithm>
using namespace std;

void D(int x){
	if(x==0) return;
	else{
		D(x-1);
		cout<<x<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	D(n);
	
	return 0;
}

