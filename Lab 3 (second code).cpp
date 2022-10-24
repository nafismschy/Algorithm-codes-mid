#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n){

    if(m==n){
        return m;
    }

    else if(m>n){
        return gcd(m-n,n);

    }else{
        return gcd(m,n-m);
    }
}

int main(){

cout<<gcd(12,52)<<endl;
return 0;
}


