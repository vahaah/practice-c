#include <stdio.h>
#include <stdlib.h>

#define IN 1  // insdie word
#define OUT 0 // outside word

#define INITIAL_CAPACITY 3

int main()
{
  int *ndigit;
  int i, c, y, cw, nc, state, capacity;
  ndigit = (int *)malloc(INITIAL_CAPACITY);

  for (i = 0; i < 10; ++i)
  {
    ndigit[i] = 0;
  }
  state = OUT;
  cw = nc = 0;

  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
    }
    else if (state == OUT)
    {
      state = IN;
      ++cw;

      if (cw > capacity)
      {
        ndigit = (int *)realloc(ndigit, sizeof(ndigit) * 2);
      }

      ++ndigit[cw - 1];
    }
    else if (state == IN)
    {
      state = IN;
      ++ndigit[cw - 1];
    }
  }
  for (i = 0; i < 10; ++i)
  {
    if (ndigit[i] > 0)
    {

      for (y = 0; y < ndigit[i]; ++y)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}
