#include <ctime>
#include <iomanip>
#include <iostream>

std::string populateQuestionsArray();

int main() {
    std::string questions[] = {
        "What is the capital of France?",
        "What is the capital of Spain?",
        "What is the capital of Germany?",
        "What is the capital of the United Kingdom?"};

    std::string options[][4] = {
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
    };

    char answerKey[] = {'A', 'D', 'C', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    for (int i = 0; i < size; i++) {
        std::cout << questions[i] << std::endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            score++;
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Incorrect!" << std::endl;
        }
    }

    return 0;
}

std::string populateQuestionsArray() {
}
