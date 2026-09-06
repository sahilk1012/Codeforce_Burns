#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
   
    while(t>0){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int point=0;
        vector<int>dist;
        for(int i=0;i<n;i++){
            dist.push_back(a[i]-point);
            point=a[i];
        }

        dist.push_back(2*(x-a[n-1]));
        
        cout<<*max_element(dist.begin(),dist.end())<<endl;
        t--;
    }
}