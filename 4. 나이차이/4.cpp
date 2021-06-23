#include <iostream>

using namespace std;

int main(){
	int n,i,dis,max=0,min=300;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>dis;
		if(dis>max)
			max=dis;
		if(dis<min)
			min=dis;
	}
	cout<<max-min;
	return 0;
	
	
};
