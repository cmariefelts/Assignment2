/*Write code that will fill the array a (declared below) with numbers
typed in at the key- board. The numbers will be input five per line, on
four lines (although your solution need not depend on how the input numbers
are divided into lines).*/

#include <iostream>
using namespace std;
int main()
{
  //Declaring the value
  int value;
  //Creating the array a, which is 4 by 5
  int a[4][5];

  //Double nested loop because the array is 4 by 5
  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      //While we are in the array, ask the user to enter a new number. This will
      //happen 20 times
      cout << "Enter a number. " << endl;
      cin >> value;
      a[4][5] = value;
    }
  }
//Not printing anything because instructions did not say to.
return 0;
}
