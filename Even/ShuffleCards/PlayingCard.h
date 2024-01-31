#ifndef CARDS_PLAYINGCARD_H
#define CARDS_PLAYINGCARD_H

#include <iostream>
#include <string>

using namespace std;

class PlayingCard {
public:

    PlayingCard(char, string);

    void setType(char);
    void setSuit(string);

    char getType();
    string getSuit();

    void print();

    void push_back(PlayingCard card);

    size_t size();

private:
    char type;
    string suit;

};


#endif //CARDS_PLAYINGCARD_H
