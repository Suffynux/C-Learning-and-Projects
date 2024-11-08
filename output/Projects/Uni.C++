// #include <iostream>

// using namespace std;

// int main() {

//     // Student Name and ID
//     string studentName = "Sufiyan Allah dad";
//     string studentId = "bc240201580";

//     // Printing Student Name and ID
//     cout << "Student Name: " << studentName << endl;
//     cout << "Student ID: " << studentId << endl;


//     // Declaring variables and assiging values by prompting user 
//     int subject1 = 0, subject2 = 0, subject3 = 0;
//     cout << "Please enter your marks of subject 1: ";
//     cin >> subject1;

//     cout << "Please enter your marks of subject 2: ";
//     cin >> subject2;

//     cout << "Please enter your marks of subject 3: ";
//     cin >> subject3;


//     // Showing Result Messsage 
//     cout << "Marks have been calculated; below are the results:" << endl;

//     // Obtained Marks
//     const int totalMarks = 300;
//     const int obtainedMarks = subject1 + subject2 + subject3;
//     cout << "Obtained Marks out of " << totalMarks << ": " << obtainedMarks << endl;


//     // Average Marks of the Three Subjects
//     const float averageMarks = ((subject1 + subject2 + subject3) /3);
//     cout << "Average Marks: " << averageMarks << endl;


//     // Calculating the Grades on the average marks
//     if (averageMarks >= 90) {
//         cout << "Grade: A+" << endl;

//     } else if (averageMarks >= 80) {
//         cout << "Grade: b" << endl;

//     } else if (averageMarks >= 70) {
//         cout << "Grade: c" << endl;

//     } else if (averageMarks >= 60) {
//         cout << "Grade: d" << endl;

//     } else if (averageMarks <60) {
//         cout << "Grade: f" << endl;
//     }


//     // Find the highest value
//     int highest = subject1;
//     if (subject2 > highest) {
//         highest = subject2;
//     }
//     if (subject3 > highest) {
//         highest = subject3;
//     }

//     // Find the lowest value
//     int lowest = subject1;
//     if (subject2 < lowest) {
//         lowest = subject2;
//     }
//     if (subject3 < lowest) {
//         lowest = subject3;
//     }

//     cout << "Highest value: " << highest << endl;
//     cout << "Lowest value: " << lowest << endl;

//     return 0;
// }



/* Solution for CS201 by VU TALK */

#include <iostream>
#include <string>
using namespace std;

int main() {

    string userName = "Umme Kalsoom asif";     
    string uniqueID = "bc240207280";    

    cout << userName << endl;
    cout << uniqueID << endl;

    int myId = 240207280;
    int extractedYear = (myId / 100) % 10000; 
    cout << extractedYear << endl;

    bool leapYear = (extractedYear % 4 == 0 && extractedYear % 100 != 0) || (extractedYear % 400 == 0);
    cout << "The year " << extractedYear << " is " << (leapYear ? "a leap year." : "not a leap year.") << endl;

    int chosenMonth;
    do {
        cout << "Enter a month number (1-12) or -1 to exit: ";
        cin >> chosenMonth;

        if (chosenMonth == -1) {
            break; 
        }

        switch (chosenMonth) {
            case 1:
                cout << "January has 31 days." << endl;
                break;
            case 2:
                cout << "February has " << (leapYear ? "29 days." : "28 days.") << endl;
                break;
            case 3:
                cout << "March has 31 days." << endl;
                break;
            case 4:
                cout << "April has 30 days." << endl;
                break;
            case 5:
                cout << "May has 31 days." << endl;
                break;
            case 6:
                cout << "June has 30 days." << endl;
                break;
            case 7:
                cout << "July has 31 days." << endl;
                break;
            case 8:
                cout << "August has 31 days." << endl;
                break;
            case 9:
                cout << "September has 30 days." << endl;
                break;
            case 10:
                cout << "October has 31 days." << endl;
                break;
            case 11:
                cout << "November has 30 days." << endl;
                break;
            case 12:
                cout << "December has 31 days." << endl;
                break;
            default:
                cout << "Invalid input!" << endl;
                break;
        }
    } while (chosenMonth != -1);

    return 0;
}