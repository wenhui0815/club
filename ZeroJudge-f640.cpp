#include <bits/stdc++.h>
using namespace std;

string st;
int ans=0;

int Function(){
    cin>>st;
    if(st=="f"){
        ans=2*Function()-3;
    }
    else if(st=="g"){
        ans=2*Function()+Function()-7;
    }
    else if(st=="h"){
        ans=3*Function()-2*Function()+Function();
    }
    else{
        return stoi(st);
    }
    return ans;
}
int main(){
    cout<<Function()<<endl;
}