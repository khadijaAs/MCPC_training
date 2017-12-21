#include<bits/stdc++.h>
using namespace std;
main()
{
    unsigned long long t,n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        double x[n+1],y[n+1],deg[n+1];
        
        for(long i=1;i<=n;i++){
            cin>>x[i]>>y[i];
            deg[i]=0;
            for(long j=1;j<i;j++){
                if((abs(x[i]-x[j])+abs(y[i]-y[j]))<=d){
                    deg[i]++;
                    deg[j]++;
                }
            }
        }
        
        unsigned long long ele=1,max=deg[1];
         for(long i=1;i<=n;i++)
         if(deg[i]>max){
             max=deg[i];
             ele=i;
         }
        cout<<ele<<endl;
    }
    return 0;
}
