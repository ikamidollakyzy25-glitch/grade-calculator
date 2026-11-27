#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string studentName = "";
    int studentCount = 0;
    double totalClassAverage = 0.0;

    // Main loop to process multiple students until "end" is entered
    while (true) {
        cout << "Student name (or end to finish): ";
        cin >> studentName;

        if (studentName == "end") {
            break;
        }

        int scoreSum = 0;

        // Read 5 valid scores for the current student
        for (int i = 1; i <= 5; i++) {
            int currentScore = 0;

            while (true) {
                cout << "Score " << i << ": ";
                cin >> currentScore;

                // Bonus: handle non-numeric input (letters or symbols)
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input. Enter a value from 0 to 100." << endl;
                } else if (currentScore < 0 || currentScore > 100) {
                    cout << "Invalid score. Enter a value from 0 to 100." << endl;
                } else {
                    break;
                }
            }

            scoreSum += currentScore;
        }

        // Calculate student average and determine letter grade
        double studentAverage = scoreSum / 5.0;
        char letterGrade = 'F';

        if (studentAverage >= 90.0) {
            letterGrade = 'A';
        } else if (studentAverage >= 75.0) {
            letterGrade = 'B';
        } else if (studentAverage >= 60.0) {
            letterGrade = 'C';
        }

        cout << fixed << setprecision(1);
        cout << studentName << ": average " << studentAverage << ", grade " << letterGrade << endl;

        studentCount++;
        totalClassAverage += studentAverage;
    }

    // Print overall class statistics
    if (studentCount == 0) {
        cout << "No students entered" << endl;
    } else {
        cout << fixed << setprecision(1);
        cout << "Students entered: " << studentCount << endl;
        cout << "Class average: " << totalClassAverage / studentCount << endl;
    }

    return 0;
}
