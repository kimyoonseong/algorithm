#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> map[10];
int main(){
	
	int a;
 	priority_queue<int> pQ;
 	while(true){
 		cin>>a;
 		if(a==-1) break;
 		if(a==0){
 			if(pQ.empty()) cout<<"-1"<<endl;
 			else{
 				cout<<pQ.top();
				pQ.pop();
 			}
 		}
 		else pQ.push(a);
	}
	return 0;
}
