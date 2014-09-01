#include<stdio.h>
#include<string.h>
struct call{
	char name[21];
	int month;
	int day;
	int hour;
	int min;
	int line;
	int exist;
	
}list[1000];
int main(void){
	int i,j,p,fee[24],n,max,number;
	char ch,s[10],ma[22];
	struct call people[1000][1000];
	int count[1000];
	
	for(i=0;i<24;i++)
	scanf("%d",&fee[i]);
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		list[i].exist=1;
		
		scanf("%s",(list[i]).name);
		getchar();
		
		list[i].month=10*(getchar()-'0');
		list[i].month+=getchar()-'0';
		getchar();		
		list[i].day=10*(getchar()-'0');
		list[i].day+=getchar()-'0';
		getchar();
		list[i].hour=10*(getchar()-'0');
		list[i].hour+=getchar()-'0';
		getchar();
		list[i].min=10*(getchar()-'0');
		list[i].min+=getchar()-'0';	
		getchar();
		scanf("%s",s);
		if(strcmp(s,"on-line")==0)
		list[i].line=1;
		else list[i].line=0;
			
	}
	

	j=0;
	number=0;
	while(number<n){
		strcpy(ma,"\0");
		for(i=0;i<n;i++){
			if(list[i].exist==1){
				if(strcmp(list[i].name,ma)>0)
				strcpy(ma,list[i].name);
			}
		}
		p=0;
		for(i=0;i<n;i++){
			if(strcmp(list[i].name,ma)==0){
				people[j][p]=list[i];
				list[i].exist=0;
				number++;
				p++;
			}
		}
		count[j]=p;
		j++;
	}

	
	return 0;
}
