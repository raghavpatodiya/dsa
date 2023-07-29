#include<bits/stdc++.h>
using namespace std;
int hashFunc(string s){
    int x= 0;
    for(int i = 0; i<s.size(); i++){
        x+=(s[i]);
    }
    return x/size(s);
}
int main(){
    int t=5;
    while(t--){
        string s;
        cin>>s;
        cout<<s<<" "<<hashFunc(s)<<endl;
        // for(int i = 0; i<s.size(); i++){
        //     cout<<int(s[i])<<endl;
        // }
    }
}
