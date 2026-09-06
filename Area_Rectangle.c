#include <stdio.h>
void main() {
  printf("AREA OF RECTANGLE \n");
  float l, b, area;

  printf("Enter Legnth \n");
  scanf("%f", &l);

  printf("Enter Breadth \n");
  scanf("%f", &b);

  area = 2 * (l + b);
  printf("Area is: %.2f", area);
}