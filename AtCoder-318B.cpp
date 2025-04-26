#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[105][105]={};
    int n,x1,x2,y1,y2;
    cin>>n;
    int count=0;
    while(n--){
        cin>>x1>>x2>>y1>>y2;
        for(int i=x1+1;i<=x2;i++){
            for(int j=y1+1;j<=y2;j++){
                arr[i][j]=1;
            }
        }
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(arr[i][j]==1)
                count++;
        }
    }
    cout<<count<<endl;
}