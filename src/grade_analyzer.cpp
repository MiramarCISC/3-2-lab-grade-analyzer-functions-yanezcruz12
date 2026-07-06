#include "grade_analyzer.hpp"
#include <iostream>

using namespace std;

// Calculates the total of the three assignment scores.
double calculateTotal(double score1, double score2, double score3) {
    return score1 + score2 + score3;
}

// Calculates the average score.
// Returns 0.0 if the count is invalid.
double calculateAverage(double total, int count) {
    if (count <= 0) {
        return 0.0;
    }

    return total / count;
}

// Determines the letter grade from the average score.
char determineLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Returns true if the student has a passing average.
bool isPassing(double average) {
    return average >= 70;
}

// Checks whether the score is between 0 and 100, inclusive.
bool isValidScore(double score) {
    return score >= 0 && score <= 100;
}


void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;

    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}
