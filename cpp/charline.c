#include <stdio.h>

// Function to print a line of characters with a specified length
void charLine(char ch, int length) {
    for (int i = 0; i < length; i++) {
        putchar(ch);
    }
    printf("\n");  // Move to the next line after printing the line
}

int main() {
    int numRows, numCols;

    // Prompt the user for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    printf("Enter the number of columns: ");
    scanf("%d", &numCols);

    // Print the top border
    charLine('*', numCols * 13 + 1);  // Assuming each column is 4 characters wide

    // Print the table contents with borders
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            printf("|  ");  // Assuming each column is 4 characters wide
        }
        printf("|\n");  // End the row with a border
        charLine('*', numCols * 13 + 1);  // Print the border below each row
    }

    return 0;
}
