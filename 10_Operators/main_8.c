#include <stdio.h>

int main(int argc, char const* argv[]) {

    // Operator Precedence and Assiociativity

    // Operator Precedence
    // Operator Precedence is which operator will evaluate first in an expression.
    // For example:
    // int a = 10 - 3 / 3 * 2 % 1 << 3;
    // Now which operator will evaluate first.

    // Operator Assiociativity
    // Now let's say we have more than 1 operator in an expression of same precedence.
    // Then from which direction (left to right or right to left) it'll start
    // evaluating the expression.

    /*

      Operator Precedence and Associativity of different operators
      
1 	++ -- 	Suffix/postfix increment and decrement 	Left-to-right
() 	Function call
[] 	Array subscripting
. 	Structure and union member access
-> 	Structure and union member access through pointer
(type){list} 	Compound literal(C99)

2 	++ -- 	Prefix increment and decrement 	Right-to-left
+ - 	Unary plus and minus
! ~ 	Logical NOT and bitwise NOT
(type) 	Cast
* 	Indirection (dereference)
& 	Address-of
sizeof 	Size-of
_Alignof 	Alignment requirement(C11)

3 	* / % 	Multiplication, division, and remainder 	Left-to-right

4 	+ - 	Addition and subtraction

5 	<< >> 	Bitwise left shift and right shift

6 	< <= 	For relational operators < and = respectively

> >= 	For relational operators > and = respectively

7 	== != 	For relational = and ? respectively

8 	& 	Bitwise AND

9 	^ 	Bitwise XOR (exclusive or)

10 	| 	Bitwise OR (inclusive or)

11 	&& 	Logical AND

12 	|| 	Logical OR

13 	?: 	Ternary conditional 	Right-to-left

14 	= 	Simple assignment

+= -= 	Assignment by sum and difference

*= /= %= 	Assignment by product, quotient, and remainder

<<= >>= 	Assignment by bitwise left shift and right shift

&= ^= |= 	Assignment by bitwise AND, XOR, and OR

15 	, 	Comma 	Left-to-right 

     */

    return 0;
}
