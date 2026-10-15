/******************************************************************************************************************
 * Program......: MathTutorV3
 * Programmer(s): Treven Keen
 * Section(s)...: Section 3
 * Date.........: 2026-10-16
 * GitHub Repo..: https://github.com/KeenDevelopmentStudio
 * Description..:
    This program asks the user what their name is and welcomes them!
    It will also tell them some math fun facts and present them with some cool ASCII art.
    They will be asked a randomized math question which will be checked with an if statement in a later mathTutor.
 *****************************************************************************************************************/

// Include Libraries
#include <iostream>
#include <random>

// Set Default Namespace
using namespace std;

int main() {

    // Initial Variables
    string username;
    int loopCounter;
    int correctAnswers = 0;
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

    cout << "How many math questions do you wish to answer?" << endl;
    cin >> loopCounter;

    // Math Loop
    for (int i = 0; i < loopCounter; i++) {

        // Math Problem Variables
        leftNum = rand() % 10 + 1;
        rightNum = rand() % 10 + 1;

        // Math Operator Variable
        mathType = rand() % 4 + 1;

        //Switch
        switch (mathType) {
            case 1:
                // Addition
                mathOperator = '+';
                correctAnswer = leftNum + rightNum;
                break;

            case 2:
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

            case 3:
                // Multiplication
                mathOperator = 'x';
                correctAnswer = leftNum * rightNum;
                break;

            case 4:
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
        cout<<"What is the answer to " << leftNum << " " << mathOperator << " " << rightNum << "?" << endl;
        cin >> userAnswer;

        // Evaluate Response
        if (userAnswer == correctAnswer) {
            cout << "You got it right. Good." << endl << endl;
            correctAnswers += 1;
        }
        else {
            cout << "You got it wrong. Disappointing." << endl;
            cout << "The correct answer was: " << correctAnswer << endl;
            cout << "You are a failure..." << endl << endl;
        }
    }
    return 0;
}