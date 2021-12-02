#include <stdio.h>
#define PI 3.14
#define SQUARE(r) r *r

int main()
{
    float b = PI;
    int r = 4;
    printf("%f\n", PI);
    printf("the area of the circle is: %f\n", PI * SQUARE(r));
    return 0;
}