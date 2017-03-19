//试玩简单图问题
//邻接矩阵的方式储存
//试玩二维矩阵.
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<climits>
using namespace std;
int g[51][51];
int dist[55];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        memset(dist,0,sizeof(dist));
        int N,M;//N for nodes,M for edges
        scanf("%d%d",&N,&M);
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                g[i][j] = N;
            }
            g[i][i] = 0;
        }
        int x,y;
        for(int i=0;i<M;i++){
            scanf("%d%d",&x,&y);
            //无向图,要双向更新
            g[x][y] = 1;
            g[y][x] = 1;
        }
        //floyd
        for(int k=1;k<N+1;k++){
            for(int i=1;i<N+1;i++){
                for(int j=1;j<N+1;j++){
                    if((g[i][k]==N)||(g[k][j]==N)) continue;
                    if((g[i][j]==N)||(g[i][j]>g[i][k]+g[k][j]))
                        g[i][j] = g[i][k]+g[k][j];
                }
            }
        }
        for(int i=1;i<N+1;i++){
            for(int j=1;j<N+1;j++){
                dist[i]+=g[i][j];
            }
            // printf("dist i%d:%d\n",i,dist[i]);
        }
        int min=INT_MAX,mindex=-1;
        for(int i=1;i<N+1;i++){
            if(dist[i]<min){
                min = dist[i];
                mindex = i;
            }
        }
        printf("%d\n",mindex);
    }
}
