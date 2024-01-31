#include <iostream>

using namespace std;

// testing some pointer examples

/*

// ***************************** VOID POINTER FUNCTION ***************************************
// this function will print the value of any type of variable that we pass
// first parameter is the pointer variable and the second parameter is so we know what we are passing
// the 'char char_of_variable' parameter can indicate the type of variable we are passing, for example
// 'i' will be for int, 'c' will be for char, 'd' will be for double etc. this is user choice



void print_ptr (void* ptr, char char_of_variable) {
  // we have to check the char_of_variable and then handle the pointer variable
  if (char_of_variable == 'i') {
    // when we see that the character that we passed is 'i' we know that we have an integer
    // note that this is the programmer logic, we can pass any character that we want and we can cast to any type
    // we have to be very careful when doing such functions, because the program will compile but may run falsely
    // to get the address of the pointer we need to cast it to the right type
    cout << "Pointer type is integer, its address is: " << (int*)ptr << endl; // casting to int pointer and getting the address
    cout << "Pointer value is: " << *((int*)ptr) << endl; // dereferencing the pointer as shown
  } else if (char_of_variable == 'c') {
    // we do the same for each type of variable we pass
  }
}

*/ // REMOVE /* */ TO CHECK CODE

// *******************************************************************************************

/*

// ********************* GET MIN MAX VALUE OF ARRAY USING POINTERS FUNCTION ******************

// creating a void function that has four parameter and expects the following
// array of integers, size of the array, minimum value and maximum value
// min_value and max_value are passed using pointer, that means we have a reference to them
// whatever value we change to them will be saved to the original variables

void getMinMaxValue (int num_arr[], int size_array, int* min_value, int* max_value) {
  // creating a for loop to iterate through the array and compare values and assigning them to min_value and max_value

  for (int i = 1; i < size_array; i++) {
    // checking if the current element of the array is smaller than the minimum value we passed
    if (num_arr[i] < *min_value) {
      *min_value = num_arr[i];
    } else if (num_arr[i] > *max_value) {
      *max_value = num_arr[i];
    }
  }
}

//**********************************************************************************************
*/ // REMOVE /* */ TO CHECK CODE

int main() {
  /*

  // ********************* GET MIN MAX VALUE OF ARRAY USING POINTERS ***************************

  // initializing integer array and assigning values to it
  int numbers_arr[] = {4, 12, -333, 532, 28, 83, 1, 0};

  // saving the value of first element of the array as both minimum and maximum value
  int min_value = numbers_arr[0];
  int max_value = numbers_arr[0];

  // saving the length (size) of the array
  // the formula for getting length (size) of array is: (size = sizeof(array) / sizeof(type)) type in this case is int
  int size_of_arr = sizeof(numbers_arr) / sizeof(int);
  //cout << size_of_arr << endl; // check size of the array

  // calling the function and passing the parameters
  // note that we have to pass the address of min_value and max_value (their reference) using '&'
  getMinMaxValue(numbers_arr, size_of_arr, &min_value, &max_value);

  // printing result
  cout << "Minimum value of the array of numbers is: " << min_value << endl;
  cout << "Maximum value of the array of numbers is: " << max_value << endl;

  */ // REMOVE /* */ TO CHECK CODE

  // ******************************************************************************************

  /*
  // ***************************** BASIC POINTER EXAMPLE **************************************

  int number = 5; // initializing variable with value of 5
  cout << "Variable value is: " << number << endl; //printing the value
  cout << "Address of variable is: " << &number << endl; // printing the address of the variable

  // initializing a pointer of the same type (int) using '*' after the type (convection wise)
  // you can create the pointer like this: int * ptr or int *ptr;
  int* ptr;
  //ptr = number; // this will throw an error, because we are trying to assign a value to an address
  // this is how you assign a value to a pointer, by passing the address to the variable, now it holds both address and value
  ptr = &number;
  cout << "Address of pointer is: " << ptr << endl;
  // when we put '*' before the pointer variable, we get the value of the pointer, it is called 'dereferencing'
  cout << "Value of pointer is: " << *ptr << endl;
  // Both addresses and values are the same
  // Now we are going to change the value of the Pointer
  // Again we have to dereference the pointer so we can access the value and assign a new one
  *ptr = 22;
  cout << "Address of pointer is: " << ptr << endl; // checking if the address is the same
  cout << "Value of pointer is: " << *ptr << endl; // checking if the new value is assigned
  // You can see below that the value of the variable has changed, even though we haven't assigned it explicitly
  cout << "New value of variable is: " << number << endl;
  cout << "Address of variable is: " << &number << endl; // Address is the same

  */ // REMOVE /* */ TO CHECK CODE

  // ***************************************************************************************************************

/*)
  // ************************************ VOID POINTER *************************************************************

  int number = 22;
  print_ptr(&number, 'i');

  // ***************************************************************************************************************
*/ // REMOVE /* */ TO CHECK CODE

  return 0;
}
