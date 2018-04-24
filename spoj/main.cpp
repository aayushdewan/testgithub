#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,x;
   cout<<"Enter n"<<endl;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
    cout<<"enter in array"<<endl;
    cin>>a[i];
   }
   int f=0,l=n-1,m,fl=0;
   cout<<"enter value of x"<<endl;
   cin>>x;
   while(f<=l){
    m=(f+l)/2;
    if(a[m]==x){
        cout<<m<<endl;
        fl=1;
        break;
    }
    else if(a[m]>x){
        l=m-1;

    }
    else{
        f=m+1;
    }
   }
   if (fl==0)
    cout<<"No such value"<<endl;
    return 0;
}
