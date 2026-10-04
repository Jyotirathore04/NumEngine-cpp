#include<iostream>
#include "number_functions.h"
using namespace std;

bool check_even_odd(int n){
   return n%2==0;
}

bool check_prime(int n){
  if(n < 2) {
        return false;
    }

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
       
}

long long factorial(int n){
  if(n==0){
    return 1;
  }
  if(n<0){
    return -1;
  }
     long long fact = 1;
     while(n){
      fact*=n;
      n--;
     }
     return fact;
}

void reverse_number(int& n){
   int temp = 0;
   while(n){
     int last = n%10;
     temp = temp * 10 + last;
     n/=10;
   }
   n = temp;
}

bool palindrome(int n){
  if(n<0){
    return false;
  }
  int number = n;
    int temp = 0;
   while(n){
     int last = n%10;
     temp = temp * 10 + last;
     n/=10;
   }
    return number == temp;
}

int digit_length(int n){
       int length = 0;
       if(n == 0){
        return 1;
       }
       while(n){
        length++;
        n/=10;
       }
    return length;
}

void positive_negative(int n ){
    if(n == 0) {
        cout << "Zero"<<endl;
    }
    else if(n > 0) {
        cout << "Positive"<<endl;
    }
    else {
        cout << "Negative"<<endl;
    }
}

int digit_sum(int n){
  long long value = n;

    if (value < 0)
    {
        value = -value;
    }

    int sum = 0;

    while (value != 0)
    {
        int digit = value % 10;
        sum += digit;
        value /= 10;
    }

    return sum;
}

void show_menu(){

  cout<<"NumEngine - Number Analyzer"<<endl;
  cout<<"1.Even/Odd"<<endl;
  cout<<"2.Prime"<<endl;
  cout<<"3.Factorial"<<endl;
  cout<<"4.Reverse"<<endl;
  cout<<"5.Palindrome"<<endl;
  cout<<"6.Digit Count"<<endl; 
  cout<<"7.Digit Sum"<<endl;
  cout<<"8.Positive/Negative"<<endl;
  cout<<"9.Exit"<<endl;
  cout<<"Choose which operation to perform"<<endl;
}