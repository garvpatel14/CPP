#include <iostream>
using namespace std;

template <typename T>
class DynamicDataset {
private:
    T* data;
    int size;
    int capacity;

    void resize(int newCapacity) {
        T* newData = new T[newCapacity];
        for (int i = 0; i < size; ++i)
            newData[i] = data[i];
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    DynamicDataset() {
        size = 0;
        capacity = 4;
        data = new T[capacity];
    }

    ~DynamicDataset() {
        delete[] data;
    }

    void append(const T& value) {
        if (size == capacity)
            resize(capacity * 2);
        data[size++] = value;
    }

    void insert(int index, const T& value) {
        if (index < 0 || index > size) {
            cerr << "Insert failed: index out of range\n";
            return;
        }
        if (size == capacity)
            resize(capacity * 2);
        for (int i = size; i > index; --i)
            data[i] = data[i - 1];
        data[index] = value;
        ++size;
    }

    void remove(int index) {
        if (index < 0 || index >= size) {
            cerr << "Remove failed: index out of range\n";
            return;
        }
        for (int i = index; i < size - 1; ++i)
            data[i] = data[i + 1];
        --size;
        if (size <= capacity / 4 && capacity > 4)
            resize(capacity / 2);
    }

    void clear() {
        delete[] data;
        capacity = 4;
        size = 0;
        data = new T[capacity];
    }

    T& get(int index) {
        if (index < 0 || index >= size) {
            cerr << "Access failed: index out of range\n";
            static T dummy{};
            return dummy;
        }
        return data[index];
    }

    void print() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << "\n";
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }
};

int main() {
    DynamicDataset<int> dataset;

    dataset.append(10);
    dataset.append(20);
    dataset.append(30);
    dataset.append(40);
    dataset.append(50);

    cout << "Dataset after appending: ";
    dataset.print();

    dataset.insert(2, 25);
    cout << "Dataset after inserting 25 at index 2: ";
    dataset.print();

    dataset.remove(3);
    cout << "Dataset after removing index 3: ";
    dataset.print();

    cout << "Accessing index 1: " << dataset.get(1) << "\n";

    dataset.clear();
    cout << "Dataset after clearing: ";
    dataset.print();

    return 0;
}
