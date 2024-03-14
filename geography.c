#include <stdio.h>
#include <math.h>
int main()
{
    double n1, n2, n3, n4, n5, a, b, c, d, e;
    printf("Enter the crop percentage: ");
    scanf("%lf", &n1);
    printf("Enter the crop percentage: ");
    scanf("%lf", &n2);
    printf("Enter the crop percentage: ");
    scanf("%lf", &n3);
    printf("Enter the crop percentage: ");
    scanf("%lf", &n4);
    printf("Enter the crop percentage: ");
    scanf("%lf", &n5);
    a = (pow((100 - n1),2)) / 1;
    b = (pow((50 - n1),2) + pow((50 - n2),2)) / 2;
    c = (pow((33.33 - n1),2) + pow((33.33 - n2),2) + pow((33.33 - n3),2)) / 3;
    d = (pow((25 - n1),2) + pow((25 - n2),2) + pow((25 - n3),2) + pow((25 - n4),2)) / 4;
    e = (pow((20 - n1),2) + pow((20 - n2),2) + pow((20 - n3),2) + pow((20 - n4),2) + pow((20 - n5),2)) / 5;
    printf("\nThe 1 crop %.3lf\nThe 2 crop %.3lf\nThe 3 crop %.3lf\nThe 4 crop %.3lf\nThe 5 crop %.3lf", a, b, c, d, e);
    return 0;
}