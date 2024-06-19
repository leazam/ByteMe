# include <iostream>
# include <ctime>

int main(){

int num; 
int guess;
int tries;
int i; 

std::cout << "-------------Guess The Number-------------\n";
std::cout << "The numbers are between 1 - 100\n";
std::cout << "Choose how many times you get to try: ";
std::cin >> tries;

srand(time(NULL));
num = (rand() % 100) + 1;

//std::cout << "Choose NUM: ";
//std::cin >> num;

std::cout << "Your guess: ";
std::cin >> guess;

while (tries > 0)
{
    if (guess == num) {
        std::cout << "You guess right, you win!\n";
    }  
    else{
        tries--;
        if (tries == 0) {
        std::cout << "You Loser!\n";
        std::cout << "The number was " << num << '\n';
        break;
        }
        std::cout << "Guess again: ";
        std::cin >> guess;
    }
}
std::cout << "------------------------------------------";

    return 0; 
}