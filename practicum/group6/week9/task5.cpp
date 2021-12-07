/*
Въведено е изречение. Изведете на стандартния изход неговите думи.
На отделен ред изведете думите подредени в лексикографски ред.
*/

#include <iostream>
#include <string.h>

using namespace std;

const int WORD_SIZE = 32;
const int MAX_SIZE = WORD_SIZE * WORD_SIZE;

bool is_letter(char c)
{
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void swap_words(char *w1, char *w2)
{
  char temp[WORD_SIZE];
  strcpy(w1, temp);
  strcpy(w1, w2);
  strcpy(w2, temp);
}

void sort(char words[WORD_SIZE][WORD_SIZE], const int size)
{
  for (int i = 0; i < size - 1; ++i)
  {
    for (int j = 0; j < size - i - 1; ++j)
    {
      if (strcmp(words[j], words[j + 1]) > 0)
      {
        swap(words[j], words[j + 1]);
      }
    }
  }
}

void print_words(char words[WORD_SIZE][WORD_SIZE], const int n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << i + 1 << ": " << words[i] << " ";
  }
  cout << endl;
}

void find_words(char str[MAX_SIZE], const int n, char words[WORD_SIZE][WORD_SIZE], unsigned int &word_count)
{
  unsigned int letter_idx = 0;

  for (int i = 0; i < n;)
  {
    if (str[i] != ' ' && is_letter(str[i]))
    {
      words[word_count][letter_idx++] = str[i++];
    }
    else
    {
      while (str[i] == ' ')
      {
        ++i;
      }
      words[word_count++][letter_idx] = 0;
      letter_idx = 0;
    }
  }

  words[word_count][letter_idx] = 0;
  ++word_count;
}

void output_words(char str[MAX_SIZE], const int n)
{
  char words[WORD_SIZE][WORD_SIZE];
  unsigned int word_count = 0;

  cout << "Unsorted words: \n";
  find_words(str, n, words, word_count);
  print_words(words, word_count);

  cout << "Sorted words: \n";
  sort(words, word_count);
  print_words(words, word_count);
}

void solution()
{
  char str[MAX_SIZE];
  cin.getline(str, MAX_SIZE);
  unsigned int len = strlen(str);
  output_words(str, len);
}

int main()
{
  solution();

  return 0;
}