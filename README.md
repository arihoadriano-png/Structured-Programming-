STRUCTURED PROGRAMING 
NAME: ARIHO ADRIANO
REG.NO:S26B23/116
ACCESS: B40203 
## Exercise 1 - Basic Output Program
**Category:** Sequential Execution / Basic I/O
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise _2.21_.

**What the program does:**
The program displays three welcome messages on the screen to introduce structured C programming.

**Concepts used:**
#include preprocessor directive, main function, printf function, \n newline character, return statement

**How it works:**
The program starts execution from the main() function. It calls printf() three times to print strings to the console. Each \n moves the cursor to the next line. Finally return 0 indicates successful execution.

**Example Run:**Welcome to structured C Programming
This is my first Program
Have a nice time

## Exercise 2 - input_process_output
**Category:** Arithmetic Operators
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16

**What the program does:**
The program asks the user for two integers a and b and calculates sum, difference, product, quotient and remainder.

**Concepts used:**
int variables, scanf, printf, arithmetic operators +, -, *, /, %

**How it works:**
It reads two integers using scanf. Then it performs a+b, a-b, a*b, a/b, a%b and stores them in variables. Each result is printed with printf.

**Example Run:**Enter a: 10
Enter b: 3
sum=13
difference=7
quotient=3
remainder=1
product=30

## Exercise 3 - Overtime Salary Calculator
**Category:** Decision Making with if-else and Loops
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 2 Exercise 2.29__.

**What the program does:**
Calculates weekly salary for 3 employees with overtime. Overtime (hours > 40) is paid at time-and-a-half.

**Concepts used:**
for loop, if-else, float and int variables, arithmetic operators

**How it works:**
Loop runs 3 times (num=1 to 3). For each employee, it reads hours and hourly rate. If hours <= 40, salary = hours * rate. Else salary = 40*rate + (hours-40)*rate*1.5. Then prints salary with 2 decimal places.

**Example Run:**Enter hours for employee 1: 45
Enter rate: 10
Salary is $475.00

## Exercise 4- 
**Category:** for Loop / Tabular Output
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3. exer 3.24

**What the program does:**
Prints a table of numbers from 1 to 10 with their square, cube and fourth power using \t tab formatting.

**Concepts used:**
for loop, arithmetic operators, printf with \t

**How it works:**
Loop n from 1 to 10. Calculate n2=n*n, n3=n*n*n, n4=n*n*n*n. Print in columns separated by tabs.

## Exercise 5- Salary Calculator with Sentinel-Controlled Loop
**Category:**  break statement
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.24.
**Concepts used:**
for loop, if-else, break statement, sentinel value -1

**How it works:**
For loop for max 3 employees. If user enters -1 for hours, break terminates loop immediately. Otherwise calculates overtime salary.

**Example Run:**Enter # of the hours worked 1 (-1 to end): 50
Enter hourly rate of the workers ($00.00): 10
Salary is $550.00

## Exercise 6- Find Largest Number
**Category:** Loops / Finding Maximum
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.23
**What the program does:**
Reads 10 integers from user and finds the largest among them.
**Concepts used:**
for loop, if statement, variable initialization

**How it works:**
First number is assumed as largest (i==1). Then each new number is compared with current largest. If greater, it replaces largest. After 10 inputs, prints largest.
**Example Run:**Enter 10 numbers to find largest:
Number 1: 12
Number 2: 45
Number 3: 3
Largest is 45

## Exercise 7 - Find the Two Largest Numbers (3.26)
**Category:** Loops / Finding Maximum - Deitel Exercise 3.26
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.26 - Find the Two Largest Numbers.

**What the program does:**
Reads 10 integers and finds the largest and second largest in one pass.

**Concepts used:**
for loop, nested if-else, tracking two maximum values

**How it works:**
Keeps two variables: largest and second_largest. When a number is greater than largest, current largest becomes second_largest and new number becomes largest. If it's not larger than largest but larger than second_largest, it becomes second_largest. This way each number is processed only once.

**Example Run:**Enter 10 numbers to find two largest:
Number 1: 12
Number 2: 45
Number 3: 67
Largest is 67
Second largest is 45



# Exercise 8 - Sales Tax Calculator
**Category:** while loop / Arithmetic Calculation
**Source:** Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.16.

**What the program does:**
Calculates sales tax and total price. County tax 5% and state tax 4%.

**Concepts used:**
while(1) infinite loop, break, float calculation

**How it works:**
Loop keeps asking for price until -1 is entered. Tax = price * (0.05+0.04). Total = price + tax.

**Example Run:**Enter item price: 100
Tax: 9.00
Total: 109.00