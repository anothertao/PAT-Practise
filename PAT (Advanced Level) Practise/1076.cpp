#include<bits/stdc++.h>
using namespace std;
#define echo(x) cout<<#x<<" = "<<x<<endl;

int main(void){
    int n,l;
    cin>>n>>l;
    vector<int> myv[1005];
    int fans,be;
    for(int i=1;i<=n;i++){
        cin>>fans;
        for(int j=0;j<fans;j++){
            cin>>be;
            myv[be].push_back(i);
        }
    }
    int re;
    cin>>re;
    
    while(re--){
        int all[1005]={};
        int mod[1005]={};
        int person;
        cin>>person;
        all[person]=1;
        mod[person]=1;
        //for(int s=1;s<=n;s++)cout<<all[s]<<" ";cout<<endl;
        //if(l!=1)
        for(int i=0;i<l;i++){
            for(int j=1;j<=n;j++){
                if(all[j]){
                    for(int t=0;t<myv[j].size();t++){
                        mod[myv[j][t]]=1;
                    }
                }
            }
            memcpy(all,mod,sizeof(all));
            //cout<<sizeof(all);
            //for(int s=1;s<=n;s++)cout<<all[s]<<" ";cout<<endl;
        }
        int count=0;
        for(int i=1;i<=n;i++){
            if(all[i])count++;
        }
        cout<<count-1<<endl;
    }
    return 0;
}
