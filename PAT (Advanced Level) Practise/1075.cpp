#include<bits/stdc++.h>
using namespace std;
#define echo(x) cout<<#x<<" = "<<x<<endl;
class record{
    public:
        int ti[5];
        int id;
        int full;
        int never;
        int total;
        record(int id):id(id){ti[0]=-2;ti[1]=-2;ti[2]=-2;ti[3]=-2;ti[4]=-2;
        full=0;
         never=0;
         total=0;        
    }
     bool operator<(const record& rb)const{
        if((this->total)>(rb.total)){
            return 1;
        }
        else if((this->total)<(rb.total))return 0;
        else{
            if((this->full)>rb.full)return 1;
            else if((this->full)<rb.full)return 0;
            else{
                return this->id < rb.id;
            }
        }
   }      
};

int main(void){
    int n,k,m;
    cin>>n>>k>>m;
    vector<record> mv;
    map<int,int> mm;
    int ti[10];
    for(int i=0;i<k;i++){
        cin>>ti[i];
    }
    for(int i=0;i<m;i++){
        int id,pro,score;
        cin>>id>>pro>>score;
        pro--;
        if(mm.count(id)==0){
            mv.push_back(record(id));
            mm[id]=mv.size()-1;
            
        }
        record& pr = mv[mm[id]];        
        if(pr.ti[pro] < score)pr.ti[pro] = score;
    }
    for(int i=0;i<mv.size();i++){
        for(int j=0;j<k;j++){
            if((mv[i].ti[j])==ti[j])mv[i].full++;
            if((mv[i].ti[j])<0)mv[i].never++;
            else mv[i].total+=mv[i].ti[j];
        }
    }
std::sort(mv.begin(),mv.end());
   
//    cout<<mv[0].total<<mv[4].total<<(mv[0]<mv[4]);
int sc;
int pa1=1;
int pa2=0;
    for(int i=0;i<mv.size();i++){
        record& re=mv[i];
        if(re.never==k)continue;
        pa2++;
        if(i==0)sc=re.total;
        if(sc==re.total){
            cout<<pa1;
        }else{
            cout<<pa2;
            pa1=pa2;
            sc=re.total;
        }
        printf(" %05d %d",re.id,re.total);
        
        
        for(int j=0;j<k;j++){
            if(re.ti[j]==-2)
            cout<<" -";
            else if(re.ti[j]==-1)
            cout<<" 0";
            else
                cout<<" "<<re.ti[j];
        }
        cout<<endl;
    }
    return 0;
}
