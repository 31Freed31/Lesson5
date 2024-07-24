#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите скорость самолета: ";
    int speedAir;
    cin >> speedAir;
    cout << endl;

    cout << "Введите высоту самолета: ";
    int heightAir;
    cin >> heightAir;
    cout << endl;

    cout << "-----Проверяем----" << endl;

    if (750 <= speedAir && speedAir <= 850 && 9000 <= heightAir && heightAir <= 9500)
    {
        cout << "Самолёт летит правильным эшелоном";
    }
    else
    {
        cout << "Самолёт летит неправильным эшелоном";
    }
}