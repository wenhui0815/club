#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    while(n>0){
        n/=2;
        count++;
    }
    //改成for迴圈
    for(int i=0;n>0;i++){
        n/=2;
        count++;
    }
    //改成do while迴圈
   do{
        n/=2;
        count++;
   }while(n>0);
    cout<<count<<"\n";
}