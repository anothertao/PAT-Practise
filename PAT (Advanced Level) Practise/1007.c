#include<stdio.h>
int main(void){
	int n,i,j,p[10000],max,imax,jmax,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	max=p[0];
	imax=0;
	jmax=0;
	for(i=0;i<n;i++){
		sum=0;
		for(j=i;j<n;j++){
			sum+=p[j];
			if(sum>max){
				max=sum;
				imax=i;
				jmax=j;
			}
		}
	}
	if(max>=0)
	printf("%d %d %d",max,p[imax],p[jmax]);
	else
	printf("0 %d %d",p[0],p[n-1]);
	return 0;
}
