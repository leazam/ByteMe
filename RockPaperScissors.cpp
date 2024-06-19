#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){
    char player; 
    char computer; 

    player = userChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = computerChoice();
    std::cout << "Computer's Choise: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char userChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";
    do {
        std::cout << "************************\n";
        std::cout << "Choose from the following\n";
        std::cout << "'r' - for rock\n";
        std::cout << "'p' - for paper\n";
        std::cout << "'s' - for scissors\n";  
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player !='s');

    return player;
}

char computerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1; 
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}

void showChoice(char choice){
    switch (choice)
    {
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break; 
        case 's': std::cout << "Scissors\n";
            break;           
    }
}

void chooseWinner(char player, char computer){
    switch (player) {
        case 'r':
            if (computer == 'p')
            {
                std::cout << "You lose, paper beats rock\n";
            }
            else if (computer == 'r')
            {
                std::cout << "It's a tie, you both are rocks\n";
            }
            else {
                std::cout << "You WIN, rock beats scissors\n";
            }
            break;

        case 'p':
            if (computer == 'p')
            {
                std::cout << "It's a tie, you both are papers\n";
            }
            else if (computer == 'r')
            {
                std::cout << "You WIN, paper beats rock\n";
            }
            else {
                std::cout << "You lose, scissors beats paper\n";
            }   
            break;

        case 's':
            if (computer == 'p')
            {
                std::cout << "You WIN, scissors beats paper\n";
            }
            else if (computer == 'r')
            {
                std::cout << "You lose, rock beats scissors\n";
            }
            else {
                std::cout << "It's a tie, you both are scissors\n";
            }
            break;
    }
}

