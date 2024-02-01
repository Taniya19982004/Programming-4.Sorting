/*given N strings and Q quieries 
In each query you are given a string 
print frequency of that string 

N<=10^6
|S| <= 100
Q<=10^6
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<string,int> m;
int n;
 cout<<"enter a size of string";
cin>>n;
 cout<<"enter "<<n<< "strings"<<endl;

for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    m[s]++;
}
int q;
 cout<<"enter the no. of queries ";
cin>>q;
 cout<<"enter "<<q<< " queries "<<endl;
while(q--)
{
    string s;
    cin>>s;
    cout<<"the frequency of "<<s<<" is "<<m[s]<<endl;
}
return 0;
}