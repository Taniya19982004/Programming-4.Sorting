#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>&v)
{
    int count = 0;
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        {
           count++;
        }
    }
    if(v[n-1]>v[0])
    {
        count++;
    }
    if(count<=1)
    {
        return true;
    }
    else {
        return false;
    }
    
}

int main(){
    vector<int> v={3,4,5,1,2};
    bool ans=check(v);
    cout<<(ans?"true":"false");
    

return 0;
}