# include <iostream>

int getDigit (const int number);
int sumOddDigits (const std::string cardNumber); 
int sumEvenDigits (const std::string cardNumber); 


int main(){

    std::string cardNumber; 
    
    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    int result = 0; 
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid"; 
    }
    else {
        std::cout << cardNumber << " is NOT valid";
    }

    return 0;
}

int getDigit (const int number){

    // 18     18%10= 8   18/10=1 (bc they are int) => 1%10 =1 =====> 8+1=9
    return number % 10 + (number / 10 % 10); 

}

int sumOddDigits (const std::string cardNumber){
    int sum = 0; 
    for (int i = cardNumber.size() - 1; i >= 0; i -=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
} 

int sumEvenDigits (const std::string cardNumber){

    int sum = 0; 
    for (int i = cardNumber.size() - 2; i >= 0; i -=2){
        sum += getDigit((cardNumber[i] - '0')* 2);
    }
    return sum;
}
