#include <iostream>
#include <string>
using namespace std;

//Detjoni
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

void displayStudent(const Student &s) {
    cout << "\nEmri i studentit: " << s.name << endl;
    cout << "Mosha: " << s.age << endl;
    cout << "Notat: ";
    for (int i = 0; i < 5; i++) {
        cout << s.grades[i] << " ";
    }
    cout << endl;
}

float calculateAverage(const Student &s) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s.grades[i];
    }
    return sum / 5;
}


//Zymeri

void determinePerformance(float avg) {
    if (avg >= 90) {
        cout << "Performanca: Shkelqyeshem!\n";
    } else if (avg >= 75) {
        cout << "Performanca: Mire!\n";
    } else if (avg >= 50) {
        cout << "Performanca: Mesatare!\n";
    } else {
        cout << "Performanca: Ka nevoje per permiresim!\n";
    }
}

void enterMultipleStudents(Student students[], int &count) {
    cout << "Sheno numrin e studenteve: ";
    cin >> count;
    cin.ignore();
    for (int i = 0; i < count; i++) {
        cout << "\nVendosja e te dhenave per studentin: " << i + 1 << "\n";
        inputStudent(students[i]);
    }
}

