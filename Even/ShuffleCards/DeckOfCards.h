#ifndef CARDS_DECKOFCARDS_H
#define CARDS_DECKOFCARDS_H
#include <iostream>
#include <string>
#include <vector>
#include "PlayingCard.h"

class DeckOfCards {

    char arrayType[13] = {'A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2'};
    std::string arraySuit[4] = {"Spades", "Diamonds", "Hearts", "Clubs" };
    std::vector<PlayingCard> deck;
public:
    void createDesk();
    void raffleShuffle();
    void showDeck();



};


#endif //CARDS_DECKOFCARDS_H
