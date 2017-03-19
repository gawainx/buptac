#include<cstdio>
#include<algorithm>
int a[4];
bool cmp(int x,int y){
    return x>y;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        for(int i=0;i<4;i++){
            scanf("%d",&a[i]);
        }
        std::sort(a,a+4,cmp);
        if((a[0]<(a[1]+a[2])) || (a[0]<(a[2]+a[3]))){
            puts("YES");
        }else if(a[1]<(a[2]+a[3])){
            puts("YES");
        }else{
            puts("NO");
        }
    }
}