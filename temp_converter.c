#include <stdio.h>
/*
Convert the following temperatures from F to C
1    −17
20   −6
40   4
60   15
80   26
100  37
120  48
140  60
160  71
180  82
200  93
220  104
240  115
260  126
*/

float farenheit_to_celsius(float fahrenheit_temperature);
float celsius_to_farenheit(float celsius_temperature);

#define MIN 0
#define MAX 300
#define STEP 20

int main() {
  printf("Farenheit to Celsius converter\n");
  for (int i = MIN; i < MAX; i = i + STEP) {
    float result = farenheit_to_celsius((float)i);
    printf("%3.0f \t %6.1f\n", (float)i, result);
  }

  printf("Celsius to Farenheit converter\n");
  for (int i = MIN; i < MAX; i = i + STEP) {
    float result = celsius_to_farenheit((float)i);
    printf("%3.0f \t %6.1f\n", (float)i, result);
  }
  return 0;
}

float farenheit_to_celsius(float fahrenehit_temperature) {
  return (5.0 * (fahrenehit_temperature - 32)) / 9.0;
}
float celsius_to_farenheit(float celsius_temperature) {
  return (9.0 / 5.0) * celsius_temperature + 32.0;
}
