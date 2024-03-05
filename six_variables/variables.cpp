#include <iostream>

using namespace std;

int main()
{

    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;

    cout << "Number of cats: "
         << numberCats
         << endl;
    cout << "Number of dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberCats + numberDogs << endl;

    cout << "Var num animals: " << numberAnimals << endl;

    cout << "New dog aquired!" << endl;

    numberDogs = numberDogs + 1;

    cout << "New number of dogs: " << numberDogs << endl;

    cout << "New number of animals: " << numberDogs + numberCats << endl;

    return 0;
}

