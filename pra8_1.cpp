#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void reverseSequence(vector<int>& vec) {
    int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "How many numbers? ";
    cin >> size;

    vector<int> numbers(size);

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];  
    }

    vector<int> reversed1 = numbers;
    std::reverse(reversed1.begin(), reversed1.end()); 

    vector<int> reversed2 = numbers;
    reverseSequence(reversed2);  

    cout << "Reversed using std::reverse : ";
    for (int i = 0; i < reversed1.size(); ++i) {
        cout << reversed1[i];
    }
    cout << "\n";

    cout << "Reversed using iteration: ";
    for (int i = 0; i < reversed2.size(); ++i) {
        cout << reversed2[i];
    }
    cout <<endl;

    return 0;
}
