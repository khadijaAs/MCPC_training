#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long tab[n][n];
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>tab[i][j];

        bool test =true;
         for(int i=0;i<n && test;i++)
            for(int j=0;j<n;j++)
               if((j!=0 && (tab[0][i]^tab[0][j])!=tab[i][j]) || (j==0 && tab[i][j]!=tab[j][i]) || (i==j && tab[i][j]!=0)){
                   
                    cout<<"-1"<<endl;
                    test=false;
                    break;
               }
    if(test){
    cout<<"0";
    for(int i=1;i<n;i++)
            cout<<" "<<tab[0][i];
    cout<<endl;
        
    }
               
       
    }
    return 0;
}
