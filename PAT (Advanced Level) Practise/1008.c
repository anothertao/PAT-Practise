#include<stdio.h>
int main(void){
	int time,ele,aim,i,n;
	ele=0;
	time=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&aim);
		if(aim>ele)
		time+=(aim-ele)*6;
		else
		time+=(ele-aim)*4;
		ele=aim;
		time+=5;
		
	}
	printf("%d",time);
	return 0;
}
