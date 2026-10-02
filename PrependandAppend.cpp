#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len=n;
        int j=n-1;
        for(int i=0;i<s.size();i++){
            if (i >= j) {
                break; 
            }
            if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0') ){
                len-=2;
                j--;
            }
            else {
                break;
            }
        }
        cout<<len<<endl;

    }
}