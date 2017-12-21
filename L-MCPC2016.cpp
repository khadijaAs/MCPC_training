#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long nbr=0,n,a;
        cin>>n;
        while(n--){
            cin>>a;
            nbr+=a/30;
            if(a0)
            nbr++;
        }
        cout<<nbr<<endl;
    }
    return 0;
}
