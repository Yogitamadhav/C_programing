// C program to demonstrate 
// auto keyword
#include <stdio.h>

int printvalue()
{
  auto int a = 10;
  printf("%d", a);
  ++a;
  printf("%d", a);
  int c=a++;
  printf("%d", a);
  printf("%d", c);

}

// Driver code
int main() 
{
  printvalue();
  return 0;
}
