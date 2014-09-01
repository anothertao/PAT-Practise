#include<bits/stdc++.h>
using namespace std;
int main(void){
    char a[20],b[20];
    char * x,*y;
    int radix,tag;
    cin>>a>>b>>tag>>radix;
    if(tag==1){
        x=a;
        y=b;
    }else{
        x=b;
        y=a;
    }
    char*px,*py;
    long long x1,y1;
    x1=0;
    px=x;
    while(*px!='\0'){
        x1*=radix;        
        char t=*px;
        int s;
        if(t<='9'&&t>='0')
            s=t-'0';
        else
            s=t-'a'+10;
        px++;
        x1+=s;
       // cout<<s<<endl;
    }
    int ra;
    
    py=y;
    int da=0;
        while(*py!='\0'){  
            char t=*py;
            int s;
            if(t<='9'&&t>='0')
                s=t-'0';
            else
                s=t-'a'+10;
            if(s>da)da=s;
            py++;
        }
        
    ra=da+1;
    
  // cout<<x1<<" "<<ra<<" ";
    if(strlen(y)==1){
        int s=*y;
        if(s<='9')s-='0';
        else s=s-'a'+10;
        if(x1==s)cout<<ra<<endl;
        else cout<<"Impossible"<<endl;
    }else{
        //1a 1a 2 13

    while(1){
        y1=0;
        py=y;
        while(*py!='\0'){
            y1*=ra;        
            char t=*py;
            int s;
            if(t<='9'&&t>='0')
                s=t-'0';
            else
                s=t-'a'+10;
            py++;
            y1+=s;
        }
        //cout<<y1<<"~"<<x1<<endl;
        if(y1>=x1)break;
        //cout<<ra<<" "<<y1<<endl;
        ra++;
        
    }
    //111 1 1 2
    if(y1==x1)cout<<ra<<endl;
    else    cout<<"Impossible"<<endl;
    }    
    return 0;
}
