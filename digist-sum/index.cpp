#include <bits/stdc++.h>
using namespace std;

int main(){
    int input,sum;
    cin >> input;
    while(input){
        sum+=input%10;
        input= input/10;
    }
    cout  << sum << endl;
}