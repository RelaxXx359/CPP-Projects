#include "Users.h"
#include "iostream"
#include "string"

using namespace std;

Users::Users(string username, string password) : username(username), password(password) {
    setUsername(username);
    setPassword(password);
}


void Users::setPassword(string password) {
    if (password.length() > 4 && password.length() < 20) {
        this->password = password;
    } else {
        // ako parolata ne e korektno
        while (!(password.length() > 4 && password.length() < 20)) {
            cout << " Incorrect password. Enter new one." << endl;
            cin >> password;
        }
        this->password = password;
    }
}



string Users::getUsername() {
    return username;
}

void Users::setUsername(string username) {
    Users::username = username;
}

string Users::getPassword() {
    return password;
}
