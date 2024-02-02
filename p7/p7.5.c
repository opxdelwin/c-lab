#include <stdio.h>
#include <math.h>

void main()

{

    float a, b, c, d, im, r1, r2, real;

    printf("enter:");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    switch ((d > 0) ? 1 : 2)
    {

    case 1:
        r1 = (-b + sqrt(d) / (2.0 * a));
        r2 = (-b - sqrt(d) / (2.0 * a));
        printf("roots are: %f and %f", r1, r2);

        break;

    case 2:

        real = (-1) / (2.0 * a);
        im = sqrt(d) / (2.0 * a);

        printf("roots are: %f and %f", r1, r2);

        break;

    default:

        r1 = r2 = -b / (2.0 * a);
        printf("Roots are: %f and %f", r1, r2);
    }
}