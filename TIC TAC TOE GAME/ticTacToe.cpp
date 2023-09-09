#include <iostream>
#include <vector>

using namespace std;


void displayBoard(const vector<vector<char>>& board) {
    cout<<" "<<endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];

            if (j < 2) cout << " | ";
        }
        cout << endl;

        if (i < 2) cout << "---------" << endl;
    }
    cout<<endl;
}


bool isGameOver(const vector<vector<char>>& board) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true; 

        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true; 
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true; 

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true; 

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return false; 
        }
    }
 
    return true; 

}


bool makeMove(vector<vector<char>>& board, int row, int col, char player) {

    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return false; 
    board[row][col] = player;
    return true;

}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    bool gameOver = false;
    char input;

    do{


        cout << "********* Tic-Tac-Toe *********" << endl;
        cout<<endl;
        cout<<" Welcome !!!"<<endl;
        cout<<"=> Game Rules : "<<endl;
        cout<<"1. Player X marks X on board"<<endl;
        cout<<"2. Player 0 marks 0 on board"<<endl;
        cout<<endl;

        while (!gameOver) {
            displayBoard(board);
            int row, col;
            cout << "--> Player " << currentPlayer << ", enter your move (row and column) : ";
            cin >> row >> col;
            cout<<endl;

            if (makeMove(board, row - 1, col - 1, currentPlayer)) {
                if (isGameOver(board)) {
                    displayBoard(board);
                    cout<<endl;
                    cout << "Congrats Player " << currentPlayer << " wins !" << endl;
                    gameOver = true;

                } else {
                    currentPlayer = (currentPlayer == 'X') ? '0' : 'X';
                }

            } else {
                cout << "Invalid move --> Try again." << endl;
            }
        }

        cout<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"Do you want to Play Again (Y/N) ? ";
        cin>>input;  
    
    }while(input!='N'); 
    cout<<endl;
    cout<<"<-------------- GAME OVER --------------->";
    cout<<endl;

    return 0;
}
