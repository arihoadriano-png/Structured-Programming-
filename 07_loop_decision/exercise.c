#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;
    int largest = 0, second_largest = 0;
    int i;
    printf("Enter 10 numbers to find two largest:\n");

    for(i = 1; i <= 10; i++) {
    printf("Number %d: ", i);
        scanf("%d", &number);
        if(i == 1) {
            largest = number;
        }
        else if(number > largest) {
            second_largest = largest;
            largest = number;
        }
        else if(number > second_largest) {
            second_largest = number;
        }
    }

    printf("\nLargest is %d\n", largest);
    printf("Second largest is %d\n", second_largest);


    return 0;
}
