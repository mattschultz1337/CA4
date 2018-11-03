#ifndef PLAYINGCARD_H
#define PLAYINGCARD_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "LLC.h"
enum card_t{
  Two=2,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King,
  Ace
};
enum suits_t{
  hearts,
  diamonds,
  clubs,
  spades
};
const char*suits[] =   {
  "H","D","C","S"
};
const char* cardValue[] =   {
  "H","D","C","S"
};
class PlayingCard{
  private:
    card_t value;
    suits_t suit;
  public:
    int main(int argc, char *argv[]);
    PlayingCard();
    PlayingCard(int num, suits_t csuit);
    friend std::ostream& operator<<(std::ostream&, PlayingCard& card);
    bool operator<(const PlayingCard& other);
    bool operator>(const PlayingCard& other);
    bool operator==(const PlayingCard& other);
};


#endif
