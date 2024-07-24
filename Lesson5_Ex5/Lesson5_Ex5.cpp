#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    int M, N, K;

    cout << "Введите размеры первой коробки (A B C): ";
    cin >> A >> B >> C;

    cout << "Введите размеры второй коробки (M N K): ";
    cin >> M >> N >> K;

    int min1, mid1, max1;
    if (A <= B && A <= C) {
        min1 = A;
        if (B <= C) {
            mid1 = B;
            max1 = C;
        }
        else {
            mid1 = C;
            max1 = B;
        }
    }
    else if (B <= A && B <= C) {
        min1 = B;
        if (A <= C) {
            mid1 = A;
            max1 = C;
        }
        else {
            mid1 = C;
            max1 = A;
        }
    }
    else {
        min1 = C;
        if (A <= B) {
            mid1 = A;
            max1 = B;
        }
        else {
            mid1 = B;
            max1 = A;
        }
    }

    int min2, mid2, max2;
    if (M <= N && M <= K) {
        min2 = M;
        if (N <= K) {
            mid2 = N;
            max2 = K;
        }
        else {
            mid2 = K;
            max2 = N;
        }
    }
    else if (N <= M && N <= K) {
        min2 = N;
        if (M <= K) {
            mid2 = M;
            max2 = K;
        }
        else {
            mid2 = K;
            max2 = M;
        }
    }
    else {
        min2 = K;
        if (M <= N) {
            mid2 = M;
            max2 = N;
        }
        else {
            mid2 = N;
            max2 = M;
        }
    }

    if (min1 <= min2 && mid1 <= mid2 && max1 <= max2) {
        cout << "Первая коробка может быть помещена во вторую." << endl;
    }
    else {
        cout << "Первая коробка не может быть помещена во вторую." << endl;
    }
}