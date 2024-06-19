# include <iostream>
#include <ctime>

int main(){

srand(time(0));

int randNum = rand() % 5 + 1;

switch (randNum)
{
case 1: std::cout << "You win a YoYo\n";
    break;
case 2: std::cout << "You win a T-shirt\n";
    break;
case 3: std::cout << "You win a shoe\n";
    break;
case 4: std::cout << "You win a banana\n";
    break;
case 5: std::cout << "You win a chocolate\n";
    break;
default: std::cout << "You win a pen\n";
    break;
}


    return 0; 
}