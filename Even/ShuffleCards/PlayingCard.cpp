#include "PlayingCard.h"
// A, K ,Q , J, 10, 9, 8, 7, 6, 5, 4, 3, 2
PlayingCard::PlayingCard(string type, std::string suit) : type(type), suit(suit) {}

void PlayingCard::setType(string type) {

    switch (type) {
        case 1: "A";

        case 2: "K";
        case 3: "Q";
        case 4: "J";
        case 5: "10";
        case 6: "9";
        case 6: "8";
        case 6: "7";
        case 6: "6";
        case 6: "5";
        case 6: "4";
        case 6: "3";
        case 6: "2";
    }
    this->type = type;
}


void PlayingCard::setSuit(std::string suit) {
    this->suit = suit;
}


string PlayingCard::getType() {
    return type;
}
string PlayingCard::getSuit() {
    return suit;
}
