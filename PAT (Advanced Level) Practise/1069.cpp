#include<bits/stdc++.h>
using namespace std;
bool gr(char x,char y){
    return y<x;
}
int main(void){
    int a;
    int first = 1;
    cin>>a;
    char b[5];
    b[0]=a/1000+'0';
    b[1]=a/100%10+'0';
    b[2]=a/10%10+'0';
    b[3]=a%10+'0';
    b[4]='\0';
    if(b[0]==b[1]&&b[1]==b[2]&&b[2]==b[3]){
        printf("%s - %s = 0000\n",b,b);
    }else{
        while(first || a!=6174){
            first=0;
            char c[5];
            strcpy(c,b);
            sort(c,c+4);
            //cout<<c;
            char d[5];
            strcpy(d,b);
            sort(d,d+4,gr);
            //cout<<d;
            int dd=(d[0]-'0')*1000+(d[1]-'0')*100+(d[2]-'0')*10+(d[3]-'0');
            int cc=(c[0]-'0')*1000+(c[1]-'0')*100+(c[2]-'0')*10+(c[3]-'0');
            a=dd-cc;
            b[0]=a/1000+'0';
            b[1]=a/100%10+'0';
            b[2]=a/10%10+'0';
            b[3]=a%10+'0';
            b[4]='\0';
            printf("%s - %s = %s\n",d,c,b);
            
            
        }
    }
    return 0;
}
