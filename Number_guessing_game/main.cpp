#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Number_generator() {
    return rand() % 151;
}

int main() {

    int guessed_number = 0;

    srand(static_cast<unsigned int>(time(nullptr)));
    int random_number = Number_generator();

    cout << "In this game you have to guess a number between 0 and 150 included\n" << endl;

    cout << "Guess the number!:" << endl;
    cin >> guessed_number;

    if (guessed_number < 0 || guessed_number >150){
        cout << "Incorrect choice" << endl;
    }

    if (guessed_number < random_number){
            cout << "Incorrect, guess a high number!:\n" << endl;
        }
        if (guessed_number > random_number){
            cout << "Incorrect, guess a low number!:\n" << endl;
        }
    do{
        cin >> guessed_number;

        if (guessed_number < 0 || guessed_number >150){
        cout << "Incorrect choice" << endl;
        }

        if (guessed_number < random_number){
            cout << "Incorrect, guess high number!:\n" << endl;
        }

        if (guessed_number > random_number){
            cout << "Incorrect, guess low number!:\n" << endl;
        }

    } while(random_number != guessed_number);

    cout << "Congratulations! You have guessed the right number." << endl;

    return 0;
}
