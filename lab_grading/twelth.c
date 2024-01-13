#include <stdio.h>
int main() {
    int n, i = 1; 
    /* Input the value of n*/
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Number\tSquare\tCube\n");
    /*to display square and cube using a do-while loop*/
    do {
        int square = i * i;
        int cube = i * i * i;
        printf("%d\t%d\t%d\n", i, square, cube);
        i++;
    } while (i <= n);
    return 0;
}
