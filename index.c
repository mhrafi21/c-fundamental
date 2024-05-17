#include <stdio.h>
#include <string.h>
#include <math.h>
/*
C variable

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes



int main()
{
    // Declare a variable
    int myNum;
    // assign value; to the variable
    myNum = 39;

    int num = 54;

    int myOtherNum = 34;

    // Assign value of myOtherNum to myNum;

    num = myOtherNum;

    myOtherNum = num;

    // printf("%d", num);
    // printf("%d", myOtherNum);

    // add variable together;

    int sum()
    {
        int a = 65;
        int b = 87;
        int sum = a + b;
        printf("%d", sum);
        return 0;
    }

    return 0;
}
*/

int main()
{
    int x = 3, y = 4, z = 9;
    // printf("%d", x + y + z);

    int a = 6;
    int b = 0;
    int c = 5;
    int sum = a + b + c;
    // printf("%d", sum);

    /*
    The general rules for naming variables are:
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names

    */
    // declare variables;
    // int studentID = 12;
    // int studentAge = 21;
    // float studentFee = 67.56;
    // char studentGrade = 'D';
    // // Note: Don't use the char type for storing multiple characters, as it may produce errors.
    // //  char studentCollege  = "Ananda Mohan College";
    // //  Double (floating point number)
    // double myDoubleNum = 19.99;

    //    char greetings[] = "hello world";

    // print variables;

    // printf("%i\n", studentID);
    // printf("%d\n", studentAge);
    // printf("%f\n", studentFee);
    // printf("%c", studentGrade);
    //  printf("%lf", myDoubleNum);
    // printf("%s", greetings);

    float preventZero = 40.95;

    // printf("%.4f", preventZero); // give us 4 digit after dot;

    // size of operator

    // int myInt;
    // float myFloat;
    // double myDouble;
    // char myChar;

    // printf("%lu\n", sizeof(myInt));
    // printf("%lu\n", sizeof(myFloat));
    // printf("%lu\n", sizeof(myDouble));
    // printf("%lu\n", sizeof(myChar));

    // constants in c

    // const int roll = 555;
    // // error: assignment of read-only variable 'roll';
    // // roll = 654;

    // C divides the operators into the following groups:

    // Arithmetic operators
    // Assignment operators
    // Comparison operators
    // Logical operators
    // Bitwise operators

    // if else

    // int examNum = 34;

    // if(examNum > 33){
    //     printf("The student is passed");
    // }else{
    //     printf("The student is failed");
    // }
    /*
        int day = 5;

        switch (day)
        {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("No week exist");
        }
    */

    // white

    // int i = 0;
    // while(i <= 10){
    //     printf("%d\n", i);
    //     i++;
    // }

    // do while

    // int i = 0;
    // do{
    //     printf("%d\n", i);
    //     i++;
    // }while (i <= 20);

    // int i, j;

    // // Outer loop
    // for (i = 1; i <= 2; ++i) {
    //   printf("Outer: %d\n", i);  // Executes 2 times

    //   // Inner loop
    //   for (j = 1; j <= 3; ++j) {
    //     printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    //   }
    // }

    // int con;

    //     for (con = 0; con <= 10; con++)
    // {
    //     if (con == 5) // without 5 it gives all;
    //     {
    //         continue;
    //     }

    //     printf("%d", con);
    // }
    //   int con;

    //     for (con = 0; con <= 10; con++)
    // {
    //     if (con == 5) // break when its length 5
    //     {
    //         break;
    //     }

    //     printf("%d", con);
    // }

    // C in array;
    // int numbers[] = {1,2,4,56,7,8,6,7,6,688,9};

    // printf("The number is %d", numbers[2]);

    // int nums[] = {4,4,5,6,8,9,95,5,6,88,55};

    // int num;

    // for(num = 0; num < 8; num++){
    //     printf("%d\n", nums[num] );
    // }

    // array sizeof and length;

    // int myNums[] = {4,4,5,666,345,3456,36,7,5,867,67,23,65,86,3,8,567,5};

    // int length = sizeof(myNums) / sizeof(myNums[2]);

    // // printf("%d", length));

    // for(int i = 0; i < length; i++){
    //     printf("%d\n", myNums[i]);
    // }

    //  lowest number finding;

    // int ages[] = {30,3,5,666,7,6,5,5,21,3,1,645};

    // int length = sizeof(ages) / sizeof(ages[4]);

    // int lowest = ages[6]; // 5

    // for(int i = 0; i < length; i++){
    //     int num = ages[i];

    //     if(num < lowest){
    //         lowest = num;
    //     }

    // }

    //     printf("%d\n", lowest);

    // int matrix[2][2] = {{4,4,5,6,7,8,9},{32,4,6,7,8,5,7}};

    // printf("%d\n", matrix[0][2]);

    // string declare in c

    // char greetings[] = "hello world";

    // printf("%s", greetings);

    // String Length

    // char alphabet[] = "LSDFKJSFLSFDKLSJDFLSKJDFLFJLKSJFKLSJFKLSJFD";

    // printf("%d\n", strlen(alphabet));
    // printf("%c", alphabet[2]);

    // printf("%s", alphabet);

    // Concatenate Strings

    // char str1[20] = "Hello ";
    // char str2[] = "World!";

    // // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);

    // // Print str1
    // printf("%s", str1);

    // Copy Strings

    // char str1[20] = "Hello World!";
    // char str2[20];

    // // Copy str1 to str2
    // strcpy(str2, str1);

    // // Print str2
    // printf("%s", str2);

    // Compare Strings

    // char str1[] = "Hello";
    // char str2[] = "Hello";
    // char str3[] = "Hi";

    // // Compare str1 and str2, and print the result
    // printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

    // // Compare str1 and str3, and print the result
    // printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)

    // user input in C

    // To get user input, you can use the scanf();

    // int myNum;

    // // Ask the user to type a number;

    // printf("Type a number: ");

    // // Get and save the number the user types

    // scanf("%d", &myNum);

    // // Output the number the user typed

    // printf("Your number is: %d", myNum);

    // int myAge = 43;
    // printf("%p", &myAge); // Outputs 0061FEFC

    // Note:
    //     The memory address is in hexadecimal form(0x..).You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.You will learn much more about pointers in the next chapter.

    // int myAge = 43;     // An int variable
    // int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge
    // When used in declaration (int* ptr), it creates a pointer variable.
    // When not used in declaration, it act as a dereference operator.
    // Good To Know: There are two ways to declare pointer variables in C:

    // int* myNum;
    // int *myNum;

    // // Output the value of myAge (43)
    // printf("%d\n", myAge);

    // // Output the memory address of myAge (0x7ffe5367e044)
    // printf("%p\n", &myAge);

    // // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    // printf("%p\n", ptr);

    // C Pointers and Arrays

    // Create an int variable
    // int myInt;

    // // Get the memory size of an int
    // printf("%lu", sizeof(myInt)) // result 4

    //  So from the "memory address example" above, you can see that the compiler reserves 4 bytes of memory for each array element, which means that the entire array takes up 16 bytes (4 * 4) of memory storage:

    // Predefined Functions

    // So it turns out you already know what a function is. You have been using it the whole time while studying this tutorial!

    // For example, main() is a function, which is used to execute code, and printf() is a function; used to output/print text to the screen:

    // create function in C
    // void means that the function doesn't have a return value;
    // void myFunction () {
    //     printf("This is a function!");
    // }

    // myFunction();

    // Parameters and Arguments
    // Information can be passed to functions as a parameter. Parameters act as variables inside the function.

    // Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

    // returnType functionName(parameter1, parameter2, parameter3) {
    //   // code to be executed
    // }

    // void myName(char name[]) {
    //     printf("%s\n", name);
    // }

    // myName("Mahdi Hasan Rafi");

    // void myAge(char name[], int age) {
    //     printf(" my name is: %s and  %d years old", name, age);
    // }

    // myAge("Rafi", 21);

    // sum

    // int sumNum( int x, int y ){
    //   return  x + y;

    // }
    // int result = sumNum(3,5);

    // printf("%d", result);

    // A function consist of two parts:

    // Declaration: the function's name, return type, and parameters (if any)
    // Definition: the body of the function (code to be executed)

    // void myFunction() { // declaration
    //   // the body of the function (definition)
    // }

    // For code optimization, it is recommended to separate the declaration and the definition of the function.

    // You will often see C programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

    //  Recursion in C

    // Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

    // Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it

    // int sumNum2(int k)
    // {
    //     if (k > 0)
    //     {
    //         return k + sumNum2(k - 1);
    //     }
    //     else
    //     {
    //         return 0;
    //     }
    // }

    //     int result = sumNum2(10);

    //     printf("%d", result);

    // Math function in C

    // printf("%.2f", sqrt(16)); // square root ans: 4;

    // Round a Number
    // The ceil() function rounds a number upwards to its nearest integer, and the floor() method rounds a number downwards to its nearest integer, and returns the result:

    // Example
    // printf("%f\n", ceil(1.1));
    // printf("%f", floor(1.9));

    // Power
    // The pow() function returns the value of x to the power of y (xy):

    // Example
    // printf("%f", pow(4, 3));

    // Other Math Functions
    // A list of other popular math functions (from the <math.h> library) can be found in the table below:

    // Function	Description
    // abs(x)	Returns the absolute value of x
    // acos(x)	Returns the arccosine of x
    // asin(x)	Returns the arcsine of x
    // atan(x)	Returns the arctangent of x
    // cbrt(x)	Returns the cube root of x
    // cos(x)	Returns the cosine of x
    // exp(x)	Returns the value of Ex
    // sin(x)	Returns the sine of x (x is in radians)
    // tan(x)	Returns the tangent of an angle





    return 0;
}
