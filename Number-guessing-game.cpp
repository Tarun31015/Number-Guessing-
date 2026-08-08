#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int number = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do
    {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number)
        {
            cout << "Too High! Guess Lower." << endl;
        }
        else if (guess < number)
        {
            cout << "Too Low! Guess Higher." << endl;
        }
        else
        {
            cout << "\nCongratulations! You guessed the correct number." << endl;
            cout << "Number = " << number << endl;
            cout << "Attempts = " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}
