#include <iostream>

using namespace std;

int main() {
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;

    cout << "Введите текущую дату (день, месяц, год): ";
    cin >> currentDay >> currentMonth >> currentYear;

    cout << "Введите дату рождения (день, месяц, год): ";
    cin >> birthDay >> birthMonth >> birthYear;

    int age = currentYear - birthYear;

    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay <= birthDay)) {
        age--;
    }

    if (age > 18) {
        cout << "Можно" << endl;
    }
    else {
        cout << "Нельзя" << endl;
    }

    return 0;
}
