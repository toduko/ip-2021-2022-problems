/*
Нека имаме матрица N x N.
Жива клетка наричаме клетка със стойност 1.
Мъртва клетка наричаме такава със стойност 0.
Нека играем следната игра:
1. Всяка жива клетка с по - малко от два живи съседа умира.
2. Всяка жива клетка с два или три живи съседа оцелява.
3. Всяка жива клетка с повече от 3 съседа умира.
4. Всяка мъртва клетка с точно три съседа оживява.
Този процес наричаме една еволюция.
Да се реализира програма, която визуализира как (по избор):
1. Ще изглежда нашият свят след n еволюции.
2. Визуализира нашият свят като извежда всяка следваща еволюция.
За изчистване на екрана на терминала може да използвате system("cls");
*/

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

#define N 10

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

bool is_valid(const int i, const int j)
{
  return ((i >= 0) && (i < N) && (j >= 0) && (j < N));
}

bool is_neighbour(unsigned char board[N][N], const int i, const int j)
{
  return (board[i][j] == 1);
}

bool is_valid_neighbour(unsigned char board[N][N], const int i, const int j)
{
  return (is_valid(i, j) && is_neighbour(board, i, j));
}

int count_neighbours(unsigned char board[N][N], const int i, const int j)
{
  int count = 0;

  count += is_valid_neighbour(board, i + 1, j + 1);
  count += is_valid_neighbour(board, i + 1, j + 0);
  count += is_valid_neighbour(board, i + 1, j - 1);
  count += is_valid_neighbour(board, i + 0, j + 1);
  count += is_valid_neighbour(board, i + 0, j - 1);
  count += is_valid_neighbour(board, i - 1, j + 1);
  count += is_valid_neighbour(board, i - 1, j - 0);
  count += is_valid_neighbour(board, i - 1, j - 1);

  return count;
}

void copy(unsigned char src[N][N], unsigned char dest[N][N])
{
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      dest[i][j] = src[i][j];
    }
  }
}

void evolve(unsigned char board[N][N])
{
  unsigned char new_board[N][N];

  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      const int neighbours = count_neighbours(board, i, j);
      const int curr_cell = board[i][j];

      if (((curr_cell == 1) && ((neighbours == 2) || (neighbours == 3))) ||
          ((curr_cell == 0) && (neighbours == 3)))
      {
        new_board[i][j] = 1;
      }
      else
      {
        new_board[i][j] = 0;
      }
    }
  }

  copy(new_board, board);
}

void print(unsigned char board[N][N])
{
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      cout << +board[i][j] << " ";
    }
    cout << endl;
  }
}

void clear()
{
  system(CLEAR);
}

void solution()
{
  unsigned char board[N][N] = {{0, 1, 0}, {1, 1, 1}};

  while (1)
  {
    print(board);
    evolve(board);
    this_thread::sleep_for(chrono::milliseconds(250));
    clear();
  }
}

int main()
{
  solution();

  return 0;
}