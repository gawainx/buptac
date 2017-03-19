#include <cstdio>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int a;
        scanf("%d",&a);
        if(a>=0) printf("%d\n",a);
        else{
            printf("%d\n",(~a+1));
        }
    }
}