#include <iostream>

using namespace std;
int main(){
	int n, i,sum=0,c=1,d=9,res=0; 
	cin>>n;
	while(sum+d<n){
		res=res+c*d;
		sum=sum+d;
		c++;//
		d=d*10;//�����ڸ������� �� �� 
		
		//c�� �ڸ������� ex)�����ڸ���=3
		//d�� 9,90,900
		//sum�� 9,99,999
		//res�� �ڸ��� ������  �� 
		
	}
		// ������� �ȳ����� ���̿�  �ձ��ϴ� �� 
	res=res+((n-sum)*c);
	cout<<res; 

	return 0;

	
};
