////
//// Created by Administrator on 2017/6/9.
////
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    while(true){
//        if(n==0){
//            break;
//        }
//        int age[n]={0},i=0,count[4]={0};
//        while(n--) {
//            cin>>age[i];
//            if(age[i]<=18){
//                count[0]++;
//            }else if(age[i]>=19&&age[i]<=35){
//                count[1]++;
//            }
//            else if(age[i]>=36&&age[i]<=60){
//                count[2]++;
//            }
//            else{
//                count[3]++;
//            }
//            i++;
//        }
//        double sum= count[0]+count[1]+count[2]+count[3];
//
//        cout << "1-18:  " << setprecision(2)<<fixed<<count[0]*100/sum<<"%" <<endl;
//        cout << "19-35: " << count[1]*100/sum<<"%" <<endl;
//        cout << "36-60: " << count[2]*100/sum<<"%" <<endl;
//        cout << "60-:   " << count[3]*100/sum<<"%" <<endl;
//
//    }
//    return 0;
//}
//
//
//
