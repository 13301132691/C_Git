//
// Created by Administrator on 2017/6/9.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int sum=0,a[100]={0};
    for(int i = 2;i<sqrt(100.0);i++){
        sum=i;
        if(a[sum]==0){
            while(sum<100){
                sum+=i;
                if(sum<100){
                    a[sum]=1;
                }
            }
        }
    }
    for(int i = 1;i<100;i++){
        if(a[i]==0){
            cout << i << endl;
        }
    }
    return 0;
}
