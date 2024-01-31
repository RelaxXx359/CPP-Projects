#include "PlayingCard.h"

// A, K ,Q , J, 10, 9, 8, 7, 6, 5, 4, 3, 2
PlayingCard::PlayingCard(char type, std::string suit) : type(type), suit(suit) {}

void PlayingCard::setType(char type) {
    if (type != 'A' && type != 'K' && type != 'Q' && type != 'J' && type != 'T' && type != '9' && type != '8' &&
        type != '7' && type != '6' && type != '5' && type != '4' && type != '3' && type != '2') {
        if (type != 'A' && type != 'K' && type != 'Q' && type != 'J' && type != 'T' && type != '9' && type != '8' &&
            type != '7' && type != '6' && type != '5' && type != '4' && type != '3' && type != '2') {
            std::cout << "Enter card (A, K ,Q , J, T, 9, 8, 7, 6, 5, 4, 3, 2): " << std::endl;
        }

    }
    this->type = type;
}
void PlayingCard::setSuit(std::string suit) {
    if (suit != "spades" && suit != "diamonds" && suit != "hearts" && suit != "clubs") {
        if (suit != "spades" && suit != "diamonds" && suit != "hearts" && suit != "clubs") {
            std::cout << "Enter suit (Spades, Diamonds, Hearts, Clubs): " << std::endl;
            std::cin >> suit;
        }
    }
    this->suit = suit;
}

char PlayingCard::getType() {
    return this->type;
}

string PlayingCard::getSuit() {
    return this->suit;
}

void PlayingCard::push_back(PlayingCard card) {

}

size_t PlayingCard::size() {
    return 0;
}
