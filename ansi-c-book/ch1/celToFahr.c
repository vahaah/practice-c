#include <stdio.h>

#define LOWER -10 // lower limit of table
#define UPPER 80  // upper limit
#define STEP 5    // step size

// F=(C * 9/5) + 32
int main()
{
  int celcius;

  for (celcius = LOWER; celcius <= UPPER; celcius = celcius + STEP)
  {
    printf("%3d %6.0f\n", celcius, (celcius * (9.0 / 5.0)) + 32);
  }
  return 0;
}
