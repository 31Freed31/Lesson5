#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите число: ";
    int dayInMay;
    cin >> dayInMay;
    cout << endl;

    cout << "-----Проверяем----" << endl;

    if (1 <= dayInMay && dayInMay <= 10 || dayInMay == 13 || dayInMay == 14 || 
        dayInMay == 20 || dayInMay == 21 || dayInMay == 27 || dayInMay == 28)
    {
        cout << "Сегодня выходной";
    }
    else
    {
        cout << "Сегодня рабочий день";
    }
}