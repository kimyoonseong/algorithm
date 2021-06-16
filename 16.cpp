#include <iostream>
#include <algorithm>
using namespace std;
//A~Z 65~90		-64
//a~z 97~122    -70
int a[60],b[60];
int main(){
	char str[100];
	int i;
	cin>>str;
	for( i=0;str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			a[str[i]-64]++;
		}
		else 
			a[str[i]-70]++;	
	}
	cin>>str;
	for( i=0;str[i]!='\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			b[str[i]-64]++;
		}
		else 
			b[str[i]-70]++;	
	}
	
	for( i=1;i<=52;i++){
		if(a[i]!=b[i]){
				cout<<"NO";
				exit(0);
		}
	}
	cout<<"YES";¸§ 
	/*
	if(a==b)
		cout<<"YES";//´Ù 
	else
		cout<<"NO";
	*/
	return 0;
};
