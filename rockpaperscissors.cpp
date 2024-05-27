#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);



int main(){
    char player;
    char computer;
    
    player = getUserChoice();
    std::cout << "Your chocie: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computers choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


return 0;
}

char getUserChoice(){

    char player;
    std::cout << "Rock Paper Scissors Gane\n";
    std::cout << "Choose one of the following:\n";
do{
    std::cout << "r for Rock" << '\n';
    std::cout << "p for Paper" << '\n';
    std::cout << "s for Scissors" << '\n';
    std::cout << "f for flock" << '\n';
    std::cin >> player;
}while(player != 'r' && player != 'p' && player !='s' && player != 'f');


    return player;

}
char getComputerChoice(){
    srand (time(0));
    int num = rand() % 4 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        case 4: return 'f';

    }

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
        case 'f': std::cout << "Flock\n";
            break;

        
    }

}
void chooseWinner(char player, char computer){
    
    switch(player){
        case 'r': if(computer == 'r'){
                    std::cout << "Its a tie!\n";
        }
                else if(computer == 'p'){
                    std::cout << "You loose!\n";
                }
                else{
                    std::cout <<"You win!\n";
                }
                break;

        case 'p': if(computer == 'r'){
                    std::cout << "You win!\n";
        }
                else if(computer == 'p'){
                    std::cout << "Draw!\n";
                }
                else{
                    std::cout <<"You lose!\n";
                }
                break;
         case 's': if(computer == 'r'){
                    std::cout << "You lose!\n";
        }
                else if(computer == 'p'){
                    std::cout << "You win!\n";
                }
                else{
                    std::cout <<"Draw!\n";
                }
                break;
                 
    }
}
