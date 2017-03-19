/*
USER_ID: test#gawainx
PROBLEM: 179
SUBMISSION_TIME: 2017-03-17 20:38:13
*/
#include<cstdio>
int main(){
    int T;
    scanf("%d",&T);
    getchar();
    while(T--){
        char num;
        int sum=0;
        while((num=getchar())!='\n'){
            sum+=(num-'0');
            if(sum>10){
                sum = (sum+8)%9+1;
            } 
        }
        if(sum>9){
            sum = sum%10+sum/10;
        }
        printf("%d\n",sum);
    }
}