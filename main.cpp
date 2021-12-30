//
//  main.cpp
//  TTT AI
//
//  Created by Leo FLores on 11/17/21.
//


//Tic Tac Toe AI

#include <iostream>

using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};


void drawBoard(){
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" "<<endl;
    cout<<"-----------"<<endl;
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" "<<endl;
    cout<<"-----------"<<endl;
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" "<<endl;
    
}

void placeLetter(int num){
    if(num==1){
        if(board[0][0] == 'x' || board[0][0] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[0][0] = 'x';
        }
    }
    if(num==2){
        if(board[0][1] == 'x' || board[0][1] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[0][1] = 'x';
        }
    }
    if(num==3){
        if(board[0][2] == 'x' || board[0][2] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[0][2] = 'x';
        }
    }
    if(num==4){
        if(board[1][0] == 'x' || board[1][0] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[1][0] = 'x';
        }
    }
    if(num==5){
        if(board[1][1] == 'x' || board[1][1] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[1][1] = 'x';
        }
    }
    if(num==6){
        if(board[1][2] == 'x' || board[1][2] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[1][2] = 'x';
        }
    }
    if(num==7){
        if(board[2][0] == 'x' || board[2][0] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[2][0] = 'x';
        }
    }
    if(num==8){
        if(board[2][1] == 'x' || board[2][1] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[2][1] = 'x';
        }
    }
    if(num==9){
        if(board[2][2] == 'x' || board[2][2] == 'o'){
            cout<<"Already taken..."<<endl;
        }
        else{
        board[2][2] = 'x';
        }
    }
}

void AiLetter(){
    
    
    //----------------------------------------------------------------------------
    //Code for AI to WIN
    //----------------------------------------------------------------------------

    //Code for Winning Moves
    //Row Checks
    //Row 1
    if(board[0][0] == 'o' && board [0][1] == 'o' && board[0][2] == '3'){
        board[0][2] = 'o';
        return;
    }
    if(board[0][0] == 'o' && board [0][2] == 'o' && board[0][1] == '2'){
        board[0][1] = 'o';
        return;
    }
    if(board[0][2] == 'o' && board [0][1] == 'o' && board[0][0] == '1'){
        board[0][0] = 'o';
        return;
    }
    
    //Row 2
    if(board[1][0] == 'o' && board [1][1] == 'o' && board[1][2] == '6'){
        board[1][2] = 'o';
        return;
    }
    if(board[1][0] == 'o' && board [1][2] == 'o' && board[1][1] == '5'){
        board[1][1] = 'o';
        return;
    }
    if(board[1][1] == 'o' && board [1][2] == 'o' && board[1][0] == '4'){
        board[1][0] = 'o';
        return;
    }
    
    //Row 3
    if(board[2][0] == 'o' && board [2][1] == 'o' && board[2][2] == '9'){
        board[2][2] = 'o';
        return;
    }
    if(board[2][0] == 'o' && board [2][2] == 'o' && board[2][1] == '8'){
        board[2][1] = 'o';
        return;
    }
    if(board[2][1] == 'o' && board [2][2] == 'o' && board[2][0] == '7'){
        board[2][0] = 'o';
        return;
    }
    
    //Column Check
    
    //Column 1
    if(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == '7'){
        board[2][0] = 'o';
        return;
    }
    if(board[0][0] == 'o' && board[2][0] == 'o' && board[1][0] == '4'){
        board[1][0] = 'o';
        return;
    }
    if(board[1][0] == 'o' && board[2][0] == 'o' && board[0][0] == '1'){
        board[0][0] = 'o';
        return;
    }
    
    //Column 2
    if(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == '8'){
        board[2][1] = 'o';
        return;
    }
    else if(board[0][1] == 'o' && board[2][1] == 'o' && board[1][1] == '5'){
        board[1][1] = 'o';
        return;
    }
    else if(board[1][1] == 'o' && board[2][1] == 'o' && board[0][1] == '2'){
        board[0][1] = 'o';
        return;
    }
    
    //Column 3
    if(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == '9'){
        board[2][2] = 'o';
        return;
    }
    else if(board[1][2] == 'o' && board[2][2] == 'o' && board[0][2] == '3'){
        board[0][2] = 'o';
        return;
    }
    else if(board[0][2] == 'o' && board[2][2] == 'o' && board[1][2] == '6'){
        board[1][2] = 'o';
        return;
    }
    
    //Now Diagnol Check
    //Diagnol Left to Right Top to Bottom
    if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == '9'){
        board[2][2] = 'o';
        return;
    }
    if(board[0][0] == 'o' && board[2][2] == 'o' && board[1][1] == '5'){
        board[1][1] = 'o';
        return;
    }
    if(board[1][1] == 'o' && board[2][2] == 'o' && board[0][0] == '1'){
        board[0][0] = 'o';
        return;
    }
    
    //Diagnol Bottom to Top
    if(board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == '3'){
        board[0][2] = 'o';
        return;
    }
    if(board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == '7'){
        board[2][0] = 'o';
        return;
    }
    if(board[2][0] == 'o' && board[0][2] == 'o' && board[1][1] == '5'){
        board[1][1] = 'o';
        return;
    }

    //----------------------------------------------------------------------------
    //Now i will create if statements to block the user from winning HAHAHAHA 'evil laugh'
    //----------------------------------------------------------------------------

    //This chain will block diagnol connections
    // Row 1
    if(board[1][1] == 'x' && board[0][0] == 'x' && board[2][2] != 'o'){
        board[2][2] = 'o';
        return;
    }
    if(board[1][1] == 'x' && board[0][2] == 'x' && board[2][0] != 'o'){
        board[2][0] = 'o';
        return;
    }
    if(board[1][1] == 'x' && board[2][2] == 'x' && board[0][0] != 'o'){
        board[0][0] = 'o';
        return;
    }
    if(board[1][1] == 'x' && board[2][0] == 'x' && board[0][2] != 'o'){
        board[0][2] = 'o';
        return;
    }
    
    //this chain will block rows
    if(board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] != 'o'){
        board[0][2] = 'o';
        return;
    }
    else if(board[0][1] == 'x' && board[0][2] == 'x' && board[0][0] != 'o'){
        board[0][0] = 'o';
        return;
    }
    else if(board[0][0] == 'x' && board[0][2] == 'x' && board[0][1] != 'o'){
        board[0][1] = 'o';
        return;
    }
    
    //Row 2
    if(board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] != 'o'){
        board[1][2] = 'o';
        return;
    }
    else if(board[1][1] == 'x' && board[1][2] == 'x' && board[1][0] != 'o'){
        board[1][0] = 'o';
        return;
    }
    else if(board[1][0] == 'x' && board[1][2] == 'x' && board[1][1] != 'o'){
        board[1][1] = 'o';
        return;
    }
    
    //row 3
    if(board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] != 'o'){
        board[2][2] = 'o';
        return;
    }
    else if(board[2][1] == 'x' && board[2][2] == 'x' && board[2][0] != 'o'){
        board[2][0] = 'o';
        return;
    }
    else if(board[2][0] == 'x' && board[2][2] == 'x' && board[2][1] != 'o'){
        board[2][1] = 'o';
        return;
    }
    
    //now this chain will block columns
    
    //Column 1
    if(board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] != 'o'){
        board[2][0] = 'o';
        return;
    }
    else if(board[0][0] == 'x' && board[2][0] == 'x' && board[1][0] != 'o'){
        board[1][0] = 'o';
        return;
    }
    else if(board[1][0] == 'x' && board[2][0] == 'x' && board[0][0] != 'o'){
        board[0][0] = 'o';
        return;
    }
    
    //column 2
    if(board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] != 'o'){
        board[2][1] = 'o';
        return;
    }
    else if(board[0][1] == 'x' && board[2][1] == 'x' && board[1][1] != 'o'){
        board[1][1] = 'o';
        return;
    }
    else if(board[1][1] == 'x' && board[2][1] == 'x' && board[0][1] != 'o'){
        board[0][1] = 'o';
        return;
    }
    
    //column 3
    if(board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] != 'o'){
        board[2][2] = 'o';
        return;
    }
    else if(board[1][2] == 'x' && board[2][2] == 'x' && board[0][2] != 'o'){
        board[0][2] = 'o';
        return;
    }
    else if(board[0][2] == 'x' && board[2][2] == 'x' && board[1][2] != 'o'){
        board[1][2] = 'o';
        return;
    }

    //--------------------------------------------
    //Default Moves/ Beginning Moves
    //--------------------------------------------

    if(board[1][1] == '5'){
        board[1][1] = 'o';
        return;
    }
    else if(board[0][0] == '1'){
        board[0][0] = 'o';
        return;
    }
    
    //--------------------------------------------
    //Setup Moves
    //--------------------------------------------
    
    if(board[0][0] == 'o'){
        if(board[0][1] == '2' && board[0][2] == '3'){
            board[0][2] = 'o';
            return;
        }
        if(board[1][0] == '4' && board[2][0] == '7'){
            board[2][0] = 'o';
            return;
        }
        if(board[1][1] == '5' && board[2][2] == '9'){
            board[2][2] = 'o';
            return;
        }
    }
    
    if(board[0][1] == 'o'){
        if(board[0][0] == '1' && board[0][2] == '3'){
            board[0][2] = 'o';
            return;
        }
        if(board[1][1] == '5' && board[2][1] == '8'){
            board[1][1] = 'o';
            return;
        }
    }
    
    if(board[0][2] == 'o'){
        if(board[0][0] == '1' && board[0][1] == '2'){
            board[0][0] = 'o';
            return;
        }
        if(board[1][2] == '6' && board[2][2] == '9'){
            board[1][2] = 'o';
            return;
        }
        if(board[1][1] == '5' && board[2][0] == '7'){
            board[1][1] = 'o';
            return;
        }
    }
     
    if(board[1][0] == 'o'){
        if(board[1][1] == '5' && board[1][2] == '6'){
            board[1][1] = 'o';
            return;
        }
        if(board[0][0] == '1' && board[2][0] == '7'){
            board[0][0] = 'o';
            return;
        }
    }
    
    if(board[1][1] == 'o'){
        if(board[0][0] == '1' && board[0][1] == '2' && board[0][2] == '3' && board[2][0] == '7' && board[2][1] == '8' && board[2][2] == '9'){
            board[0][0] = 'o';
            return;
        }
        if(board[0][0] == '1' && board[1][0] == '4' && board[2][0] == '7' && board[0][2] == '3' && board[1][2] == '6' && board[2][2] == '9'){
            board[0][0] = 'o';
            return;
        }
    }
    
    if(board[1][2] == 'o'){
        if(board[1][1] == '5' && board[1][0] == '4'){
            board[1][1] = 'o';
            return;
        }
        if(board[0][2] == '3' && board[2][2] == '9'){
            board[0][2] = 'o';
            return;
        }
    }
    
    if(board[2][0] == 'o'){
        if(board[1][1] == '5' && board[0][2] == '3'){
            board[1][1] = 'o';
            return;
        }
        if(board[0][0] == '1' && board[1][0] == '4'){
            board[0][0] = 'o';
            return;
        }
        if(board[2][1] == '8' && board[2][2] == '9'){
            board[2][2] = 'o';
            return;
        }
    }
    
    if(board[2][1] == 'o'){
        if(board[1][1] == '5' && board[0][1] == '2'){
            board[1][1] = 'o';
            return;
        }
        if(board[2][0] == '7' && board[2][2] == '9'){
            board[2][2] = 'o';
            return;
        }
    }
    
    if(board[2][2] == 'o'){
        if(board[1][1] == '5' && board[0][0] == '1'){
            board[1][1] = 'o';
            return;
        }
        if(board[2][0] == '7' && board[2][1] == '8'){
            board[2][0] = 'o';
            return;
        }
        if(board[0][2] == '3' && board[1][2] == '6'){
            board[1][2] = 'o';
            return;
        }
    }
    
    //----------------------------------------
    //Fill-IN LOOP To end game if no more connections can be made
    //----------------------------------------
    
    for(int i=0; i < 3; i++){
        for(int k=0; k < 3; k++){
            if(board[i][k] != 'o' && board[i][k] != 'x'){
                board[i][k] = 'o';
                return;
            }
        }
    }
    
}

int winner(){
    int winner = 3;
    
    //Checks rows for winner
    
    if(board[0][0] == 'x' && board[0][1] == 'x' && board[0][2] == 'x'){
        return winner = 1;
    }
    else if(board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o'){
        return winner = 2;
    }
    if(board[1][0] == 'x' && board[1][1] == 'x' && board[1][2] == 'x'){
        return winner = 1;
    }
    else if(board[1][0] == 'o' && board[1][1] == 'o' && board[1][2] == 'o'){
        return winner = 2;
    }
    if(board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x'){
        return winner = 1;
    }
    else if(board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o'){
        return winner = 2;
    }
    
    //checks columns
    if(board[0][0] == 'x' && board[1][0] == 'x' && board[2][0] == 'x'){
        return winner = 1;
    }
    else if(board[0][0] == 'o' && board[1][0] == 'o' && board[2][0] == 'o'){
        return winner = 2;
    }
    if(board[0][1] == 'x' && board[1][1] == 'x' && board[2][1] == 'x'){
        return winner = 1;
    }
    else if(board[0][1] == 'o' && board[1][1] == 'o' && board[2][1] == 'o'){
        return winner = 2;
    }
    if(board[0][2] == 'x' && board[1][2] == 'x' && board[2][2] == 'x'){
        return winner = 1;
    }
    else if(board[0][2] == 'o' && board[1][2] == 'o' && board[2][2] == 'o'){
        return winner = 2;
    }
    
    //checks diagnols
    if(board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x'){
        return winner = 1;
    }
    else if(board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o'){
        return winner = 2;
    }
    
    if(board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x'){
        return winner = 1;
    }
    else if(board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o'){
        return winner = 2;
    }
    return winner;
    
}

int main(){
    
    int num;
    int counter=0;
    int gameOver = 0;
    
    cout<<"You will be Player 1 and your symbol is 'x', the AI will play against you with the symbol 'o'..."<<endl;
    
    
    
    while(gameOver == 0){
        
        cout<<endl;
        drawBoard();

        
        cout<<"\nEnter the number where you want to place your letter..."<<endl;
        cin>>num;
        if(num < 1 || num > 9){
            cout<<"Invalid: please enter a number between 1 and 9..."<<endl;
            cin>>num;
        }
        
        //Players Turn
        placeLetter(num);

        if(winner() == 1){
            drawBoard();
            cout<<"\nPLAYER 1 HAS WON! CONGRATZ!!! :)\n"<<endl;
            return 0;
        }
        
        //AI's turn
        AiLetter();
        
        if(winner() == 2){
            drawBoard();
            cout<<"\nAI HAS CLAIMED VICTORY...try again\n"<<endl;
            return 0;
        }
        
        //counter for maximum moves possible to end game if board full
        counter++;
        if(counter == 5){
            drawBoard();
            cout<<"\nNo one wins :( Try Again...\n"<<endl;
            return 0;
        }
        
        
    }
    
    
    
    
}


