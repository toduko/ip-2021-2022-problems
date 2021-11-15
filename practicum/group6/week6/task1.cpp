/*
От клавиатурата се въвеждат n цели числа (1 ≤ n ≤ 20), всяко от които е между 1 и 50.
Да се напише програма, която намира сбора и произведението им.
*/

#include <iostream>

using namespace std;

void set_num_in_range(int &num, int min, int max)
{
  do
  {
    cin >> num;
  } while ((num < min) || (num > max));
}

void get_sum_and_product(int arr[], int n, int &sum, int &product)
{
  sum = 0;
  product = 1;
  for (int i = 0; i < n; ++i)
  {
    sum += arr[i];
    product *= arr[i];
  }
}

void solution()
{
  int n;
  set_num_in_range(n, 1, 20);

  int arr[20];

  for (int i = 0; i < n; ++i)
  {
    set_num_in_range(arr[i], 1, 50);
  }

  int sum, product;
  get_sum_and_product(arr, n, sum, product);

  cout << "sum: " << sum << ", product: " << product << endl;
}

int main()
{
  solution();

  return 0;
}