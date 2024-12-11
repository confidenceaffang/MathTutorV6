// This is the header file for the Math Tutor version 6 project
// The guards ifndef, define and endif are use so that the the contents in the header file is only displayed once
// The header file does contain thr description of all the functions used in the code.
#ifndef MATHTUTOR_H
#define MATHTUTOR_H

#include <vector>
#include <string>

using namespace std;

// Function Prototypes
void DisplayGameIntro();
string GetUserName();
int GetNumericValue();
string YesNoQuestion(string question);
void DisplaySummaryReport(const vector<vector<int>> &allQuestions);
vector<int> GenerateRandomQuestion(int mathLevel, int currentRange);
bool GiveThreeAttempts(string userName, vector<int> &currentQuestion, int &totalCorrect, int &totalIncorrect);
void CheckForLevelChange(int &totalCorrect, int &totalIncorrect, int &mathLevel, int &currentRange);
void SaveGameProgress(const string& userName, const vector<vector<int>>& allQuestions, int mathLevel, int currentRange);
void LoadPreviousGame(string userName, vector<vector<int>>& allQuestions, int& mathLevel, int& currentRange);
#include "MathTutor.cpp"

#endif //MATHTUTOR_H
