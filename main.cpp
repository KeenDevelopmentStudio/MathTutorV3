/******************************************************************************************************************
 * Program......: MathTutorV3
 * Programmer(s): Treven Keen
 * Section(s)...: Section 3
 * Date.........: 2026-10-16
 * GitHub Repo..: https://github.com/KeenDevelopmentStudio/MathTutorV3
 * Description..:
    This program asks the user what their name is and welcomes them!
    It will also tell them some math fun facts and present them with some cool ASCII art.
    They will be asked random math questions.
    These questions will get easier or harder based on performance.
 *****************************************************************************************************************/

// Include Libraries
#include <iostream>
#include <random>
#include <limits>
#include <cctype>

// Set Default Namespace
using namespace std;

int main() {

    // Initial Variables
    string username;

    const int maxAttempts = 3;
    const int LEVEL_RANGE_CHANGE = 10;
    int mathLevel = 1;
    int currentRange = 10;
    int totalCorrect = 0;
    int totalIncorrect = 0;

    string userInput = "?";

    int leftNum;
    int rightNum;
    int mathType;
    char mathOperator;

    int userAnswer;
    int correctAnswer;
    int temp;

    // Title Display
    cout << "******************************************************************************" << endl;
    cout << R"(
       __  __       _   _   _____      _           __     _______
      |  \/  | __ _| |_| |_|_   _|   _| |_ ___  _ _\ \   / /___ /
      | |\/| |/ _` | __| '_ \| || | | | __/ _ \| '__\ \ / /  |_ \
      | |  | | (_| | |_| | | | || |_| | || (_) | |   \ V /  ___) |
      |_|  |_|\__,_|\__|_| |_|_| \__,_|\__\___/|_|    \_/  |____/  )" << endl << endl;
    cout << "******************************************************************************" << endl;
    cout << "*    Welcome to Version 3 of the Awesome Math Tutor!        *" << endl;
    cout << "******************************************************************************" << endl;

    // Math Facts
    cout << "   Un-fun math rules:" << endl << endl;
    cout << "* No fun allowed, only mathematical equations." << endl;
    cout << "* Laughing results in weekend detention." << endl;
    cout << "* You must recite 1000 digits of Pi numbers at the start of each class period." << endl;
    cout << "* If it seems easy, you're wrong." << endl;
    cout << "******************************************************************************" << endl;

    //basic query to get user name
    cout << "Please enter your Username:" << endl;;
    getline(cin, username);
    cout << "Welcome to the Math Tutor " << username << "!" << endl;

    // Set Seed
    srand(time(0));

    // Math Loop
    do {

        // Math Problem Variables
        leftNum = rand() % (currentRange) + 1;
        rightNum = rand() % (currentRange) + 1;

        // Math Operator Variable
        enum MathType {MT_ADD, MT_SUBTRACT, MT_MULTIPLY, MT_DIVIDE};
        mathType = static_cast<MathType>(rand() % 4);

        //Switch
        switch (mathType) {
            case MT_ADD:
                // Addition
                mathOperator = '+';
                correctAnswer = leftNum + rightNum;
                break;

            case MT_SUBTRACT:
                // Subtraction
                mathOperator = '-';

                // Left Number must be greater than Right Number
                if (leftNum < rightNum) {
                    temp = leftNum;
                    leftNum = rightNum;
                    rightNum = temp;
                }
                correctAnswer = leftNum - rightNum;
                break;

            case MT_MULTIPLY:
                // Multiplication
                mathOperator = 'x';
                correctAnswer = leftNum * rightNum;
                break;

            case MT_DIVIDE:
                // Division
                mathOperator = '/';
                correctAnswer = leftNum;
                leftNum *= rightNum;
                break;

            default:
                cout << "Invalid question type: " << mathType << endl;
                cout << "Program ended with an error -1" << endl;
                cout << "Please report this problem to the developers." << endl;
                return -1;
        }

        //Request Math Answer
        for (int i = 0; i <= maxAttempts; i++) {
            cout << "What is the answer to " << leftNum << " " << mathOperator << " " << rightNum << "?" << endl;

            // Ensure Correct Answer Type
            while (!(cin >> userAnswer)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number: " << endl << endl;
            }

            // Evaluate Response
            if (userAnswer == correctAnswer) {
                totalCorrect += 1;
                cout << "You got it right. Good!" << endl << endl;
                break;
            }
            else {
                if (i == maxAttempts) {
                    totalIncorrect += 1;
                    cout << "You got it wrong. Disappointing." << endl;
                    cout << "The correct answer was: " << correctAnswer << endl;
                    cout << "You are a failure..." << endl << endl;
                }
                else {
                    cout << "You got it wrong. Disappointing." << endl;
                    cout << "You have " << (3 - i) << " attempts left." << endl;
                }
            }
        }
        if (totalCorrect >= 3) {
            mathLevel += 1;
            totalCorrect = 0;
            totalIncorrect = 0;
            currentRange += LEVEL_RANGE_CHANGE;
            cout << "You have risen to Math Level " << mathLevel << endl;
            cout << "Your new range is 0 - " << currentRange << endl;
        }
        else if (totalIncorrect >= 3 && mathLevel > 1) {
            mathLevel -= 1;
            totalCorrect = 0;
            totalIncorrect = 0;
            currentRange -= LEVEL_RANGE_CHANGE;
            cout << "You have fallen to Math Level " << mathLevel << endl;
            cout << "Your new range is 0 - " << currentRange << endl;
        }

        // Request Additional Questions
        cout << "Would you like to continue? (y / yes || n / no): " << endl << endl;
        while (true) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, userInput);

            // Lowercase Input
            for (int i = 0; i < userInput.size(); i++) {
                userInput.at(i) = tolower(userInput.at(i));
            }

            // Decision
            if (userInput == "yes" || userInput == "y" || userInput == "no" || userInput == "n") {
            break;
            }
            else {
                cout << "Invalid input. Please enter a correct answer (y / yes || n / no): " << endl << endl;
            }
        }

    } while (userInput == "yes" || userInput == "y");
    return 0;
}