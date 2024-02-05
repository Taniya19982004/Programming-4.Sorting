#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int find_closet_number(int a[],int n,int k)
    {
       int s=0;
       int e=n-1;
       int L_ans,R_ans;
       while(s<=e)
       {
        int mid=s+(e-s)/2;
        if(a[mid]==k)
        {
            return a[mid];
        }
        else if(a[mid]<k)
        {
            L_ans=a[mid];
            s=mid+1;
        }
        else if(a[mid]>k)
        {
            R_ans=a[mid];
            e=mid-1;
        }
       }
       int left=abs(k-L_ans);
       int right=abs(k-R_ans);
       if(left==right)
       {
         return R_ans;
       }
       if(left<right)
       {
         return L_ans;
       }
        if(left>right)
       {
         return R_ans;
       }
    }

};

int main(){
cout<<"enter the number of test case"<<endl;
int t;
cin>>t;
while(t--)
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    int k;
    cout<<"enter a key you want to be the closet number ";
    cin>>k;

    for(int i=0;i<n;i++)
    {
        cout<<"enter the array element "<<endl;
        cin>>a[i];
    }
    solution obj;

    int ans =obj.find_closet_number(a, n,k);
    cout<<"The closet number is "<<ans<<endl;
}
return 0;
}