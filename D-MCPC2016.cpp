#include<bits/stdc++.h>
using namespace std;
main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double tab[n],maxi=0,index=0,res;
        for(i=0;i<n;i++)
        {
            cin>>tab[i];
            if(tab[i]>maxi)
            {
                maxi=tab[i];
                index=i;
            }
        }
            res=index;
           if(res==0)
            index=n-1;
            else
            index=res-1;
            for(i=index,j=res;i!=res;i--)
            {
                if(tab[j]<tab[i])
                break;
                j=i;
                if(i==0)
                i=n;
            } 
             if(i==res)
            {
                cout<<res+1<<" L"<<endl;
            }
            
            
            
            
            else
            {
           if(res==n-1)
            index=0;
            else
            index=res+1;
            for(i=index,j=res;i!=res;i++)
            {
                if(tab[j]<tab[i])
                break;
                j=i;
                if(i==n-1)
                i=-1;
            }
            if(i==res)
            {
                cout<<res+1<<" R"<<endl;
            }
            
            
            else
            cout<<"NO"<<endl;
            }
        
        
    }
}
