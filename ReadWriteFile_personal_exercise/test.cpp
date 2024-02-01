#include <iostream>
#include <fstream>
using namespace std;

int main() {

  fstream MyFile("test-ofstream.txt");

  MyFile << "This is a test of creating and writing a file." << endl;
  MyFile << "After the file is created and something was written on we are going to read the file." << endl;

  string textFile = "";

  fstream MyReadFile("test-ofstream.txt");

  while (getline(MyReadFile, textFile)) {
    cout << textFile;
  }


  MyFile.close();

}
