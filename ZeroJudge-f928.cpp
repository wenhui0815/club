#include <bits/stdc++.h>
using namespace std;

void boom(int arr[],int m,int n){
    if(m>=0&&m<n){
        if(arr[m]==1)
            arr[m]=0;
        if(arr[m]==2){
            arr[m]=0;
            boom(arr,m-1,n);
            boom(arr,m+1,n);
        }
        if(arr[m]>=3){
            int a=arr[m];
            arr[m]=0;
            boom(arr,m-a,n);
            boom(arr,m-a*2,n);
            boom(arr,m+a,n);
            boom(arr,m+a*2,n);
        }

    }
}
int main(){
    int n,m;
    int arr[1005]={};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    boom(arr,m,n);
    cout<<arr[0];
    for(int i=1;i<n;i++)
        cout<<" "<<arr[i];
    cout<<endl;
}
