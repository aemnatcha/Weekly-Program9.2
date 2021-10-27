#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c;
	scanf_s("%f %f", &a, &b);
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%.6f", c);
}
