/*Write a program to generate Secret Code

Input:
You are given a long integer number, you will have to change the digits of the number to generate a secret code
If Digit is EVEN: increase by 1
If Digit is ODD: decrease by 1

Sample INPUT: 45671
Sample OUTPUT: 54760*/


#include <iostream>
using namespace std;

int main(){

    long long int number, answer = 0, multiplication_factor = 1;
    int digit;
    cout << "Enter a number: ";
    cin >> number;

    while(number != 0){
        digit = number % 10;
        digit = (digit & 1) ? digit - 1: digit + 1;
        answer = answer + digit * multiplication_factor;
        multiplication_factor *= 10;
        number /= 10;
    }
    cout << answer;


    return 0;
}