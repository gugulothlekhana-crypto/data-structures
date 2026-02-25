#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Constructor
    Student() {
        rollNumber = 0;
        name = "";
        marks = 0.0;
    }

    // Function to input details
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display details
    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student object with roll number "
             << rollNumber << " is being deleted." << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation
    Student* students = new Student[n];

    // Input details
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].input();
    }

    // Display details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
        cout << endl;
    }

    // Deallocate memory
    delete[] students;
    return 0;
}