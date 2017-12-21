#include<bits/stdc++.h>
using namespace std;
main(){
    long t,a,b;
    char c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if((c=='>' && a>b) || (c=='<' && a<b))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
