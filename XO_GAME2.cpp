#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char A[10] = {'0','1','2','3','4','5','6','7','8','9'};
int THE_WINNER(){
if(A[1]==A[2] && A[2]==A[3]) return 1;
   else if(A[4]==A[5] && A[5]==A[6]) return 1;
else if(A[7]==A[8] && A[8]==A[9]) return 1;
else if(A[1]==A[4] && A[4]==A[7]) return 1;
else if(A[2]==A[5] && A[5]==A[8]) return 1;
else if(A[3]==A[6] && A[6]==A[9]) return 1;
else if(A[1]==A[5] && A[5]==A[9]) return 1;
else if(A[3]==A[5] && A[5]==A[7]) return 1;
else if(A[1]!='1' && A[2]!='2' && A[3]!='3' && A[4]!='4' && A[5]!='5' && A[6]!='6' && A[7]!='7' && A[8]!='8' && A[9]!='9') return 0;
else return -1;
}
void GAME_SETUP(){
system("cls");
printf("\n\n\t (X-O) \n\n");
printf("player1 (X) - player2 (O)\n\n\n");
printf("\t   |   |    \n");
printf("\t %c | %c | %c \n",A[1],A[2],A[3]);
printf("\t___|___|___\n");
printf("\t   |   |    \n");
printf("\t %c | %c | %c \n",A[4],A[5],A[6]);
printf("\t___|___|___\n");
printf("\t   |   |    \n");
printf("\t %c | %c | %c \n",A[7],A[8],A[9]);
printf("\t   |   |    \n");
}

int main(){
int player = 1,i,choice;
char mark;
do{
GAME_SETUP();
player = (player%2) ? 1 :2;
printf("player %d ,enter the choice :",player );
scanf("%d",&choice);
mark = (player==1) ? 'X' : 'O';
if(choice==1 && A [1]=='1') A[1]=mark;
else if (choice ==2 && A[2]=='2') A[2]=mark;
else if (choice ==3 && A[3]=='3') A[3]=mark;
else if (choice ==4 && A[4]=='4') A[4]=mark;
else if (choice ==5 && A[5]=='5') A[5]=mark;
else if (choice ==6 && A[6]=='6') A[6]=mark;
else if (choice ==7 && A[7]=='7') A[7]=mark;
else if (choice ==8 && A[8]=='8') A[8]=mark;
else if (choice ==9 && A[9]=='9') A[9]=mark;

else{
printf("the case is full try again");
player--;
getch();
}
i=THE_WINNER();
player++;
}while(i== -1);
GAME_SETUP();
if(i==1){
printf("==> player %d WON",--player);

}
else{
printf("==> game draw");
}
getch();
return 0;







}