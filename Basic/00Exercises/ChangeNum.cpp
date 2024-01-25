#include <iostream>

#include <string>

using namespace std;

int main()

{

    int a = 0; // дефирнираме си променлива в която да се запази въведеното число

    cout << "Vyvedete chisloto na koeto iskate da se izpishat cifrite v obraten red: "; // извеждаме на екрана какво се очаква да въведе потребителят

    cin >> a; // четем въведеното от потребителя число

    string s = to_string(a); // дефинираме променлива от тип стринг (The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage.) и в нея записваме кнвертираното число което е въвел потребителят.

    reverse(s.begin(), s.end()); // обръщаме стрингът в обратен ред.

    const char* str = s.c_str(); // създаваме променлива от тип char (In C++, the char keyword is used to declare character type variables. A character variable can store only a single character.) и в нея записваме стрингът в който работехме до сега.

    for (int i = 0; i < s.length(); i++) // цикъл в който обхождаме чар масивът в който е записано обърнатото число и извеждаме всеки елемент на отделен ред.

    {

        std::cout << str[i] << endl;

    }

    system(“pause”);

}