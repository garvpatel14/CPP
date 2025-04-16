#include <iostream>
using namespace std;

int main() {
    string s[50];
    string unique[50];
    int count[50] = {0};

    int n = 0;

    cout << "Enter words (type 'END' to stop):\n";

    while (n < 50) {
        cin >> s[n];
        if (s[n] == "END") break;
        n++;
    }

    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;

        for (int j = 0; j < uniqueCount; j++) {
            if (s[i] == unique[j]) {
                count[j]++;
                found = 1;
                break;
            }
        }

        if (found == 0) {
            unique[uniqueCount] = s[i];
            count[uniqueCount] = 1;
            uniqueCount++;
        }
    }

    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < uniqueCount; i++) {
        cout << unique[i] << ": " << count[i] << endl;
    }

    cout << "\nTotal words entered: " << n << endl;
    cout << "Unique words: " << uniqueCount << endl;

    return 0;
}
