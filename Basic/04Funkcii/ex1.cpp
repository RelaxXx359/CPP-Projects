#include <iostream>

using namespace std;

// Да се състави програма, чрез която във въведено естествено число N от интервала [1000..999999999]
// търси брой срещания на указана цифра C.
// Пример: 12334567, 3 Изход: цифрата 3 се среща 2 пъти

int Number(int n, int cifra) { // въвеждане на число в интервала [1000..999999999], въвеждане на търсено чило

    int count = 0;
    while (n > 0) {
        if (n % 10 == cifra) { // взимаме последната цифра и я сравняваме с търсената цифра от нас
            count++;
        }
        n = n / 10;
    }

    return count;
}

int main() {
    int cifra, count;
    long n;

    cout << "Enter the number [1000..999999999]: \n";
    cin >> n;

    cout << "The number sought: \n";
    cin >> cifra;

    count = Number(n, cifra);

    if (count) {
        cout << "In the number "<< n << " are discovered "<< count << " times " << cifra << endl;
    }else{
        cout << "In the number " << n << " there is no such figure " << cifra << endl;
    }


    return 0;
}
