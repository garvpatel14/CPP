#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file) {
        cerr << "Error: Could not open file.\n";
        return 1;
    }

    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;
    string line;

    while (getline(file, line)) {
        lineCount++;
        charCount += line.length() + 1; 

        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close();

    cout << "Lines: " << lineCount << "\n";
    cout << "Words: " << wordCount << "\n";
    cout << "Characters: " << charCount << "\n";

    return 0;
}
  
