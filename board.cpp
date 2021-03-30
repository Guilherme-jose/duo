#include "board.h"

Board::Board() {
  this->_number = 0;
  this->_color = "blue";
  this->_orientation = 0; //0 => clockwise, 1 => counter clockwise
  this->_deck = newDeck();
  this->_stack = newStack();
}
int Board::get_number() {
  return this->_number;
}

void Board::set_number(int number) {
  this->_number = number;
}

std::string Board::get_color() {
  return this->_color;
}

void Board::set_color(std::string color) {
  this->_color = color;
}

Deck* Board::get_deck() {
  return this->_deck;
}

Stack* Board::get_stack() {
  return this->_stack;
}

Deck* Board::newDeck() {
  Deck* d = new Deck();
  return d;
}

Stack* Board::newStack() {
  Stack* s = new Stack();
  return s;
}

int Board::get_orientation() {
  return this->_orientation;
}

void Board::reverse_orientation() {
  this->_orientation *= -1;
}
