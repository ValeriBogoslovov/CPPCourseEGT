#include <iostream>
#include <string>
#include <algorithm> // NEEDED FOR replace FUNCTION
#include <regex>

using std::cout;
using std::endl;
using std::string;
using std::replace;
using std::regex;

string DNA_to_RNA_for(string dna);
string DNA_to_RNA_func(string dna);
string DNA_to_RNA_foreach(string dna);
string DNA_to_RNA_regex(string dna);

int main()
{
    cout << DNA_to_RNA_for("GGATCAGTTCC") << endl;
    cout << DNA_to_RNA_func("GGATCAGTTCC") << endl;
    cout << DNA_to_RNA_foreach("GGATCAGTTCC") << endl;
    cout << DNA_to_RNA_regex("GGATCAGTTCC") << endl;
    return 0;
}

string DNA_to_RNA_regex(string dna) {

    // using regex expression this says
    // replace(text, if you find this character, replace it with "U"
    return regex_replace(dna, regex("T"), "U");
}

string DNA_to_RNA_foreach(string dna) {

    for (char &ch : dna) {
        ch = ch == 'T' ? 'U' : ch;
    }
    return dna;
}

string DNA_to_RNA_for(string dna){

    // dna.size() can also be used. but <algorithm> needs to be included
    // also if you don't use namespace std, you have to add using std::size
    for (int i = 0; i < dna.length(); i++) {

        if (dna[i] == 'T') {
            dna[i] = 'U';
        }
    }
    return dna;
}

string DNA_to_RNA_func(string dna) {

    // function replace (from array beginning, to array end,
    // replace character 'T' with character 'U')
    replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}
