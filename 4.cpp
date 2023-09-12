#include<bits/stdc++.h>
using namespace std;

bool pall(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[str.size()-1-i])
            return false;
    }
    return true;
}

int main(){
    int str,max=0;
    for(int i=999;i>100;i--){
        for(int j=i;j>100;j--){
            str = i*j;
            if(str>max && pall(to_string(str))){
                max = str;
            }
        }
    }
    cout<<max;
}