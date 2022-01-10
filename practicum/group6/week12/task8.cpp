/*
Да се напише функция, която принтира всички булеви вектори с дължина n.
*/

#include <iostream>

using namespace std;

void print_all_binary_numbers(const unsigned int n, char *ans, const unsigned int size)
{
    if (n == 0)
    {
        for (int i = 0; i < size; ++i)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    else
    {
        ans[size - n] = '0';
        print_all_binary_numbers(n - 1, ans, size);
        ans[size - n] = '1';
        print_all_binary_numbers(n - 1, ans, size);
    }
}

void solution()
{
    const unsigned int BIN_SIZE = 32;
    unsigned int n;
    char bin[BIN_SIZE] = {0};
    cin >> n;

    print_all_binary_numbers(n, bin, BIN_SIZE);
}

int main()
{
    solution();

    return 0;
}