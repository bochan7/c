//making tic tac toe game for two players//
#include<stdio.h>
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void printboard();
void printboard(){
    printf("\n====TIC  TAC TOE=====\n\n");
    printf("   |    |    |    |\n");
    printf("   |%c   |%c   |%c   |\n",board[1],board[2],board[3]);
    printf("___|____|____|____|___\n");
    printf("   |    |    |    |\n");
    printf("   |%c   |%c   | %c  |\n",board[4],board[5],board[6]);
    printf("___|____|____|____|___\n");
    printf("   |    |    |    |\n");
    printf("   |%c   |%C   |%c   |\n",board[7],board[8],board[9]);
    printf("\n\n");
    

}

void main(){
     printboard();
    int player=1,input,status=-1;

    while(status==-1){
    player = (player % 2)==0 ? 2 : 1;
    char mark=(player==1) ? 'X':'O';
    printf("please enter number for player %d\n",player);
    scanf("%d",&input);

    if(input < 1 || input > 9)
    {
        printf("invalid input");
    }
 board[input]=mark;



    printboard();
    int result = checkWin();
    if(result==1){
        printf("player % d is the Winner\n\n",player);
        return;
    }
    else if(result==0){
        printf("draw\n\n");
        return;
    }
    player++;

    }

}
int checkWin();
Module 3: check for a win and a draw  
Takes int checkWin(char symbol) for checking for a win and takes  int checkDraw() for checking for a draw  using row,columns,and diagonals.  
  
   Pseudo Code :     
   int checkWin(char symbol) {  
    // Check rows, columns, and diagonals for a win with the given symbol  
    // Return 1 if there's a win, otherwise 0  
}  
// Function to check for a draw int checkDraw() {  
    // Check if the board is full (no empty spaces left)  
    // Return 1 if it's a draw, otherwise 0  
}  
