#include<bits/stdc++.h>
using namespace std;

bool pall(string str){
    for(int i=0;i<str.size();i++){
        if(str[i]!=str[str.size()-1-i])
            return false;
    }
    cout<<str;
    return true;
}

int main(){
    string str;
    for(int i=999;i>100;i--){
        for(int j=999;j>100;j--){
            if(pall(to_string(i*j)))
                return 0;
        }
    }
}