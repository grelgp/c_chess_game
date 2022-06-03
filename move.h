#ifndef __MOVE_H__
#define __MOVE_H__
#include<stdio.h>
#include <stdbool.h>
#include "piece.c"

int canMovePiece(piece board[12][12], int dimension, int from[2], int to[2], int turnColor);
int canChoosePiece(piece board[12][12], int dimension, int piecePos[2], int turnColor);
bool movePawn(piece board[12][12],int from[2],int to[2], int);
bool moveBishop(piece board[12][12], int from[2],int to[2]);
bool moveRook(piece board[12][12],int from[2],int to[2]);
bool moveQueen(piece board[12][12],int from[2],int to[2]);
bool moveKing(int from[2],int to[2]);
bool moveKnight(int from[2],int to[2]);

#endif

