#include<bits/stdc++.h>
using namespace std;
#define echo(x) cout<<#x<<" = "<<x;
void disp(int x){
    if(x==-1)cout<<x;
    else printf("%05d",x);

}
int main(void){
    
    map<int,int> mm1;
    map<int,int> mm2;
    vector<int> mv;
    int head,n,k;
    cin>>head>>n>>k;
    for(int i=0;i<n;i++){
        int add,num,nadd;
        cin>>add>>num>>nadd;
        mm1[add]=num;
        mm2[add]=nadd;
    }
    int now=head;
    while(now!=-1){
        mv.push_back(now);
        now=mm2[now];
    }
    n=mv.size();
    int i=0;
    if(k>1){
        for(i=0;i+k<=n;i+=k){
            for(int j=i+k-1;j>=i;j--){
                disp(mv[j]);
                printf(" %d ",mm1[mv[j]]);
                if(j==i){
                    if(i+k+k<=n){
                        disp(mv[i+k-1+k]);
                    }else{
                        disp(mm2[mv[i+k-1]]);
                    }                    
                }
                else {
                    disp(mv[j-1]);
                }
                
                cout<<endl;
            }
        }        
    }
        for(;i<n;i++){
            disp(mv[i]);
            printf(" %d ",mm1[mv[i]]);
            disp(mm2[mv[i]]);
            cout<<endl;
        }
/*    if(k>=1){
        for(int i=k-1;i>=0;i--){
            disp(mv[i]);
            printf(" %d ",mm1[mv[i]]);
            if(i==0){
                if(n==k)cout<<-1;
                else disp(mv[k]);
            }else{
                disp(mv[i-1]);
            }
            cout<<endl;
        }       
    }
    if(k!=n){
        for(int i=k;i<n;i++){
            disp(mv[i]);
            printf(" %d ",mm1[mv[i]]);
            disp(mm2[mv[i]]);
            cout<<endl;
        }
    }*/

    return 0;
} 

/*
00100 6 3
00000 4 99999
00100 1 12309
68237 6 -1
33218 3 00000
99999 5 68237
12309 2 33218

12345 2 1
00234 99 -1
12345 434 00234



*/
/*
������

ʱ��	���	�÷�	��Ŀ	����	��ʱ(ms)	�ڴ�(kB)	�û�
9��02�� 22:45	 ������ȷ	22	1074	C++ (g++)	2	376	nblintao
���Ե�

���Ե�	���	��ʱ(ms)	�ڴ�(kB)	�÷�/����
0	����ȷ	2	372	12/12
1	����ȷ	2	376	3/3
2	����ȷ	2	256	2/2
3	����ȷ	2	256	2/2
4	����ȷ	2	376	2/2
5	���г�ʱ			0/3
6	����ȷ	1	256	1/1

*/
