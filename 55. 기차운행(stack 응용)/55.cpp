#include<iostream>
#include<stack>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
	stack<int> s;
	int i,j=1,n,m;
	cin>>n;
	//vector<int> a(n+1);
	
//	for(i=1;i<=n;i++){
		//a[i]=i;
	//}
	vector<char> str;
	for(i=1;i<=n;i++){
		cin>>m;
		s.push(m);
		str.push_back('P');	
		while(1){
			if(s.empty()) break;
			if(j==s.top()){//a[j]; 
				s.pop();
				j++;
				str.push_back('O');	
			}
		else break;	
	    }
	}
	
	if(!s.empty()) cout<<"impossible"<<endl;
	else 
		for(i=1;i<str.size();i++) cout<<str[i];//10dÀ» ¸®ÅÏ 		

	return 0;
}

