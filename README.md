# functions-and-operators-overloading

## Experiment 13



## Aim
- Implement function overloading.
- Implement operator overloading.

## Software Used
- Visual Studio Code

## Theory
#  Function Overloading

Function overloading allows multiple functions to share the same name but differ in their parameter lists (number or type of parameters). This feature, common in languages like C++, enhances code readability and usability by enabling similar operations under a single name.

# Operators Overloading

Operator overloading allows developers to redefine the behavior of standard operators (like +, -, *, etc.) for user-defined types, such as classes. This feature enhances the intuitiveness and expressiveness of code, enabling operators to work seamlessly with custom objects as if they were built-in types.

---

## Algorithm for Function Overloading Program
1. **Start**.
2. **Define Class** `addition`:
   - Declare overloaded `sum` methods:
     - `sum(int a, int b)`.
     - `sum(int a, int b, int c)`.
     - `sum(double d, double f)`.
3. **Main Function**:
   - Create `addition` object.
   - Call and print results of `sum` with:
     - Two integers.
     - Three integers.
     - Two doubles.
4. **End**.

---

###  Algorithm for Operator Overloading Program

1. **Start**.
2. **Define Class** `Complex`:
   - Private variables: `real`, `imag`.
   - Constructor to initialize values.
   - Overload `+` operator for addition.
   - Overload `-` operator for subtraction.
   - Define `print()` method.
3. **Main Function**:
   - Create `Complex` objects (`c1`, `c2`).
   - Calculate and print `c1 + c2` and `c1 - c2`.
4. **End**.

## Conclusion
In this program we perform the functions and operators over loading.
