#include <iostream>

using namespace std;

int reverse(int x){
	int res=0,tmp;
	while(x>0){
		tmp=x%10;
		res=res*10+tmp;
		x=x/10;
	}
	return res;
}

bool isPrime(int x){//�Ҽ� �Ǻ� �Լ� 
	int i;
	if(x==1) return false;
	bool flag=true;
	for(i=2;i<x;i++) {
		if(x%i==0){
			flag=false;
			break;	
		}
	}
	return flag;
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
