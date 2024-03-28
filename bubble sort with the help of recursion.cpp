#include<iostream>
using namespace std;

int bubble_sort(int arr[],int n)
{
    if(n==0||n==1)
    {
        for(int i=0;i<n;i++)
        return arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
   return bubble_sort(arr,n-1);
}
int main(){
    int arr[5]={8,6,11,4,1};
bubble_sort(arr,5);
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}