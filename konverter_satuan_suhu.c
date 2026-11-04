#include <stdio.h>

int main() {
  const float konversi_fahrenheit = 1.8;
  const float konversi_kelvin = 273.15;
  float f;
  float k;
  float c;
  printf("Masukkan suhu Celsius: ");
  scanf("%f", &c);

  f = c * konversi_fahrenheit + 32;
  k = c + konversi_kelvin;

  printf("Celsius ke fahrenheit: %.2f\n", f);
  printf("Celsius ke kelvin: %.2f\n", k);

  return 0;
}
