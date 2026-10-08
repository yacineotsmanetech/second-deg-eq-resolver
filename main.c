#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, x1, x2;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (b*b-4*a*c == 0) {
        printf("THERE IS A DOUBLED SOLUTION.\n");
        x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
        printf("The root is: %d\n", x1);
    }
    if (b*b-4*a*c > 0) {
        x1 = (-b + sqrt(b*b-4*a*c)) / (2*a);
        x2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
        printf("The roots are: %d and %d\n", x1, x2);
    }
if (b*b-4*a*c < 0) {
        printf("THERE IS NO SOLUTION.\n");
    }

    return 0;
}