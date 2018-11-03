#include <iostream>
#include <stdlib.h>
#include "LLC.h"
using namespace std;

int main(int argc, char *argv[]){
  LLC deck = *(new LLC());
  //hearts
  PlayingCard _2h = *(new PlayingCard(2,hearts));
  deck.insert(_2h);
  PlayingCard _3h = *(new PlayingCard(3,hearts));
  deck.insert(_3h);
  PlayingCard _4h = *(new PlayingCard(4,hearts));
  deck.insert(_4h);
  PlayingCard _5h = *(new PlayingCard(5,hearts));
  deck.insert(_5h);
  PlayingCard _6h = *(new PlayingCard(6,hearts));
  deck.insert(_6h);
  PlayingCard _7h = *(new PlayingCard(7,hearts));
  deck.insert(_7h);
  PlayingCard _8h = *(new PlayingCard(8,hearts));
  deck.insert(_8h);
  PlayingCard _9h = *(new PlayingCard(9,hearts));
  deck.insert(_9h);
  PlayingCard th = *(new PlayingCard(10,hearts));
  deck.insert(th);
  PlayingCard Jh = *(new PlayingCard(11,hearts));
  deck.insert(Jh);
  PlayingCard Qh = *(new PlayingCard(12,hearts));
  deck.insert(Qh);
  PlayingCard Kh = *(new PlayingCard(13,hearts));
  deck.insert(Kh);
  PlayingCard Ah = *(new PlayingCard(14,hearts));
  deck.insert(Ah);

  //diamonds
  PlayingCard _2d = *(new PlayingCard(2,diamonds));
  PlayingCard _3d = *(new PlayingCard(3,diamonds));
  PlayingCard _4d = *(new PlayingCard(4,diamonds));
  PlayingCard _5d = *(new PlayingCard(5,diamonds));
  PlayingCard _6d = *(new PlayingCard(6,diamonds));
  PlayingCard _7d = *(new PlayingCard(7,diamonds));
  PlayingCard _8d = *(new PlayingCard(8,diamonds));
  PlayingCard _9d = *(new PlayingCard(9,diamonds));
  PlayingCard td = *(new PlayingCard(10,diamonds));
  PlayingCard Jd = *(new PlayingCard(11,diamonds));
  PlayingCard Qd = *(new PlayingCard(12,diamonds));
  PlayingCard Kd = *(new PlayingCard(13,diamonds));
  PlayingCard Ad = *(new PlayingCard(14,diamonds));

  //spades
  PlayingCard _2s = *(new PlayingCard(2,spades));
  PlayingCard _3s = *(new PlayingCard(3,spades));
  PlayingCard _4s = *(new PlayingCard(4,spades));
  PlayingCard _5s = *(new PlayingCard(5,spades));
  PlayingCard _6s = *(new PlayingCard(6,spades));
  PlayingCard _7s = *(new PlayingCard(7,spades));
  PlayingCard _8s = *(new PlayingCard(8,spades));
  PlayingCard _9s = *(new PlayingCard(9,spades));
  PlayingCard ts = *(new PlayingCard(10,spades));
  PlayingCard Js = *(new PlayingCard(11,spades));
  PlayingCard Qs = *(new PlayingCard(12,spades));
  PlayingCard Ks = *(new PlayingCard(13,spades));
  PlayingCard As = *(new PlayingCard(14,spades));

  //clubs
  PlayingCard _2c = *(new PlayingCard(2,clubs));
  PlayingCard _3c = *(new PlayingCard(3,clubs));
  PlayingCard _4c = *(new PlayingCard(4,clubs));
  PlayingCard _5c = *(new PlayingCard(5,clubs));
  PlayingCard _6c = *(new PlayingCard(6,clubs));
  PlayingCard _7c = *(new PlayingCard(7,clubs));
  PlayingCard _8c = *(new PlayingCard(8,clubs));
  PlayingCard _9c = *(new PlayingCard(9,clubs));
  PlayingCard tc = *(new PlayingCard(10,clubs));
  PlayingCard Jc = *(new PlayingCard(11,clubs));
  PlayingCard Qc = *(new PlayingCard(12,clubs));
  PlayingCard Kc = *(new PlayingCard(13,clubs));
  PlayingCard Ac = *(new PlayingCard(14,clubs));

  cout<<deck;

}

PlayingCard::PlayingCard(int num, suits_t csuit){
  value = static_cast<card_t>(num);
  suit = csuit;
}
PlayingCard::PlayingCard(){
  value = static_cast<card_t>(2);
  suit = hearts;
}
ostream & operator << (ostream & os, PlayingCard& card) {
  os<<cardValue[card.value]<<suits[card.suit]<<endl;
  return os;
}
bool PlayingCard::operator<(const PlayingCard& other){
  if( value<other.value){
    return true;
  }
  else{
    return false;
  }
}
bool PlayingCard::operator>(const PlayingCard& other){
  if( value>other.value){
    return true;
  }
  else{
    return false;
  }
}
bool PlayingCard::operator==(const PlayingCard& other){
  if( value==other.value && suit==other.suit){
    return true;
  }
  else{
    return false;
  }
}
