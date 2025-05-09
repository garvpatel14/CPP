#include<iostream> 
#include<algorithm> 
#include<memory> 
using namespace std; 
 
class arry { 
private: 
    int *arry1; 
    int *arry2; 
    int *mergedarry; 
    int size1; 
    int size2; 
 
public: 
    arry() { 
 
        size1 = 4; 
        size2 = 3; 
        arry1 = new int[size1]; 
        arry2 = new int[size2]; 
        mergedarry = new int[size1 + size2]; 
    } 
 
    ~arry() { 
        delete[] arry1; 
        delete[] arry2; 
        delete[]mergedarry; 
    } 
 
    void set() { 
        cout << "Enter elements for first array:" << endl; 
        for (int i = 0; i < size1; i++) { 
            cout << "Enter element " << i << ": "; 
            cin >> arry1[i]; 
        } 
 
        cout << "Enter elements for second array:" << endl; 
        for (int i = 0; i < size2; i++) { 
            cout << "Enter element " << i << ": "; 
            cin >> arry2[i]; 
        } 
    } 
 
    void display() { 
        cout << "First array:" << endl; 
        for (int i = 0; i < size1; i++) { 
            cout << arry1[i] << " "; 
        } 
        cout << endl; 
 
        cout << "Second array:" << endl; 
        for (int i = 0; i < size2; i++) { 
            cout << arry2[i] << " "; 
        } 
        cout << endl; 
 
    } 
 
    void sortarry() { 
        sort(arry1, arry1 + size1); 
        sort(arry2, arry2 + size2); 
 
        cout << "Sorted first array:" << endl; 
        for (int i = 0; i < size1; i++) { 
            cout << arry1[i] << " "; 
        } 
        cout << endl; 
 
        cout << "Sorted second array:" << endl; 
        for (int i = 0; i < size2; i++) { 
            cout << arry2[i] << " "; 
        } 
        cout << endl; 
    } 
    void merge(){ 
        int k = 0; 
 
        for(int i = 0; i<size1; i++){ 
            mergedarry[i] = arry1[i]; 
        } 
        for(int i = size1; i<size1+ size2;i++){ 
            mergedarry[size1 + k] = arry2[k]; 
            k++; 
        } 
        sort(mergedarry,mergedarry + size1 + size2); 
        cout<<"final sorted arry is : "<<endl; 
        for(int i = 0; i<size1 + size2; i++){ 
            cout<<mergedarry[i]<<" "; 
        } 
 
 
    } 
}; 
 
int main() {
 
    unique_ptr<arry>p1 = make_unique<arry>(); 
    p1->set(); 
    p1->display(); 
 
    p1->sortarry(); 
 
    p1->merge(); 
 
    return 0; 
}