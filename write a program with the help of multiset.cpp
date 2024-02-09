#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"enter the number of test case";
    cin>>t;
    while(t--)
    {
        int n,k;//n=no of bags;
        //k=times;
        cout<<"enter the number of bags and minutes "<<endl;

        cin>>n>>k;
        multiset<long long > bags;
        for(int i=0;i<n; i++)
        {
           long long  int candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for(int i=0;i<k;i++)
        {
            auto last_it=(--bags.end());
            long long int candy_ct = *last_it;
            total_candies += candy_ct; 
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout<<"the total number of candies are "<<total_candies<<endl;

    }
return 0;
}