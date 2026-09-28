#include <stdio.h>
#include <stdlib.h>

int main()
  {
      int number, largest = 0;
      int i;

    printf("Enter 10 numbers to find largest:\n");


    for(i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &number);

        if(i == 1) {
            largest = number;
        }
        if(number > largest) {
            largest = number;
        }
    }

    printf("\nLargest is %d\n", largest);


    return 0;
}
