#include<bits/stdc++.h>
using namespace std;
class record{
    public:
        int time;
        char* context;
        record(char *a){
            context = new char[strlen(a)+1];
            strcpy(context,a);
            time=1;
        }
        bool operator<(const record& b)const{
            if(this->time!=b.time)return this->time>b.time;
            return strcmp(this->context,b.context)<0;
        }
};
int main(void){
    vector<record> myv;
    char s[1048580];
    gets(s);
    int sp=0;
    int wp=0;
    char word[1000];
    map<string,>
    char x;
    while(s[sp]!='\0'){
        x=s[sp];
        if(x>='0'&&x<='9' || x>='a'&&x<='z' || x>='A'&&x<='Z'){
            x=s[sp];
            if(x>='A'&&x<='Z')x=x-'A'+'a';
            word[wp++]=x;
       }else{
            if(wp!=0){
                word[wp]='\0';
                //cout<<word<<endl;
                int i;
                for(i=0;i<myv.size();i++){
                    if(strcmp(word,myv[i].context)==0)break;
                }
                if(i==myv.size()){
                    myv.push_back(record(word));
                }else{
                    myv[i].time++;
                }
                wp=0;
            }
        }
        sp++;
    }
            if(wp!=0){
                word[wp]='\0';
                //cout<<word<<endl;
                int i;
                for(i=0;i<myv.size();i++){
                    if(strcmp(word,myv[i].context)==0)break;
                }
                if(i==myv.size()){
                    myv.push_back(record(word));
                }else{
                    myv[i].time++;
                }
                wp=0;
            }
    sort(myv.begin(),myv.end());
    if(myv.size()!=0)
        cout<<myv[0].context<<" "<<myv[0].time<<endl;
    return 0;
}
