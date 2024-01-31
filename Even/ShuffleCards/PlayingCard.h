#ifndef CARDS_PLAYINGCARD_H
#define CARDS_PLAYINGCARD_H

#include <iostream>
#include <string>

using namespace std;

class PlayingCard {
public:

    PlayingCard(string, string);

    void setType(string);
    void setSuit(string);

    string getType();
    string getSuit();

    void print();


private:
    string type;
    string suit;

};


#endif //CARDS_PLAYINGCARD_H
