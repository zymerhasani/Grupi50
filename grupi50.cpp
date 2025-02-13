#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grades[5];
};

void inputStudent(Student &s) {
    cout << "Sheno emrin e studentit: ";
    getline(cin, s.name);
    cout << "Sheno moshen e studentit: ";
    cin >> s.age;
    cout << "Sheno 5 nota: ";
    for (int i = 0; i < 5; i++) {
        cin >> s.grades[i];
    }
    cin.ignore();
}

