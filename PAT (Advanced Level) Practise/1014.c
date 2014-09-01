#include<stdio.h>

int main(void){
	int n,m,k,q;
	int a[1000][5];
	int i,j,p,x;
	int count,out;
	int * queue[20][20];
	int hour,minuet;
	
	scanf("%d",&n);
	scanf("%d",&m);	 
	scanf("%d",&k);
	scanf("%d",&q);
	
	for(i=0;i<k;i++){
		scanf("%d",&a[i][0]);
		a[i][3]=i;
		
	}
	
	for(j=0;j<m;j++){
			for(i=0;i<n;i++){
				queue[i][j]=NULL;
			}
	}
	
	
	p=0;
	
	for(j=0;j<m;j++){
		if(p>=k)
		break;
		
		for(i=0;i<n;i++){
			if(p>=k)
			break;
			
			if(queue[i][j]==NULL){
				queue[i][j]=a[p];
				p++;
				if(p>=k)
				break;	
			}
		}
	}
	
	hour=8;
	minuet=0;
	
	count=0;
	
	while(count<k){
		if(minuet==59){
			hour++;
			minuet=0;
		}else{
			minuet++;
		}
		//printf("\ntime[%d:%d]",hour,minuet);
		
		
		for(i=0;i<n;i++){
			if(queue[i][0]==NULL)
			continue;
			
			queue[i][0][0]--;
						
			if(queue[i][0][0]==0){
				
				count++;
				
				queue[i][0][1]=hour;
				queue[i][0][2]=minuet;
				
				//printf("\n the %dth finish",queue[i][0][3]);
				
				if(m!=1)
				for(j=0;j<m-1;j++){
					queue[i][j]=queue[i][j+1];
				}
				queue[i][j]=NULL;
											
			}
			
		}
			
		for(j=0;j<m;j++){
			if(p>=k)
			break;
			
			for(i=0;i<n;i++){
				if(p>=k)
				break;
				
				if(queue[i][j]==NULL){
					queue[i][j]=a[p];
					p++;
					if(p>=k)
					break;	
				}
			}
		}		
		
	}
	
//	for(i=0;i<k;i++){
//		printf("\n[%d](%d)%d:%d",i,a[i][0],a[i][1],a[i][2]);
//	}
	
	for(i=0;i<q;i++){
		scanf("%d",&x);
		x--;
		if(a[x][1]>17||a[x][1]==17&&a[x][2]!=0)
		printf("Sorry\n");
		else{
			if(a[x][1]<10)
			printf("0");
			printf("%d",a[x][1]);
			
			printf(":");
			
			if(a[x][2]<10)
			printf("0");
			printf("%d",a[x][2]);
			
			printf("\n");
		}
	}
		
	return 0;
}
