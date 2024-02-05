#include<iostream>
using namespace std;

void merge_arr(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        
        else if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
         arr3[k]=arr1[i];
            i++;
            k++;
    }
     while(j<n)
    {
         arr3[k]=arr1[j];
            j++;
            k++;
    }
}

void print_array(int arr3[],int o)
{
    for(int i=0;i<o;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main(){
int arr1[5]={1,3,5,7,9};
int arr2[4]={2,4,6,8};
int arr3[9];
merge_arr(arr1,5,arr2,4,arr3);
print_array(arr3,9);
return 0;
}