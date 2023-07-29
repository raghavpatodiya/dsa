#include<iostream>
using namespace std;

bool palindrome(string s){
    int n =s.size();

    if(n%2==0){
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]){      
            }
            else{
                return false;
            }
        }
        return true;

    }
    else{
        for(int i=0; i<=n/2;i++){
           if(s[i]==s[n-i-1]){
            }
            else{
                return false;
            } 
        }
        return true;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    cout<<palindrome(s)<<endl;
    }

    return 0;
}