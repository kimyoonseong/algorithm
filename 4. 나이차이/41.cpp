#include <iostream>

using namespace std;
int main(){
	int n,a[101],max=-21470000,min=21470000;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(max<=a[i]){
			max=a[i];	
		}
		else if(min>=a[i]){
			min=a[i];	
		}
	}
	cout<<max-min;
	
	
	return 0;
}
