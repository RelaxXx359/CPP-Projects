#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype>
using namespace std;

/*Резюме на проекта:

1. Създадени са два конструктора - един с параметри и един - без.

2. С функцията void setInfo()) могат да се въведат следните данни за студента: име, фамилия, град, ЕГН и дата на раждане.

2.1. За стринговете име, фамилия и град:
При всеки един инпут, се прави проверка за валидност - дали са по-дълги от 2 символа и дали съдържат цифри.
Данните се въвеждат, докато се въведат валидни.

2.2. За стринг ЕГН:
При въвеждането на ЕГН се прави проверка дали въведените цифри са 10.
Цифрите от ЕГН се въвеждат, докато се въведат валидни данни.

2.3. За ден + месец и година на раждане:
Прави проверка за валидност - дали въведеното число е във валиден диапазон за ден, месец и година.
Данните се въвеждат, докато се въведат валидни.

3. Създадени са гетери за име + фамилия (общо един гетер), както и за града, ЕГН-то и датата на раждане.

4. Използвани са функциите void printNameBirthDate() и void printAllInfo() за принтиране на различна информация, след въвеждане на данните.

5. Функцията void birthDate() организира въведените данни за ден, месец и година на раждане в формат, подходящ за дата - дд/мм/гг.

6. Функцията void compareTinAndDate(string &_tin, int &_dayOfBirth, int &_monthOfBirth, int &_yearOfBirth)
Има за цел да сравни цифрите в ЕГН с тези от датата на раждане. Ако има разминаване, данните се въвеждат отново до съвпадение на първите 6 цифри от TIN и датата на раждане*/

class Student
{
public:
    Student()
    {
    }

    Student(string _firstName, string _lastName, string _city, string _tin, int _dayOfBirth, int _monthOfBirth, int _yearOfBirth)
    {
        this->firstName = _firstName;
        this->lastName = _lastName;
        this->city = _city;
        this->tin = _tin; // Ако ЕГН почва с 0 не може да стане с long long int _tin
        this->dayOfBirth = _dayOfBirth;
        this->monthOfBirth = _monthOfBirth;
        this->yearOfBirth = _yearOfBirth;
    }

    // Принтира само имената и рождената дата.
    void printNameBirthDate()
    {
        cout << "Name: " << getName() << endl;
        birthDate();
        cout << ".............................. " << endl;
    }

    // Принтира цялата въведна информация за студента.
    void printAllInfo()
    {
        cout << "Name: " << getName() << endl;
        cout << "City: " << city << endl;
        cout << "TIN: " << tin << endl;
        birthDate(); // cout << "Date of Birth: " << dayOfBirth << "/" << monthOfBirth << "/" << yearOfBirth << endl;
        cout << ".............................. " << endl;
    }

    // Функция, чрез която се въвежда цялата информация за студента + проверка за съвпадение на ЕГН и дата на раждане.
    void setInfo()
    {

        setFirstName(firstName); // замества  cout << "Enter a first name: "; cin >> firstName; и прави проверка за валидност
        setLastName(lastName);
        setCity(city);
        setTIN(tin);
        cout << "Date of birth\n";
        setDayAndMonthOfBirth(dayOfBirth, monthOfBirth);
        setYearOfBirth(yearOfBirth);
        compareTinAndDate(tin, dayOfBirth, monthOfBirth, yearOfBirth); // сравнение между ЕГН и дата на раждане

        cout << endl;
    }

    // setter firstName //Няма да има гетери само за firstName
    string setFirstName(string &_firstName)
    {
        int length;
        int checkResult;
        bool isDigit;
        do
        {
            cout << "Enter a first name: ";
            cin >> firstName;
            length = firstName.length(); // firstName.size();

            // Проверяваме дали стрингът e по-къс от 2 символа. Ако е така, следва да се въведе firstName отново
            if (length < 2)
            {
                cout << "Please enter min. 2 characters for first name! ";
            }

            // Проверяваме дали в стринга се съдържат числа. Ако е така, следва да се въведе firstName отново
            checkResult = 0;
            for (int i = 0; i < length; i++)
            {
                int check = 0;
                check = isdigit(firstName[i]); // проверяваме, дали firstName[i] е цифра
                if (check)
                {
                    checkResult += check;
                }
            }

            isDigit = checkResult >= 1;

            if (isDigit)
            {
                cout << "Please enter only letters for first name: ";
            }

        } while (length < 2 || isDigit);
        this->firstName = _firstName;
    }

    // setter lastName //Няма да има гетери само за lastName
    string setLastName(string &_lastName)
    {
        int length;
        int checkResult;
        bool isDigit;
        do
        {
            cout << "Enter a last name: ";
            cin >> lastName;
            length = lastName.length();

            // Проверяваме дали стрингът e по-къс от 2 символа. Ако е така, следва да се въведе lastName отново
            if (length < 2)
            {
                cout << "Please enter min. 2 characters for last name! ";
            }

            // Проверяваме дали в стринга се съдържат числа. Ако е така, следва да се въведе lastName отново
            checkResult = 0;
            for (int i = 0; i < length; i++)
            {
                int check = 0;
                check = isdigit(lastName[i]); // проверяваме, дали lastName[i] е цифра
                if (check)
                {
                    checkResult += check;
                }
            }

            isDigit = checkResult >= 1;

            if (isDigit)
            {
                cout << "Please enter only letters for last name: ";
            }

        } while (length < 2 || isDigit);

        this->lastName = _lastName;
    }

    // getter firstName + lastName
    string getName()
    {

        return firstName + " " + lastName;
    }

    // setter city
    string setCity(string &_city)
    {
        int length;
        int checkResult;
        bool isDigit;
        do
        {
            cout << "Enter a city: ";
            cin >> city;
            length = city.length();

            // Проверяваме дали стрингът e по-къс от 2 символа. Ако е така, следва да се въведе city отново

            if (length < 2)
            {
                cout << "Please enter min. 2 characters for city name! ";
            }

            // Проверяваме дали в стринга се съдържат числа. Ако е така, следва да се въведе city отново
            checkResult = 0;
            for (int i = 0; i < length; i++)
            {
                int check = 0;
                check = isdigit(city[i]); // проверяваме, дали city[i] е цифра
                if (check)
                {
                    checkResult += check;
                }
            }

            isDigit = checkResult >= 1;

            if (isDigit)
            {
                cout << "Please enter only letters for city: ";
            }

        } while (length < 2 || isDigit);

        this->city = _city;
    }

    // getter getCity
    string getCity()
    {
        return city;
    }

    // setter tin. Тук проверяваме колко цифри са въведени за ЕГН. Ако не са 10, се извежда подходящо съобщение и do-while цикъла се повтаря.
    // NOTE: Ако се направи с long long int tin и while (tin > 0){ tin /= 10; counterTIN++; } и ако първата цифра от ЕГН е 0, то не се отчита (0041292332 = 8 цифри)

    string setTIN(string &_tin)
    {
        int length;

        do
        {

            cout << "Enter a TIN: ";
            cin >> tin;

            length = tin.length();

            if (length < 10 || length > 10)
            {
                cout << "This TIN has " << length << " digits." << endl;
            }

        } while (length != 10);

        this->tin = _tin;
    }

    // getter tin
    string getTIN()
    {
        return tin;
    }

    // Обедиянва датата, месеца и годината на раждане
    void birthDate()
    {
        cout << "Date of Birth: " << getDayOfBirth() << "/" << getMonthOfBirth() << "/" << getYearOfBirth() << endl;
    }

    // setter за dayOfBirth + monthOfBirth. Тук проверяваме какви числа са въведени за ден и месец на раждане. Ако се наевлидни се извежда подходящо съобщение и do-while цикъла се повтаря.
    // Без референцията &_dayOfBirth и int &_monthOfBirth не извеждат стойностита на въведоните числа.

    void setDayAndMonthOfBirth(int &_dayOfBirth, int &_monthOfBirth)
    {
        int monthsSize[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // колко дни съдържа всеки месец
        do
        {
            cout << "Enter a day: ";
            cin >> dayOfBirth;
            cout << "Enter a month: ";
            cin >> monthOfBirth;

            if (dayOfBirth < 1 || dayOfBirth > monthsSize[monthOfBirth - 1]) // проверяваме дали въведеният ден на раждане е по-малък от 0 или по-голям от дните на въведения месец
            {
                cout << "Please enter a valid day of birth! ";
            }

            if (monthOfBirth < 1 || monthOfBirth > 12) // проверяваме дали въведеният месец на раждане е по-малък от 0 или по-голям от 12
                cout << "Please enter a valid month of birth! ";

        } while ((dayOfBirth < 1 || dayOfBirth > monthsSize[monthOfBirth - 1]) || (monthOfBirth < 1 || monthOfBirth > 12));

        this->dayOfBirth = _dayOfBirth;
        this->monthOfBirth = _monthOfBirth;
    }

    // getter dayOfBirth
    int getDayOfBirth()
    {
        return dayOfBirth;
    }

    // getter monthOfBirth
    int getMonthOfBirth()
    {
        return monthOfBirth;
    }

    // setter yearOfBirth

    void setYearOfBirth(int &_yearOfBirth)
    {
        do
        {
            cout << "Enter a year: ";
            cin >> yearOfBirth;

            if (yearOfBirth < 1900 || yearOfBirth > 2023) // проверяваме дали въведената година на раждане е в диапазона 1900 - 2023
                cout << "Please enter a valid year of birth! ";

        } while (yearOfBirth < 1900 || yearOfBirth > 2023);
        this->yearOfBirth = _yearOfBirth;
    }

    // getter yearOfBirth
    int getYearOfBirth()
    {
        return yearOfBirth;
    }

    // Сравняваме цифрите в ЕГН с тези от датата на раждане
    // Ако ЕГН започва с 0 (т.е. трета цифра от година на раждане = 0), третата цифра (за месеца) от ЕГН + 4 (0051290303 = 29.11.2000)
    // Прилагаме го във void setInfo(){}

    void compareTinAndDate(string _tin, int _dayOfBirth, int _monthOfBirth, int _yearOfBirth)
    {
        //  присвояваме стойностите
        this->tin = _tin;
        this->dayOfBirth = dayOfBirth;
        this->monthOfBirth = _monthOfBirth;
        this->yearOfBirth = yearOfBirth;

        // инициализираме цифрите от ЕГН и от датата на раждане
        char firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit, sixthDigit; // от 1ва до 6та цифра от ЕГН в string
        int intFirst, intSecond, intThird, intFourth, intFifth, intSixth;              // от 1ва до 6та цифра от ЕГН в int
        int firstDay, secondDay, firstMonth, secondMonth, thirdYear, fourthYear;       // дд/мм/гг на раждане

        // while цикълът ще продължи, докато няма съвпадение между първите 6 цифри от ЕГН-то и датата на раждане
        while (firstDay != intFifth || secondDay != intSixth || firstMonth != intThird || secondMonth != intFourth || thirdYear != intFirst || fourthYear != intSecond)
        {
            cout << "No match between TIN and date of birth!" << endl;
            setTIN(tin);
            setDayAndMonthOfBirth(dayOfBirth, monthOfBirth);
            setYearOfBirth(yearOfBirth);

            // намираме кои са цифрите от въведените ЕГН и дата на раждане
            fifthDigit = tin[4], sixthDigit = tin[5]; // петата и шестата цифра от ЕГН
            intFifth = fifthDigit - '0', intSixth = sixthDigit - '0';
            firstDay = dayOfBirth / 10, secondDay = dayOfBirth % 10; // ден на раждане

            thirdDigit = tin[2], fourthDigit = tin[3]; // третата и четвъртата цифра от ЕГН
            intThird = thirdDigit - '0', intFourth = fourthDigit - '0';
            firstMonth = monthOfBirth / 10, secondMonth = monthOfBirth % 10; // месец на раждане

            firstDigit = tin[0], secondDigit = tin[1]; // първата и втората цифра от ЕГН
            intFirst = firstDigit - '0', intSecond = secondDigit - '0';
            thirdYear = yearOfBirth / 10 % 10, fourthYear = yearOfBirth % 10; // последните две цифри от година на раждане

            if (intFirst == 0) // ако годината е след 2000, в ЕГН-то се прибавя 4 към 3тата цифра, затова вадим 4 и после сравняваме
                intThird = intThird - 4;
        }
    }

private:
    string firstName;
    string lastName;
    string city;
    string tin;
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
};

int main()
{
    Student student1("Maria", "Ivanova", "Sofia", "0051290303", 29, 11, 2000);
    Student student2;

    cout << "Student 1:" << endl;
    // student1.printAllInfo();
    student1.printNameBirthDate();
    // cout << student1.getName() << endl;// getter
    // cout << student1.getDayOfBirth() << endl;   // getter
    // cout << student1.getMonthOfBirth() << endl; // getter
    // cout << student1.getYearOfBirth() << endl;  // getter
    // student1.birthDate();                       // getter  getDayOfBirth() + getMonthOfBirth() + getYearOfBirth()
    // cout << student1.getCity() << endl;         // getter
    // cout << student1.getTIN() << endl;          // getter

    cout << "Student 2:" << endl;
    student2.setInfo();
    student2.printAllInfo();
    student2.printNameBirthDate();

    return 0;
}