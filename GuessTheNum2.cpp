# include <iostream>
# include <ctime>

int main(){

int num; 
int guess;
int tries;
int i; 

std::cout << "-------------Guess The Number-------------\n";
std::cout << "The numbers are between 1 - 100\n";

srand(time(NULL));
num = (rand() % 100) + 1;

do
{
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries++;
    
    if (guess > num)
    {
        std::cout << "Too high!\n";
    }
    else if (guess < num)
    {
        std::cout << "Too low!\n";
    }
    else {
        std::cout << "CORRECT! number of tries: " << tries << '\n';

    }
    
} while (num != guess);



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