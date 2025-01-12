#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void Easy_F() {
    srand(time(0));
    cout << "Great! You have selected the Easy difficulty level.\n";
    cout << "Let's start the game!\n";
    int n = rand() % 100 + 1;
    int cnt = 0;
    for (int i = 0 ; i < 10; i++) {
        cout << "Enter your guess: ";
        int gst;
        cin >> gst;
        if (n == gst) {
            cout << "Congratulations! You guessed the correct number in " << cnt << " attempts." ;
            return;
        }
        else if (n  > gst) {
            cout << "Incorrect! The number is greater than " << gst << "." << string(3,'\n');
        }
        else {
            cout << "Incorrect! The number is less than " << gst << "." << string(3,'\n');
        }
        cnt++;
    }
    return;
}

void Medium_F() {
    srand(time(0));
    cout << "Great! You have selected the Easy difficulty level.\n";
    cout << "Let's start the game!\n";
    int n = rand() % 100 + 1;
    int cnt = 0;
    for (int i = 0 ; i < 5; i++) {
        cout << "Enter your guess: ";
        int gst;
        cin >> gst;
        if (n == gst) {
            cout << "Congratulations! You guessed the correct number in " << cnt << " attempts." ;
            return;
        }
        else if (n  > gst) {
            cout << "Incorrect! The number is greater than " << gst << "." << string(3,'\n');
        }
        else {
            cout << "Incorrect! The number is less than " << gst << "." << string(3,'\n');
        }
        cnt++;
    }
    return;
}

void Hard_F() {
    srand(time(0));
    cout << "Great! You have selected the Easy difficulty level.\n";
    cout << "Let's start the game!\n";
    int n = rand() % 100 + 1;
    int cnt = 0;
    for (int i = 0 ; i < 3; i++) {
        cout << "Enter your guess: ";
        int gst;
        cin >> gst;
        if (n == gst) {
            cout << "Congratulations! You guessed the correct number in " << cnt << " attempts." ;
            return;
        }
        else if (n  > gst) {
            cout << "Incorrect! The number is greater than " << gst << "." << string(3,'\n');
        }
        else {
            cout << "Incorrect! The number is less than " << gst << "." << string(3,'\n');
        }
        cnt++;
    }
    return;
}

int main()
{
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "You have 5 chances to guess the correct number.\n";
    start:
    cout << "Please select the difficulty level:\n";
    cout << "1. Easy (10 chances)\n";
    cout << "2. Medium (5 chances)\n";
    cout << "3. Hard (3 chances)\n";
    int slkt ;
    cin >> slkt;
    switch (slkt) {
        case 1:
            Easy_F();
            break;
        case 2:
            Medium_F();
            break;
        case 3:
            Hard_F();
            break;
        default:
            goto start;
    }
    cout << endl;
    return 0;
}