#include <iostream>
#include <string>

using namespace std;

class Movie {
public:
    Movie(string name, string genre, int releaseDate, string director, int category) {

        this->name = name;
        this->genre = genre;
        this->releaseDate = releaseDate;
        this->director = director;
        this->category = category;

    }

    void setFirstName(string name) {
        this->name;
    }

    string getFirstName() {
        return this->name;
    }

    void displayMassage() {
        cout << "Movie " << name << "," << " " << genre <<", release date "<< releaseDate << ", director " << director <<", for individuals " << category
             << "+" << endl;
    }


private:

    string name;
    string genre;
    int releaseDate;
    string director;
    int category;

};

int main() {

    Movie firtsMovie("Tomb Raider", "action", 2018, "Roar Uthaug", 16);

    firtsMovie.displayMassage();
    return 0;
}