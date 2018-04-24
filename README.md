# testgithub
#include <iostream>

using namespace std;
int op=2;
int a[10];
void add_val(int l,int r,int x){
    for(int i=l-1;i<r;i++){
        a[i]=a[i]+x;
    }
}
int main()
{
    int n,i,j;
    cout<<"enter value for n"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter"<<endl;
        cin>>a[i];
    }
    for(j=1;j<=op;j++){
        int le,ri,xval;
        cout<<"enter left,right and x value"<<endl;
        cin>>le>>ri>>xval;
        add_val(le,ri,xval);
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

