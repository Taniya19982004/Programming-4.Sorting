/*Given an array arr[] of n positive integers.Push all the zeros of the given array 
to the right end of the array while maintaining the order of non-zero elements.
Do the mentioned change in the array in-place.*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    vector<int>temp;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            temp.push_back(arr[i]);
	        }
	    }
	    
	    int s=temp.size();
        
	    for(int i=0;i<n;i++)
	    {
	        if(i<s)
	        {
	            arr[i]=temp[i];
	        }else{
	            arr[i]=0;
	        }
	    }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
	}
};

int main()
{
    int arr[6]={2,0,3,4,0,0};
    Solution obj;
    obj.pushZerosToEnd(arr,6);

}
/*  for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	          if(arr[i]==0 &&arr[j]!=0)
	        {
	            swap(arr[i],arr[j]);
	        }

	        }
	     
	    }
	}*/
