#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cw=0,cl=0,cd=0;
    for(int x=1;x<=6;x++){
        
        if(abs(x-a)>abs(x-b)) cl++;
        else if(abs(x-a)<abs(x-b)) cw++;
        else cd++;
    }
     cout << cw << " " << cd << " " << cl << endl;
}