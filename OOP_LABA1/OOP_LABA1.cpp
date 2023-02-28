#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Student.cpp"

using namespace std;

int main()
{
    cout << setw(30) << "Student list demo" << endl;
    map<int, Student> studentsMap
    {  {1, Student("Kryshtof", "Yurii", "IST-21")},
       {2, Student("Kulyk", "Natalia", "IST-21")},
       {3, Student("Lutsak", "Volodymyr", "IST-21")},
       {4, Student("Musyka", "Bohdan", "IST-21")},
       {5, Student("Naugol\'nyk", "Marta", "IST-21")},
       {6, Student("Ozarko", "Maria", "IST-21")},
       {7, Student("Yavorovskiy", "Viktor", "IST-31")},
       {9, Student("Yavorovskiy", "Ivan", "CS-11")},
       {10, Student("Zelisko", "Rostislav", "CS-22")},
       {11, Student("Zelisko", "Taras", "CS-22")}
    };

    string lastname;
    cout << "Enter lastname: ";
    cin >> lastname;
    
    cout << setw(25) << setfill('-') << "Result" << setw(19) << "" << endl;
    int count = 0;
    for (auto iter = studentsMap.begin(); iter != studentsMap.end(); iter++) {
        if (lastname == iter->second.getLastname()) {
            cout << ++count <<  ".) " << iter->second << endl;
        }
    }
    if (count == 0) {
        cout << "No users with this last name were found." << endl;
    };

    system("pause");
    return 0;
}

