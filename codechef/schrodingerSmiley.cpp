#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

void emoticons(int N, string S){
    int count = 0;
    for(int i=0; i<N;i++){
        if(S[i]==':' && S[i+1]==')'){
            count+=1;
        }
    }
    std::cout<<count<<endl;
}
    
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;
        cin>>N;
        cin>>S;
        emoticons(N, S);
    }
    return 0;
}
