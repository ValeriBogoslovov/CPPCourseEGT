#include <iostream>
#include <string>

using namespace std;

int main()
{
    string author;
	string title;
	int year;
	float price;

	char line[100];
    cout << " Type a line terminated by 't'" << endl;
    // everything after the 't' char will be ignored but will remain in the buffer
    // and will be saved to author
    // cin.getline() is used for C strings, should be avoided
    cin.getline( line, 100, 't' );
    cout << line << endl;

	for (int i = 0; i < 2; i++) {

        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter year: ";
        cin >> year;
        // after cin we need to put cin.ignore() so an empty space won't stay in the buffer
        // and be caught by the getline()
        cin.ignore();
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

        cout << author << " " << title << " " << year << " " << price << endl;
	}

}
