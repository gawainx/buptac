#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int count = 0;
        char c;
        cin>>c;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(c == s[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}