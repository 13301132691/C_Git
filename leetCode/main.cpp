//
// Created by Administrator on 2017/9/23.
//

#include <array>
#include "main.h"
#include "Array.h"
#include<iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;
int removeElement(int A[],int n, int elem){
    if(n==0){
        return NULL;
    }
    int i=0,j=0;
    for(;i<n;i++){
        if(A[i]==elem){
            continue;
        }
        A[j] = A[i];
        j++;
    }
    return j;
}

static int MAX_N = 10000;

vector<bool> isPrime(int n){
    vector<bool> prime(n,true);
    for(int i=2; i<n; i++){
        for(int j=2*i;j<n;j+=i){
            prime[j]= false;
        }
    }
    return prime;
}

int removeDuplicates(int A[],int n){
    if(n==0){
        return NULL;
    }
    int j=0;
    for(int i=1;i<n;i++){
        if(A[j]!=A[i]){
            A[++j] = A[i];
        }
    }
    return j+1;
}

int removeDuplicates2(int A[],int n,int c){
    if(n==0){
        return NULL;
    }
    int j=0;
    int num=1;
    for(int i=1;i<n;i++){
        if(A[j]==A[i]){
            num++;
            if(num<=c){
                A[++j]=A[i];
            }
        }else{
            A[++j]=A[i];
            num=1;
        }
    }
    return j+1;
}

vector<int> plusOne(vector<int> &digits){
    vector<int> res(digits.size(),0);
    int sum = 0;
    int one = 1;
    for(int i=digits.size()-1;i>0;i--){
        sum = one + digits[i];
        one = sum/10;
        res[i] = sum%10;
    }
    if(one==1){
        res.insert(res.begin(),one);
    }
    return res;
}

vector<vector<int>> pascal(int numRows){
    vector<vector<int>> vals;
    vals.resize(numRows);
    for(int i=0;i<numRows;i++){
        vals[i].resize(i+1);
        vals[i][0]=1;
        vals[i][vals[i].size()-1]=1;
        for(int j=1;j<vals.size()-1;j++) {
            vals[i][j] = vals[i - 1][j - 1] + vals[i - 1][j];
        }
    }
    return vals;
}

static int m = 0;
void move(int disks, char M, char N){
    printf("the%dth move : move the %dth disk from %c ->to->  %c\n",++m,disks,M,N);
}

int hanoi(int disks, char A, char B, char C){
    int n = disks;
    if(n<=0){
        return NULL;
    }
    if(n==1){
        move(n,A,C);
    }else{
        hanoi(n-1,A,C,B);
        move(n,A,C);
        hanoi(n-1,B,A,C);
    }
}

//int main(){
////    int a[5] = {1,2,3,2,3};
////    cout << a[4] << endl;
////    int b = removeElement(a,5,2);
////    cout << b << endl;
////    int c = removeDuplicates(a,5);
////    cout << c << endl;
////    int d = removeDuplicates2(a,5,2);
////    cout << d << endl;
////
////    vector<int> res(6,0);
////    for(int i=0;i<6;i++){
////        res.push_back(9);
////    }
////    vector<int> res2 = plusOne(res);
////    for(int i=0;i<res2.size();i++){
////        cout << res2[i];
////    }
////    hanoi(10,'A','B','C');
//
//    vector<bool> prime = isPrime(100);
//    for(int i=1;i<prime.size();i++) {
//        cout << i <<" -> "<<prime[i] << endl;
//    }
//    return 0;
//}