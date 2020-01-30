/*Implement a function called addTax. The function addTax has two formal
parameters: taxRate, which is the amount of sales tax expressed as a percent;
and cost, which is the cost of an item before tax. The function returns the
value (float) of cost so that it includes sales tax.*/

#include <iostream>
#include <iomanip>
using namespace std;


float addTax(float taxRate, float cost)
{
  //Get the tax rate of the item by dividing it by 100
  taxRate = taxRate / 100;
  //The tax on the item is the cost * the tax rate
  float itemTax = cost * taxRate;
  //The final cost of the item is the tax on the item + the original cost
  float finalCost = itemTax + cost;
  //Rounding to two decimal points for the price
  cout << setprecision(2) << fixed;
  return finalCost;

}

int main()
{
  //Using random values for the tax and price so we can test the program
  cout << "The final cost of the item with tax considered is: $" << addTax(10.4, 43.56) << endl;
  return 0;
}
