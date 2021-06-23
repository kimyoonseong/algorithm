#include <iostream>

using namespace std;

int main(){
	//freopen("input.txt","rt",stdin);
	char a[100];
	cin>>a;
	int cnt=0;
	for(int i=0; a[i]!='\0'; i++){
		if(a[i]==40) cnt++;
		else if(a[i]==41) cnt--;
		//if(cnt<0) break;
	}
	if(cnt==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
