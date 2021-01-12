#include <iostream>
#include <climits>
#include <cmath>
#include <float.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game() {
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number between 1 and 250: ";
    while(true){
        int guess;
        cin >> guess;
        if(guess == random) {
            cout << "You win!\n";
            break;

        } else if (guess < random && guess < 251) {
        cout << "Too low\n";
        } else if (guess > random && guess < 251){
         cout << "Too high\n";
        } else {
        cout << "You didn't type in a valid number\n";
        }

    }

}

int main(){
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit" << endl << "1. Play Game\n";
        cin >> choice;
    switch(choice)
    {
    case 0:
        cout << "Thanks for nothing NERD\n";
        return 0;
    case 1:
        play_game();
        break;
    }
    } while(choice != 0);

}
