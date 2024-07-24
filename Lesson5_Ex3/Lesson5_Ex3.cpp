#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите номер дня недели, с которого начинается месяц (0 = Понедельник, 6 = Воскресенье): ";
    int startDay;
    cin >> startDay;

    if (startDay < 0 || startDay > 6)
    {
        cout << "Некорректный ввод. Номер дня недели должен быть от 0 до 6." << endl;
        return 1;
    }

    cout << "Введите номер дня мая: ";
    int dayInMay;
    cin >> dayInMay;

    cout << "-----Проверяем----" << endl;

    if ((dayInMay >= 1 && dayInMay <= 5) || (dayInMay >= 8 && dayInMay <= 10))
    {
        cout << "Сегодня выходной" << endl;
    }
    else
    {
        int dayOfWeek = (startDay + dayInMay - 1) % 7;
        if (dayOfWeek == 5 || dayOfWeek == 6)
        {
            cout << "Сегодня выходной" << endl;
        }
        else
        {
            cout << "Сегодня рабочий день" << endl;
        }
    }
}
