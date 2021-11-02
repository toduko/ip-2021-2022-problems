/*
Да се напише функция, която приема число и връща абсолютната му стойност.
*/

#include <iostream>

using namespace std;

unsigned int absolute(int num)
{
    return num > 0 ? num : -num;
}

void solution()
{
    int n;
    cin >> n;

    cout << absolute(n) << endl;
}

int main()
{
    solution();

    return 0;
}