/*
Играем играта guess the number!
Правилата са следните:
Компютърът си намисля число на случаен принцип (използваме функцията rand()).
Потребителя въвежда число. Ако числото е правилно сме победители.
В противен случай получаваме съобщение дали въведеното от нас число е по-голямо или по-малко от намисленото.
Играта продължава докато не се познае числото.
Играта да се реализира във функция play().
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int rand_num(int min, int max)
{
    srand(time(NULL));
    return rand() % (max - min + 1) + min;
}

void play()
{
    int num, r_num = rand_num(0, 10);

    do
    {
        cin >> num;
        if (num < r_num)
        {
            cout << "Try a bigger number.\n";
        }
        else if (num > r_num)
        {
            cout << "Try a smaller number.\n";
        }
    } while (num != r_num);

    cout << "Wow you guessed the number.\n";
}

void solution()
{
    play();
}

int main()
{
    solution();

    return 0;
}