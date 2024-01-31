#include "DeckOfCards.h"
#include "PlayingCard.h"


void DeckOfCards::createDesk() {

    char currentType;
    std::string currentSuit;

    // итерираме през всички карти
    for (int i = 0; i < 13; ++i) {
        currentType = this->arrayType[i];
        // итерираме всички бои
        for (int j = 0; j < 4; ++j) {
            currentSuit = this->arraySuit[j];
            // създаваме обект за да използваме текущия тип и боя
            PlayingCard currentCard(currentType, currentSuit);
            deck.push_back(currentCard);
        }
    }
}

void DeckOfCards::raffleShuffle() {
    std::vector<PlayingCard> firstDeck[26];
    std::vector<PlayingCard> secondDeck[26];

    for (int i = 0; i < 52; ++i) {
        if (i % 2 == 0) {
            firstDeck->push_back(deck[i]);
        } else {
            secondDeck->push_back(deck[i]);
        }
    }

}

void DeckOfCards::showDeck() {
    // итерираме през всяка катра във вектора
    for (size_t i = 0; i < this->deck.size(); ++i) {
        std::cout << this->deck[i].getType() << " " << this->deck[i].getSuit() << std::endl;
    }
}