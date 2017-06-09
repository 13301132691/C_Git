//
// Created by Administrator on 2017/6/9.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(true){
        if(n==0){
            break;
        }
        int sumn=0,sumd=1;
        while(n--) {
            char slash;
            int num, deno;
            cin >> num >> slash >> deno;
            sumn = sumn * deno + sumd*num;
            sumd = sumd * deno;
        }
        int a = sumn,b=sumd,c;
        while(a!=0){
            c=a;
            a=b%a;
            b=c;
        }
        int gcd = b;
        sumn /= gcd;
        sumd /= gcd;
        if(sumd>1){
            cout << sumn << '/' << sumd <<endl;
        }else{
            cout << sumn<<endl;
        }
    }

    return 0;
}


