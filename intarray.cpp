/*Write a program that will read up to ten nonnegative integers into an
array called numberArray and then write the integers back to the screen
(console output).
For this exercise you need not use any functions.*/

#include <iostream>
using namespace std;

int main()
{
  //Creating the array of 10 non-negative numbers
  int numberArray[10];
  //Declaring the int nums
  int nums;

  //Iterating until we reach 10 non-negative numbers & adding them to the array
  for (int i = 0; i < 10; ++i)
  {
    cout << "Enter a nonnegative number. " << endl;
    cin >> nums;
    numberArray[i] = nums;
  }

  //For every integer in the array, print each one.
  for (int i = 0; i < 10; ++i)
  {
      cout << numberArray[i] << endl;
  }
}
