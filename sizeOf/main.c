/*

Sizeof

Exercise

Write a program that reads an integer x from the keyboard and establishes
the number of bytes necessary to store x variables of an integer type.


Example

Input 3
Output 12

*/


#include <stdio.h>

int main() {
    int number;
    printf("Insert a number (integer) of variables!\n");
    scanf("%d", &number);
    int bytes = sizeof(number) * number;
    printf("Number of bytes used in memory for number of variables inserted: %d", bytes);
    return 0;
}
