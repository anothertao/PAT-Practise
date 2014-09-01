#include<stdio.h>

int main(void){
	int a[480000][2];
	int m,n,temp,i,j,k,finish;
	
	
	
	scanf("%d%d",&m,&n);
	
	k=0;
	
	for(i=0;i<m*n;i++){
		scanf("%d",&temp);
		
		finish=0;
		
		for(j=0;j<k;j++){
			if(finish=1)
			break;
			
			if(a[j][0]==temp){
				a[j][1]++;
				finish=1;
				break;
			}
			
		}
		
		if(!finish){
			a[k][0]=temp;
			a[k][1]=1;
			k++;
		}
		
		
	}
	
	for(i=0;i<k;i++){
		if(a[i][1]>m*n/2)
		break;
	}
	printf("%d",a[i][0]);
	return 0;
}
