#include <stdio.h>

int main() {
    int numbers[10];
    int i, largest;

    printf("Enter ten integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
