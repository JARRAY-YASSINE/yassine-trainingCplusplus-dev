#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printString(string name)
{
    cout << name << endl;
}

bool compareString(string s1, string s2)
{
    return s1 < s2;
}

int main()
{
    vector<string> dictAnimals {"cat", "dog", "horse", "fish", "bird", "turtle"};

    //Print names of animals
    for_each(dictAnimals.begin(), dictAnimals.end(), printString);

    //Sort vector
    sort(dictAnimals.begin(), dictAnimals.end(), compareString);

    //Print names of animals
    for_each(dictAnimals.begin(), dictAnimals.end(), printString);

    cout << "Enter name of the animal you search for" << endl;
    string animal;
    cin >> animal;
    //Find animal by name using find_if()


    int nbLetters = 0;
    //Sum of words lengths in nbLetters using for_each()

    cout << "Sum of words lengths = "<< nbLetters << endl;
    return 0;
}