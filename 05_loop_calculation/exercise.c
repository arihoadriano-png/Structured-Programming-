#include <stdio.h>
#include <stdlib.h>

int main()
  {
  int hours;
    float hourly_rate, salary;
    int num= 0;


    for(num= 1; num <= 3; num++) {
        printf("Enter # of the hours worked%d(-1 to end): ", num);
        scanf("%d", &hours);
        if(hours==-1){
            break;
        }
        printf("Enter hourly_rate of the workers($00.00): ");
        scanf("%f", &hourly_rate);
        if(hours <= 40) {
            salary = hours * hourly_rate;
        } else {
            salary = 40 * hourly_rate + (hours - 40) * hourly_rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);

    }

    return 0;
}
