#include <stdio.h>

int main() {
    int a[10], i, n;

    printf("Enter how many values you want to read: ");
    scanf("%d", &n);

    if(n > 10) {
        printf("Maximum size is 10.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("The array elements are: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
