#include <iostream>
#include <string>
using namespace std;

/*Напишете функции за:
1. Четене на стринг, въведен от клавиатурата, който да се изпише отзад-напред;
2. Преброяване на броя на гласните в дълго изречение (англ.) и изписване на резултата.*/

string enterText() // връща въведния стринг, който може да се използва и в двете функции;
{
    string str;
    cout << "Enter some text: ";
    getline(cin, str);

    return str;
}

void reverseText(string str) // 1. Обръщане на стринга: използваме въведения стринг от string enterText();
{
    cout << "Reversed, \'" << str << "\' looks like this: ";

    int length = str.length();
    for (int i = length - 1; i >= 0; i--)
    {
        cout << str.at(i);
    }
    cout << endl;
}

void countVowels(string str) // 2. Преброяване на гласните: използваме въведения стринг от string enterText();
{
    int countV = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == 'A' || str.at(i) == 'a' || str.at(i) == 'O' || str.at(i) == 'o' || str.at(i) == 'U' || str.at(i) == 'u' || str.at(i) == 'E' || str.at(i) == 'e' || str.at(i) == 'I' || str.at(i) == 'i')
        {
            // cout << str.at(i) << " ";
            countV++;
        }
    }
    cout << "Vowels in this text are: " << countV << endl;
}

void setAndGetResult()
{
    while (true)
    {
        string s = enterText();
        system("cls");
        reverseText(s); // можем да използваме въведения стринг s - от string enterText();
        countVowels(s);
    }
}

int main()
{
    setAndGetResult();

    return 0;
}