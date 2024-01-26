// калькулятор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice;
    double num1, num2, result;

    do {
        cout << "Выберите операцию:" << endl;
        cout << "1.Сложение" << endl;
        cout << "2.Вычитание" << endl;
        cout << "3.Умножение" << endl;
        cout << "4.Деление" << endl;
        cout << "5.Возведение в степень" << endl;
        cout << "6.Нахождение квадратного корня" << endl;
        cout << "7.Нахождение 1 процента от числа" << endl;
        cout << "8.Найти факториал числа" << endl;
        cout << "9.Выйти из программы" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Результат: " << result << endl;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Результат: " << result << endl;
            break;
        case 3:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 * num2;
            cout << "Результат: " << result << endl;
            break;
        case 4:
            cout << "Введите делимое: ";
            cin >> num1;
            cout << "Введите делитель: ";
            cin >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Ошибка: деление на ноль!" << endl;
            }
            break;
        case 5:
            cout << "Введите число: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Результат: " << result << endl;
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            result = sqrt(num1);
            cout << "Результат: " << result << endl;
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            result = num1 * 0.01;
            cout << "Результат: " << result << endl;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; i++) {
                result *= i;
            }
            cout << "Результат: " << result << endl;
            break;
        case 9:
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Ошибка: Неверная операция!" << endl;
        }
    } while (choice != 9);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
