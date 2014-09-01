#include<stdio.h>
int main(void){
	int i,j,od;
	float p[3][3],odd=1.0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%f",&p[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		if(p[i][0]>=p[i][1]&&p[i][0]>=p[i][2]){
			printf("W ");
			odd*=p[i][0];
		}
		if(p[i][1]>=p[i][0]&&p[i][1]>=p[i][2]){
			printf("T ");
			odd*=p[i][1];
		}
		if(p[i][2]>=p[i][1]&&p[i][2]>=p[i][0]){
			printf("W ");
			odd*=p[i][2];
		}
	}
	odd=(odd*0.65-1.0)*2.0;
	od=(int)(odd*1000);
	if(od%10<5)
	printf("%.2f",odd);
	else
	printf("%.2f",odd+0.01);
	return 0;
}
