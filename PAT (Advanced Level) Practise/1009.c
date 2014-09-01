#include<stdio.h>
int main(void){
	float p[2000],a[10][2],b[10][2];
	int na,nb,i,j,count,max;
	scanf("%d",&na);
	for(i=0;i<na;i++){
		scanf("%f",&a[i][0]);
		scanf("%f",&a[i][1]);
	}
	scanf("%d",&nb);
	for(i=0;i<nb;i++){
			scanf("%f",&b[i][0]);
			scanf("%f",&b[i][1]);
	}
	max=a[0][0]+b[0][0];
	for(i=0;i<=max;i++){
		p[i]=0;
	}
	for(i=0;i<na;i++){
		for(j=0;j<nb;j++){
			p[(int)(a[i][0]+b[j][0])]+=a[i][1]*b[j][1];
		}
	}
	
	for(i=0;i<=max;i++){
		if(p[i]!=0)
		count++;
	}
	printf("%d",count);
	
	if(count!=0){
		for(i=max;i>=0;i--){
			if(p[i]!=0){
				printf(" %d %.1f",i,p[i]);
			}
		}
		
	}

	return 0;
}
