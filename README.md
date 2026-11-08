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

Leveling Up
```
Welcome to the Math Tutor Keen!
[Level #1] Keen, what is the answer to 10 x 4?
40

You got it right. Good!

Would you like to continue? (y / yes || n / no):

y

[Level #1] Keen, what is the answer to 1 x 3?
3

You got it right. Good!

Would you like to continue? (y / yes || n / no):

y

[Level #1] Keen, what is the answer to 8 x 9?
72

You got it right. Good!

You have risen to Math Level 2
Your new range is 0 - 20
```

Leveling Down
```
[Level #2] Keen, what is the answer to 11 x 2?
67

You got it wrong. Disappointing.
You have 3 attempts left.
[Level #2] Keen, what is the answer to 11 x 2?
67

You got it wrong. Disappointing.
You have 2 attempts left.
[Level #2] Keen, what is the answer to 11 x 2?
67

You got it wrong. Disappointing.
You have 1 attempts left.
[Level #2] Keen, what is the answer to 11 x 2?
67

You got it wrong. Disappointing.
The correct answer was: 22
You are a failure...

Would you like to continue? (y / yes || n / no):
y

[Level #2] Keen, what is the answer to 7 + 9?
67

You got it wrong. Disappointing.
You have 3 attempts left.
[Level #2] Keen, what is the answer to 7 + 9?
67

You got it wrong. Disappointing.
You have 2 attempts left.
[Level #2] Keen, what is the answer to 7 + 9?
67

You got it wrong. Disappointing.
You have 1 attempts left.
[Level #2] Keen, what is the answer to 7 + 9?
67

You got it wrong. Disappointing.
The correct answer was: 16
You are a failure...

Would you like to continue? (y / yes || n / no):
y

[Level #2] Keen, what is the answer to 5 x 4?
67

You got it wrong. Disappointing.
You have 3 attempts left.
[Level #2] Keen, what is the answer to 5 x 4?
67

You got it wrong. Disappointing.
You have 2 attempts left.
[Level #2] Keen, what is the answer to 5 x 4?
67

You got it wrong. Disappointing.
You have 1 attempts left.
[Level #2] Keen, what is the answer to 5 x 4?
67

You got it wrong. Disappointing.
The correct answer was: 20
You are a failure...

You have fallen to Math Level 1
Your new range is 0 - 10
```

Invalid Number
```
[Level #1] Keen, what is the answer to 1 + 7?
Eight

Invalid input. Please enter a number:
I SAID EIGHT

Invalid input. Please enter a number:
8

You got it right. Good!
```

Invalid Yes/No Input
```
Would you like to continue? (y / yes || n / no):
maybe

Invalid input. Please enter a correct answer (y / yes || n / no):
perhaps

Invalid input. Please enter a correct answer (y / yes || n / no):
n

Thank you for using MathTutorV3 to study! V4 is coming soon!

Process finished with exit code 0
```

[Back to Top](#math-tutor-v3)
