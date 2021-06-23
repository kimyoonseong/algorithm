#include <iostream>

using namespace std;
int digit_sum(int x){
	int temp,sum;
	while(x>0){
		temp=x%10;
		sum+=temp;
		x=x/10;
	}
	
	return sum;
}
	
	
int main(){
	int n,num,max=-21470000,res,sum;
	cin>> n;
	for(int i=0;i<n;i++){
		cin>>num;
		sum=digit_sum(num);
			if(sum>max){
				max=sum;
				res=num;
			}
			else if(sum==max){
				if(num>res) res=num;         //res ÀÌÀü°Å 
			}
	}
	cout<<res;
	return 0;
}
