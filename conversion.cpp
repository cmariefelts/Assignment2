/*Write a program that will read in a length in feet and inches and
output the equivalent length in meters and centimeters. Use at least
three functions: one for user input, one or more for calculating, and
one for output(console). Include a loop that lets the user repeat this
computation for new input values until the user says he or she wants to
end the program (user has to type exit). There are 0.3048 meters in a foot,
100 centimeters in a meter, and 12 inches in a foot.*/

#include <iostream>
using namespace std;

//What we will output to the console
void outputConversion(float meter, float cent)
{
  cout << "The length in meters: " << meter << endl;
  cout << "The length in centimeters: " << cent << endl;
}

//Function to convert feet & inches into meters & centimeters
void Calculate(float feet, float inches)
{
  //Declaring the variables
  float meters;
  float centimeters;
  //Equation for meters conversion
  meters = feet * 0.3048;
  //Equation for centimeters conversion
  centimeters = inches * 2.54;
  //Calling the outputConversion function to output this to console
  outputConversion(meters, centimeters);

}

//Function to call for user input for the feet and inches values
void userInput()
{
  //Declaring the variables
  float newFeet;
  float newInches;
  //Calling for user input
  cout << "How many feet?: " << endl;
  cin >> newFeet;
  cout << "How many inches?: " << endl;
  cin >> newInches;

  //Calling the Calculate function to put these values into that function
  Calculate(newFeet, newInches);

}

int main()
{
  //When user wants to quit, we can quit the program
  string userAnswer = "";
  bool keepRunning = true;
  //While the user wants to keep running the program
  while(keepRunning)
  {
    //Call user input function
    userInput();

    cout << "Would you like to continue this with new values? " << endl;
    //User will need to type a key and press enter to keep going
    cout << "Type any key & enter to continue or 'exit' to end the program. " << endl;

    cin >> userAnswer;

    //If user wants to exit, then we exit the program
    if (userAnswer == "exit")
    {
      keepRunning = false;
    }
  }

  cout << "You chose to exit. Goodbye!" << endl;
  return 0;
}
