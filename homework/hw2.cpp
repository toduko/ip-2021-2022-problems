#include <iostream>
#include <cstring>

using namespace std;

bool should_have_interval_before(const char c)
{
  return c == '-' || c == '+' || c == '/' || c == '(';
}

bool should_have_interval_after(const char c)
{
  return c == '-' || c == ',' || c == '.' || c == '!' || c == '?' || c == ';';
}

bool is_letter(const char c)
{
  return ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'));
}

bool is_digit(const char c)
{
  return (c >= '0') && (c <= '9');
}

void char_swap(char &a, char &b)
{
  char temp = a;
  a = b;
  b = temp;
}

void correct_punctuation(const char *text, const unsigned int text_size, char *corrected_text)
{
  bool is_open_bracket = false;

  for (int i = 0, j = 0; i < text_size; ++i)
  {
    if (is_digit(text[i]) || is_letter(text[i]) || text[i] == ' ')
    {
      corrected_text[j++] = text[i];
    }
    else
    {
      bool does_not_have_interval_before = (i > 0) && (text[i - 1] != ' ');
      bool does_not_have_interval_after = (i < text_size - 1) && (text[i + 1] != ' ') && (text[i + 1] != '\n');

      if (text[i] == '"')
      {
        is_open_bracket ^= true;
        if (is_open_bracket && does_not_have_interval_before && ((j > 0) && corrected_text[j - 1] != ' '))
        {
          corrected_text[j++] = ' ';
        }
        corrected_text[j++] = text[i];
      }
      else
      {
        if (does_not_have_interval_before && should_have_interval_before(text[i]))
        {
          if (((j > 0) && corrected_text[j - 1] != ' '))
          {
            corrected_text[j++] = ' ';
          }
        }

        corrected_text[j++] = text[i];

        if (does_not_have_interval_after && should_have_interval_after(text[i]))
        {
          corrected_text[j++] = ' ';
        }
      }
    }

    if ((i == text_size - 1) && (text[i] != '.'))
    {
      if ((j > 0) && corrected_text[j - 1] != '.')
      {
        corrected_text[j] = '.';
      }
      if (j > 0 && corrected_text[j - 1] == '"' && !is_open_bracket)
      {
        char_swap(corrected_text[j - 1], corrected_text[j]);
      }
      ++j;
    }
  }
}

void correct_spelling(char *corrected_text, const unsigned int text_size, char **dict, const unsigned int dict_size)
{
  for (int i = 0; i < dict_size; ++i)
  {
    char *found, *to_find = dict[2 * i], *to_replace = dict[2 * i + 1];
    const unsigned int to_find_length = strlen(to_find), to_replace_length = strlen(to_replace);
    int n = 0;
    while (found = strstr(corrected_text + n, to_find))
    {
      n = found - corrected_text;
      const int diff = to_find_length - to_replace_length;
      if (diff < 0)
      {
        for (int j = text_size - 1; (j >= n + to_find_length); --j)
        {
          corrected_text[j - diff] = corrected_text[j];
        }
        for (int j = n; (j - n) < to_replace_length; ++j)
        {
          corrected_text[j] = to_replace[j - n];
        }
      }
      else
      {
        for (int j = n; ((j - n) < to_replace_length) && (j < text_size); ++j)
        {
          corrected_text[j] = to_replace[j - n];
        }
        for (int j = n + to_replace_length; (j < text_size - diff) && (corrected_text[j + diff] != 0); ++j)
        {
          corrected_text[j] = corrected_text[j + diff];
        }
      }
      n += to_find_length;
    }
  }
}

void autocorrect(const char *text, const unsigned int text_size, char **dict, const unsigned int dict_size)
{
  const unsigned int MAX_CORRECTED_TEXT_SIZE = 2048;
  char corrected_text[MAX_CORRECTED_TEXT_SIZE] = {0};

  correct_punctuation(text, text_size, corrected_text);
  correct_spelling(corrected_text, MAX_CORRECTED_TEXT_SIZE, dict, dict_size);

  for (int i = 0; corrected_text[i] != 0; ++i)
  {
    cout << corrected_text[i];
  }
  cout << endl;
}

void dynamic__enter_text(char *&text, unsigned int &text_size)
{
  const unsigned int MAX_TEXT_SIZE = 1024;

  cin >> text_size;
  if (text_size > MAX_TEXT_SIZE)
  {
    text_size = MAX_TEXT_SIZE;
  }
  cin.ignore();

  text = new char[text_size];
  for (int i = 0; i < text_size; ++i)
  {
    cin.get(text[i]);
  }
}

void dynamic__enter_dict(char **&dict, unsigned int &dict_size)
{
  const unsigned int MAX_DICT_SIZE = 128;
  const unsigned int MAX_DICT_WORD_SIZE = 100;

  cin >> dict_size;
  if (dict_size > MAX_DICT_SIZE)
  {
    dict_size = MAX_DICT_SIZE;
  }
  cin.ignore();

  dict = new char *[2 * dict_size];

  for (int i = 0; i < dict_size; ++i)
  {
    dict[2 * i] = new char[MAX_DICT_WORD_SIZE];
    dict[2 * i + 1] = new char[MAX_DICT_SIZE];
    cin.getline(dict[2 * i], MAX_DICT_WORD_SIZE, '-');
    cin.getline(dict[2 * i + 1], MAX_DICT_WORD_SIZE);
  }
}

void free_mem(const char *text, char **dict, const unsigned int dict_size)
{
  delete[] text;

  for (int i = 0; i < dict_size; ++i)
  {
    delete[] dict[i];
  }

  delete[] dict;
}

void task_0()
{
  char *text;
  unsigned int text_size = 0;
  dynamic__enter_text(text, text_size);

  char **dict;
  unsigned int dict_size = 0;
  dynamic__enter_dict(dict, dict_size);

  autocorrect(text, text_size, dict, dict_size);

  free_mem(text, dict, dict_size);
}

void dynamic__create_matrix(int **&matrix, const unsigned int n, const unsigned int m)
{
  matrix = new int *[n];
  for (int i = 0; i < n; ++i)
  {
    matrix[i] = new int[m];
  }
}

void free_matrix(int **matrix, const unsigned int n)
{
  for (int i = 0; i < n; ++i)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
}

void read_matrix(int **matrix, const unsigned int n, const unsigned int m)
{
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> matrix[i][j];
    }
  }
}

void print_matrix(int **matrix, const unsigned int n, const unsigned int m)
{
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void remove_rows(int **&matrix, unsigned int &n, const unsigned int m, const unsigned int rows)
{
  int **new_matrix = new int *[n - rows];

  for (int i = 0; i < n - rows; ++i)
  {
    new_matrix[i] = new int[m];
    for (int j = 0; j < m; ++j)
    {
      new_matrix[i][j] = matrix[i][j];
    }
  }

  free_matrix(matrix, n);

  matrix = new_matrix;
  n -= rows;
}

void remove_cols(int **&matrix, const unsigned int n, unsigned int &m, const unsigned int cols)
{
  int **new_matrix = new int *[n];

  for (int i = 0; i < n; ++i)
  {
    new_matrix[i] = new int[m - cols];
    for (int j = 0; j < m - cols; ++j)
    {
      new_matrix[i][j] = matrix[i][j];
    }
  }

  for (int i = 0; i < n; ++i)
  {
    delete[] matrix[i];
  }
  delete[] matrix;

  matrix = new_matrix;
  m -= cols;
}

void change_values(int **&matrix_A, const unsigned int n, const unsigned int m, int **matrix_B)
{
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      if (matrix_A[i][j] < matrix_B[i][j])
      {
        matrix_A[i][j] = matrix_B[i][j];
      }
      else if (matrix_A[i][j] > matrix_B[i][j])
      {
        matrix_A[i][j] *= -1;
      }
    }
  }
}

void transform_matrix(int **&matrix_A, unsigned int &n1, unsigned int &m1, int **matrix_B, const unsigned int n2, const unsigned int m2)
{
  if (n1 > n2)
  {
    remove_rows(matrix_A, n1, m1, n1 - n2);
  }

  if (m1 > m2)
  {
    remove_cols(matrix_A, n1, m1, m1 - m2);
  }

  change_values(matrix_A, n1, m1, matrix_B);
}

void task_1()
{
  unsigned int n1, m1, n2, m2;
  cin >> n1 >> m1 >> n2 >> m2;

  int **matrix_A, **matrix_B;

  dynamic__create_matrix(matrix_A, n1, m1);
  dynamic__create_matrix(matrix_B, n2, m2);

  read_matrix(matrix_A, n1, m1);
  read_matrix(matrix_B, n2, m2);

  transform_matrix(matrix_A, n1, m1, matrix_B, n2, m2);
  print_matrix(matrix_A, n1, m1);

  free_matrix(matrix_A, n1);
  free_matrix(matrix_B, n2);
}

void dynamic__make_rectangle(char **&rectangle, const unsigned int n, const unsigned int m)
{
  rectangle = new char *[n];
  for (int i = 0; i < n; ++i)
  {
    rectangle[i] = new char[m];
  }
}

void free_rectangle(char **rectangle, const unsigned int n)
{
  for (int i = 0; i < n; ++i)
  {
    delete[] rectangle[i];
  }
  delete[] rectangle;
}

unsigned int get_moves(char **rectangle, const unsigned int n, const unsigned int m, const int x, const int y, bool *visited)
{
  if (x < 0 || x >= n || y < 0 || y >= m || visited[x * m + y])
  {
    return 0;
  }
  else
  {
    visited[x * m + y] = true;
    int dx = 0;
    int dy = 0;

    if (rectangle[x][y] == 'U')
    {
      dx = -1;
    }
    else if (rectangle[x][y] == 'D')
    {
      dx = 1;
    }
    else if (rectangle[x][y] == 'L')
    {
      dy = -1;
    }
    else if (rectangle[x][y] == 'R')
    {
      dy = 1;
    }

    return 1 + get_moves(rectangle, n, m, x + dx, y + dy, visited);
  }
}

void nullify(bool *arr, const unsigned int n)
{
  for (int i = 0; i < n; ++i)
  {
    arr[i] = false;
  }
}

void find_max_moves(char **rectangle, const unsigned int n, const unsigned int m)
{
  unsigned int max_moves = 0, max_x, max_y;
  bool *visited = new bool[n * m];

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      nullify(visited, n * m);
      unsigned int curr_moves = get_moves(rectangle, n, m, i, j, visited);

      if (max_moves < curr_moves)
      {
        max_moves = curr_moves;
        max_x = i;
        max_y = j;
      }
    }
  }

  delete[] visited;

  cout << max_x << " " << max_y << endl;
}

void read_rectangle(char **rectangle, const unsigned int n, const unsigned int m)
{
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < m; ++j)
    {
      cin >> rectangle[i][j];
    }
  }
}

void task_2_prime()
{
  unsigned int n, m;
  cin >> n >> m;

  char **rectangle;

  dynamic__make_rectangle(rectangle, n, m);
  read_rectangle(rectangle, n, m);

  find_max_moves(rectangle, n, m);

  free_rectangle(rectangle, n);
}

int main()
{
  // task_0();
  // task_1();
  task_2_prime();

  return 0;
}