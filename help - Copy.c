#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Nem sikerült megnyitni a fájlt.\n");
        return 1;
    }

    int *numbers = malloc(sizeof(int) * 100);
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        fscanf(file, "%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("A számok átlaga: %.2f\n", (float)sum / 100);

    free(numbers);
    fclose(file);
    return 0;
}
