//
// Created by Matthew Lourenco on 20/06/2020.
//

#ifndef OTHELLO_BOARDANALYSIS_H
#define OTHELLO_BOARDANALYSIS_H

#include "board.h"

// This function checks if a valid move is available
bool availableMove(const Board *b, char colour);

// Check if a piece can be placed in a certain tile and aim in a certain direction
bool checkLegalInDirection(const Board *b, int row, int col, char colour, int deltaRow, int deltaCol);

// This function checks if there is a move available in the corners
bool cornersAvailable(const Board *b, char colour);

// This function counts the number of tiles of a specific colour
int countColour(const Board *b, char colour);

// This function checks if the position is beside a corner
bool danger(const Board *b, int row, int col);

// This function evaluates if a move is valid
bool evalMove(const Board *b, int row, int col, char colour);

// This function flips tiles in all valid directions
void flipTiles(Board *b, int row, int col, int colour);

// This function calculates the number of tiles that can be flipped from a position
int tileScore(const Board *b, int row, int col, int colour);

#endif //OTHELLO_BOARDANALYSIS_H