/*
Напишете функция, която приема два агрумента и връща цяло число.
Числото трябва да е различно за всеки две различни стойности на входа.
Тоест:
(f(a, b) == f(c, d)) <==> ((a == c) & (b == d))
*/

#include <iostream>

using namespace std;

int f(int a, int b)
{
    return (a + b) * (a + b + 1) / 2;
}

void solution()
{
    // Test for bijectivity
}

int main()
{
    solution();

    return 0;
}