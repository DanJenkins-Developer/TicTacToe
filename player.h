//
// Daniel Jenkins
//
// player.h
//
// 02/27/2020
//
#ifndef Player_H
#define Player_H

#include "TicTacToe.h"

class Player
{
    public :
        Player();  // Default constructor
        Player(string);

        void makeMove(TicTacToe& board);
        void isWinner(string array[3][3]);
        bool winStatus(TicTacToe);
        string getStringChoice();
        
    private:
        string stringChoice;
        bool winner;
};
Player::Player()
{
    stringChoice = " ";
    winner = 0;
}
Player::Player(string choice)
{
    stringChoice = choice;
    winner = false;
}
string Player :: getStringChoice()
{
    return stringChoice;
}
void Player :: isWinner(string array[3][3])
{
    string copyStringAway[3][3];
}
void Player:: makeMove(TicTacToe& board)
{
    int c,r;
    bool moveOn = false;

    do
    {
    cout << "\tPlayer " << stringChoice << " turn" << endl;
    cout << "Enter row and column you want to move" << endl;
    cin >> r >> c;

    if(board.validMove(r,c))
    {
        board.setBoard(stringChoice, r, c);
        moveOn = true;
    }
    else
    {
        cout << "\tInvalid move!!\n" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    } while (!moveOn);
}
bool Player :: winStatus(TicTacToe game)
{
    winner = game.hasWon(stringChoice);
    return winner;
}
#endif