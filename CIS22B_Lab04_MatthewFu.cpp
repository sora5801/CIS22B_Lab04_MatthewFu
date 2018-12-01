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
Give the user 10 options to test out the four templates.
If the user inputs 1, test out the minimum template with integer inputs.
If the user inputs 2, test out the minimum template with double inputs.
If the user inputs 3, test out the minimum template with char inputs.
If the user inputs 4, test out the maximum template with integer inputs.
If the user inputs 5, test out the maximum template with double inputs.
If the user inputs 6, test out the maximum template with char inputs.
If the user inputs 7, test out the absolute value template.
If the user inputs 8, test out the total template with integer inputs.
   Ask the user to input the total number of elements he or she wants to add up.
   Put the number in a dynamically allocated array.
   Call the total function for the total.
If the user inputs 9, test out the total template with double inputs.
If the user inputs 0, test out the total template with char inputs.
Else say that the input is invalid.
Prompt user if he or she wants to rerun the program.
   */

int main()
{
   char again;
   cout << "Press 1 if you want to test out the minimum template with integers input. " << endl;
   cout << "Press 2 if you want to test out the minimum template with double input. " << endl;
   cout << "Press 3 if you want to test out the minimum template with char input. " << endl;
   cout << "Press 4 if you want to test out the maximum template with integers input. " << endl;
   cout << "Press 5 if you want to test out the maximum template with double input. " << endl;
   cout << "Press 6 if you want to test out the maximum template with char input. " << endl;
   cout << "Press 7 if you want to test out the absolute value template. " << endl;
   cout << "Press 8 if you want to test out the total template with integer inputs. " << endl;
   cout << "Press 9 if you want to test out the total template with double inputs. " << endl;
   cout << "Press 0 if you want to test out the total template with char inputs. " << endl;
   do
   {
      cout << "Which template do you want to test? ";
      int a, b, z;
      double x, y;
      char userInput, c, d;
      cin >> userInput;
      if (userInput == '1')
      {
         cout << "Enter an integer: ";
         cin >> a;
         cout << "Enter another integer: ";
         cin >> b;
         cout << minimum(a, b) << " is the smaller integer." << endl;
      }
      else if (userInput == '2')
      {
         cout << "Enter a double: ";
         cin >> x;
         cout << "Enter another double: ";
         cin >> y;
         cout << minimum(x, y) << " is the smaller double." << endl;
      }
      else if (userInput == '3')
      {
         cout << "Enter a char: ";
         cin >> c;
         cout << "Enter another char: ";
         cin >> d;
         cout << minimum(c, d) << " is the smaller char." << endl;
      }
      else if (userInput == '4')
      {
         cout << "Enter an integer: ";
         cin >> a;
         cout << "Enter another integer: ";
         cin >> b;
         cout << maximum(a, b) << " is the larger integer." << endl;
      }
      else if (userInput == '5')
      {
         cout << "Enter a double: ";
         cin >> x;
         cout << "Enter another double: ";
         cin >> y;
         cout << maximum(x, y) << " is the larger double." << endl;
      }
      else if (userInput == '6')
      {
         cout << "Enter a char: ";
         cin >> c;
         cout << "Enter another char: ";
         cin >> d;
         cout << maximum(c, d) << " is the larger char." << endl;
      }
      else if (userInput == '7')
      {
         cout << "Enter a number: ";
         cin >> x;
         cout << "The absolute value of that number is " << absoluteValue(x) << endl;
      }
      else if (userInput == '8')
      {
         cout << "Enter the amount of integers you want to sum up: ";
         cin >> z;
         int *elements = new int[z]; //Dynamically allocate space for the array
         for (int i = 0; i < z; i++) {
            cout << "What is number " << i + 1 << ": ";
            cin >> elements[i];
         }
         cout << "The total is " << total(elements, z) << endl;
         delete[] elements; //delete memory when finished using them.
         elements = nullptr;
      } 
      else if (userInput == '9')
      {
         cout << "Enter the amount of doubles you want to sum up: ";
         cin >> z;
         double *elements = new double[z]; //Dynamically allocate space for the array
         for (int i = 0; i < z; i++) {
            cout << "What is double " << i + 1 << ": ";
            cin >> elements[i];
         }
         cout << "The total is " << total(elements, z) << endl;
         delete[] elements; //delete memory when finished using them.
         elements = nullptr;
      }
      else if (userInput == '0')
      {
         cout << "Enter the amount of chars you want to sum up: ";
         cin >> z;
         char *elements = new char[z]; //Dynamically allocate space for the array
         for (int i = 0; i < z; i++) {
            cout << "What is char " << i + 1 << ": ";
            cin >> elements[i];
         }
         cout << "The total is " << total(elements, z) << endl;
         delete[] elements; //delete memory when finished using them.
         elements = nullptr;
      }
      else { cout << "Invalid Input \n"; }
      
      cout << "Would you like to run the program again? (Y/N): " << endl;
      cin >> again;
   } while (again == 'y' || again == 'Y');
   system("Pause");
}