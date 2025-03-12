#include <stdio.h>
#include <string.h>

int main() {
    int count, n1, n2, result;
    char sequence[100] = ""; // Initialize an empty string to store the sequence

    n1 = 0;
    n2 = 1;

    // Append the first two numbers to the sequence
    sprintf(sequence + strlen(sequence), "%d-", n1);
    sprintf(sequence + strlen(sequence), "%d-", n2);

    for (count = 3; count <= 11; count++) {
        result = n1 + n2;
        sprintf(sequence + strlen(sequence), "%d-", result);
        n1 = n2;
        n2 = result;
    }

    // Remove the trailing hyphen
    sequence[strlen(sequence) - 1] = '\0';

    // Print the final sequence
    printf("%s\n", sequence);

    return 0;
}