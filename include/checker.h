#ifndef UNTITLED_CHECKER_H
#define UNTITLED_CHECKER_H

// SYSTEME INCLUDE(S)

// STRUCTURE(S)
typedef struct next_move {
    int pieceToMove[2];
    int positionToEnd[2];
    int nbPieceTaken;
    struct next_move _next;
    struct next_move _previous;
} next_move;

typedef struct next_move_index{
    struct next_move _first;
    struct next_move _last;
}
// LOCAL INCLUDE(S)

// PROTOTYPE(S)

#endif // UNTITLED_CHECKER_H