#include <iostream>

using namespace std;

int reverse(int x){
	int a,b=0;
	while(x>0){
		b=x%10;
		a=a*10+b;
		x=x/10;
	}
	return a;
}

bool isPrime(int x){
	bool sibal=1;
	if(x==1)return 0;
	for(int i=2; i<x;i++){
		if(x%i==0){
			sibal=0;
			break;
		}
	}
	return sibal;
}

int main(){
	int n, num, i,tmp;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>num;
		tmp=reverse(num);	
		if(isPrime(tmp)) cout<<tmp;
	}
	
	return 0;
};
