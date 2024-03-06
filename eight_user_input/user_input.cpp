#include <iostream>

using namespace std;

int main() {
    string look_at_me = "I remember how to make a string.";
    int number_of_videos = 8;
    cout << look_at_me << endl;
    cout << "This is my " << number_of_videos << "th video." << endl;

    string text = "Hello";

    cout << text << endl;

    cout << "Enter your name: " << flush;

    string input;

    cin >> input;

    cout << "Your name is " << input << "." << endl;

    cout << "How many dogs do you have? " << flush;
    int num_dogs;
    cin >> num_dogs;

    cout << input + " has " << num_dogs << " dogs." << endl;

    return 0;
}