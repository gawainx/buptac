#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        char res[35];
        int n,i;
        scanf("%u",&n);
        if(n == 0){
            printf("%d\n",n);
            continue;
        }
        for(i = 0;i<32;i++){
            res[i] = ('0'+(n%2));
            if(n == 1) break;
            n/=2;
        }
        for(int j = i;j>=0;j--){
            putchar(res[j]);
        }
        putchar('\n');
    }
}