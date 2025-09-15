# Chapter 3 — C Program Components

## Objectives
1. Understand **components of a program** such as **comments**, **variables**, **functions**, and **statements**.
2. Learn basic **input/output (I/O)** functions such as `printf()` and `scanf()`.
3. Study the basics of **expressions** and **calculations**.

## What is a comment?
Comment is part tied with **/* - */**  and **//** symbols.   
Comment does not affect program's logic.   
Comment is for human, not a computer. 
```C
/* one line comment */

/* many lines
    can be 
    comment */

//this line is comment section
//this only support one line comment. 
/* if you want make many lines as commment,
    you have to use this symbol. */

/*******************************
 * someone might prefer this way
 * to make comment
 *******************************/

int x = 1; //from here this line is comment.

/* /* this is wrong commnet, you can't make comment in comment section */ */
```

### Why is comment special?
Comment is incredibely important, it helps other people can understand the sauce code better and easier.  
When it's complicated and complex sauce code, comments help developers to understand better and modify easily.  

## indentation
indentation is to increase readability.   
Like comment, indentation helps to understand.  
```C
#include <stdio.h>
                                // the space distinguishes 
                                // header section and main function section.
int main(void)
{
    int x;      // variable for first number  
                // you can write comment like this for other and yourself 
                // to understand better 
    int y;
    int sum;
    //as you can see, here all the same process in same line
    return 0;
}
```
## Preprocessor
anything starts with '#' is an instruction word for preprocessor.  
Normally it is in first row, and no space between '#' and 'include'.

## Header File
Header file means a file with code and ends with *.h extension.

## Function
Function needs input and output, it gives you a result.   
In function, there are small steps which are called statement.  
All statement ends with this symbol ';'  
One program can have many functions. The function that starts first is main function.  
Main function should be just one. If there are more than one, the compilier can not compile.

## Sturcture Of Function
Let's take a look of **main** function.
```C
int main(void)
{
    //... sentences.
    
    return 0;
}
```
- **int** : type of output.
- **main** : name of function.
- **(void)** : type of input.
- **{ }** : start and end of funtion.
- **return** : return value of this function. The Operating system will take this value. Usually 0 means it was succecssful, 1 means it was failed.

## Variable
Variable is memory space to store data. In C language, you can declare Variable like this.
```C
int x; // type name
float y;
```
To distinguish variables, we can use different names for each variables.  
Variable also can have the type. It could be integer or character etc.  
Variable should be declared before used. Unlike python or other languages, C requires strict grammar.  
Declaring before use variable is for letting complier know about variables.  

## Declare Variable
Here is example of declaring variables.
```C
int x;   // declare variable x of type int
float y; // declare variable y of type float
char z;  // declare variable z of type char

// If all variables are the same type, you can declare them together.
int a, b, c; // declare variables a, b, c of type int
```
## Identifier
Variable needs name to indentify itself and also distinguish to other variables.  
The programmer can name variable, but there are a few rules to follow.  
Rules to name variable.  

**1** : Identifiers can contain English letters, digits, and the underscore `_`.  
**2** : Identifiers cannot contain spaces.  
**3** : An identifier must start with an English letter or an underscore `_`.  
**4** : Uppercase and lowercase letters are distinct *(index and INDEX are different)*.  
**5** : Keywords in C cannot be used as identifiers.  

### what is Keyword?
Keywords are also called *reserved words*.  
They cannot be redeclared or used as identifiers.  
Here are Keywords in C language.
```C
auto double int struct break else long switch case enum register 
typedef char extern return union const float short unsigned 
continue for signed void default goto sizeof volatile do if static while  
```

Except above keywords, you can name variable by following rules.  
Here are examples of valid indentifier.
```C
sum // start with English letter
_count // starts with `_`
number_of_pictures // `_` can be in between
king3 // if it's not the first place, number can be part of name
```

These are examples of invalid indentifier.
```C
2nd_place // number can't be in the first place
money# // # symbols can't be used
double // reseved words can't be used
```
You can make a variable name as long as you want,  
but normally a compiler can only use the first 63 characters to distinguish identifiers.  
Depending on the compiler, some may only use the first 31 characters.  
Therefore, you don’t necessarily need to make variable names longer than that.

### Good example of indentifier
Naming variable is actually important work to do, so must be carefully done.  
When you name the variable, you must name it as it can represent itself better and efficient.  
For example, let's say we make ` i, j, k` as year, mnonths, dates.  
Those are much difficult to understand than `year, month, date`.  

### For longer words
If the variable has to be longer than just a word, there are usually 2 ways to identify.  
1. Use `_` for space : `bank_account, bus_driver` 
2. Use Camel case : `bankAccount, busDriver`

## Initialise variable
when you just declare variable, it has no value yet.  
More correctly and specifically, it has garbage value.  
There are a few way to initialise variable.  
```C
int x = 10; // declare and initialise same time.

int width = 100, height = 200; // declare and initialise more than one same time

int width, height = 200; // this is not wrong grammatically but not recommanded
                         // because here, only height is initialised.
                         // width has garbage values.
```

## Expression and Operation.
### Assignment
In order to store value in a variable, you need to assign the value to variable.  
In C language, `=` is used to assign. `=` is also called **assignmment operator**.  
You can change the value of variable as much as you want. Also variable can have other variable's value.  
```C
int x = 100; // declare and initialise same time

int value; // declare, variable has garbage value
value = 10; // initialise with 10
value = 20; // change the value to 20

int y = 10;
int z = 20;
y = z; // value of y is 20 now
```

### Arithmetic Operation
Computer is basically machine to compute. Here are Arithmetic operations.  
Operaters | Operation | Expression | Symbols in math
--- | --- | --- | ---
Addition | + | x + y | x + y
Subtraction | - | x - y| x - y
Multiplication | * | x * y | xy
Division | / | x / y | x/y 
Modulo | % | x % y | x mod y

The Four basic operations are called as binary operator, because they need 2 operands.  
```C
#include <stdio.h>
int main(void)
{
    int x;
    int y = 200;
    int sum = 0;

    x = 100;
    y = 100;

    sum = x + y;

    printf("sum = %d", sum); // sum = 200;

    return 0;
}
```

## `printf ( )`
C language supports various library functions.  
A library function is a function provided by the compiler (or standard library) that programmers can use directly.  
`printf( )`  is print outcome to monitor, `scanf( )` is input function from keyboard.  

### Print String
In order to use `printf( )`, you just need to put data in `( )`.  
```C
printf("Hello World!"); // string is input for printf
```
When function is called, most of time data is given to function.  
For example, `printf( )` is print fuction but without any data,  
function can not know what programmer wants to do.  
When you call the function, you put data in ` ( ) `. This data is called **argument**.

### Print Variable Value
`printf( )` also can to print data in form. If you want to print value of `sum`, you must follow form.  
```C
printf("Result = %d", sum);
```
`%d` is for formatting. It means formatting value as decimal and is called format specifier.  
Format Specifier | Meaning | Example | Result
--- | --- | --- | ---
%d | decimal | `printf("%d", 10)`|10
%f | float | `printf("%f", 3.14)` | 3.14
%c | character | `printf("%c", 'a')`| a
%s | string | `printf("%s","Hello")`|Hello

Format specifiers and values can be more than one. Here is example.  
Format specifier and variable type should be matched.
```C
printf("%d %f", number, grade); 

int sum = 10;
printf("%f", sum); // this is wrong
```

### Width and Precision
When you call `printf( )`, you can designate the form of data field. For example, `%10d` means field width is 10 character size.  
If data is bigger than field form, the form is automatically expended.  

```c
#include <stdio.h>

int main() {
    // ----- Width examples -----
    printf("%10d\n", 123);   // width=10, right-aligned (default)
    printf("%-10d\n", 123);  // width=10, left-aligned (with '-')

    // ----- Precision examples -----
    printf("%.3f\n", 3.14159);     // precision=3, shows 3 digits after decimal
    printf("%10.3f\n", 3.14159);   // width=10, precision=3, right-aligned
    printf("%-10.3f\n", 3.14159);  // width=10, precision=3, left-aligned

    return 0;
}
// output
       123    // %10d  → right-aligned
123        // %-10d → left-aligned

3.142       // %.3f   → rounded to 3 decimals
     3.142  // %10.3f → width=10, right-aligned
3.142      // %-10.3f → width=10, left-aligned
```

## `scanf( )`
`scanf( )` is function to transfer input from keyboard to certian form. Usage of `scanf( )` is similar to `printf( )`.  
This is example of getting input from keyboard and assign it in `x`.
```C
scanf("%d", &x);
```
`%d` is format specifier same as in `printf( )`. `%x` is address of variable to receive input.  
Be aware of `&` symbol. If variable has `&`, it means it represents it's address.  
Unlike `printf( )`, `scanf ( )` needs variable's address. Once `scanf( )` is called, it waits input from keyboard untill user finishes typing.  

Format Specifier | Meaning | Example 
--- | --- | --- |
%d | decimal | `scanf("%d", &d);`
%f | float | `scanf("%f", &f);` 
%lf| double | `scanf("%lf", &lf)`
%c | character | `scanf("%c", &c);`
%s | string | `char s[10]; scanf("%s",&s);`

```C
float ratio = 0.0;
scanf("%f", &ratio); // float type.

double scale = 0.0;
scanf("%lf", &scale); // double type.

int number; 
float grade;

scanf("%d %f",&number,&grade); 
// in this case, except format specifier is charater
// all the spaces between inputs which are numbers are ignored
// such as tab, space and enter
```