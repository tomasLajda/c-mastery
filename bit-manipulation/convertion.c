#include <stdio.h>
#include <math.h>

long long to_decimal(long long bin) {
  long long result = 0;

  for(size_t i = 0; bin != 0; i++) {
    result += (bin % 10) * pow(2, i);
    bin /= 10;
  }

  return result;
}

long long to_binary(long long dec) {
  long long result = 0;

  for(size_t i = 0; dec != 0; i++) {
    result += (dec % 2) * pow(10, i);
    dec /= 2;
  }

  return result;
}

int main() {
  long long bin = 101;
  printf("ahoj: %lld\n", to_decimal(bin));

  long long dec = 10;;
  printf("ahoj: %lld", to_binary(dec));

  return 0;
}
