#include <iostream>
#include <string>

using namespace std;

string Input() {
    string sentence;
    cout << "Enter text: " << endl;
    getline(cin, sentence);

    return sentence;
}

// Принтиране на обратно
void PrintText(string sentence) {

    int len = sentence.length();
    for (int i = len - 1; i >= 0; --i) {
        cout << sentence.at(i);
    }
    cout << endl;
}

// Колко пъти се среща всяка гласна буква
void VowelLetters(string sentence) {

    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;


    for (int k = 0; k < sentence.length(); ++k) {

        if (sentence.at(k) == 'A' || sentence.at(k) == 'a') {
            a++;
        } else if (sentence.at(k) == 'E' || sentence.at(k) == 'e') {
            e++;
        } else if (sentence.at(k) == 'I' || sentence.at(k) == 'i') {
            i++;
        } else if (sentence.at(k) == 'O' || sentence.at(k) == 'o') {
            o++;
        } else if (sentence.at(k) == 'U' || sentence.at(k) == 'u') {
            u++;
        }

    }

    if (a > 0) {
        cout << "a: " << a <<
             endl;
    }
    if (e > 0) {
        cout << "e: " << e <<
             endl;
    }
    if (i > 0) {
        cout << "i: " << i <<
             endl;
    }
    if (o > 0) {
        cout << "o: " << o <<
             endl;
    }
    if (u > 0) {
        cout << "u: " << u <<
             endl;
    }


}

int main() {


    string text = Input();

    PrintText(text);
    VowelLetters(text);


    return 0;
}