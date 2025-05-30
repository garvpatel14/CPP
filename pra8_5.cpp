#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<string, vector<string>> DirectoryMap;
    int Choice;
    string FolderName, FileName;

    while (true)
    {
        cout << "\n1. Create Folder\n2. Add File to Folder\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> Choice;
        cin.ignore();

        switch (Choice)
        {
        case 1:
            cout << "Enter folder name: ";
            getline(cin, FolderName);
            if (DirectoryMap.count(FolderName) == 0)
            {
                DirectoryMap[FolderName] = {};
                cout << "Folder created." << endl;
            }
            else
            {
                cout << "Folder already exists." << endl;
            }
            break;

        case 2:
            cout << "Enter folder name: ";
            getline(cin, FolderName);
            if (DirectoryMap.count(FolderName) == 0)
            {
                cout << "Folder doesn't exist." << endl;
            }
            else
            {
                cout << "Enter file name: ";
                getline(cin, FileName);
                DirectoryMap[FolderName].push_back(FileName);
                cout << "File added to folder." << endl;
            }
            break;

        case 3:
            cout << endl << "--- Directory Structure ---" << endl;
            for (auto& It : DirectoryMap)
            {
                cout << It.first << endl;
                for (const auto& file : It.second)
                {
                    cout << "  " << file << endl;
                }
            }
            break;

        case 4:
            cout << "GARV-24CE080" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
