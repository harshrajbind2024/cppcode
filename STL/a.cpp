#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<pair<string,string>,vector<int>> mpv;
    set<pair<int,int>> sp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            mpv[{fn,ln}].push_back(x);
        }
    }

    for(auto value:mpv){
        auto &full_name=value.first;
        auto &list=value.second;
        for(auto element:list){
            cout<<element<<" ";
        }
        cout<<endl;
        
    }
}