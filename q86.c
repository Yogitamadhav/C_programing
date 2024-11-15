#include <stdio.h>
#include <string.h>

// Function prototypes
void displayQuestion(const char* question, const char* options[], char correctOption, int *score);

int main() {
    int score = 0;  // To keep track of the score
    char name[50];

    // Greeting the user
    printf("Welcome to the Online Quiz System!\n");
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove the newline character

    printf("\nHello, %s! Let's start the quiz.\n", name);

    // Questions and options
    const char* question1 = "What is the capital of France?";
    const char* options1[] = {"a. Berlin", "b. Madrid", "c. Paris", "d. Rome"};
    displayQuestion(question1, options1, 'c', &score);

    const char* question2 = "Which language is used for Android app development?";
    const char* options2[] = {"a. Python", "b. Java", "c. C++", "d. Swift"};
    displayQuestion(question2, options2, 'b', &score);

    const char* question3 = "Which planet is known as the Red Planet?";
    const char* options3[] = {"a. Mars", "b. Venus", "c. Jupiter", "d. Saturn"};
    displayQuestion(question3, options3, 'a', &score);

    // Display final score
    printf("\nQuiz completed!\n");
    printf("%s, your final score is: %d/3\n", name, score);

    if (score == 3)
        printf("Excellent! You got all questions correct.\n");
    else if (score == 2)
        printf("Good job! You got 2 questions correct.\n");
    else if (score == 1)
        printf("Keep trying! You got 1 question correct.\n");
    else
        printf("Better luck next time!\n");

    return 0;
}

// Function to display a question and validate the answer
void displayQuestion(const char* question, const char* options[], char correctOption, int *score) {
    char answer;
    printf("\n%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", options[i]);
    }

    printf("Your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == correctOption) {
        printf("Correct!\n");
        (*score)++;
    } else {
        printf("Wrong! The correct answer is '%c'.\n", correctOption);
    }
}
