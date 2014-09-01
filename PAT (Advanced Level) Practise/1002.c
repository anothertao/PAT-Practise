#include<stdio.h>
int main(void){
	float a[10][2],b[10][2],temp;
	int na,nb,i,j,max=0,pa=0,pb=0,count=0;
	
	scanf("%d",&na);
	for(i=0;i<na;i++){
		scanf("%f",&a[i][0]);
		scanf("%f",&a[i][1]);
		if(a[i][0]>max)
		max=a[i][0];
	}
	scanf("%d",&nb);
	for(i=0;i<nb;i++){
		scanf("%f",&b[i][0]);
		scanf("%f",&b[i][1]);
		if(b[i][0]>max)
		max=b[i][0];
	}
	
	i=0;j=0;
	while(i!=na||j!=nb){
		count++;
		if(j==nb){
			i++;
		}else if(i==na){
			j++;
		}else{
			if(a[i][0]>b[j][0])
			i++;
			else if(a[i][0]<b[j][0])
			j++;
			else if(a[i][0]==b[j][0]){
			
				if(a[i][1]+b[j][1]==0){
					count--;
				}
				i++;j++;
		}
		}
	
	}
	printf("%d",count);
	
	
	
	i=0;j=0;
	while(i!=na||j!=nb){
		
		if(j==nb){
			printf(" %.0f %.1f",a[i][0],a[i][1]);
			i++;			
		}else if(i==na){
			printf(" %.0f %.1f",b[j][0],b[j][1]);
			j++;			
		}else{
			if(a[i][0]>b[j][0]){
				printf(" %.0f %.1f",a[i][0],a[i][1]);
				i++;	
			}
			
			else if(a[i][0]<b[j][0]){
				printf(" %.0f %.1f",b[j][0],b[j][1]);
				j++;
			}
			
			else if(a[i][0]==b[j][0]){
				if(a[i][1]+b[j][1]!=0){
					printf(" %.0f %.1f",a[i][0],a[i][1]+b[j][1]);
				}
			
			i++;j++;
		
			}
		}
	
	}
	
	
	
	
	
/*
	if(max==0)
	printf("1 0 %d",a[0][1]+b[0][1]);
	else{
		for(i=max;i>=0;i--){
			temp=0.0;
			if(a[pa][0]==i){
				temp+=a[pa][1];	
				pa++;
			}
			if(b[pa][0]==i){
				temp+=b[pb][1];	
				pb++;
			}
			if(temp!=0)
			printf(" %d %.1f",i,temp);
		}
	}*/
	return 0;
}
