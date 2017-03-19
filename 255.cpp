#include<cstdio>
int buf[100];
int main()
{
    int T,n;
     
    scanf("%d",&T);
    while(T--){
        int nods=0,ods=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
        }
        for(int i=0;i<n;i++){
            if(buf[i]%2 == 0){
                //not odd
                nods += buf[i];
            }else{
                //odd
                ods += buf[i];
            }
        }
        printf("%d %d\n",ods,nods);
    }
}