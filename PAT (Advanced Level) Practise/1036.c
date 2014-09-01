#include<stdio.h>
struct{
	char name[11];
	int gender;
	char id[11];
	int score;
}st[1000];
int main(void){
	int n,i,m,f;
	char ch;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",st[i].name);
	//	printf("%s",st[i].name);
		getchar();
		ch=getchar();
		if(ch=='M')
		st[i].gender=1;
		else
		st[i].gender=0;
	//	printf("%d",st[i].gender);
		getchar();
		scanf("%s",st[i].id);
	//	printf("%s",st[i].id);
		getchar();
		
		scanf("%d",&st[i].score);
	//	printf("%d",st[i].score);
		
		
	}
	
	m=-1;
	f=-1;
	
	for(i=0;i<n;i++){
		if(st[i].gender==1){
			if(m==-1)
			m=i;
			else if(st[m].score>st[i].score)
			m=i;
		}else{
			if(f==-1)
			f=i;
			else if(st[f].score<st[i].score)
			f=i;
		}
	}
	
	if(f==-1)
	printf("Absent\n");
	else
	printf("%s %s\n",st[f].name,st[f].id);

	if(m==-1)
	printf("Absent\n");
	else
	printf("%s %s\n",st[m].name,st[m].id);
	
	if(f==-1||m==-1)
	printf("NA\n");
	else
	printf("%d\n",st[f].score-st[m].score);

	return 0;
}
