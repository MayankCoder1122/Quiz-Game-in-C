
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ANSI color codes
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

void login();
void startQuiz();

int main() {
    login();
    return 0;
}

void login() {
    char username[20], password[20];
    int attempts = 3;

    while (attempts > 0) {
        printf(CYAN "\n🔐 LOGIN PAGE\n" RESET);
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(username, "mayank") == 0 && strcmp(password, "1234") == 0) {
            printf(GREEN "\n✅ Login successful!\n" RESET);
            startQuiz();
            return;
        } else {
            printf(RED "\n❌ Invalid credentials.\n" RESET);
            attempts--;
            printf(YELLOW "Attempts left: %d\n" RESET, attempts);
        }
    }

    printf(RED "\n🚫 Too many failed attempts. Exiting...\n" RESET);
    exit(0);
}

void startQuiz() {
    int score = 0, ans;
    printf(CYAN "\n📘 Welcome to the Quiz Game!\n\n" RESET);

    printf("1) What is the capital of India?\n");
    printf("1) Mumbai  2) Delhi  3) Kolkata  4) Chennai\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 2) { printf(GREEN "✅ Correct!\n" RESET); score++; }
    else { printf(RED "❌ Wrong. Answer: Delhi\n" RESET); }

    printf("\n2) What does CPU stand for?\n");
    printf("1) Central Process Unit  2) Computer Personal Unit  3) Central Processing Unit  4) Central Processor Utility\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 3) { printf(GREEN "✅ Correct!\n" RESET); score++; }
    else { printf(RED "❌ Wrong. Answer: Central Processing Unit\n" RESET); }

    printf("\n3) Which language is used to develop system software?\n");
    printf("1) Python  2) C  3) Java  4) HTML\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 2) { printf(GREEN "✅ Correct!\n" RESET); score++; }
    else { printf(RED "❌ Wrong. Answer: C\n" RESET); }

    printf("\n4) What is the result of 5 + 3 * 2?\n");
    printf("1) 11  2) 16  3) 13  4) 10\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 1) { printf(GREEN "✅ Correct!\n" RESET); score++; }
    else { printf(RED "❌ Wrong. Answer: 11\n" RESET); }

    printf("\n5) Who is the founder of Microsoft?\n");
    printf("1) Steve Jobs  2) Elon Musk  3) Mark Zuckerberg  4) Bill Gates\n");
    printf("Your answer: ");
    scanf("%d", &ans);
    if(ans == 4) { printf(GREEN "✅ Correct!\n" RESET); score++; }
    else { printf(RED "❌ Wrong. Answer: Bill Gates\n" RESET); }

    printf(CYAN "\n🎉 Final Score: %d/5\n" RESET, score);
    if(score >= 4)
        printf(GREEN "🌟 Great job, Mayank!\n" RESET);
    else
        printf(YELLOW "👍 Keep practicing, Mayank!\n" RESET);
}
