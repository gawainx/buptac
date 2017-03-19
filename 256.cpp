#include<cstdio>
int buff[105];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&buff[i]);
        }
        int cnt(1),maxcount(0);
        if(n>2){
            int tmpd = buff[1] - buff[0];
            for(int i=1;i<n;i++){
                if((buff[i]-buff[i-1])==tmpd){
                    cnt++;
                    if(maxcount<cnt){
                        maxcount = cnt;
                }
            }else{
                tmpd = buff[i] - buff[i-1];
                cnt = 2;
            }
        }
        }else if(n == 1){
            maxcount = 1;
        }else{
            maxcount = 2;
        }
        printf("%d\n",maxcount);
    }
}