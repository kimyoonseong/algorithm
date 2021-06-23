#include <iostream>

using namespace std;
int main(){
	int n, i,sum=0,c=1,d=9,res=0; 
	cin>>n;
	while(sum+d<n){
		res=res+c*d;
		sum=sum+d;
		c++;//
		d=d*10;//다음자리숫자의 갯 수 
		
		//c는 자릿수개수 ex)백의자리수=3
		//d는 9,90,900
		//sum은 9,99,999
		//res는 자릿구 개수의  합 
		
	}
		// 여기부턴 안넘지만 사이에  합구하는 거 
	res=res+((n-sum)*c);
	cout<<res; 

	return 0;

	
};
