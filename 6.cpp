#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 100;
    int a = (n*(n+1)*(2*n+1))/6;
    int b = (n*n*(n+1)*(n+1))/4;
    cout<<a-b;
}