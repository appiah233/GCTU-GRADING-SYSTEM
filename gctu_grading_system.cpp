#include <iostream>
#include <string>
#include <limits> // For numeric_limits

using namespace std;

int main() {
    float score;

    cout << "Enter the student's score (%): ";

    // Input validation loop
    while (!(cin >> score)) {
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout << "Invalid input. Please enter a numeric score: ";
    }

    string grade;
    string remarks;

    if (score >= 80 && score <= 100) {
        grade = "A";
        remarks = "Outstanding";
    } else if (score >= 75 && score <= 79) {
        grade = "A-";
        remarks = "Excellent";
    } else if (score >= 70 && score <= 74) {
        grade = "B+";
        remarks = "Very Good";
    } else if (score >= 65 && score <= 69) {
        grade = "B";
        remarks = "Good";
    } else if (score >= 60 && score <= 64) {
        grade = "B-";
        remarks = "Fairly Good";
    } else if (score >= 55 && score <= 59) {
        grade = "C+";
        remarks = "Above Average";
    } else if (score >= 50 && score <= 54) {
        grade = "C";
        remarks = "Average";
    } else if (score >= 45 && score <= 49) {
        grade = "C-";
        remarks = "Below Average";
    } else if (score >= 40 && score <= 44) {
        grade = "D";
        remarks = "Pass";
    } else if (score >= 0 && score <= 39) {
        grade = "F";
        remarks = "Fail";
    } else {
        cout << "Invalid score entered. Score must be between 0 and 100." << endl;
        return 1; // Indicate an error
    }

    cout << "\nScore: " << score << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Remarks: " << remarks << endl;

    // Add a pause before exiting
    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cin.get(); // Wait for Enter key

    return 0; // Indicate successful execution
}