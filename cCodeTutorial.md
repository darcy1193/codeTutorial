# C Code Tutorial
9/5/2019 <br>
by Daniel Darcy


### Index  
- [Section 1 - ANSI Standard C and GCC](#ANSI Standard C and GCC)  
- [Section 2 - Storage Sizes and Binary Representations of Contents](#Storage Sizes and Binary Representations of Contents)  
- [Section 3 - Signed Numbers](#Signed Numbers)  
- [Section 4 - IEEE Floating Point](#IEEE Floating Point)  
- [Refrences](#Refrences)  
<br>

![](FeaturesofC.jpg)

### Introduction
  This is a introductory coding tutorial for students learning C. Many important aspects of the C language will be outlined and explained in this tutorial. The main topics will include storage, binary representations, unsigned numbers, signed numbers, ASCII codes, machine codes, two's compliment, IEEE floating point, precision, and accuracy.

### ANSI Standard C and GCC <a name="ANSI Standard C and GCC"></a> 
  **ANSI** and **GCC** are two things every computer science major should be familiar with. ANSI is an acronym for American National Standards Institute, that is the organization which sets the national standards for products, services, processes, systems, and personnel in the United States. GCC is an acronym for GNU Compiler Collection. GCC is a key componet and standard compiler for most projects written for Linux, including the Linux kernel. 
  
      "For many years, the definition of C was the refrence manual in the first edition of The C Programming Language. In 1983, the American National Standards Institute (ANSI) established a committee to provide a modern comprehensive definition of C. The resulting definition, the ANSI standard, or "ANSI C," was completed late in 1988. Most features of the standard are already supported by modern compilers."       

    - Kernighan & Ritchie

<br>

####  Timeline of Different C Standards

  |Name|Release Year|Description|
  |------|-----------|-----------------------------------------------------|
  |c89|1989|The first C Standard commonly called "ANSI C".|
  |c90|1990|Only difference from c89 is format changes.|
  |c95|1995|Corrections and minor improvements to c90.|
  |c99|1999|Added data types and header files for better programming.|
  |c11|2011|Added unicode support and type generic expressions usering _GENERIC.|
  |c18|2018|Minor imporvements to c11.|
<br>

### Storage Sizes and Binary Representations of Contents <a name="Storage Sizes and Binary Representations of Contents"></a>
  In C there are various different data types for storing numbers. Some data types are more complicated than others but for now we will just focus on the simple ones. All numbers are stored in binary form on computers since everything must be in terms of on or off but different data types have different ranges. Each byte consists of 8 different bits. Each bit can either be on or off (T or F). Even octal and hex values must be converted to binary for storage. The reason different data types have different ranges is due to their storage space.
<br>
<br>
  Storage space for numeric data types in C ranges from 1-8 bytes (8-64 bits!). The **smallest data type** is a char, it uses one byte of storage. The **largest data type** is a long, it uses 8 bytes of storage. There are some data types inbetween char and long such as short and int. Shorts cost 2 bytes to store and ints cost either 2 or 4 bytes to store depending on computer specifications. There is a chart below which lists simple unsigned numeric types, ranges, and storage size. Although there is no binary, octal, or hex type these datatypes can still be used and stored as integers as long as the correct prefix is used. The prefixes are 0b, 0, and 0x respectively.
  
```C
#include <stdio.h>
  
int main(int argc, const char* argv[]){

  int binary = 0b00000010;		//Binary value for 2
  int octal = 010;					//Octal value for 8
  int hex = 0x0010;				//Hex value for 16
  
  printf("\nBinary = %d", binary);
  printf("\nOctal = %d", octal);
  printf("\nHex = %d\n\n", hex);
}
```

```
Output:
Binary = 2
Octal = 8
Hex = 16
```

#### Unsigned Numbers 
  We all know numbers can either be positive, negative, or 0. With unsigned numbers we are only worried about positive numbers and 0. In C all unsigned numbers are stored in binary form. To find the range for a specific unsigned data type we must know how many bytes of storage the data type uses. Multiply the number of bytes by 8 (8 bits in a byte) and raise 2 to that number. For example what is the range of an unsigned char?<br>
  
----------------------
  
  - As mentioned above a char uses 1 byte for storage.
  - $1 \times 8$ = $8$
  - 2<sup>8</sup> = $256$ (-1 for 0)
  - Range = $0-255$
  
---------------------

  It is worth noting that since integers are used to store binary, octal, and hexidecimal values their range depends on the size of an int on your specific system (2 or 4 bytes).
<br>  
  There are 5 different arithmetic **operators used in C**. These operators include addition (+), subtraction (-), multiplication (*), division (/), and modulus or remainder (%). As many of us learned in CS 3240 we know addition and subraction are simple arithmetic but multiplication and division are too in a sense. Multiplication is completed through repeated addition. Modulus and division are completed through repeated subtraction.
<br>  
  Unsigned data types have a range, what happens if that range is exceeded? This is what we call **overflow**. In C when there is overflow in some unsigned data type it "wraps around". For example, if you take the maximum number which can be stored for some data type and add 1 to it the result would be 0. Add 2 and the result would be 1, etc, etc. Refer below for a more clear example.
<br><br>
  The case of overflow in C has been covered, now lets consider the case **dividing by 0**. In C integer division of 0/0 is said to invoke undefined behavior. This means there could be many different results based on your specific system. In some cases the result can be a nan, which is short for "Not a Number". Any operation performed on a nan will produce a nan. In C there can also be result of negative or positive infinity. We will go more into detail with these results in the IEEE Floating Point Section. Below is my results from division by 0 on my system.
  
  
```C
#include <stdio.h>

int main(int argc, const char* argv[]){
	int result1 = 0/0, result2 = 10/0, result3 = 0/10;

	printf("\nzero/zero = %d", result1);
	printf("\nten/zero = %d", result2);
	printf("\nzero/ten = %d\n\n", result3);
}
```

```
Output:
zero/zero = -490752296
ten/zero = 73896
zero/ten = 0
```
<br>

####  Unsigned Data Types

  |Type	|Storage size	|Value range|
|------------------|-------------------|----------------------------------------------|
|unsigned char	|1 byte	|0 to 255|
|unsigned int	|2 or 4 bytes	|0 to 65,535 or 0 to 4,294,967,295|
|unsigned short	|2 bytes	|0 to 65,535|
|unsigned long	|8 bytes	|0 to 18446744073709551615|

<br>

#### ASCII Codes
  ASCII stands for American Standard Code for Information Interchange. ASCII is a 7-bit character code where every bit represents some unique character. ASCII was developed for telegraph code by Bell Data Services and has since been adapted for computer systems. ASCII codes represent printable characters and control characters. Printable characters are the focus here. The control characters were created for controlling certain devices and consist of the first 32 characters on the below ASCII table. Since ASCII codes are just numbers that represent characters they can also be converted to binary, decimal, and even octal numbers.
  
<br>

![ASCII TABLE](asciiTable.gif)
<br>
<br>

#### Machine Code
  Machine code is a language which can be read by a CPU. All CPUs have their own specific language though they are all very similar. When a C program is compiled it is translated into machine code. The machine code is then saved on a file which we know as an executable. This executable file (machine code) is fed into the CPU when the user runs the program.
  
  Mahcine code can be represented in binary or hexadecimal since hexadecimal is just a more compact version of binary. **Assembly language** is an easier to read version of machine code. An assembler is used to convert assembly language to machine code. Refer to the illustration below to observe what assembly code looks like.

![](ALML.png)
<br>
<br>

    NOTE:
    When changing a number from decimal to binary all you are really doing is changing the way that number will be represented. In this example changing the number from base 10 (digits range 0-9) to base 2 (digits range 0-1) does not change the number being represented. Computers use base 2 numbers because everything is stored in terms of on and off but hexadecimal and octal are also commonly used in computing as a compact way of representing binary numbers.
   
    - Binary      Base2       (0-1)
    - Octal       Base8       (0-7)
    - Hex         Base16      (0-F)
    - Decimal     Base10      (0-9)
    
<br>
<br>
<br>

### Signed Numbers (two's complement) <a name="Signed Numbers"></a>
  We have talked about unsigned numbers and now it is time for signed numbers. In C all signed numbers are stored in binary form. To find the range for a specific signed data type we must know how many bytes of storage the data type uses. Multiply the number of bytes by 8 (8 bits in a byte) and raise 2 to that number. This will give you the number of values but we still have to account for negative values. In order to account for negative values we must take this result and divide it by 2. This will give us the range for both positive and negative values. For example what is the range of a signed char?<br>

--------------

  - As mentioned above a char uses 1 byte for storage.
  - $1 \times 8$ = $8$
  - 2<sup>8</sup> = $256$ (-1 for 0)
  - $256/2$ = $128$
  - Range = $-128$ to $127$
  
--------------

  Interesting right? Similar to the unsigned char the signed char can hold 256 different values. The difference is that instead of ranging from 0-255 the unsigned values range from -127 to 128. This is possible and works out nicely because unsigned numbers are stored as two's complement. To convert a number from positive to negative (two's compliment) all we have to do is invert all of the bits of that positive number and add 1 to the result. Check out the example below.
  
  Conversion from positive binary number to negative two's complement binary number:
<br>

--------------

  - Convert $1$ to $-1$.
  - $1$ in binary -> $00000001$.
  - Invert all bits -> $11111110$
  - Add $1$ -> $11111111$ = $-1$
  
--------------  
  
<br>  
<br>  



####  Signed Data Types

  |Type	|Storage size	|Value range|
|------------------|-------------------|----------------------------------------------|
|signed char |1 byte|-128 to 127|
|signed int	|2 or 4 bytes	|-32,768 to 32,767 or -2,147,483,648 to 2,147,483,647|
|signed short	|2 bytes	|-32,768 to 32,767|
|signed long	|8 bytes	|-9223372036854775808 to 9223372036854775807|

<br>
<br>
<br>

### Introduction
### IEEE Floating Point <a name="IEEE Floating Point"></a>

<br>
<br>
<br>

### Refrences <a name="Refrences"></a>
  - *Understanding Floating Point Numbers* by Eric Sakk
  - *Understanding Binary Numbers* by Eric Sakk
  - *The C Programming Language* by Brian Kernighan and Dennis Ritchie
  - https://gcc.gnu.org/
  - https://webstore.ansi.org
  - https://www.ntu.edu.sg/home/ehchua/programming/java/DataRepresentation.html
  - https://www.ascii-code.com/
  - https://www.geeksforgeeks.org/octal-numbers-c/
  - http://www.linfo.org/machine_code.html
    