#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

vector<int> data = {0};
int player_guess;

void Random_Num_Generator() {
srand(time(NULL));

cout << "Guess a integer between 1 and 1000: " << endl;
cin >> player_guess;

    if(player_guess < 1001 && player_guess > 0) {

    for(int i = 0; i < 20; i++) {
        int Random_number = rand() % 1001;
        data.push_back(Random_number);
    }

    for(int i = 0; i < 20; i++) {

        if(data[i] == player_guess) {
            cout << "Congrats, you won a stupid luck-based game! Here's a virtual cookie";
        }
    }

    for(int i = 0; i < 20; i++) {
     cout << data[i] << endl;
    }
    cout << "Guess you weren't lucky, try again" << endl;

    }

    else {
    cout << "You didn't type a valid number, you can't even listen to instructions? Bruh..." << endl;
    }

};

int main()
{
Random_Num_Generator();

    return 0;
}

