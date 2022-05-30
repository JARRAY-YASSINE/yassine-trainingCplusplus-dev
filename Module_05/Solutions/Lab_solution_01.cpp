#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printString(string name)
{
    cout << name << endl;
}

int main()
{
    vector<string> dictAnimals {"cat", "dog", "horse", "fish", "bird", "turtle"};
    auto lp = [](string name){cout << name << endl;};

    //Print names of animals
    for_each(dictAnimals.begin(), dictAnimals.end(), [](string name){cout << name << endl;});

    //sort names of animals
    sort(dictAnimals.begin(), dictAnimals.end(), [](string s1, string s2){return s1 < s2;});

    //Print names of animals
    for_each(dictAnimals.begin(), dictAnimals.end(), lp);

    cout << "Enter name of the animal you search for" << endl;
    string animal;
    cin >> animal;
    //Find animal by name using find_if()
    auto result = find_if(dictAnimals.begin(), dictAnimals.end(), [animal](string s){return s == animal;}); 
    (result != end(dictAnimals))
        ? cout <<  animal << " is found" << '\n'
        : cout <<  animal << " is not found" << '\n';

    
    int nbLetters = 0;
    //Sum of words lengths in nbLetters using for_each()
    for_each(dictAnimals.begin(), dictAnimals.end(), [&nbLetters](string s){nbLetters+=s.size();});
    cout << "Sum of words lengths = "<< nbLetters << endl;
    return 0;
}