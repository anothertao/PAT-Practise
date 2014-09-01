#include<stdio.h>

int test(int a,int b,int c){
	if (b==1&&a==c)
	return 1;
	b=b-1;
	c=c-a;
	if(b>=0&&c>=0){
		return test(a,b,c);
	}else return 0;
	
}

int main(void){
	char ch;
	int n,i;
	int step;
	int a,b,c;
	int flag;
	
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++){
		step=1;
		a=0;b=0;c=0;
		flag=1;
		ch=getchar();
		while(ch!='\n'){
			if(flag==1){
				if (step==1){
					if(ch=='P'){
						step=2;				
					}
					else if(ch=='A'){
						a++;
					}else flag=0;
				}
			

				
				else if(step==2){
					if(ch=='T'){
						step=3;				
					}
					else if(ch=='A'){
						b++;
					}else flag=0;
				}
				

				else if(step==3){
					if(ch=='A'){
						c++;
					}else flag=0;
				}
			
				
				
			}

			
			ch=getchar();	
		}
		
		if(flag==1&&test(a,b,c)==1)
		printf("YES\n");
		else printf("NO\n");

	}

	return 0;
}
