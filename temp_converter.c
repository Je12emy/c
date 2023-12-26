#include <stdio.h>
/*
Convert the following temperatures from C to F
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

// Converts from Celcous to Farenheit
float convert(float temp);

int main() {
  int min, max, step;
  min = 0;
  max = 300;
  for (int i = min; i < 300; i = i + 20) {
    float result = convert((float)i);
    printf("%d -> %.1f\n", i, result);
  }
  return 0;
}

float convert(float temp) { return (5.0 * (temp - 32)) / 9; }
