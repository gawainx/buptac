#include <cstdio>
#include <cstring>
long long buff[105];
long long tree[105];
int main(){
    memset(tree,0,sizeof(tree));
    int T,root = -1;
    scanf("%d",&T);
    while(T--){
        int n,j;
        scanf("%d",&n);
        for(int i=1;i<n+1;i++){
            scanf("%lld",&buff[i]);
        }
        for(int i=1;i<n+1;i++){
            j = 1;
            if(i == 1){
                tree[1] = buff[i];
                printf("%d\n",root);
                continue;
            }
            else{
                while(j<105){
                    if(buff[i]<= tree[j]){
                        if(tree[2*j]==0){
                            printf("%lld\n",tree[j]);
                            tree[2*j] = buff[i];
                            break;
                        }else{
                            j*=2;
                        }
                    }else{
                        //buff[i] > tree[j]
                        if(tree[2*j+1]==0){
                            printf("%lld\n",tree[j]);
                            tree[2*j+1] = buff[i];
                            break;
                        }else{
                            j = j*2+1;
                        }
                    }
                }
            }
        }
        }
}