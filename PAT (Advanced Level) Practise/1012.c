#include<stdio.h>
int main(void){
	int n,m,i,j,k,p[2000][8],rank,count;
	long q[2000],ll;
	
	scanf("%d %d",&n,&m);
	getchar();
	for(i=0;i<n;i++){
		scanf("%ld %d %d %d",&q[i],&p[i][0],&p[i][2],&p[i][4]);
		getchar();
		p[i][6]=(p[i][0]+p[i][2]+p[i][4])/3;
	}
	for(j=0;j<=6;j+=2){
		rank=1;
		for(k=100;k>=0;k--){
			count=0;
			for(i=0;i<n;i++){
				if(p[i][j]==k){
					count++;
					p[i][j+1]=rank;
				}
				
			}
			if(count!=0)
			rank+=count;
		}
	}
	
	for(i=0;i<m;i++){
		scanf("%ld",&ll);
		count=0;
		for(j=0;j<n;j++){
			
			if(ll==q[j]){
				count=1;
				if(p[j][7]<=p[j][1]&&p[j][7]<=p[j][3]&&p[j][7]<=p[j][5])
				printf("%d A\n",p[j][7]);
				else if(p[j][1]<=p[j][7]&&p[j][1]<=p[j][3]&&p[j][1]<=p[j][5])
				printf("%d C\n",p[j][1]);
				else if(p[j][3]<=p[j][7]&&p[j][3]<=p[j][1]&&p[j][3]<=p[j][5])
				printf("%d M\n",p[j][3]);
				else if(p[j][5]<=p[j][7]&&p[j][5]<=p[j][3]&&p[j][5]<=p[j][1])
				printf("%d E\n",p[j][5]);
			}
			
			
		}
		if(count==0)
		printf("N/A\n");
		
	}
	return 0;
}
