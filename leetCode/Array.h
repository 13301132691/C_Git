//
// Created by Administrator on 2017/9/23.
//

#include <array>
#include<iostream>
using namespace std;

class Array {
public:
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
};
