# Chapter 4 - Variable and Data Type

## Objectives
1. Understand Concepts of **Variable** and **Data Type**.
2. Learn Data Type in C language.
3. Declare and Use **Integer** Variable and Constant.
4. Declare and Use **Floating-Point** Variable and Constant.
5. Learn **Symnbolic Constant**.
6. Understand **Overflow** and **Underflow**.

## Variable and Constant
### What is variable?
We already did check about variable. Computer use variable to store a value.  
Variable can represnet **character, string, memory address**.
```C
int sum = x + y;
```
Then where varialbe actually goes? Variable is created and stored in **Main Memory**. When we declare the variable, it makes the place in Main Memory.  
After initialising, by using name we can store the value. Besides some special occasions, we don't need to access memory address often.  

### Why do we need variable?
Variable takes important role in program. Variable is the place programmer/user to store value.  
If we don't have variable, it's impossible to work.
Let's take a example, here we have 2 sauce codes.  
```C
int area = 100 * 200;
```
```C
int width = 100;
int height = 200;
int area = width * height;
```
Which one is more flexible?, both are doing same work. However the second one is much flexible, we can customise all variable.  

### Variable and Constant
Variable can be changed while program is running. Constant can't change.  
For example, circumference is always same.
```C
double area = 3.141592 * radius * radius;
```
In here, constant has no name. We call this as **literal constant**. However you can name the constant, and it is called **symbolic constant**

## Data Type
In program, various data types are used. It could be much eaiser, if we can all use same data type.  
However, in C language depending on data types, they need different space in memory. Compare to integer, float needs more space.  
Using proper data type regard to data and value is needed for saving memory and time while program is running.  
Data type | Byte | type|
--------|-------------|------|
 short | 2 | Integer|
 int    | 4 | Integer |
 long | 4 | Integer|
 long long | 8 | Integer|
 float | 4 | Floating-Point|
 double | 8 | Floating-Point|
 char | 1 | Character|  

*Exact size of data type could be different in condition of complier and OS*
*Windows and Linux have different range, here I am following Windows one*
### `sizeof( )`
`sizeof( )` function is to see data types size. It returnes the size of variable or data type in btyes.
```C
int x;
printf("%d",sizeof(x));
```

## Integer
Integer is most bascially type and can store integer types.   
In C, depends on number of bits, integer type can be distinguished `short, int, long`.  
In math, integer has a range of infinity, but computer can't have because of number of bits.  
| Data type   | Bits | Coverage                          |
|-------------|------|-----------------------------------|
| short       | 16   | -32,768 ~ 32,767                  |
| int, long   | 32   | -2,147,483,648 ~ 2,147,483,647    |
| long long   | 64   | -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 |

*1 byte = 8 bit*  

Why does C language have so many integer? It's for programmers, so they can choose the types.  
Data type has bits. Depends on bits, data type can have more space.  
For example, `int` have 32 bits in most of computer system. With 32 bits, `int` can express $2^{32}$ integers. Because it has 32 bits.  
Then what about the coverage of `int`? It can represent around - 2.1billion to 2.1billion.  
How can programmer select data type? If you need to save value either it's really big number, then you might need to use `long long`.
```C
short year = 10;
int sale = 20000000;
long total_sale = year * sale;
long long large_value = 10000000000000LL;
```

### `unsigned`
`unsigned` can be used with integer or character. `unsigned` is to show only positive numbers.  
For example, `char`'s first bit / Most Significant Bit (MSB) is usually used for show sign (+/-), and others for number.   
However, when it's `unsigned` the MSB is also to represent number. So `unsigned char` can be only positive but more bigger number.
- Unsigned char (8 bits)
  - Range: 0 ~ 255
  - Smallest: 0000 0000 (0)
  - Largest : 1111 1111 (255)

- Signed char (8 bits, 2's complement)
  - Range: –128 ~ 127
  - Smallest: 1000 0000 (–128)
  - Largest : 0111 1111 (+127)

When it's `unsigned int`, it would be in range 0 - around 4.2billions.
```C
unsigned int speed;
unsigned int distance;
unsigned short players;

unsigned int sales = 2800000000;
printf("%u \n", sales);
```
*`%d` is also okay when the value isn't big. However, when it's big number, `%u` is required.  

### Overflow
Since integer has the limit. If the value needs more bits then the data type has, it could make problem.  
```C
short money = SHRT_MAX;
unsigned short u_money = USHRT_MAX;
money = money + 1; // overflow.
u_money = u_money + 1 ; //overflow
```  
In here, `money` was 32767, since we +1. It becomes -332768, this unexpected situation is called **overflow**.
If overflow happens, complier wouldn't see this as problem. So the programmer should be aware of it.  

### Integer Constant
Integer constant is usally considered as `int` type. However, if the value is bigger than coverage, the complier chagne data type to `long`.  
If it's not working as `long`, it might change to `unsigned long`. Complier always choose the lowest data type.  
Programmer can designate data type. Here are examples.  
| Suffix   | Data Type | Example                         |
|-------------|------|-----------------------------------|
`u`, `U`| unsigned int | `123u`, `123U`
`l`, `L`|long|`123l`, `123L`
`ul`, `UL` | unsigned long | `123ul`, `123UL`|  

Integer constant cab be either octal or hexadecimal.  To change to octal, `0` must be placed front.  
To change to hexadecimal, `0x` is needed.
```C
    int a = 10;      // decimal
    int b = 012;     // octal (8 in decimal)
    int c = 0xA;     // hexadecimal (10 in decimal)
    //all can be printed by '%d' as decimal.
```
*In, hexadecimal, `0xA` and `0xa` are same. It isn't case sensitive.*  

### Symbolic constant
Unlike variable, constant doesn't have name. It's because programmer actually gives the values.   
*`int x = 10;` (in here the 10 is constant).*  
However there is way to give constant a name by using **symbolic constant**. Here is small comparison.
```C
int krw_1 = 1400 * dollar; // here we put literally number, 1400.
int krw_2 = EXCHANGE_RATE * dollar // we use name like variable.
```
#### Advantage of using symbolic constant.  
1. Understand code better. `EXCHANGE_RATE` is easier to understnad than `1400`.
2. Easy to change the value of constant. In order to change the rate, if codes are written with `1400`, we have to check every `1400`. If it was `EXCHANGE_RATE`, then we just need to simply change the value of `EXCHANGE_RATE`.

#### How to declare symbolic constant.
1. `#define`  
`#define EXCHANGE_RATE 1400`  
This make all `EXCHANGE_RATE` value as 1400. `#define` is usually processed by preprocessor.

*Preprocessor runs before the Compiler. The Preprocessor processes the source code, while the Compiler translates the C source code into machine language.*

2. `const`   
`const int EXCHANGE_RATE = 1400;`  
Using `const` keyword front of variable name makes it as constant.  
Declared variable with `const` can change value once initialised. Be aware of sentence ends with `;`.  

#### `const` vs `#define` which one is better?
Usually using `const` keyword has more advantages than `#define`.  
This can store the data type and do a grammatical examination.  
Plus, `const` can use with structure and array types.

### Internal Representation of Integers



