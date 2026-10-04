#include<iostream>
#include "number_functions.h"

using namespace std;


//main function 

int main(){
  show_menu();

  while (true){
  int oper ;
  cout<<"enter operation number";
  cin>>oper;
  
  if(oper == 9){
    cout<<"Exit success";
    return 0;
  }

  int number; 
  cout<<"enter a number for calculation"<<endl;
  cin>>number;
 
  //switch case

  switch(oper){
        case 1: 
              cout<<"Even / Odd : ";
              cout << (check_even_odd(number) ?
                "Even Number" :
                "Odd number") <<endl;
                break;

        case 2 : 
                cout<<(check_prime(number) ? "Prime Number " : "Not Prime")<<endl;
                break;

        case 3:
        { 
              long long factor =  factorial(number);
              cout<<"Factorial :  "<<factor<<endl;
              break;
        }

        case 4: 
        {
              reverse_number(number);
              cout << "Reversed Number : " << number<< endl;
              break;
        }

        case 5: 
              cout<<(palindrome(number)?
              "palindrome number" :
              "not palindrome number")<<endl;
              break;

        case 6:
        { 
              int dig_len = digit_length(number);
              cout<<"digit length : "<<dig_len <<endl;
              break;
        }

        case 7:
        {      
            int dig_sum = digit_sum(number);
            cout<<"Digit sum : "<<dig_sum<<endl;
            break;
        }

        case 8:
              cout << "Positive/Negative : ";
              positive_negative(number);
              break;
       
        default:
                cout<<"Invalid input"<<endl;
                break;
  }

}
  return 0;

}