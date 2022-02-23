/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);


int main() {
  int n, r;
  std::cout << "Enter a value for n: ";
  std::cin >> n;
  std::cout << "Enter a value for r: ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
  int n;
  no = 1;
  for (int i=n; i >= 1; i--) {
      no = no * i;
    }
  return no;
}
long nCr(int n, int r)
{
  int x,no;
  int fac_x=1;
  int fac_r=1;
  long fac_n;
  long nCr;
  
  x = n-r;
  no = 1;
  
  for (int i=n; i >= 1; i--) {
      no = no * i;
    }
  
  for (int i=r; i >= 1; i--) {
    fac_r = fac_r * i;
    }
  for (int i=x; i >= 1; i--) {
    fac_x = fac_x * i;
    }
  
  nCr = no/(long)(fac_r*fac_x);
  return nCr;
}
