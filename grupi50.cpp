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

void displayAllStudents(Student students[], int count) {
    cout << "\nShfaq te gjithe studentet:\n";
    for (int i = 0; i < count; i++) {
        displayStudent(students[i]);
        float avg = calculateAverage(students[i]);
        cout << "Nota mesatare: " << avg << endl;
        determinePerformance(avg);
    }
}

void findTopStudent(Student students[], int count) {
    if (count == 0) {
        cout << "Nuk ka te dhena per ndonje student, prandaj nuk mund te shfaqim studentin me te mire.\n";
        return;
    }
    int topIndex = 0;
    float highestAvg = calculateAverage(students[0]);
    for (int i = 1; i < count; i++) {
        float avg = calculateAverage(students[i]);
        if (avg > highestAvg) {
            highestAvg = avg;
            topIndex = i;
        }
    }
    cout << "\nStudenti me i mire:\n";
    displayStudent(students[topIndex]);
    cout << "Nota mesatare: " << highestAvg << endl;
    determinePerformance(highestAvg);
}

//Ylli

void countPassedStudents(Student students[], int count) {
    int passed = 0;
    for (int i = 0; i < count; i++) {
        if (calculateAverage(students[i]) >= 50) {
            passed++;
        }
    }
    cout << "Numri i studenteve qe kane kaluar: " << passed << endl;
}

void countFailedStudents(Student students[], int count) {
    int failed = 0;
    for (int i = 0; i < count; i++) {
        if (calculateAverage(students[i]) < 50) {
            failed++;
        }
    }
    cout << "Numri i studenteve qe kane rene: " << failed << endl;
}

void displayStudentByName(Student students[], int count, string searchName) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].name == searchName) {
            displayStudent(students[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "Studenti me kete emer nuk u gjet!\n";
    }
}

//Blearti

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    
    int choice;
    do {
        cout << "\nSistemi per Menaxhimin e Studenteve\n";
        cout << "1. Vendos te dhenat per studentin\n";
        cout << "2. Shfaq te gjithe studentet\n";
        cout << "3. Gjej studentin me te mire\n";
        cout << "4. Numero studentet qe kane kaluar\n";
        cout << "5. Numero studentet qe kane rene\n";
        cout << "6. Kerko studentin sipas emrit\n";
        cout << "7. Dil nga programi\n";
        cout << "Zgjedh njerin nga opsionet: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                enterMultipleStudents(students, studentCount);
                break;
            case 2:
                if (studentCount == 0) {
                    cout << "Nuk ka te dhena te disponueshme per studentin!\n";
                } else {
                    displayAllStudents(students, studentCount);
                }
                break;
            case 3:
                findTopStudent(students, studentCount);
                break;
            case 4:
                countPassedStudents(students, studentCount);
                break;
            case 5:
                countFailedStudents(students, studentCount);
                break;
            case 6:
                {
                    string name;
                    cout << "Sheno emrin e studentit qe po kerkon: ";
                    getline(cin, name);
                    displayStudentByName(students, studentCount, name);
                }
                break;
            case 7:
                cout << "Dalja nga programi.\n";
                break;
            default:
                cout << "Zgjedhja eshte jovalide, ju lutem provoni perseri!\n";
        }
        
    } while (choice != 7);
    
    return 0;
}
