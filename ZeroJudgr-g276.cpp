//時間複雜度 O(max(n,m)k) 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k,count=0;
    int r,c,s,t;
    cin>>n>>m>>k;
    int arr[100][100]={0};
    int x[100][100]={0};
    for(int i=0;i<k;i++){
        cin>>r>>c>>s>>t;
        arr[r][c]=1;
        x[r][c]=1;
        if(arr[s][t]==x[r][c]){
            
        }

    }
}