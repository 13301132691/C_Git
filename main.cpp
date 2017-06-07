#include <iostream>

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int l = 0, r = 10;
    for (int i = 0; i < 10; i++) {
        bool leftOdd = a[l] % 2 == 1;
        bool rightEven = a[r] % 2 == 0;
        if (leftOdd) {
            l++;

        } else if (rightEven) {
            r--;
        } else {
            int tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
        }
    }
    for (int i = 0; i < l; i++) {
        for (int j = 1; j < l - i; j++) {
            if (a[j - 1] > a[j]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
    for (int i = l + 1; i < 10; i++) {
        for (int j = l + 1; j < 10 - i; j++) {
            if (a[j - 1] > a[j]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    //another solution
    for (int i = 0; i < 9; i++) {
        for (int j = 1; j < 10 - i; j++) {
            bool leftEven = a[j - 1] % 2 == 0;
            bool rightEven = a[j] % 2 == 0;
            if ((leftEven && !rightEven) || (leftEven == rightEven && (a[j - 1] > a[j]))) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}

