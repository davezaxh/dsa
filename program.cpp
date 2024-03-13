//wap which allows MIT class to access roll number and name of student class. Use appropriate class object and function

#include <iostream>
#include <string>

using namespace std;

class Student {
    private: 
        int rollNumber;
        string name;

    public:
    // Constructor to initialize rollNumber and name
    Student(int roll, string n) {
        rollNumber = roll;
        name = n;
    };

    friend class MIT;
};

class MIT {
    public: 
        void display(Student &stud){
            cout << "Roll Number: " << stud.rollNumber << endl;
            cout << "Name: " << stud.name << endl;
        }
};

int main() {
    Student stud(123, "John"); // Provide arguments when creating the Student object
    MIT obj1;
    obj1.display(stud);
    return 0;
}