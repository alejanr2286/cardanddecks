/*
filename:
author: 
email:
date:
description:
*/

#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
class Deck
{
  vector<Card> m_cards;
  public:
  Deck();
  void shuffle();
  vector<Card> deal(int _amount);
};

#endif
