#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        } 
    }
}
void printArray(int arr[] ,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}
int main(){
int arr[]={10,1,7,6,19,14};
bubbleSort(arr,6);
printArray(arr, 6);
return 0;
}