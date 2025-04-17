#include <bits/stdc++.h>
using namespace std;

long long mod(long long int a, long long int b, long long int MAX){
    if(a==0 && b==0)
        return 1;
    long long result=1;
    while(b>0){
        if(b&1)
            result = result * a % MAX;
        a = a * a % MAX;
        b>>=1;
    }
    return result;
}

int main(){
    long long int MAX=1e9+7;
    int n;
    long long int a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<mod(a,b,MAX)<<endl;
    }
    return 0;
}