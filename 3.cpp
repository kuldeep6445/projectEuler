#include<bits/stdc++.h>
using namespace std;

int main(){
    long int num = 600851475143;
    bool flag = true;
    while(flag){
        flag = false;
        int i = 2;
        while(i*i<num){
            if(num%i==0){
                num/=i;
                flag = true;
                break;
            }
            i++;
        }
    }
    cout<<num;
}