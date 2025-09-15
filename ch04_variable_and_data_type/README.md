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
#### Example 👉 [`sizeof`](./sizeof.c)

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
#### Example 👉 [Overflow](./overflow.c)

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
| Format Specifier | Description              | Example Output (`num = 255`) |
|------------------|--------------------------|-------------------------------|
| `%d`             | Signed decimal integer   | 255                           |
| `%u`             | Unsigned decimal integer | 255                           |
| `%x`             | Hexadecimal (lowercase)  | ff                            |
| `%X`             | Hexadecimal (uppercase)  | FF                            |
| `%o`             | Octal                    | 377                           |

*In, hexadecimal, `0xA` and `0xa` are same. It isn't case sensitive.*  
#### Example 👉 [Integer Constant](./int_const.c)

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
#### Example 👉 [Symbol Constant](./sym_const.c)

#### `const` vs `#define` which one is better?
Usually using `const` keyword has more advantages than `#define`.  
This can store the data type and do a grammatical examination.  
Plus, `const` can use with structure and array types.

### Internal Representation of Integers
We can drive the car even though we don't know about engine. Same as integers in C languages.  
You may not have to know now, yet it helps you to understand computer overall.  
In computer, it always represents everything with `0` and `1`. So integers always can be shown with binary.  
One single binary digit is called **bit**. Bit has two states which is `0` / `1`. (`0` means off, `1` means on).  
Let's suppose there is 4 bits data type.
|Bits | Integer |
|-----|---------|
|0000 | 0|
|0001 | 1 |
|0010 | 2|
|0011| 3|

In case of positive integer, decimal value can be stored as binary. However, we need to think about how to store negative intergers.  
Usually **MSB (Most signiticant Bit)** is sign bit. So if it's `0` it means postivie. If it's `1`, it means negetive.  
The problem is when it's negative. Let's say the sign bit is `1`, and others represent `3`.  
```C
1000 0011 
```
Is it considered as `-3` in computer? The answer is no. If computer use negative numbers as an example.  
It increases complexity. **CPU (Central Process Unit)** uses addition rcuit for subtraction. CPU only has addition circuit to decrease complexity.  
Therefore, bit system like an example can't be accepted. Then how does CPU manage negative numbers?  
Computer uses two's complement. To get complement, first invert the bits (0 to 1, 1 to 0).  
Plus `1` after invert. Then the result is negative number.
```C
0011 // it's 3
1100 // inverting
1101 // it's -3
```
Thanks to two's complement, computer can handle negative number easily.
```C
0011 // +3
1101 // -3 if we plus these.
----
0000
```
## Floating-Point Type
How computer can represent `3,14`? Let's say there are 8 bits, then we might think it's gonna be like this in bits.
```C
0011 / 1110
integer / real number
```
This system is called as *fixed point* because the point is fixed in middle.
This method is easy way yet, it's not enough for big numbers. So we need other system for real numbers.  
**floating point** is a solution. By moving the point, with limited bits, it can represent big numbers than fixed point.  
In floating-point representation, 1 bit is for the sign, 8 bits are for the exponent, and the remaining bits are for the mantissa (or significand).  
As a result, it can show big numbers.  
### Floating-Point Data Types 
In C, `float`, `double`, `long double` are for real-number.  
`float` can be represented in 32bits. 8 bits are for exponent bits, others are for mantissa and sign bits.  
`flaot` can represent about 6 to 7 decimal digits of precision, also can represent $10^{-38}$ - $10^{38}$.  
`double` needs 64bits. 11 bis are for exponent, others for mantissa and sign. `double` can represnet about 16 decimal digits of precision.  
Also `double` can represent from $10^{-308}$ t0 $10^{308}$.  
| Data Type | Name                          | Size    | Precision              | Range                                     |
|-----------|-------------------------------|---------|------------------------|-------------------------------------------|
| `float`   | single-precision floating point | 32 bits | ~6–7 decimal digits    | 1.17549 × 10⁻³⁸ to 3.40282 × 10³⁸          |
| `double`, `long double`  | double-precision floating point | 64 bits | ~15–16 decimal digits  | 2.22507 × 10⁻³⁰⁸ to 1.79769 × 10³⁰⁸        |

### Format Specifier
`%f` is format specifier for floating number. It basically prints 6 decimal points. If the number has more than 6 points, the value is rounding.  
```C
printf("%f",0.123456789); // 0.123457 
```
If you want to print number like `1.2345e10` `%e`, `%E` can be used. `%g` is used when it has more than 6 points, it changes as `%e`, less than 6points then it changes to `%f`
```C
printf("%e",0.123456789); // 1.2345678e-001
```
#### Example 👉 [Floating](./floating.c)

### Floating-Point Constant
Floating-point constant is declared with `.`. For example `3.14`, `1.02`. Floating point constant is basically stored as `double`.
If you want it as `float` simply putting `F` or `f` in the end makes constant as `float`. Also using `e` and `E` to show exponents is accepted.
```C
3.141592 // double
3.141592F // float
3.141592e0 // exponent.
2. // this also means floating point constant.
```

### Overflow and Underflow
**Overflow** happens when the value is bigger than data type, so data type can't store value. `float` can't save number more than $1 \times 10^{38}$.
Complier prints `inf` when it's overflowed. Complier thinks it's special value to view infinity.  
**Underflow** is completely opposite to overflow. `float` can't save number lower than $1.23456 \times 10^{-38}$. That is the lowest number `float` can have with precision. If the value is lower than limit. Value changes to `0`. It means underflow has happened.

#### Example 👉 [Float Overflow Underflow](./overflow_underflow_float.c)

### Floating-Point can be Inaccurate!
Let's take a look here.
```C
#include <stdio.h>

int main(void)
{
    float vlaue = 0.1;
    printf("%.20f \n",vlaue); // 20 decimal places.
    return 0;
}
/*
Output
0.10000000149011611938
*/
```
We expect `0.1` yet the printed value isn't same as `0.1`.  
Why is it? It's because in binary system, some numbers can't be expressed accurately. Like in decimal system, we can not represent $1/3$ accurately `0.33333 ... `.  

#### Example 👉 [Float Inaccuracy](./float_inaccurate.c)

### Precautions for Using Floating-Point
Unlike integer arithmetic operations, floating-point might cause errors. So we should be aware of floating-point can make error.  
However, this error is universal thing. Every computer has same problem because it's binary system.  
To reduce error, use `double` can be solution, because `double` has more bits than `float`.  

## Charater Type
### Charater and ASCII
Charater means a single lette, number or symbol. How computer can represent charater? Computer also use numbers to represent charater.  
For example, `A` is 65, `B` is 66. However some programmer might want to use 1 to represent `A`. To unify, people had made a standard which is **ASCII : American Standard Code for Information Interchange**.  
This was made 1967, has 33 control charater (such as `\n`, `\r` etc) and 95 printable charater.
| Dec | Hex | Char | Description           | Dec | Hex | Char | Description           |
|-----|-----|------|-----------------------|-----|-----|------|-----------------------|
| 0   | 00  | NUL  | Null                  | 64  | 40  | @    | At sign               |
| 1   | 01  | SOH  | Start of Heading      | 65  | 41  | A    | Capital A             |
| 2   | 02  | STX  | Start of Text         | 66  | 42  | B    | Capital B             |
| 3   | 03  | ETX  | End of Text           | 67  | 43  | C    | Capital C             |
| 4   | 04  | EOT  | End of Transmission   | 68  | 44  | D    | Capital D             |
| 5   | 05  | ENQ  | Enquiry               | 69  | 45  | E    | Capital E             |
| 6   | 06  | ACK  | Acknowledge           | 70  | 46  | F    | Capital F             |
| 7   | 07  | BEL  | Bell                  | 71  | 47  | G    | Capital G             |
| 8   | 08  | BS   | Backspace             | 72  | 48  | H    | Capital H             |
| 9   | 09  | TAB  | Horizontal Tab        | 73  | 49  | I    | Capital I             |
| 10  | 0A  | LF   | Line Feed (newline)   | 74  | 4A  | J    | Capital J             |
| 11  | 0B  | VT   | Vertical Tab          | 75  | 4B  | K    | Capital K             |
| 12  | 0C  | FF   | Form Feed             | 76  | 4C  | L    | Capital L             |
| 13  | 0D  | CR   | Carriage Return       | 77  | 4D  | M    | Capital M             |
| 14  | 0E  | SO   | Shift Out             | 78  | 4E  | N    | Capital N             |
| 15  | 0F  | SI   | Shift In              | 79  | 4F  | O    | Capital O             |
| 16  | 10  | DLE  | Data Link Escape      | 80  | 50  | P    | Capital P             |
| 17  | 11  | DC1  | Device Control 1      | 81  | 51  | Q    | Capital Q             |
| 18  | 12  | DC2  | Device Control 2      | 82  | 52  | R    | Capital R             |
| 19  | 13  | DC3  | Device Control 3      | 83  | 53  | S    | Capital S             |
| 20  | 14  | DC4  | Device Control 4      | 84  | 54  | T    | Capital T             |
| 21  | 15  | NAK  | Negative Acknowledge  | 85  | 55  | U    | Capital U             |
| 22  | 16  | SYN  | Synchronous Idle      | 86  | 56  | V    | Capital V             |
| 23  | 17  | ETB  | End of Trans. Block   | 87  | 57  | W    | Capital W             |
| 24  | 18  | CAN  | Cancel                | 88  | 58  | X    | Capital X             |
| 25  | 19  | EM   | End of Medium         | 89  | 59  | Y    | Capital Y             |
| 26  | 1A  | SUB  | Substitute            | 90  | 5A  | Z    | Capital Z             |
| 27  | 1B  | ESC  | Escape                | 91  | 5B  | [    | Left bracket          |
| 28  | 1C  | FS   | File Separator        | 92  | 5C  | \    | Backslash             |
| 29  | 1D  | GS   | Group Separator       | 93  | 5D  | ]    | Right bracket         |
| 30  | 1E  | RS   | Record Separator      | 94  | 5E  | ^    | Caret                 |
| 31  | 1F  | US   | Unit Separator        | 95  | 5F  | _    | Underscore            |
| 32  | 20  | (sp) | Space                 | 96  | 60  | `    | Backtick              |
| 33  | 21  | !    | Exclamation mark      | 97  | 61  | a    | Lowercase a           |
| 34  | 22  | "    | Double quote          | 98  | 62  | b    | Lowercase b           |
| 35  | 23  | #    | Number sign           | 99  | 63  | c    | Lowercase c           |
| 36  | 24  | $    | Dollar sign           | 100 | 64  | d    | Lowercase d           |
| 37  | 25  | %    | Percent sign          | 101 | 65  | e    | Lowercase e           |
| 38  | 26  | &    | Ampersand             | 102 | 66  | f    | Lowercase f           |
| 39  | 27  | '    | Single quote          | 103 | 67  | g    | Lowercase g           |
| 40  | 28  | (    | Left parenthesis      | 104 | 68  | h    | Lowercase h           |
| 41  | 29  | )    | Right parenthesis     | 105 | 69  | i    | Lowercase i           |
| 42  | 2A  | *    | Asterisk              | 106 | 6A  | j    | Lowercase j           |
| 43  | 2B  | +    | Plus sign             | 107 | 6B  | k    | Lowercase k           |
| 44  | 2C  | ,    | Comma                 | 108 | 6C  | l    | Lowercase l           |
| 45  | 2D  | -    | Hyphen-minus          | 109 | 6D  | m    | Lowercase m           |
| 46  | 2E  | .    | Period                | 110 | 6E  | n    | Lowercase n           |
| 47  | 2F  | /    | Slash                 | 111 | 6F  | o    | Lowercase o           |
| 48  | 30  | 0    | Digit 0               | 112 | 70  | p    | Lowercase p           |
| 49  | 31  | 1    | Digit 1               | 113 | 71  | q    | Lowercase q           |
| 50  | 32  | 2    | Digit 2               | 114 | 72  | r    | Lowercase r           |
| 51  | 33  | 3    | Digit 3               | 115 | 73  | s    | Lowercase s           |
| 52  | 34  | 4    | Digit 4               | 116 | 74  | t    | Lowercase t           |
| 53  | 35  | 5    | Digit 5               | 117 | 75  | u    | Lowercase u           |
| 54  | 36  | 6    | Digit 6               | 118 | 76  | v    | Lowercase v           |
| 55  | 37  | 7    | Digit 7               | 119 | 77  | w    | Lowercase w           |
| 56  | 38  | 8    | Digit 8               | 120 | 78  | x    | Lowercase x           |
| 57  | 39  | 9    | Digit 9               | 121 | 79  | y    | Lowercase y           |
| 58  | 3A  | :    | Colon                 | 122 | 7A  | z    | Lowercase z           |
| 59  | 3B  | ;    | Semicolon             | 123 | 7B  | {    | Left brace            |
| 60  | 3C  | <    | Less-than sign        | 124 | 7C  | \|   | Vertical bar          |
| 61  | 3D  | =    | Equals sign           | 125 | 7D  | }    | Right brace           |
| 62  | 3E  | >    | Greater-than sign     | 126 | 7E  | ~    | Tilde                 |
| 63  | 3F  | ?    | Question mark         | 127 | 7F  | DEL  | Delete                |

### Charater Variable and Constant
Since charater is saved as number in computer, integer data type also can store charaters. ASCII only support from 0 to 127, 8bits are enough to represent ASCII.  
Normally `char` is used, yet `int` also can be used.
```C
char code;
code = 65; // A
code = 'A'; // A
```
`65` is `A` in ASCII, also `'A'` is called character constant. The complier translate character constant to ASCII.  
If `code` is printed as `%d`, `65` will be printed. With `%c`, `A` will be printed.

#### Example 👉 [Charater Constant](./char_var_constant.c)
---

### Control Charater
In ASCII, you can see many control charaters. Control characters can produce a sound, insert a tab space, or move the cursor to a new line.  
```C
char beep = 7;
printf("%c",beep); // it will make sound.
```
This is easy way to use control charaters, yet you need to memorise them. However there is one replaceable.
**`\` and one charater**. Here are some usages.
| Escape Sequence  | Name/Char       | Meaning                                      |
|------------------|-----------------|----------------------------------------------|
| `\0`             | Null            | String terminator (end of string)            |
| `\a`             | Bell            | Make beep sound                              |
| `\b`             | Backspace       | Move cursor one position back                |
| `\t`             | Horizontal Tab  | Move cursor to next tab stop                 |
| `\n`             | Line Feed (LF)  | Move cursor to next line                     |
| `\v`             | Vertical Tab    | Move cursor down to next vertical tab stop   |
| `\f`             | Form Feed       | Move to start of next page (printer)         |
| `\r`             | Carriage Return | Move cursor to beginning of line             |
| `\"`             | Double quote    | Insert `"` character                         |
| `\'`             | Single quote    | Insert `'` character                         |
| `\\`             | Backslash       | Insert `\` character                         |
| `\?`             | Question mark   | Insert `?` (avoid trigraph confusion)        |

#### Example 👉 [Control Charater](./control_charater.c)


### `char` as a Integer
`char` has 8bits and can store integer. Therefore, it can store small integer value.
<table border="1">
  <tr>
    <th colspan="3">Data Type</th> 
    <th>Description</th>
    <th>Bytes (bits)</th>
    <th>Range</th>
  </tr>
  <tr>
    <td rowspan="2">Character</td>
    <td>Signed</td>
    <td>Character or small integer</td>
    <td>1 byte (8 bits)</td>
    <td>-128 to 127</td>
  </tr>
  <tr>
    <td>Unsigned</td>
    <td>Character or unsigned integer</td>
    <td>1 byte (8 bits)</td>
    <td>0 to 255</td>
  </tr>
</table>

`Char` variable can be used in integer operations. 
#### Example 👉 [Integer Character](./char_integer_operation.c)