#include<iostream>
#include<string>
#include<stack>
#include<cstring>
using namespace std;
char tp[30];
int main(){
    string buff;
    string tmp;
    stack<string> stk;
    while(getline(cin,buff)){
        int len=0;
        memset(tp,0,sizeof(tp));
       // bool inword = true;]
       bool ll = true;
       int index = 0;
        for(int i=0;i<buff.length();i++){
            if(buff[i]!=' '){
                ll = true;
                tp[len++]=buff[i];
            }else{
                index = i+1;
                ll = false;
                tp[len] = '\0';
                tmp = tp;
                stk.push(tmp);
                len = 0;
                memset(tp,0,sizeof(tp));
            }
        }
        if(ll){
            stk.push(buff.substr(index));
        }
        while(!stk.empty()){
            cout<<stk.top();
            if(stk.size()>1){
                cout<<" ";
            }
            stk.pop();
        }
        cout<<endl;
    }
}