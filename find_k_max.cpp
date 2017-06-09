//
// Created by Administrator on 2017/6/9.
//
#include <iostream>

using namespace std;


void quickFind(int a[], int i, int j,int &k) {
    int s=i,t=j;
    int x = a[i];
    do {
        while (s < t && a[t] < x) t--;
        if (s < t) a[s++] = a[t];
        while (s < t && a[s] >=x) s++;
        if (s < t) a[t--] = a[s];
    }while(s<t);
    a[s]=x;
    k=s;
}
int findKMax(int a[],int i,int n,int k){
    if(k>n){
        return n;
    }
    int q;
    int index;
    quickFind(a,i,n,q);
    int len = q-i+1;
    if(len<k){
        index = findKMax(a,q+1,n,k-len);
    }else if(len>k){
        index = findKMax(a,i,q-1,k);
    }else{
        index=q;
    }
    return index;
}

int main() {
    int n, m;
    cin >> n >> m;
    int num[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    findKMax(num,0,n-1,m);
    for(int i=0;i<m;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
