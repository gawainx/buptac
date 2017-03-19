#include<cstdio>
int buf[100];//大数列作为全局变量.
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        bool sig = !(n%2 == 0);
        int loc = n/2;
        for(int i=0;i<n;i++){
            scanf("%d",&buf[i]);
            if(i == loc){
                if(sig){
                    printf("%d\n",buf[i]);
                }
                else{
                    // printf("%g\n",(buf[loc-1]+buf[loc])/2.0);
                    if((buf[loc-1]+buf[loc])%2 == 0)
                        printf("%d\n",(buf[loc-1]+buf[loc])/2);
                    else printf("%g\n",(buf[loc-1]+buf[loc])/2.0);
                }
            }
        }
    }
}