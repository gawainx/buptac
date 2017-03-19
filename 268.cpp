#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<map>
using std::vector;
using std::map;
using std::string;
char buff[20];
char cmd[10];;
map<int,vector<int> > relation;
bool pid[105];
void killKids(int x){
    if(!relation[x].empty()){
        //no empty
        vector<int>::iterator j;
        for(j=relation[x].begin();j!=relation[x].end();j++){
                pid[*j] = false;//kill it
                killKids(*j);//kill them all
        }
        relation[x].clear();
    }
}// kill kids method
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        relation.clear();//init
        memset(pid,0,sizeof(pid));
        pid[0] = true;
        int n;
        scanf("%d",&n);
        getchar();
        for(int z = n;z>0;z--){
            int x,y;
            gets(buff);
            if(sscanf(buff,"%s%d%d",cmd,&x,&y)==3){
                //FORK command
                if(pid[x]){
                    //x exist
                    relation[x].push_back(y);
                    pid[y] = true;
                }               
            }else{
                string act = cmd;
                if(act == "QUERY"){
                    if(pid[x]==1){
                        puts("Yes");
                    }else{
                        puts("No");
                    }
                }else if(act == "KILL"){
                    //end all kids
                    if(pid[x]&&(x!=0)){
                        killKids(x);
                        pid[x] = false;//kill x
                    }         
                    }  
                }
            }
    }
}
