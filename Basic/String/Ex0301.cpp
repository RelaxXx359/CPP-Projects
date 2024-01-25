#include <iostream>
#include <string>

using namespace std;


int main() {

//    string s = "Hello, C++";
//    int len = s.length();  // дължината на текста (10)
//    cout << len << endl;
//    char ch = s.at(5);  // принтиране на символа на 5 позиция
//    cout << ch;

//    string ss;
//    cout << "enter string" << endl;
//
//    getline(cin, ss);  // принтира и текста след интервала
////    cout << ss;
//
//    string s3 = s + " " + ss;  // конкатенация на стрингове
//    cout << s3;


    string s = "Asenov";
    string ss = "Asen";


//    if (s == ss) {
//        cout << "Equal";
//    }
//    if (s > ss) {
//        cout << "S is befor SS";
//    }
//    if (s < ss) {
//        cout << "S is after SS";
//    }

//    cout << (s.compare(ss);
//    if (s.compare(ss) > 0) {
//        cout << "S is after SS";
//    }

    string s3 = s.append(ss);
//    cout << s3;


//s.find_first_of("atv", 44); // отиди след 44 символ и търси a, t, v
//s.find_last_of("atv", 44); // otidi predi 44 simvol i tyrsi a,t, v

    int index;
    string str = "C++ $ Programing $$$ Course $";


//    index = str.find("ourse");   // тръски всички букви  "ourse"
//    cout << index << endl;

//    index = str.find_first_of("ourse");  // търси първия символ "o"

//    index = str.find_first_of("r", 10);  // търси символ "r" след 10 позиция

    index = str.find("$"); // smenq purviq takuv sumvol s @

    while (index != string::npos){  // докато не сме стигнали до края на текста
        cout << "index " << index << endl;
        // търсим всички долари и ги сменяваме с @
        str.replace(index, 1, "@");
        index = str.find("$");
    }



    cout << str;




//    string result = "";
//    for (int i = 0; i < 1000; ++i) {
//        result = result.append("a");  // append работи по бързо пред конкатенацията
//    }
//    cout << result;




//    for (int i = 0; i < s.length(); ++i) {
//        cout << "s[" << i << "] = " << s.at(i) << endl;
//        // s[0] = H
//        //s[1] = e
//        //s[2] = l
//        //s[3] = l
//        //s[4] = o
//        //s[5] = ,
//        //s[6] =
//        //s[7] = C
//        //s[8] = +
//        //s[9] = +
// }
//
//        cout << "s[" << i << "] = " << s[i] << endl;
//        //s[0] = H
//        //s[1] = e
//        //s[2] = l
//        //s[3] = l
//        //s[4] = o
//        //s[5] = ,
//        //s[6] =
//        //s[7] = C
//        //s[8] = +
//        //s[9] = +
//    }


    return 0;
}