#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

int fact(int*);
float solve(int);

int main() {
    float n; float max = 0; int Ans;
    cin >> n;
    float N = n;
    for (int i = 2; i <= n;i++) {
        if (i / (i * solve(i)) > max) {
            max = i / (i * solve(i)); Ans = i;
        }
    }
    cout << Ans;

}
int fact(int* n) {
    int div = 2; int T = 0;
    while (1)
    {
        if (*n % div != 0) {
            if (T > 0) return div;
            div++;
        }
        else {
            *n /= div;
            T++;
            if (*n == 1) return div;
        }
    }
}
float solve(int n) {
    float a[100];
    int i = 0;
    float ans = 1;
    while (1) {
        int* nPtr = &n;
        a[i] = fact(nPtr);
        i++;
        if (n == 1) break;
    }
    for (int j = 0; j < i;j++) {
        ans *= (1 - (1 / a[j]));
    }
    return ans;
}
