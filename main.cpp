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
#include <iostream> // Adds c-in and c-out
#include <ctime> // Adds usage for time(0)
#include <string> // Allows for manipulating strings
#include <limits> // Allows for limiting of values with cin.ignore
#include <cstdlib> // Adds randomization
#include <cctype> // Adds character handling like to-lower

// Set Default Namespace
using namespace std;

int main() {

    // Initial Variables

    // Constants
    const int maxAttempts = 3;
    const int LEVEL_RANGE_CHANGE = 10;

    // User's Input Strings
    string username;
    string userInput = "?";

    // Equation Type Variables
    enum MathType {MT_ADD, MT_SUBTRACT, MT_MULTIPLY, MT_DIVIDE};
    char mathOperator;

    // Math Equation Variables
    int leftNum;
    int rightNum;
    int mathType;
    int correctAnswer;

    // Math Leveling Variables
    int mathLevel = 1;
    int currentRange = 10;
    int totalCorrect = 0;
    int totalIncorrect = 0;

    // Answer and Temporary Storage
    int userAnswer;
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

        // Math Operator Choosing
        mathType = static_cast<MathType>(rand() % 4);

        // Switch
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
                /// No Fractions Allowed
                mathOperator = '/';
                correctAnswer = leftNum; // Set Correct Answer to Old Left Number
                leftNum *= rightNum; // Set New Left Number to Dividend and Right Number to Divisor
                break;

            default:
                // Error Handling
                cout << "Invalid question type: " << mathType << endl;
                cout << "Program ended with an error -1" << endl;
                cout << "Please report this problem to the developers." << endl;
                return -1;
        }

        // Request Math Answer
        for (int i = 0; i <= maxAttempts; i++) {
            cout << "[Level #" << mathLevel << "] " << username << ", ";
            cout << "what is the answer to " << leftNum << " " << mathOperator << " " << rightNum << "?" << endl;

            // Ensure Correct Answer Type
            while (!(cin >> userAnswer)) {
                cin.clear(); // Clear cin error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore Max Input up to \n
                cout << "Invalid input. Please enter a number: " << endl << endl;
            }

            // Evaluate Response
            /// Correct Answer
            if (userAnswer == correctAnswer) {
                totalCorrect++; // Increase Correct Answer Counter
                cout << "You got it right. Good!" << endl << endl;
                break;
            }

            // Incorrect Answer
            else {
                if (i == maxAttempts) { // Out of Math Question Attempts
                    totalIncorrect++; // Increase Incorrect Answer Counter
                    cout << "You got it wrong. Disappointing." << endl;
                    cout << "The correct answer was: " << correctAnswer << endl;
                    cout << "You are a failure..." << endl << endl;
                }
                else { // Still Has Math Question Attempts
                    cout << "You got it wrong. Disappointing." << endl;
                    cout << "You have " << (maxAttempts - i) << " attempts left." << endl;
                }
            }
        }

        // Leveling Up mathLevel
        if (totalCorrect >= 3) {
            mathLevel++; // Increase Level by 1
            totalCorrect = 0; // Reset Correct Count
            totalIncorrect = 0; // Reset Incorrect Count
            currentRange += LEVEL_RANGE_CHANGE; // Update Range to Match Level
            cout << "You have risen to Math Level " << mathLevel << endl;
            cout << "Your new range is 0 - " << currentRange << endl;
        }

        // Leveling Down mathLevel
        else if (totalIncorrect >= 3 && mathLevel > 1) {
            mathLevel--; // Decrease Level by 1
            totalCorrect = 0; // Reset Correct Count
            totalIncorrect = 0; // Reset Incorrect Count
            currentRange -= LEVEL_RANGE_CHANGE; // Update Range to Match LevelK
            cout << "You have fallen to Math Level " << mathLevel << endl;
            cout << "Your new range is 0 - " << currentRange << endl;
        }

        // Request Additional Questions
        cout << "Would you like to continue? (y / yes || n / no): " << endl << endl;

        // Clears Lines From Input Buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        while (true) {
            // Get Answer for Continue Question
            getline(cin, userInput);

            // Lowercase transition
            for (int i = 0; i < userInput.size(); i++) {
                userInput.at(i) = tolower(userInput.at(i));
            }

            // Decision based on answer
            if (userInput == "yes" || userInput == "y" || userInput == "no" || userInput == "n") {
            break;
            }

            cout << "Invalid input. Please enter a correct answer (y / yes || n / no): " << endl;
        }

    } while (userInput == "yes" || userInput == "y");

    cout << "Thank you for using MathTutorV3 to study! V4 is coming soon!" << endl;
    return 0;
}