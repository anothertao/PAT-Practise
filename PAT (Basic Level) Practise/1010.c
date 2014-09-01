#include<stdio.h>
int main(void){
	int p[100][2],i,j;
	char ch;
	i=0;
	ch=' ';
	while(ch!='\n'){
		scanf("%d",&p[i][0]);
		scanf("%d",&p[i][1]);
		i++;
		ch=getchar();
	}
	if(p[0][1]==0)
	printf("0 0");
	else

	for(j=0;j<i;j++){
		if(p[j][1]!=0){
			p[j][0]*=p[j][1];
			p[j][1]-=1;
			
			if(j==0){
				printf("%d",p[j][0]);
			}else{
				printf(" %d",p[j][0]);
			}
			printf(" %d",p[j][1]);
		}
	}
	
	
	return 0;
}
