#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
using namespace std;

int main () {
    string filename;
    cout << "nameFile";
    cin >> filename;

    ifstream inputfile(filename);
    if (!inputfile.is_open()) {
        cerr << "oshibka" << endl;
        return 1;
    }
    int character_count = 0;
    char ch;
    while (inputfile.get(ch)) {
        character_count++;
    }

    inputfile.close();

    cout << "Kol-vo simvolov" << character_count << endl;

    return 0;
}
