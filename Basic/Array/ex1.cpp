#include <iostream>
#include <string>


using namespace std;
//    Задача 1: Създайте клас, който описва часово време (Time) със следните характеристики:
//     час, със стойности от 0 - 23 (24-часови формат)
//    3  минути, със стойности от 0 - 59
//     секунди, със стойности от  0 - 59
//    Класът съдържа следните член - функции:
//     За задаване на стойности за час, минути и секунди, като се прави
//    проверка за съответния диапазон от позволени стойности.
//     За отпечатване на времето в два формата:
//    чч:мм:сс – например: 13:24:07
//    чч:мм:сс AM/PM – например: 13:24:07 PM
//    Демонстрирайте функционалността на класа чрез създаване на обект в  main().

class Time {

public:
    void setHour(int hour) {
        this->hour = hour;
    }

    int getHour() {
        return this->hour;
    }


    void setMin(int min) {
        this->min = min;
    }

    int getMin() {
        return this->min;
    };


    void displayMessage() {
        string zero;
        if (hour < 10 || min< 10 || sek < 10){
            zero = "0";
            cout << zero << "" << hour << ":" << "" << min << ":" << "" << sek << " " << "" << time;
        }

    }


    Time(int hour, int min, int sek, string time) {

        this->hour = hour;
        this->min = min;
        this->sek = sek;
        this->time = time;
    }

private:
    int hour;
    int min;
    int sek;
    string time;
};

int main() {

//    Time firstTime(13, 24, 07, "PM");
//    firstTime.displayMessage();

    int hour;
    cout << "Inser hour \n";
    cin >> hour;

    int min;
    cout << "Inser minuts \n";
    cin >> min;

    int sek;
    cout << "Inser seconds \n";
    cin >> sek;

    string time;
    time = "AM";

    string zero = "";
    int h = 0;
    int m = 0;
    int s = 0;
    for (int hour = 0; hour <= 23; ++hour) {

    }
    if (hour > 23) {
        h= 0;
    }
    if (hour >= 12) {
        time = "PM";

        for (int min = 0; min <= 59; ++min) {
        }
        if (min > 59) {
            min == 0;
            hour += 1;
        }

        for (int sek = 0; sek <= 59; ++sek) {
        }
        if (sek > 59) {
            min += 1;
        }

    }


    Time anotherTime(hour, min, sek, time);
    anotherTime.displayMessage();


    return 0;
}
