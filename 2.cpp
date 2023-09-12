#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1 = 1 , num2 = 2;
    int t;
    int sum = 0;
    while(num2 < 4000000){
        if(num2%2==0)
            sum+=num2;
        t = num1;
        num1 = num2;
        num2 = num2 + t;
    }
    cout<<sum;
}