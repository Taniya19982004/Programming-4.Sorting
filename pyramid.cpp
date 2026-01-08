#include <bits/stdc++.h>
using namespace std;
 int nCr(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
   }

int main(){
    int n;
    cout<<"Enter the no. of rows\n";
    cin>>n;
    for(int i=0;i<n;i++){
       
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=1;j<=i+1;j++){
           
            cout<<j;
        }
        for(int j = i; j>0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
cout<<endl;
cout<<endl;


    for(int i=1;i<=n;i++){
       
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;


     for(int i=0;i<=n;i++){
       
        for(int j=1; j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;


    for(int i=0;i<=n;i++){
       
        for(int j=0; j<=n;j++){
            if(i==0||i==n ||j==0 || j==n){
                 cout<<"*";
            }
            else if(j>0 && j<n){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

     for(int  i=0;i<=n;i++){
       
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
       
        cout<<endl;
    }
    
    for(int  i=n-1;i>=0;i--){
       
        for(int j=1; j<=n-i;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
       
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

      for(int  i=0;i<=n;i++){
       
        for(int j=1; j<=n-i;j++){
            cout<<"  ";
        }

        for(int j=0;j<2*i-1;j++){
            cout<<i<<" ";
        }
       
        cout<<endl;
    }
    cout<<endl;
     cout<<endl;

     int cnt=1;
    for(int i=1;i<=n;i++){
       
        for(int j=1; j<=i;j++){
            cout<<cnt++<<" ";
            
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;


     for(int i=1;i<=n;i++){
       
        for(int j=0; j<=n-i-1;j++){
            cout<<" ";
        }

         for (int k = 1; k <= i; k++) {
           
            if (k == 1 || k == i || i == n)
                cout << "* ";
            else
                cout << "  "; 
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    
    for(int i=1;i<=n;i++){
       
        char ch='A';
        for(int j=1; j<=i;j++){
            cout<<ch++<<" ";
            
        }
        cout<<endl;
    }
     cout<<endl;
     cout<<endl;


     char ch='A';
     for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
     cout<<"\n\n";

     char Ch='A';
     for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<Ch++<<" ";
        }
       
        cout<<endl;
    }
     cout<<"\n\n";



       for(int i=0;i<=n;i++){
        ch='A';
        for(int j=1; j<=n-i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;

     for(int i=0;i<=n;i++){
        ch='A';
        for(int j=0; j<=n-i-1;j++){
            cout<<"  ";
        }

        for(int j=1; j<=2*i-1;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

       
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }
    cout<<"\n\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
           
            if (j == i || j == n - i + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }


    cout<<endl;
    cout<<endl;

   for (int i = 0; i < n; i++) {
        // Step 1: Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Step 2: Print numbers using nCr
        for (int k = 0; k <= i; k++) {
            cout << nCr(i, k) << " ";
        }

        cout << endl;  // Move to next line
    }
    return 0;
}