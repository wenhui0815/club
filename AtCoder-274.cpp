#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    string st;
    int count[1000]={};
    for(int i=0;i<h;i++){
        cin>>st;
        for(int j=0;j<w;j++){
            if(st[j]=='#')
                count[j]++;
        }
    }
    cout<<count[0];
    for(int i=1;i<w;i++)
        cout<<" "<<count[i];
    cout<<endl;
}