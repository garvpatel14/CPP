#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string set(string text, int width) {
    while (text.length() < width)
        text += ' ';
    return text;
}

void print() {
    cout << set("Name", 15) << set("Marks", 10) << set("Grade", 5) << endl;
   
}

void printStudentData(string name, int marks, char grade) {
    cout << set(name, 15)
         << set(to_string(marks), 10)
         << set(string(1, grade), 5) << endl;
}

void readData(string filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error: Cannot open file." << endl;
        return;
    }

    string name;
    int marks;
    char grade;

    print();

    while (file >> name >> marks >> grade) {
        printStudentData(name, marks, grade);
    }

    file.close();
}

int main() {
    readData("Student.txt");
    return 0;
}
