#include <iostream>

using namespace std;

int main()
{
    int max = 150000;
    int N;
    cout << "Введите сумму для снятия: ";
    cin >> N;

    if (N > max) {
        cout << "Ошибка: запрашиваемая сумма превышает 150 000 рублей." << endl;
    }

    if (N % 100 != 0) {
        cout << "Ошибка: банкомат может выдавать только суммы, кратные 100 рублям." << endl;
    }

    cout << "Купюры для выдачи:" << endl;

    int count5000 = N / 5000;
    if (count5000 > 0) {
        cout << "5000 руб: " << count5000 << " шт." << endl;
        N %= 5000;
    }

    int count2000 = N / 2000;
    if (count2000 > 0) {
        cout << "2000 руб: " << count2000 << " шт." << endl;
        N %= 2000;
    }

    int count1000 = N / 1000;
    if (count1000 > 0) {
        cout << "1000 руб: " << count1000 << " шт." << endl;
        N %= 1000;
    }

    int count500 = N / 500;
    if (count500 > 0) {
        cout << "500 руб: " << count500 << " шт." << endl;
        N %= 500;
    }

    int count200 = N / 200;
    if (count200 > 0) {
        cout << "200 руб: " << count200 << " шт." << endl;
        N %= 200;
    }

    int count100 = N / 100;
    if (count100 > 0) {
        cout << "100 руб: " << count100 << " шт." << endl;
        N %= 100;
    }
}
