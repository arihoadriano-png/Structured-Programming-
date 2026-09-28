#include <stdio.h>
#include <stdlib.h>

int main()
  {
  int hours;
    float rate, salary;
    int num = 0;


    for(num = 1; num <= 3; num++) {
    printf("Enter hours for employee %d: ", num);
    scanf("%d", &hours);
    printf("Enter rate: ");
    scanf("%f", &rate);
    if(hours <= 40) {
    salary = hours * rate;
    } else {
    salary = 40 * rate + (hours - 40) * rate * 1.5;
        }
    printf("Salary is $%.2f\n\n", salary);
}


    return 0;
}
