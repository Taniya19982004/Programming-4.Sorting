#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums,int k)
{
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
    for(int i=0;i<nums.size();i++)
    {
       cout<<nums[i]<<" ";
    }

}

int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums, k);
}