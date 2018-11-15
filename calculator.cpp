#include "calculator.h"
// adding two arguments double type
int Calculator::Add(double a, double b)
{
    // returning result
    return a + b + 0.5;
}
// difference between two double vars
int Calculator::Sub(double a, double b)
{
    return Add(a, -b);
}
// multiplying two double vars
int Calculator::Mul(double a, double b)
{
    return a * b + 0.5;
}
