#include<bits/stdc++.h>
using namespace std;
#define N 3000000000
vector<unsigned long long> s;
void fibonacci(){
    s.push_back(1);
unsigned long long a=1,b=1,x;
while(a+b<=N){

    s.push_back(a+b);
    x=a;
    a=b;
    b=x+b;
}
}

main(){
  
    fibonacci();
   long long t,n,x,l=s.size();
   double nbr;
    cin>>t;
    while(t--){
       cin>>n;
       nbr=0;
       map<double, double> m;
       for(long i=0;i<n;i++){
           cin>>x;
           nbr+=m[x];
           for(int j=0;j<l;j++)
                {
                    m[s[j]-x]++;
                }
               
       }
       printf("%.0f\n",nbr);
    }
    return 0;
}
