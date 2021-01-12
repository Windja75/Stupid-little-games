#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


int Random_number;
int Random_number1;
string Random_adjective1;
string Random_adjective2;
string Random_action1;
string Random_action2;



void Actions_Game(int &random_number1);

void Adjectives_Game(int &random_number1);


int main()
{
srand(time(NULL));
int actions;
int Random_number1 = rand() % 11;
int Random_number2 = rand() % 3;
    cout << "Press 1 to play adjectives Madlibs, Press 2 to play actions Madlibs, and press 0 to quit";
    cin  >> actions;
  if(actions == 1) {
      Adjectives_Game(Random_number1);

  }
  else if(actions == 2) {
    Actions_Game(Random_number1);

}
  else if(actions == 0) {
      cout << "You don't want to play too bad I won't allow it" << endl;
      if(Random_number2 == 1) {
        Adjectives_Game(Random_number1);
      }
      else {
        Actions_Game(Random_number1);
      }

  }
  else{
        cout << "You didn't type in a valid number well you still have to play" << endl;
              if(Random_number2 == 1) {
        Adjectives_Game(Random_number1);
      }
      else {
        Actions_Game(Random_number1);
      }

  }
    return 0;
}






void Adjectives_Game(int &random_numberz) {
    cout << "So you want to play the adjectives game" << endl;
    cout << "Type a Adjective: ";
    cin >> Random_adjective1;
    cout << "Type another Adjective: ";
    cin >> Random_adjective2;
 if (random_numberz == 1) {
    cout << "This podcast used to be " << Random_adjective1 << " and " << Random_adjective2 << "\n";
 }
 else if (random_numberz == 2) {
    cout << "The Human always is " << Random_adjective1 << " but not " << Random_adjective2 << "\n";
 }
 else if (random_numberz == 3) {
    cout << "The Dog is " << Random_adjective1 << " and " << Random_adjective2 << "\n";;
 }
 else if (random_numberz == 4) {
    cout << "The Rhino is " << Random_adjective1 << " and especially " << Random_adjective2 << "\n";
 }
 else if (random_numberz == 5) {
    cout << "The Charizard may be " << Random_adjective1 << " and " << Random_adjective2 << "\n" << endl;
 }
 else if (random_numberz == 6) {
    cout << "The Idiot was " << Random_adjective1 << " also sometimes is " << Random_adjective2 << "\n" << endl;
 }
 else if (random_numberz == 7) {
    cout << "The resturant is sometimes " << Random_adjective1 << " but definitly not " << Random_adjective2 << "\n" << endl;
 }
 else if (random_numberz == 8) {
    cout << "The Cat never stops being " << Random_adjective1 << " and " << Random_adjective2 << "\n" << endl;
 }
 else if (random_numberz == 9) {
    cout << "The Dinosaur is " << Random_adjective1 << " and thinks he isn't " << Random_adjective2 << " But still is "<< "\n" << endl;
 }
 else if (random_numberz == 10) {
    cout << "The Mother always is " << Random_adjective1 << " and " << Random_adjective2 << "\n" << endl;
 }
}



void Actions_Game(int &random_number1) {
    cout << "So you want to play the actions game" << endl;
    cout << "Type a Action: ";
    cin >> Random_action1;
    cout << "Type another Action: ";
    cin >> Random_action2;
 if (random_number1 == 1) {
    cout << "The People on the podcast always " + Random_action1 + " while " + Random_action2 + "\n";;
 }
 else if (random_number1 == 2) {
    cout << "The Infernape used to " + Random_action1 + " and then " + Random_action2 + "\n";
 }
 else if (random_number1 == 3) {
    cout << "The Human was " + Random_action1 + " and " + Random_action2 + "\n";
 }
 else if (random_number1 == 4) {
    cout << "The Chameleon can " + Random_action1 + " at the same time as " + Random_action2 + "\n";
 }
 else if (random_number1 == 5) {
    cout << "The Dinosaur never stops " + Random_action1 + " and " + Random_action2 + "\n";
 }
 else if (random_number1 == 6) {
    cout << "The Greeninja will " + Random_action1 + " and " + Random_action2 + " If you ask him to" + "\n";
 }
 else if (random_number1 == 7) {
    cout << "The Dog keeps " + Random_action1 + " while " + Random_action2 + "\n";
 }
 else if (random_number1 == 8) {
    cout << "The Crocodile can't stop won't stop " + Random_action1 + " after " + Random_action2 + "\n";
 }
 else if (random_number1 == 9) {
    cout << "The Zebra hates " + Random_action1 + " before " + Random_action2 + "\n";
 }
 else if (random_number1 == 10) {
    cout << "The Scaredy-cat likes to " + Random_action1 + " then does " + Random_action2 + "\n";
 }
}

