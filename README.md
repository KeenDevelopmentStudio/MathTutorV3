# Math Tutor V3

<b>Table of Content</b>
- [Summary](#summary)
- [Maintainers](#maintainers)
- [New Concepts Used](#new-concepts-used)
- [Console Output Example](#console-output-example)

## Summary
This is the third iteration of the MathTutor program. In this update, we added these features:
  - Enumerations for Math Type
  - Customizable amount of questions
  - Improved error catching for inputs.
  - Increasing difficulty on multiple correct questions
  - Decreasing difficulty on multiple incorrect questions
  - Larger range of questions based on math Level


## Maintainers
[@KeenDevelopmentStudio](https://github.com/KeenDevelopmentStudio) Treven Keen


## New Concepts Used
Enum:
- I learned how to use a enum to swap between our switch statement instead of using a number. This allows for more customization and easier to read code.

While Loop
- I used While Loops to endlessly loop while a condition was true.

Cin Ignore
- I used cin.ignore to clear the cin line to prevent readlines from getting confused.
  

## Console Output Testing Example

Correct Math Answers
```
C:\Users\Keen\OneDrive\Desktop\MathTutorV3\cmake-build-debug\MathTutorV3.exe
******************************************************************************

       __  __       _   _   _____      _           __     _______
      |  \/  | __ _| |_| |_|_   _|   _| |_ ___  _ _\ \   / /___ /
      | |\/| |/ _` | __| '_ \| || | | | __/ _ \| '__\ \ / /  |_ \
      | |  | | (_| | |_| | | | || |_| | || (_) | |   \ V /  ___) |
      |_|  |_|\__,_|\__|_| |_|_| \__,_|\__\___/|_|    \_/  |____/

******************************************************************************
*    Welcome to Version 3 of the Awesome Math Tutor!        *
******************************************************************************
   Un-fun math rules:

* No fun allowed, only mathematical equations.
* Laughing results in weekend detention.
* You must recite 1000 digits of Pi numbers at the start of each class period.
* If it seems easy, you're wrong.
******************************************************************************
Please enter your Username:
Treven Keen

Welcome to the Math Tutor Treven Keen!
What is the answer to 10 x 8?
80

You got it right. Good!

Would you like to continue? (y / yes || n / no):

y

What is the answer to 7 x 3?
21

You got it right. Good!

Would you like to continue? (y / yes || n / no):

y

What is the answer to 9 - 5?
4

You got it right. Good!

You have risen to Math Level 2
Your new range is 0 - 20
Would you like to continue? (y / yes || n / no):

n


Process finished with exit code 0
```

Incorrect Math Answers
```
C:\Users\Keen\OneDrive\Desktop\MathTutorV3\cmake-build-debug\MathTutorV3.exe
******************************************************************************

       __  __       _   _   _____      _           __     _______
      |  \/  | __ _| |_| |_|_   _|   _| |_ ___  _ _\ \   / /___ /
      | |\/| |/ _` | __| '_ \| || | | | __/ _ \| '__\ \ / /  |_ \
      | |  | | (_| | |_| | | | || |_| | || (_) | |   \ V /  ___) |
      |_|  |_|\__,_|\__|_| |_|_| \__,_|\__\___/|_|    \_/  |____/

******************************************************************************
*    Welcome to Version 3 of the Awesome Math Tutor!        *
******************************************************************************
   Un-fun math rules:

* No fun allowed, only mathematical equations.
* Laughing results in weekend detention.
* You must recite 1000 digits of Pi numbers at the start of each class period.
* If it seems easy, you're wrong.
******************************************************************************
Please enter your Username:
Treven Keen

Welcome to the Math Tutor Treven Keen!
What is the answer to 10 / 5?
67

You got it wrong. Disappointing.
You have 3 attempts left.
What is the answer to 10 / 5?
67

You got it wrong. Disappointing.
You have 2 attempts left.
What is the answer to 10 / 5?
67

You got it wrong. Disappointing.
You have 1 attempts left.
What is the answer to 10 / 5?
67

You got it wrong. Disappointing.
The correct answer was: 2
You are a failure...

Would you like to continue? (y / yes || n / no):

y

What is the answer to 6 + 3?
67

You got it wrong. Disappointing.
You have 3 attempts left.
What is the answer to 6 + 3?
67

You got it wrong. Disappointing.
You have 2 attempts left.
What is the answer to 6 + 3?
67

You got it wrong. Disappointing.
You have 1 attempts left.
What is the answer to 6 + 3?
67

You got it wrong. Disappointing.
The correct answer was: 9
You are a failure...

Would you like to continue? (y / yes || n / no):

y

What is the answer to 2 - 1?
67

You got it wrong. Disappointing.
You have 3 attempts left.
What is the answer to 2 - 1?
67

You got it wrong. Disappointing.
You have 2 attempts left.
What is the answer to 2 - 1?
67

You got it wrong. Disappointing.
You have 1 attempts left.
What is the answer to 2 - 1?
67

You got it wrong. Disappointing.
The correct answer was: 1
You are a failure...

Would you like to continue? (y / yes || n / no):

y

What is the answer to 1 x 5?
67

You got it wrong. Disappointing.
You have 3 attempts left.
What is the answer to 1 x 5?
67

You got it wrong. Disappointing.
You have 2 attempts left.
What is the answer to 1 x 5?
67

You got it wrong. Disappointing.
You have 1 attempts left.
What is the answer to 1 x 5?
67

You got it wrong. Disappointing.
The correct answer was: 5
You are a failure...

Would you like to continue? (y / yes || n / no):

n


Process finished with exit code 0
```

Invalid Answers
```
C:\Users\Keen\OneDrive\Desktop\MathTutorV3\cmake-build-debug\MathTutorV3.exe
******************************************************************************

       __  __       _   _   _____      _           __     _______
      |  \/  | __ _| |_| |_|_   _|   _| |_ ___  _ _\ \   / /___ /
      | |\/| |/ _` | __| '_ \| || | | | __/ _ \| '__\ \ / /  |_ \
      | |  | | (_| | |_| | | | || |_| | || (_) | |   \ V /  ___) |
      |_|  |_|\__,_|\__|_| |_|_| \__,_|\__\___/|_|    \_/  |____/

******************************************************************************
*    Welcome to Version 3 of the Awesome Math Tutor!        *
******************************************************************************
   Un-fun math rules:

* No fun allowed, only mathematical equations.
* Laughing results in weekend detention.
* You must recite 1000 digits of Pi numbers at the start of each class period.
* If it seems easy, you're wrong.
******************************************************************************
Please enter your Username:
Keen 47 2026

Welcome to the Math Tutor Keen 47 2026!
What is the answer to 9 - 5?
Your mother

Invalid input. Please enter a number:

4

You got it right. Good!

Would you like to continue? (y / yes || n / no):

67

Invalid input. Please enter a correct answer (y / yes || n / no):

n

n


Process finished with exit code 0
```

[Back to Top](#math-tutor-v3)
