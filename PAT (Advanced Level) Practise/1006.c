#include<stdio.h>
#include<string.h>
int main(void){
	char p[20],in[20],out[20];
	int n,i;
	int ih0,im0,is0,oh0,om0,os0;
	int ih=24,im=60,is=60,oh=0,om=0,os=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s %d:%d:%d %d:%d:%d",p,&ih0,&im0,&is0,&oh0,&om0,&os0);
		if(ih0<=ih){
			if(ih0!=ih||im0<=im){
				if(im0!=im||is0<=is){
					ih=ih0;
					im=im0;
					is=is0;
					strcpy(in,p);
				}
			}
		}
		
		if(oh0>=oh){
			if(oh0!=oh||om0>=om){
				if(om0!=om||os0>=os){
					oh=oh0;
					om=om0;
					os=os0;
					strcpy(out,p);
				}
			}
		}
	}
	
	printf("%s %s",in,out);
	return 0;
}
