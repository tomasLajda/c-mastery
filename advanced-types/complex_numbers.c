#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>

int main(int argc, char **argv) {
  #ifdef __STDC_NO_COMPLEX__
    printf("Complex numbers are not supported.\n");
    exit(1);
  #endif

  const double PI = acos(-1.0);

  double complex z1 = I * I;
  printf("z1 = %.2f%+.2fi\n", creal(z1), cimag(z1));

  double complex z2 = pow(I, 2);
  printf("z2 = %.2f%+.2fi\n", creal(z2), cimag(z2));

  double complex z3 = exp(I * PI);
  printf("z3 = %.2f%+.2fi\n", creal(z3), cimag(z3));

  double complex z4 = 1.0 + 2.0 * I;
  double complex z5 = 1.0 - 2.0 * I;
  z5 = conj(z5 * z4);
  printf("z5 = %.2f%+.2fi\n", creal(z5), cimag(z5));
  return 0;
}
