#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int i,n,cnt,m[100001],max,o;
	freopen("24.txt","r",stdin);
	cin>>n;

	cnt=1;
	max=1;
	/*cin>>o;
	for(i=2;i<=n;i++){
		cin>>m;
		if(m>=o){
			cnt++;
			if(cnt>max) max=cnt;
		}
		else cnt=1;
		o=m;
		
	}
	cout<<max;
	*/
	
	//cin>>m[1];
	for(i=1;i<=n;i++){
	 	cin>>m[i];
	
	} //MAX =3
	for(i=2;i<=n;i++){
		if(m[i]>=m[i-1]){
			cnt++;
			if(cnt>max){
				max=cnt;
				//cout<<max<<'\n';
			}
		}
		else 
			cnt=1;			
	}
	cout<<max;
	
	//왜배열은 80점이지 
return 0;
};
