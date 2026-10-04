#include<iostream>

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

int factorial(int n){
  if(n==0){
    return 1;
  }
  if(n<0){
    cout<<"Undefined";
    return 0;
  }
     int fact = 1;
     while(n){
      fact*=n;
      n--;
     }
     return fact;
}

int reverse_number(int n){
   int temp = 0;
   while(n){
     int last = n%10;
     temp = temp * 10 + last;
     n/=10;
   }
   return temp;
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
   if(number == temp){
    return true;
   }
   return false;
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
  int sum = 0;
      while(n){
          int temp = n%10;
          sum+=temp;
          n/=10;
      }
  return sum;
}

int main(){
  int oper ;
do{
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

  cin>>oper;
  if(oper == 9) {
    cout << "EXIT SUCCESS" << endl;
    break;
}
  int number; 
  cout<<"enter a number for calculation"<<endl;
  cin>>number;
 
  //switch case
   
  switch(oper){
        case 1: cout<<"Even / Odd : ";
                cout << (check_even_odd(number) ?
                  "Even Number" :
                  "Odd number") <<endl;
                break;

        case 2 : 
                cout<<(check_prime(number) ? "Prime Number " : "Not Prime")<<endl;
                break;

        case 3:{ 
                int factor =  factorial(number);
               cout<<"Factorial :  "<<factor<<endl;
               break;
        }

        case 4: {
              int rev = reverse_number(number);
              cout << "Reversed Number : " << rev << endl;
              break;
        }

        case 5: cout<<(palindrome(number)?
               "palindrome number" :
               "not palindrome number")<<endl;
                break;

        case 6:{ 
                int dig_len = digit_length(number);
                cout<<"digit length : "<<dig_len <<endl;
                break;
        }

        case 7:{ int dig_sum = digit_sum(number);
                cout<<"Digit sum : "<<dig_sum<<endl;
                break;
        }

        case 8:cout << "Positive/Negative : ";
              positive_negative(number);
               break;
       
        default:
                cout<<"Invalid input"<<endl;
                break;
  }
}while(oper!=9);
  
  return 0;

}