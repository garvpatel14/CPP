#include <iostream>
using namespace std;

class PlotData {
    int Length, Width, Area, Perimeter;  

public:
    void AddData() {
        cout << "Enter Length and Width: ";
        cin >> Length >> Width;
        Area = Length * Width;
        Perimeter = 2 * (Length + Width);
    }

    void UpdateData() {
        cout << "Enter new Length and Width: ";
        cin >> Length >> Width;
        Area = Length * Width;
        Perimeter = 2 * (Length + Width);  
    }

    void DisplayData() {
        cout << "Area: " << Area << ", Perimeter: " << Perimeter << endl;
    }
};

int main() {
    PlotData P[25];  
    int PlotNumber, c = 0, Choice;

    while (true) {
        cout << "\nEnter 1 for AddData, 2 for UpdateData, 3 for DisplayData, 4 to Exit: ";
        cin >> Choice;

        switch (Choice) {
            case 1:  
                if (c < 25) {
                    P[c].AddData();
                    c++;
                } else {
                    cout << "Maximum number of plots reached." << endl;
                }
                break;

            case 2:  
                cout << "Enter the plot number to update (1 to " << c << "): ";
                cin >> PlotNumber;
                if (PlotNumber >= 1 && PlotNumber <= c) {
                    P[PlotNumber - 1].UpdateData();
                } else {
                    cout << "Invalid plot number. You have " << c << " plots." << endl;
                }
                break;

            case 3:  
                if (c > 0) {
                    for (int i = 0; i < c; i++) {
                        P[i].DisplayData();
                    }
                } else {
                    cout << "No plot data available to display." << endl;
                }
                break;

            case 4:  
                cout << "Exiting program." << endl;
                return 0;

            default:  
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}
