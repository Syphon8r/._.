#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    FILE *file;

    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Nem sikerült megnyitni a fájlt.\n");
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        int num = rand() % (99 - 10 + 1) + 10;  // [10, 99] 
        fprintf(file, "%d\n", num);
    }

    fclose(file);

    return 0;
}
