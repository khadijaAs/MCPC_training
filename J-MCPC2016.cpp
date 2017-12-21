// clearing unordered_map
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        long n,k;
        cin>>n;
        std::unordered_map<std::string,int> m;
        k=2*n-1;
        while(k--)
        {
            cin>>s;
            m[s]++;
        }
    
  for (auto& x: m)  
            if(x.second%2){
                cout<<x.first<<endl;
                break;
            }
    }

  return 0;
