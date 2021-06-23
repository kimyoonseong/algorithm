int main(){
	//freopen("input.txt","rt",stdin);
	char a[100],b[100];
	int p=0;
	gets(a); //줄바꿈이 구분자인 gets를 쓰자 
	for(int i=0; a[i]!='\0'; i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
			}
			else b[p++]=a[i]; 
		}
		
	}
	b[p]='\0';
	cout<<b;

	return 0;

	
};
