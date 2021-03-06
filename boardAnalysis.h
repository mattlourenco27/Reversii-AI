//
// Created by Matthew Lourenco on 20/06/2020.
//

#ifndef OTHELLO_BOARDANALYSIS_H
#define OTHELLO_BOARDANALYSIS_H

#include "board.h"

// This function checks if a valid move is available
bool availableMove(const Board *b, char colour);

// This function checks if the position is beside a corner
bool besideCorner(const Board *b, int row, int col);

// Check if a piece can be placed in a certain tile and aim in a certain direction
bool checkLegalInDirection(const Board *b, int row, int col, char colour, int deltaRow, int deltaCol);

// This function counts the number of tiles of a specific colour
int countColour(const Board *b, char colour);

// This function evaluates if a move is valid
bool evalMove(const Board *b, int row, int col, char colour);

// This function flips tiles in all valid directions and returns the number of tiles flipped
int flipTiles(Board *b, int row, int col, char colour);

// This function calculates the number of tiles that can be flipped from a position
int tileScore(const Board *b, int row, int col, char colour);

#endif //OTHELLO_BOARDANALYSIS_H
