 /*This program is for simple dice game and will choose the winner 
 Date : 17/11/2023 
 written by : Arsalan */
  #include<stdio.h>
  #include<time.h>
  #include<stdlib.h>

  int main(){
  // variables declearation 
	int size[6],Player1_score=0,Player2_score=0, i, j;
	char player1[20], player2[20];
	int Total_score_player1=0, Total_score_player2=0;
	  // input names from user
	       printf("Welcome to dice Game!\n");
	       printf("Player 1, please enter your name: ");
	       scanf("%s", player1); 
	       printf("Player 2, please enter your name: ");
	       scanf("%s", player2);
	             
	    printf("\nRolling the dice for %s...\n", player1);
	 // this will generate random numbers between 1 and 6 for player 1
	    srand (time(0));
	    size[1] = ((rand() % 6 ) +1);
	    for(i=1; i<=3; i++){
		size[i]=(rand() % 6 ) +1;
		}
		// output random numbers for player 1
	       for(i=1; i<=3; i++){
	       printf("Dice %d: %d\n",i, size[i]);
	  // this will add the total score for checking the occurance of 6 times 3
	       Player1_score+=size[i]; 
	                 }
	               
	   printf("\nRolling the dice for %s...\n", player2);
	   // this will generate random numbers between 1 and 6 for player 2
	   size[1]= (rand() % 6 ) +1;
	   for(j=1; j<=3; j++){
	   size[j]=(rand() % 6 ) +1; 
	  }
	  // output random numbers for player 2
	   for(int j=1; j<=3; j++){
	                 printf("Dice %d: %d\n",j, size[j]);
	                 Player2_score+=size[j];
	                 }
	       printf("\ncalculating the total score...\n");
	 // this condition will check if sum is 18 the total score will be zero
	         (Player1_score == 18)?
	       printf("Total score for %s: %d\n",player1, Total_score_player1):
	       printf("Total score for %s: %d\n",player1, Player1_score);
	       
	          (Player2_score == 18)?
	       printf("Total score for %s: %d\n",player2, Total_score_player2):
	       printf("Total score for %s: %d\n",player2, Player2_score);
	      
	  
	  if(Player1_score == Player2_score){
	   // if condition satisfies then it will check the first number of both players
	  for (i=1; i<=3; i++) {
      (size[i] > size[j]) ? 
                printf("The Winner is ...%s! Congratulation!\n", player1):
                printf("The Winner is ...%s! Congratulation!\n", player2);
       } }
       else{
       (Player1_score > Player2_score) ?
	  printf("The Winner is ...%s! Congratulation!\n", player1):
	  printf("The Winner is ...%s! Congratulation!\n", player2);
	  }
       
	return 0;
}
