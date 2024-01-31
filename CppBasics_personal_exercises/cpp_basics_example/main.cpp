#include <iostream>

// using this namespace, saves us of writing "std::" before each "cout" and "endl"
using namespace std;

/* in this program we will use basic C++ variables like int and double,
arithmetic operators (+, -, /, *, %, ++, --), logical operators (&&, ||),
comparison operators (==, >, <, >=, <=, !=), switch statement and if statement*/

int main()
{
  //******************* AGE AND HEIGHT *****************************************
  // message what the program does
  cout << "*************** ENTER AGE AND HEIGHT ***************" << endl << endl;
  // initializing a variable of type Integer (whole number) with value equal to 0
  int age = 0;

  // printing message to user to type their age using "cout" object and insertion operator "<<"
  cout << "Please enter you age: ";

  // using "cin" object with extraction operator ">>" to store the user data in variable "age"
  cin >> age;

  // printing message to the user containing their age
  cout << "Your age is: " << age << endl << endl; // the "endl" moves the cursor on new line

  // asking the user to enter their height in meters using the following example (1.70)
  cout << "Please enter your height in meters e.g. 1.70: ";

  // initializing a variable of type double (decimal number) with value 0.0
  double height = 0.0;
  cin >> height;

  // printing message with the user's height
  cout << "Your height is: " << height << "m." << endl << endl;
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* ADDITION OF TWO NUMBERS **********************************
  // this program asks the user to enter two numbers and then prints the sum of them

  // message what the program does
  cout << "*************** ADDITION OF TWO NUMBERS ***************" << endl << endl;
  cout << "This program will show the result of adding a + b." << endl << endl;
  // initializing the two numbers
  int add_a, add_b = 0;

  // asking the user to enter the two numbers
  cout << "Please enter value for a(whole number): ";
  cin >> add_a;
  cout << "Please enter value for b(whole number): ";
  cin >> add_b;

  // printing the result
  cout << add_a << " + " << add_b << " = " << add_a + add_b << endl << endl;
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* SUBTRACTION OF TWO NUMBERS **********************************
  // this program asks the user to enter two numbers and then prints the result of "a - b"

  cout << "*************** SUBTRACTION OF TWO NUMBERS ***************" << endl << endl;
  cout << "This program will show the result of subtracting a - b." << endl << endl;

  //Initializing variables
  int sub_a = 0;
  int sub_b = 0;
  int sub_result = 0;

  // asking user to enter the two numbers
  cout << "Please enter the value for a(whole number): ";

  cin >> sub_a; // saving user input to "a"

  cout << "Please enter the value for b(whole number): ";

  cin >> sub_b; // saving user input to "b"

  // calculating and saving the subtraction to "result"
  sub_result = sub_a - sub_b;

  // printing result
  cout << sub_a << " - " << sub_b << " = " << sub_result << endl << endl;
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* MULTIPLICATION OF TWO NUMBERS **********************************
  // this program asks the user to enter two numbers and then prints the miltiplicaton of "a" and "b"

  cout << "*************** MILTIPLICATION OF TWO NUMBERS ***************" << endl << endl;

  cout << "This program will show the result of multiplication of a * b " << endl << endl;

  //initializing variables
  int multi_a, multi_b = 0;

  // asking user to enter two numbers and then saving their values
  cout << "Please enter the value for a(whole number): ";
  cin >> multi_a;

  cout << "Please enter the value for b(whole number): ";
  cin >> multi_b;

  //printing the result of the multiplication
  cout << multi_a << " * " << multi_b << " = " << multi_a * multi_b << endl << endl;
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* DIVISION OF TWO NUMBERS **********************************
  // this program asks the user to enter two numbers and then prints the division of "a" and "b"

  cout << "*************** DIVISION OF TWO NUMBERS ***************" << endl << endl;

  cout << "This program will show the result of the division of a / b " << endl << endl;

  //initializing variables
  int div_a, div_b = 0;

  // asking user to enter two numbers and then saving their values
  cout << "Please enter the value for a(whole number): ";
  cin >> div_a;

  cout << "Please enter the value for b(whole number): ";
  cin >> div_b;

  //printing the result of the multiplication
  cout << div_a << " / " << div_b << " = " << div_a / div_b << endl << endl;
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* IS NUMBER EVEN OR ODD **********************************
  // this program will show whether a given number is Even or Odd
  // we will use "if-else" statement, modulo operator (%) and comparison operator (==) to check the number

  cout << "*************** IS NUMBER EVEN OR ODD ***************" << endl << endl;
  cout << "This program shows whether entered number is Even or Odd" << endl << endl;

  // initializing the variable
  int even_or_odd_num = 0;

  // ask user for input
  cout << "Please enter whole number: ";

  cin >> even_or_odd_num;

  // checking if the number is even or odd and printing the message
  if (even_or_odd_num % 2 == 0) { // if the remainder of the number equals zero the number is Even
    cout << even_or_odd_num << " is EVEN number." << endl << endl;
  } else { // if the remainder is 1 we enter else
    cout << even_or_odd_num << " is ODD number." << endl << endl;
  }
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* WHAT CATEGORY MOTORCYCLE LICENSE CAN YOU GET **********************************
  // this program will ask the user to enter their age and riding experience and show what category motorcycle license they can get

  cout << "*************** WHAT CATEGORY MOTORCYCLE LICENSE CAN YOU GET ***************" << endl << endl;
  // print what the program does
  cout << "This program will show you what category license for motorcycle you can get based on your age and riding experience." << endl;
  cout << "For \"A1\" category you don't need experience, you have to be at least 16 years old." << endl;
  cout << "For \"A2\" category you don't need experience, you have to be at least 18 years old." << endl;
  cout << "For \"A\" category, if you don't have any experience you have to be at least 24 years old, \nif you have at least 2 years experience of \"A2\" you can be 20 years old." << endl;
  int user_age, riding_exp = 0; // initializing variable

  // asking for user's age
  cout << "Please enter your age: ";
  cin >> user_age;

  cout << "Please enter your riding experience in years(if you have less than a year write 0):";
  cin >> riding_exp;

  // checking the conditions and printing the right message
  if (user_age >= 24 && user_age < 80) { // you get "A" category if your age is older or equal to 24, riding experience doesn't matter
    cout << "You can get A category License." << endl << endl;
  } else if (user_age >= 20 && user_age < 24 && riding_exp >= 2) {
    // if your age is between 20 and 24 and if you have more or two years of riding experience you alse can get "A" category
    cout << "You can get A category License." << endl << endl;
  } else if (user_age >= 18 && user_age < 24) {
    // if your age is between 18 and 24 you can get "A2" category
    cout << "You can get A2 category License." << endl << endl;
  } else if (user_age < 18 && user_age >= 16) {
    // if your age is between 16 and 18 you can get A1 category
    cout << "You can get A1 category License." << endl << endl;
  } else if (user_age < 16) {
    cout << "You are too young to get a riding license." << endl << endl;
  } else {
    cout << "You are too old to get a riding license." << endl << endl;
  }
  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************

  //********************* CHOOSE THE ARITHMETIC **********************************
  // this program will take single character and check if it is valid arithmetic operator and then do the arithmetic operation

  cout << "*************** CHOOSE THE ARITHMETIC OPERATOR ***************" << endl << endl;
  char arithmetic_operator; // initializing character variable

  // ask user for input
  cout << "Please enter valid arithmetic operator (+) for addition, (-) for subtraction, (*)for multiplication and (/) for division.";
  cin >> arithmetic_operator;

  // validating that the user entered the correct arithmetic operator
  if (arithmetic_operator != '+' || arithmetic_operator != '-' || arithmetic_operator != '*' || arithmetic_operator != '/') {
    cout << "You entered the wrong arithmetic operator, please enter +, -, * or /! This is your last chance!";
    cin >> arithmetic_operator;
  }

  int input_num_a, input_num_b = 0; // initializing two variables

  cout << "Please enter value for a(whole number): ";
  cin >> input_num_a;

  cout << "Please enter value for b(whole number): ";
  cin >> input_num_b;

  // we will use switch statement to check the user input for the arithmetic operator and make the given operation
  // in case the user enters invalid arithmetic operator, we print message on the console that the input is invalid
  switch (arithmetic_operator) {
    case '+': cout << input_num_a << " + " << input_num_b << " = " << input_num_a + input_num_b << endl << endl;
      break;
    case '-': cout << input_num_a << " - " << input_num_b << " = " << input_num_a - input_num_b << endl << endl;
      break;
    case '/':  cout << input_num_a << " / " << input_num_b << " = " << input_num_a / input_num_b << endl << endl;
      break;
    case '*':  cout << input_num_a << " * " << input_num_b << " = " << input_num_a * input_num_b << endl << endl;
      break;
    default: cout << "Guess you entered the wrong operator, AGAIN!" << endl << endl;
      break;
  }

  cout << "******************************************************************************" << endl << endl;
  //******************************************************************************
  return 0; // if the program ends with no errors, 0 will be returned to the console
}
