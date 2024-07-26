#include <stdio.h>
#include <math.h>
int main(void) {
  double x = 5.2;
  double y = 3.5;
  double z = y*(pow(x,2)-pow(y,2))/(pow(x,2)+(3*x*y));
  printf("z = %f\n",z);
  return 0;
}