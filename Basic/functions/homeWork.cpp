#include <iostream>
#include <string>

using namespace std;

string TextName(string text) {

    string text1 = "";
    for (int i = text.length() - 1; i >= 0; --i) {
        text1 = text.at(i);
    }

    return text1;
}

int main() {

    // Напишете програма която чете string от клавиатурата и принтира на обратно!
    string letter;
    getline(cin, letter);

    cout << TextName(letter);

    return 0;
}