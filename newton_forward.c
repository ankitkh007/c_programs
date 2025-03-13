#include <stdio.h>

int x[50];
int y[50];
int F[50][50];

int main() {
    int n, i, j, h, fact, k;
    float s, t, x0, u;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d data in array x: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter %d data in array y: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &y[i]);

    printf("Enter the value of x0: ");
    scanf("%f", &x0);

    // Initialize the forward difference table
    for (i = 0; i < n; i++) {
        F[i][0] = y[i];
    }

    // Forward difference table
    for (j = 1; j < n; j++) {
        for (i = j; i < n; i++) {
            F[i][j] = F[i][j - 1] - F[i - 1][j - 1];
        }
    }

    printf("F=\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", F[i][j]);
        }
        printf("\n");
    }

    // Interpolation
    h = x[1] - x[0];
    u = (x0 - x[0]) / h;
    s = y[0];
    t = u;
    fact = 1;

    for (k = 1; k < n; k++) {
        fact = fact * k;
        s = s + (t * F[k][k]) / fact;
        t = t * (u - k);
    }

    printf("The interpolated value of f(%f) is = %f\n", x0, s);
    return 0;
}
