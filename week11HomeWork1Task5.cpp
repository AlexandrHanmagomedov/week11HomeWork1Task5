/*
Задание 5. Написать функцию, которая определяет, яв-
ляется ли «счастливым» шестизначное число.
Счастливое число считается шестизначное число, у которого сумма первых 3 цифр равна сумме вторых трех цифр
*/

#include <iostream>
using namespace std;

bool lucky(int number)
{
    int array[6];
    for (int i = 5; i >= 0; i--)
    {
        array[i] = number % 10;
        number /= 10;
    }
    int sum03 = 0;
    int sum46 = 0;
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
            sum03 += array[i];
        else
            sum46 += array[i];
    }
    if (sum03 == sum46)
    {
        //cout << "da";
        return true;
    }
    else {
        //cout << "ne";
        return false;
    }
}
void main()
{
    int number;
    cout << "\nVvedite 4islo  ";
    cin >> number;
    lucky(number);
    cout << "\n\n\t 1-4islo s4astlivoe\n\t 0-4islo Nes4astlivoe \n\t OTV = " << lucky(number);
}