#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    int totalMarks = 0;
    int maxMarks = 100 * numSubjects;

    for (int i = 1; i <= numSubjects; i++) {
        int marks;
        cout << "Enter the marks for subject " << i << ": ";
        cin >> marks;
        totalMarks += marks;
    }

    float percentage = (static_cast<float>(totalMarks) / maxMarks) * 100;
    cout << fixed << setprecision(2);
    cout << "Total Marks: " << totalMarks << "/" << maxMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
