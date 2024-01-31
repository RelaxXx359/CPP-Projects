#include <iostream>
#include "PlayingCard.h"
#include "DeckOfCards.h"
#include <string>

using namespace std;
int main() {

    DeckOfCards  deck;
    deck.createDesk();
    std::cout << std::endl;
    deck.showDeck();



    return 0;
}
