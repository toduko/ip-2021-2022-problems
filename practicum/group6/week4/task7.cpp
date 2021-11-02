/*
Напишете функция, която приема символ и определя дали е число.
*/

#include <iostream>

using namespace std;

bool is_digit(char c)
{
    return ((c >= '0') && (c <= '9'));
}

void solution()
{
    char c;
    cin >> c;

    cout << is_digit(c) << endl;
}

int main()
{
    solution();

    return 0;
}