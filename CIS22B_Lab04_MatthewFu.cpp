#define _CRT_SECURE_NO_WARNINGS

/*This program is a menu program that asks the user which template he or she wants to test.
If the user presses 1, the minimum template is tested, which returns the smaller of two numbers.
If the user presses 2, the maximum template is tested, which returns the larger of two numbers.
If the user presses 3, the absolute value template is tested, which returns the absolute value of a number.
If the user presses 4, the total template is tested, which prompts a user to input how many numbers to be added,
and then passes that to the template so that it can be added.*/

#include <iostream>
#include <cmath> //needed for the sqrt function
using namespace std;

//Makes one comparison 
template <class T>
T minimum(T val1, T val2)
{
   if (val1 > val2)
      return val2;
   else
      return val1;
}

//Makes one comparison 
template <class T>
T maximum(T val1, T val2)
{
   if (val1 > val2)
      return val1;
   else
      return val2;
}

/*Formula for absolute value of a number is that it is the squareroot of its square*/
template <class T>
T absoluteValue(T number)
{
   return sqrt(number * number);
}

//Takes the total number of elements and then sums the entire array.
template <class T>
T total(T a[], int number)
{
   T total = 0;
   for (int i = 0; i < number; i++)
      total += a[i];
   return total;
}

/*Pseudocode
Give the user four options to test out the four templates.
If the user inputs 1, test out the minimum template.
If the user inputs 2, test out the maximum template.
If the user inputs 3, test out the absolute value template.
If the user inputs 4, test out the total template
   Ask the user to input the total number of elements he or she wants to add up.
   Put the number in a dynamically allocated array.
   Call the total function for the total.
Else say that the input is invalid.
Prompt user if he or she wants to rerun the program.
   */

int main()
{
   char again;
   do
   {
      cout << "Press 1 if you want to test out the minimum template. " << endl;
      cout << "Press 2 if you want to test out the maximum template. " << endl;
      cout << "Press 3 if you want to test out the absolute value template. " << endl;
      cout << "Press 4 if you want to test out the total template. " << endl;
      int z;
      double x, y;
      char userInput;
      cin >> userInput;
      if (userInput == '1')
      {
         cout << "Enter a number." << endl;
         cin >> x;
         cout << "Enter another number. " << endl;
         cin >> y;
         cout << minimum(x, y) << " is the smaller number." << endl;
      }
      else if (userInput == '2')
      {
         cout << "Enter a number." << endl;
         cin >> x;
         cout << "Enter another number. " << endl;
         cin >> y;
         cout << maximum(x, y) << " is the larger number." << endl;
      }
      else if (userInput == '3')
      {
         cout << "Enter a number." << endl;
         cin >> x;
         cout << absoluteValue(x) << " is the absolute value of that number. " << endl;
      }
      else if (userInput == '4')
      {
         cout << "Enter the amount of numbers you want to sum up " << endl;
         cin >> z;
         double *numbers = new double[z]; //Dynamically allocate space for the array
         for (int i = 0; i < z; i++) {
            cout << "What is number " << i + 1 << ": ";
            cin >> numbers[i];
         }
         cout << "The total is " << total(numbers, z) << endl;
         delete[] numbers; //delete memory when finished using them.
         numbers = nullptr;
      } 
      else { cout << "Invalid Input \n"; }
      
      cout << "Would you like to run the program again? (Y/N): " << endl;
      cin >> again;
   } while (again == 'y' || again == 'Y');
   system("Pause");
}