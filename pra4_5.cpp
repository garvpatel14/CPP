#include<iostream>
using namespace std;

class Grading {
protected:
    float m1, m2, m3, Percent;
    char Grade;
    virtual void CalculateGrade() = 0;
};

class UgGrading : private Grading {
    char Grade1, Grade2, Grade3;

    void CalculateGrade() {
        Percent = (m1 + m2 + m3) / 1.5;

        if (m1 > 45) Grade1 = 'O';
        else if (m1 > 40) Grade1 = 'I';
        else if (m1 > 35) Grade1 = 'A';
        else if (m1 > 30) Grade1 = 'B';
        else if (m1 > 25) Grade1 = 'C';
        else if (m1 > 17) Grade1 = 'D';
        else Grade1 = 'F';

        if (m2 > 45) Grade2 = 'O';
        else if (m2 > 40) Grade2 = 'I';
        else if (m2 > 35) Grade2 = 'A';
        else if (m2 > 30) Grade2 = 'B';
        else if (m2 > 25) Grade2 = 'C';
        else if (m2 > 17) Grade2 = 'D';
        else Grade2 = 'F';

        if (m3 > 45) Grade3 = 'O';
        else if (m3 > 40) Grade3 = 'I';
        else if (m3 > 35) Grade3 = 'A';
        else if (m3 > 30) Grade3 = 'B';
        else if (m3 > 25) Grade3 = 'C';
        else if (m3 > 17) Grade3 = 'D';
        else Grade3 = 'F';
    }

public:
    void InputMarks(int l, int m, int n) {
        m1 = l;
        m2 = m;
        m3 = n;
        CalculateGrade();
    }

    void DisplayData() {
        cout << "Marks 1: " << m1 << endl
             << "Grade1: " << Grade1 << endl
             << "Marks 2: " << m2 << endl
             << "Grade2: " << Grade2 << endl
             << "Marks 3: " << m3 << endl
             << "Grade3: " << Grade3 << endl
             << "Percentage: " << Percent << endl;
    }
};

class PgGrading : private Grading {
    void CalculateGrade() {
        Percent = (m1 + m2) / 2;

        if (Percent > 95) Grade = 'O';
        else if (Percent > 90) Grade = 'A';
        else if (Percent > 80) Grade = 'B';
        else if (Percent > 70) Grade = 'C';
        else if (Percent > 60) Grade = 'D';
        else if (Percent > 50) Grade = 'E';
        else Grade = 'F';
    }

public:
    void InputMarks(int l, int m) {
        m1 = l;
        m2 = m;
        CalculateGrade();
    }

    void DisplayData() {
        cout << "Marks 1: " << m1 << endl
             << "Marks 2: " << m2 << endl
             << "Percentage: " << Percent << endl
             << "Grade: " << Grade << endl;
    }
};

int main() {
    int nUG, nPG;
    float m1, m2, m3;

    cout << "Enter number of UG students: ";
    cin >> nUG;

    cout << "Enter number of PG students: ";
    cin >> nPG;

    UgGrading UgStudent[nUG];
    PgGrading PgStudent[nPG];

    cout << "Enter marks (out of 50) of all UG students:" << endl;
    for (int i = 0; i < nUG; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Marks 1: ";
        cin >> m1;
        cout << "Marks 2: ";
        cin >> m2;
        cout << "Marks 3: ";
        cin >> m3;
        UgStudent[i].InputMarks(m1, m2, m3);
    }

    cout << "Enter marks (out of 100) of all PG students:" << endl;
    for (int i = 0; i < nPG; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Marks 1: ";
        cin >> m1;
        cout << "Marks 2: ";
        cin >> m2;
        PgStudent[i].InputMarks(m1, m2);
    }

    cout << "Displaying Details of all UG students:" << endl;
    for (int i = 0; i < nUG; i++) {
        cout << "Student " << i + 1 << endl;
        UgStudent[i].DisplayData();
    }

    cout << "Displaying Details of all PG students:" << endl;
    for (int i = 0; i < nPG; i++) {
        cout << "Student " << i + 1 << endl;
        PgStudent[i].DisplayData();
    }

    return 0;
}
