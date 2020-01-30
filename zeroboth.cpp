/*Implement a void function called zeroBoth that has two call-by- reference
parameters, both of which are variables of type int, and sets the values of
both variables to 0.*/

#include <iostream>
using namespace std;

void ZeroBoth(int &x, int &y)
{
  //Function that finds the address for x and y, and then sets the data to 0
  x = 0;
  y = 0;
}

int main()
{
  //Set the variables equal to random numbers so we can test if it sets them to 0
  int x = 30;
  int y = 50;

  //Calling the function ZeroBoth so we can set the variables equal to 0
  ZeroBoth(x, y);

//Not printing anything due to the instructions not saying to.
  return 0;
}
