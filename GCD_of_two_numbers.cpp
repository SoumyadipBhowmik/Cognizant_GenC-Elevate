/* Write a program to print the GCD of two numbers X and Y */
/* We will be using Euclidean's Theorem to solve the question. */

#include <iostream>
using namespace std;

int gcd(int a, int b){

    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a > b){
        return gcd(b, a % b);
    }
    return gcd(a, b % a);
}

int main(){

    int firstNumber, secondNumber;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    int answer = gcd(firstNumber, secondNumber);

    cout << "The GCD of two numbers are: " << answer << endl; 
    return 0;
}