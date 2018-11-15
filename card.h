/*
filename:
author: 
email: 
date:
description:
*/

#ifndef CARD_H
#define CARD_H

class Card
{
 
  char symbol;
  int value;
  
  public:

  Card (char _s);
  Card ( int _v);
  void add_decl ( Deck _d);

};


#endif
