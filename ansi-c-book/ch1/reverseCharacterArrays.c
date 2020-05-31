#include <stdio.h>
#define MAXLINE 1000 /* max input line length */

int _getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char arr[]);

/* print reversed the longest line */
int main()
{
  int len;
  int max;
  int end;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = _getline(line, MAXLINE)) > 0)
  {
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
  {
    printf("%s", longest);
    reverse(longest);
    printf("%s", longest);
  }
  return 0;
}

int _getline(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  {
    s[i] = c;
  }
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
  {
    ++i;
  }
}

void reverse(char arr[])
{
  int temp, start, end;
  start = 0;
  end = 0;
  while (arr[end] != '\0')
  {
    ++end;
  }

  --end;

  while (start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    ++start;
    --end;
  }
}
