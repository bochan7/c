#include <stdio.h>
#include<stdlib.h>
int main() {
    FILE *inputFile, *oddFile, *evenFile;
    int number;
    
    inputFile = fopen("data.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1; 
    }
    oddFile = fopen("odd.txt", "w");
    evenFile = fopen("even.txt", "w");
    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening the output files.\n");
        fclose(inputFile);
        return 1; 
    }
    while (fscanf(inputFile, "%d", &number) == 1) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }
    fclose(inputFile);
    fclose(oddFile);
    fclose(evenFile);
    printf("Contents of odd.txt:\n");
    oddFile = fopen("odd.txt", "r");
    while (fscanf(oddFile, "%d", &number) == 1) {
        printf("%d\n", number);
    }
    fclose(oddFile);
    printf("\nContents of even.txt:\n");
    evenFile = fopen("even.txt", "r");
    while (fscanf(evenFile, "%d", &number) == 1) {
        printf("%d\n", number);
    }
    fclose(evenFile);
   
    return 0;
}
