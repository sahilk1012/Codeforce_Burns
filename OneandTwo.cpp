#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==2){
                count++;
            }
        }
        if(count==0) cout<<"1"<<endl;
        else if(count%2!=0) cout<<"-1"<<endl;
        else {
            int freq=count/2;
            int index=0;
            for(int i=1;i<=n;i++){
                if(a[i]==2) freq--;
                if(freq==0) {
                    index=i;
                    break;
                }
            }
            cout<<index<<endl;
        }
        
    }
}