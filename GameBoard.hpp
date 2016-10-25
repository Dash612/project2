//
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>

#include "ExtendableVector.h"

const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:   
   enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };
   
   enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };
   
   // Build the gameboard
   // TO DO: implement this function
   void buildBoard();
   GameBoard() {
	   board.at(0);
	   buildBoard();
      // TODO: implement this function properly
   }
   
   // If player lands on chutes or ladders, returns the new position.
   // Otherwise, returns the player's current position.
   // If the player's position is outside of the gameboard, throws index out of bounds exception
   // TO DO: implement this function properly
   int checkChutesLadders(int position) {
      if ((position < 0) || (position >= BOARD_SIZE)) {
         throw range_error("index out of bounds");
      }
      // TODO: implement this function properly
	  if (position == ONE) {
		  return 38;
	  }
	  if (position == FOUR) {
		  return 14;
	  }
	  if (position == NINE) {
		  return 31;
	  }
	  if (position == TWENTY_ONE) {
		  return 42;
	  }
	  if (position == TWENTY_EIGHT) {
		  return 84;
	  }
	  if (position == THIRTY_SIX) {
		  return 44;
	  }
	  if (position == FIFTY_ONE) {
		  return 67;
	  }
	  if (position == SEVENTY_ONE) {
		  return 91;
	  }
	  if (position == EIGHTY) {
		  return 100;
	  }
	  if (position == SIXTEEN) {
		  return 6;
	  }
	  if (position == FORTY_SEVEN) {
		  return 26;
	  }
	  if (position == FORTY_NINE) {
		  return 11;
	  }
	  if (position == FIFTY_SIX) {
		  return 53;
	  }
	  if (position == SIXTY_TWO) {
		  return 19;
	  }
	  if (position == SIXTY_FOUR) {
		  return 60;
	  }
	  if (position == EIGHTY_SEVEN) {
		  return 24;
	  }
	  if (position == NINETY_THREE) {
		  return 73;
	  }
	  if (position == NINETY_FIVE) {
		  return 75;
	  }
	  if (position == NINETY_EIGHT) {
		  return 78;
	  }
	  return position;
   }
   
private:
	ExtendableVector<int>board;
	int playerPosition;
	int newPosition;
   // TO DO: add storage for squares including square of chutes and ladders
   // Requirement: use ExtendableVector to store the square
};
