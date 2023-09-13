#include<bits/stdc++.h>
using namespace std;

int lcm(int i,int j){
    int big = max(i,j);
    int small = min(i,j);
    for(int k = big;;k+=big)
        if(k%small==0)
            return k;
}

int main(){
    int num = 2;
    for(int i=3;i<21;i++)
        num = lcm(num,i);
    cout<<num;
}