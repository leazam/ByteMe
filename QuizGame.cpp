# include <iostream>

int main(){
    std::string questions[] =   {"1. What year was C++ created?: ",
                                 "2. What is the predecessor to C++?: ",
                                 "3. How many bones are in the human body?: ",
                                 "4. Is the earth flat?: "};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. 125", "B. 202", "C. 206", "D. 12"},
                                {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}}; 

    char answerKey[] = {'C', 'A', 'C', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess; 
    int score; 

    for(int i = 0; i < size; i++){
        std::cout << "*****************************\n";
        std::cout << questions[i] << '\n'; 
        std::cout << "*****************************\n";
        
        for (int j = 0; j < (sizeof(options[i])/sizeof(options[i][0])); j++) {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess; 
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            std::cout << "CORRECT\n";
            score++; 
        }
        else {
            std::cout << "WRONG\n"; 
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "*****************************\n";
    std::cout << "*         RESULTS           *\n";
    std::cout << "*****************************\n";
    std::cout << "Correct guess: " << score << '\n';
    std::cout << "# of questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%";
    

    return 0;
}