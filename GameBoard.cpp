//
//  GameBoard.cpp
//

#include "GameBoard.hpp"

// Build the gameboard
// If the landing square is a chute, set the position to the corresponding lower square
// I.e., player slides down to the lower square
// If the landing square is a ladder, set the position to the corresponding higher square
// Player climbs up to the higher square
// Otherwise, player stays put at the landing square
void GameBoard::buildBoard() {
   // TODO: implement this function properly
	position = checkChutesLadders(position);				// position == new position after rolling die or stay put
	
}