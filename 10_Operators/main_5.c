#include <stdio.h>

int main(int argc, char const* argv[]) {

    // Logical Operators.
    // There are 3 types of logical operators in C.

    // && -> Logical And
    // || -> Logical Or
    // ! -> Logical Not

    // && and || are binary operators.
    // ! is unary operator.

    // Logical operators are used to test more than one expression.
    // For example:
    // if (true && true) -> true
    // if (false && && true) -> true

    // && means every expression must have to be true.
    // || means at least one must be true.
    // ! means not, if true then false, if false then true.

    // The output will be in booleans, 0, 1, true, false.

    // We can use to check variables as well.
    // Like if non-zero value then true, if zero then false.

    int variable_1 = 0;
    int variable_2 = 1;

    int variable_3 = (variable_1 && variable_2);
    // Now, variable_3 has boolean 1, 0 value based on the logical expression.

    // Short Circuit
    // &&
    // If first expression is true, then next would be checked.
    // ||
    // If first operand is true, then it'll return true.
    // If first operand isn't true, then it'll check for 2nd operand,
    // If it's true, then it'll return, and not check the next operand.

    // !
    // Logical not operator.
    // It'll check for the opposite.

    int var_1 = 5;
    int var_2 = !var_1;
    // Now, var_2 will be false, because ! operator will check for opposite.
    // Non-Zero value is true, so var_1 = true, but we used !. So It'll check opposite.

    int var_3 = !0;
    // var_3 = true, because 0 = false but with ! it will evaluate as true.

    // Table
    // (false && false) = false
    // (true && true) = true
    // (true && false) = false
    // (false && true) = false
    // (false || false) = false
    // (true || true) = true
    // (true || false) = true
    // (false || true) = true
    // !true = false
    // !false = true

    // Execution
    // (true && false || function_returing_non_zero_value()) = true
    // Basically 2 operands = 1 expression in this case.
    // After && it'll compare with || if the && = false even then.
    // So first, && = eval.
    // Then result_of_&& with 2 operands and with next && or ||.
    // Note: after short circuit &&, false/true no matter, if ||.
    // The function first will be executed. Then evaluated with || or &&.

    // Precedence.
    // !
    // &&
    // ||

    // With ++
    // int a = 10;
    // int b = (a > 10 || a++);
    // Here, the a>10 is false, so It'll not go further.

    // If it was:
    // int b = (a == 10 || a++);
    // Here it'll be true.
    // When it checks for || a++;
    // It'll check for 1 || 10 -> true as ten isn't false. Non-Zero.
    // But after that line.
    // a value = 11. As ++ incremented.
    // If it was ++a, then first the value would be updated, then evaluated.
    
    return 0;
}
