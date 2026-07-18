#include <stdio.h>
int main()
{
  int n, a = 0, b = 1,c, d;

  printf("Enter the number:\n");
  scanf("%d", &n);

  printf("First %d Fibonacci number:\n", n);

  for (c = 1; c <= n; c++)
  {
    if (c <= 1)

      d = c;
    else
    {
      d= a + b;
      a = b;
      b = d;
    }
    printf("%d\n", d);
  }
  return 0;
}
