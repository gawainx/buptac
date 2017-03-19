#include <iostream>
using namespace std;
int main()
{
    int T,n;
    int buf[1000];//利用 n 的最大值对缓存数组进行初始化.
    int max,cmax;
    cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>buf[i];
        }
        max=cmax=1;
        for(int i=0;i<n;i++){
            if(buf[i]>cmax){
                if(buf[i]>max) {
                    cmax = max;
                    max = buf[i];
                }
                else cmax = buf[i];
            }
        }
            cout<<max<<" "<<cmax<<endl;
    }
}