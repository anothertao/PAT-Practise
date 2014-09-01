#include<stdio.h>
struct{
	char name[11];
	char pass[11];
	int p;
}st[1000];
int main(void){
	int n,i,j;
	char ch;
	int flag=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",st[i].name);
		getchar();
		ch=getchar();
		j=0;
		st[i].p=0;
		do{
			
			if(ch=='1'){
				(st[i].pass)[j]='@';
				st[i].p=1;			
			}else
			if(ch=='0'){
				(st[i].pass)[j]='%';
				st[i].p=1;			
			}else
			if(ch=='l'){
				(st[i].pass)[j]='L';
				st[i].p=1;			
			}else
			if(ch=='O'){
				(st[i].pass)[j]='o';
				st[i].p=1;			
			}

			else{
				(st[i].pass)[j]=ch;
				
			}
			
			
			
			j++;
			ch=getchar();
		}while(ch!='\n');
		
		if(st[i].p==1)
		flag++;

		
		(st[i].pass)[j]='\0';
	//	printf("%s",st[i].pass);
	}
	
	if(flag==0){
		if(n==1)
		printf("There is 1 account and no account is modified");
		else
		printf("There are %d accounts and no account is modified",n);
	}else{
		printf("%d\n",flag);
		for(i=0;i<n;i++){
			if(st[i].p==1){
				printf("%s %s\n",st[i].name,st[i].pass);
			}
		}
	}
	return 0;
}
