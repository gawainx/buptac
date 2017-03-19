#include<cstdio>
#include<map>
#include<climits> //new things
using namespace std;
int buf[105];
int req[105];
int main(){
    int T,N,M;
    scanf("%d",&T);
    while(T--){
        map <int,int> loc;
        map <int,int>::iterator j;//req-index
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&buf[i]);
            //loc[buf[i]] = -1;
        }
        scanf("%d",&M);
        for(int i=0;i<M;i++){
            scanf("%d",&req[i]);
            loc[i] = -1;
        }
        for(int i=0;i<M;i++){ //search for loc
            int dis = INT_MAX;
            int index = -1;
            for(int  k = 0;k<N;k++){ //search buff
                if(buf[k]<req[i]) continue;
                else{ //buf > request, allow to loc
                    if((buf[k] - req[i]) < dis){
                    //update dis and index 
                        dis = buf[k] - req[i];
                        index = k;
                    }
                }
            }
            //end one search
            if(index != -1){
                loc[i] = buf[index];
                buf[index] = 0;//delete from buffer
            }
        }}
        for(int i=0;i<M;i++){
            if(i != M-1){
                if(loc[i] == -1){
                    printf("NULL ");
                }else{
                    printf("%d ",loc[i]);
                }
            }else{
                if(loc[i] == -1){
                    printf("NULL\n");
                }else{
                    printf("%d\n",loc[i]);
                }
            }
        }
    }
}