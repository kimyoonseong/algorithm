#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int i,n,k,pos=0, bp=0, cnt=0;
	cin>>n;
	cin>>k;
	vector<int> prince(n+1);
	while(1){
		pos++;
		if(pos>n) pos=1;//8���� Ŀ���¼��� 1�̵ȴ� �ֳ��ϸ� ���������ϱ� 
		if(prince[pos]==0){
			cnt++;
			if(cnt==k){
				prince[pos]=1;//
				cnt=0;// �ٽ� k�� ���������� �����ϴϱ� �ʱ�ȭ 
				bp++;// �����Ϸ����¿��� �ϳ��� �߰� 
			}
		}
		if(bp==n-1) break;// ���Ϸ��� �Ѹ��� ���ƾ��ϴϱ� -1 
	}
	for(i=1;i<=n;i++){
		if(prince[i]==0){
			cout<<i;
			break;
		}
	}
	return 0;
}
