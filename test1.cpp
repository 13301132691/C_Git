////
//// Created by Administrator on 2017/9/23.
////
//
//#include "test1.h"
//#include <iostream>
//using namespace std;
//int main(){
////    int n,a[1000];
////    cin >> n;
////    for(int i=0;i<n;i++){
////        cin >> a[i];
////    }
////
////    for(int i=0;i<n;i++){
////        for(int j=1;j<n-i;j++){
////            if(a[j-1]>a[j]){
////                int k = a[j];
////                a[j] = a[j-1];
////                a[j-1] = k;
////            }
////        }
////    }
////    for(int i=0;i<n;i++){
////        cout << a[i];
////    }
//    //斐波那契
////    int a1 = 1,a2 = 1;
////    int k;
////    cin >> k;
////    if(k==1 || k==2){
////        cout << k << endl;
////    }else{
////        for(int i=0;i<k-2;i++){
////            int m = a2+a1;
////            a1 = a2;
////            a2 = m;
////        }
////    }
////    cout << a2;
////阶乘求和
////    int a = 1,f=1,sum=0;
////    int n;
////    cin >> n;
////    for(int i = 0;i<n;i++){
////        f *= a;
////        sum += f;
////        a++;
////    }
////    cout << sum;
//
//    //求质数
//
//    int n;
//    cin >> n;
//    cout << 2 << endl;
//    for(int i =3;i<n;i+=2){
//        int k;
//        for(k=3;k<i;k+=2){
//            if(i%k==0) break;
//            if(k*k>i) break;
//        }
//        if(k*k>i) cout << i << endl;
//    }
//
//    return 0;
//}