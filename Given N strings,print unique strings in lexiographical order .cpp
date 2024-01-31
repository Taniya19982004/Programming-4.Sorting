/*Given N strings, print unique strings in lexiographical order 
with their frequency
N <=10^5
|S| <=100
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    cout<<"enter a size of string";
    int n;
    cin>>n;
    cout<<"enter "<<n<< "strings"<<endl;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        //m[s]=m[s]+1;
    }
    cout<<endl<<endl;
   for(auto pr : m)
   {
    cout<<pr.first<<" "<<pr.second<<endl;
   }

return 0;
}