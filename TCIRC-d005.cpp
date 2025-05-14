#include <bits/stdc++.h>
using namespace std;

int pos=0;

int black(const string& s,int size){
    char st=s[pos++];
    if(st=='0')
        return 0;
    else if(st=='1')
        return size*size;
    else if(st=='2'){
        size/=2;
        int sum=0;
        sum+=black(s,size);
        sum+=black(s,size);
        sum+=black(s,size);
        sum+=black(s,size);
        return sum;
    }
    return 0;
}

int main(){
    string s;
    int n;
    cin>>s>>n;
    cout<<black(s,n)<<endl;
}