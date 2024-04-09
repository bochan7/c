#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    // Initialize random seed
    srand(time(NULL));

    // Generate a random number between 0 and RAND_MAX
    int randomValue = rand();

    // Print the random value
    printf("Random Value: %d\n", randomValue);

    return 0;
}

