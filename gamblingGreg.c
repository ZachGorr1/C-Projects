#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Dog structure decleration
struct dogs{
    char name[10];
    int payout;
    double odds;
    int dogNumber;
};

int main(){
    
    //Time decleration for the winningDogNumber variable.
    srand (time(NULL));
    
    char userChoice;
    double usersBet = 0.0;
    int enterDogTrack;
    int dogChoice1, dogChoice2, dogChoice3, dogChoice4;
    int dogOddsWinningNumber = 0;
    int winningDog1 = 0, winningDog2 = 0, winningDog3 = 0, winningDog4 = 0;
    int raceWinMoney[4];
    char raceResults[4];
    int i;

    //All the different dogs and their variables
    struct dogs dog1 = {"Cracker", 2, .4, 1};
    
    struct dogs dog2 = {"Biscut", 5, .1, 2};
    
    struct dogs dog3 = {"Cheddar", 10, .08, 3};
    
    struct dogs dog4 = {"Conrad", 15, .06, 4};
 
    struct dogs dog5 = {"Gerald", 50, .01, 5};
 
    struct dogs dog6 = {"Potato", 20, .04, 6};
   
    struct dogs dog7 = {"Taco", 10, .08, 7};
   
    struct dogs dog8 = {"Rice Cake", 5, .1, 8};
    
    struct dogs dog9 = {"Fish Stick", 3, .13, 9};

    
//==========================================================================================================//
//==========================================================================================================//
    
    //Menu Layout display
     printf("Welcome to the dog track. \n");
     printf("Please choose from the menu below. \n");
     printf("Please only use CAPITAIL letters \n");
     printf("*** Dog Track *** \n");
     printf("[G] Bet \n");
     printf("[L] Leave \n");
     scanf(" %c", &userChoice);
     
    //If statement based on user input from display meny
     if (userChoice == 'G'){
         
         //Lets user choose from the list of dogs
         printf("Please chose 1 dog to place a bet on. \n");
         printf("#1)%s     %d : 1 \n", dog1 .name, dog1.payout);
         printf("#2)%s      %d : 1 \n", dog2.name, dog2.payout);
         printf("#3)%s     %d : 1 \n", dog3.name, dog3.payout);
         printf("#4)%s      %d : 1 \n", dog4.name, dog4.payout);
         printf("#5)%s      %d : 1 \n", dog5.name, dog5.payout);
         printf("#6)%s      %d : 1 \n", dog6.name, dog6.payout);
         printf("#7)%s        %d : 1 \n", dog7.name, dog7.payout);
         printf("#8)%s   %d : 1 \n", dog8.name, dog8.payout);
         printf("#9)%s  %d : 1 \n", dog9.name, dog9.payout);
     
         scanf("%d", &dogChoice1);
     
         //Takes in users bet money amount
         printf("How much would you like to bet? \n");
         scanf("%lf", &usersBet);
         
         printf("You choose dog #%d \n", dogChoice1);
         printf("Let the race begin! \n");
        
         //Detemines what number is used for the winning dog
       for( i = 0 ; i < 1 ; i++ ) {
           dogOddsWinningNumber = ( rand() %100) + 1 ;
         }
         
         //Prints out winning dog number to determine the if statements below work
         // printf("%d \n", dogOddsWinningNumber);
         
         //if statements based on the winning dog numbers and the numbers based upon each dog.
         // I took each dogs odds and broke them down into 100, say a dog wins 40%
         // That dogs wining number range would be between 1-40
         if(dogOddsWinningNumber == 1){
             winningDog1 = 1;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 40){
             winningDog1 = 1;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 41){
             winningDog1 = 2;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 50){
             winningDog1 = 2;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 51){
             winningDog1 = 3;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 58){
             winningDog1 = 3;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 59){
             winningDog1 = 4;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 64){
             winningDog1 = 4;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                 raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 65){
             winningDog1 = 5;
              printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog5.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 66){
             winningDog1 = 6;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 69){
             winningDog1 = 6;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 70){
             winningDog1 = 7;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 77){
             winningDog1 = 7;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 78){
             winningDog1 = 8;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 87){
             winningDog1 = 8;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0]= 'L';
             }
         }
         else if (dogOddsWinningNumber == 88){
             winningDog1 = 9;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice2 == winningDog2){
                 raceWinMoney[0] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 100){
             winningDog1 = 9;
             printf("Dog #%d won the race! \n", winningDog1);
             
             if (dogChoice1 == winningDog1){
                 raceWinMoney[0] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[0]);
                 
                   raceResults[0] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[0] = 'L';
             }
         }
         
         printf("\n");
         
     }

    //else if statement for R choice, i wanted the user to enter in all their races first before all results are displayed
    else if(userChoice == 'R'){
            
        printf("Please race all the dogs first. \n");
     }
     
    
    // else if for the user to quit the program
    else if(userChoice == 'L'){
         
         printf("You're now leaving the dog track. \n");
         printf("Have a nice day, Goodbye. \n");
         exit(0);
    }
    
    
//==========================================================================================================//
//==========================================================================================================//

    //display menu for the program
    printf("Welcome to the dog track. \n");
    printf("Please choose from the menu below. \n");
    printf("Please only use CAPITAIL letters \n");
    printf("*** Dog Track *** \n");
    printf("[G] Bet \n");
    printf("[R] Results \n");
    printf("[L] Leave \n");
    scanf(" %c", &userChoice);
   
    
    //if statement for the users choice from the display menu above
    if (userChoice == 'G'){
        
       //Displays all the dogs and their variables
        printf("Please chose 1 dog to place a bet on. \n");
        printf("#1)%s     %d : 1 \n", dog1 .name, dog1.payout);
        printf("#2)%s      %d : 1 \n", dog2.name, dog2.payout);
        printf("#3)%s     %d : 1 \n", dog3.name, dog3.payout);
        printf("#4)%s      %d : 1 \n", dog4.name, dog4.payout);
        printf("#5)%s      %d : 1 \n", dog5.name, dog5.payout);
        printf("#6)%s      %d : 1 \n", dog6.name, dog6.payout);
        printf("#7)%s        %d : 1 \n", dog7.name, dog7.payout);
        printf("#8)%s   %d : 1 \n", dog8.name, dog8.payout);
        printf("#9)%s  %d : 1 \n", dog9.name, dog9.payout);
    
        scanf("%d", &dogChoice2);
    
        printf("How much would you like to bet? \n");
        scanf("%lf", &usersBet);
        
        printf("You choose dog #%d \n", dogChoice2);
        printf("Let the race begin! \n");
        
      //For loop for the winningDogNumber variable
      for( i = 0 ; i < 1 ; i++ ) {
          dogOddsWinningNumber = ( rand() %100) + 1 ;
        }
        
        //Displays the winningDogNumber to double chech the if statements below are working
        // printf("%d \n", dogOddsWinningNumber);
        
        //For the odds of winning i had a random number pick out of 100 and the dogs were given a number range based on their odds of winning out of 100
        if(dogOddsWinningNumber == 1){
            winningDog2 = 1;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog1.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 40){
            winningDog2 = 1;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog1.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 41){
            winningDog2 = 2;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog2.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 50){
            winningDog2 = 2;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog2.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 51){
            winningDog2 = 3;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog3.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 58){
            winningDog2 = 3;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog3.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 59){
            winningDog2 = 4;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog1){
                raceWinMoney[1] = usersBet * dog4.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 64){
            winningDog2 = 4;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog4.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 65){
            winningDog2 = 5;
             printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog5.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 66){
            winningDog2 = 6;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog6.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 69){
            winningDog2 = 6;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog6.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 70){
            winningDog2 = 7;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog7.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 77){
            winningDog2 = 7;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog7.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 78){
            winningDog2 = 8;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog8.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 87){
            winningDog2 = 8;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog8.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber == 88){
            winningDog2 = 9;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog9.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        else if (dogOddsWinningNumber <= 100){
            winningDog2 = 9;
            printf("Dog #%d won the race! \n", winningDog1);
            
            if (dogChoice2 == winningDog2){
                raceWinMoney[1] = usersBet * dog9.payout;
                printf("You won $%d \n", raceWinMoney[1]);
                
                  raceResults[1] = 'W';
            }
            else{
                printf("You lost \n");
                
                raceResults[1] = 'L';
            }
        }
        printf("\n");
    }
    
    //I wanted the user to finsih all four races before they recived their results
    else if(userChoice == 'R'){
        
        printf("Please race all the dogs first. \n");
    }
    
    //else if statment for the user to quit the program
   else if(userChoice == 'L'){
        
        printf("You're now leaving the dog track. \n");
        printf("Have a nice day, Goodbye. \n");
        exit(0);
   }

//=========================================================================================================//
//=========================================================================================================//
    
    //Display Menu
     printf("Welcome to the dog track. \n");
     printf("Please choose from the menu below. \n");
     printf("Please only use CAPITAIL letters \n");
     printf("*** Dog Track *** \n");
     printf("[G] Bet \n");
     printf("[R] Results \n");
     printf("[L] Leave \n");
     scanf(" %c", &userChoice);
     
    //If statement for the users choice of the display menu
     if (userChoice == 'G'){
         
         //display menu for all the dogs
         printf("Please chose 1 dog to place a bet on. \n");
         printf("#1)%s     %d : 1 \n", dog1 .name, dog1.payout);
         printf("#2)%s      %d : 1 \n", dog2.name, dog2.payout);
         printf("#3)%s     %d : 1 \n", dog3.name, dog3.payout);
         printf("#4)%s      %d : 1 \n", dog4.name, dog4.payout);
         printf("#5)%s      %d : 1 \n", dog5.name, dog5.payout);
         printf("#6)%s      %d : 1 \n", dog6.name, dog6.payout);
         printf("#7)%s        %d : 1 \n", dog7.name, dog7.payout);
         printf("#8)%s   %d : 1 \n", dog8.name, dog8.payout);
         printf("#9)%s  %d : 1 \n", dog9.name, dog9.payout);
     
         scanf("%d", &dogChoice3);
     
         //asks for betting money amount from user
         printf("How much would you like to bet? \n");
         scanf("%lf", &usersBet);
         
         printf("You choose dog #%d \n", dogChoice3);
         printf("Let the race begin! \n");
      
        //for loop to determine the winningDogNumber
       for( i = 0 ; i < 1 ; i++ ) {
           dogOddsWinningNumber = ( rand() %100) + 1 ;
         }
         
         //displays the winningDogNumber to ensure the if statments below are working properly
         // printf("%d \n", dogOddsWinningNumber);
         
         //If statemnts based on the winningDogNumber and the number the dogs are correlated with
         if(dogOddsWinningNumber == 1){
             winningDog3 = 1;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 40){
             winningDog3 = 1;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 41){
             winningDog3 = 2;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 50){
             winningDog3 = 2;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 51){
             winningDog3 = 3;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 58){
             winningDog3 = 3;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 59){
             winningDog3 = 4;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 64){
             winningDog3 = 4;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                 raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 65){
             winningDog3 = 5;
              printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog5.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 66){
             winningDog3 = 6;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 69){
             winningDog3 = 6;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog2){
                 raceWinMoney[2] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 70){
             winningDog3 = 7;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 77){
             winningDog3 = 7;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 78){
             winningDog3 = 8;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 87){
             winningDog3 = 8;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 88){
             winningDog3 = 9;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 100){
             winningDog3 = 9;
             printf("Dog #%d won the race! \n", winningDog3);
             
             if (dogChoice3 == winningDog3){
                 raceWinMoney[2] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[2]);
                 
                   raceResults[2] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[2] = 'L';
             }
         }
         
         printf("\n");
         
     }

    //I wanted the user to finish all the races first before getting the results
    else if(userChoice == 'R'){
            
        printf("Please race all the dogs first. \n");
     }
     
    //else if statemnt to end the program
    else if(userChoice == 'L'){
         
         printf("You're now leaving the dog track. \n");
         printf("Have a nice day, Goodbye. \n");
         exit(0);
    }
    
//==========================================================================================================//
//==========================================================================================================//

    //display menu
     printf("Welcome to the dog track. \n");
     printf("Please choose from the menu below. \n");
     printf("Please only use CAPITAIL letters \n");
     printf("*** Dog Track *** \n");
     printf("[G] Bet \n");
     printf("[R] Results \n");
     printf("[L] Leave \n");
     scanf(" %c", &userChoice);
     
    //If statement based on the users chice from the menu above
     if (userChoice == 'G'){
         
         //Display menu for all the dogs
         printf("Please chose 1 dog to place a bet on. \n");
         printf("#1)%s     %d : 1 \n", dog1 .name, dog1.payout);
         printf("#2)%s      %d : 1 \n", dog2.name, dog2.payout);
         printf("#3)%s     %d : 1 \n", dog3.name, dog3.payout);
         printf("#4)%s      %d : 1 \n", dog4.name, dog4.payout);
         printf("#5)%s      %d : 1 \n", dog5.name, dog5.payout);
         printf("#6)%s      %d : 1 \n", dog6.name, dog6.payout);
         printf("#7)%s        %d : 1 \n", dog7.name, dog7.payout);
         printf("#8)%s   %d : 1 \n", dog8.name, dog8.payout);
         printf("#9)%s  %d : 1 \n", dog9.name, dog9.payout);
     
         scanf("%d", &dogChoice4);
     
         printf("How much would you like to bet? \n");
         scanf("%lf", &usersBet);
         
         printf("You choose dog #%d \n", dogChoice4);
         printf("Let the race begin! \n");
        
        //Generates a winningDogNumber
       for( i = 0 ; i < 1 ; i++ ) {
           dogOddsWinningNumber = ( rand() %100) + 1 ;
         }
         
         //displays the winngingDogNumber to ensure the if statements below are working properly
         // printf("%d \n", dogOddsWinningNumber);
         
         //If statement for the winningDogNumber and what number the dogs a assigned to
         if(dogOddsWinningNumber == 1){
             winningDog4 = 1;
             printf("Dog #%d won the race! \n", winningDog2);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 40){
             winningDog4 = 1;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[2] = usersBet * dog1.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 41){
             winningDog4 = 2;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 50){
             winningDog4 = 2;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog2.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 51){
             winningDog4 = 3;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 58){
             winningDog4 = 3;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog3.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 59){
             winningDog4 = 4;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 64){
             winningDog4 = 4;
             printf("Dog #%d won the race! \n", winningDog2);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog4.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                 raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 65){
             winningDog4 = 5;
              printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog5.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 66){
             winningDog4 = 6;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 69){
             winningDog4 = 6;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog6.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 70){
             winningDog4 = 7;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 77){
             winningDog4 = 7;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog7.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 78){
             winningDog4 = 8;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 87){
             winningDog4 = 8;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog8.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber == 88){
             winningDog4 = 9;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3] = 'L';
             }
         }
         else if (dogOddsWinningNumber <= 100){
             winningDog4 = 9;
             printf("Dog #%d won the race! \n", winningDog4);
             
             if (dogChoice4 == winningDog4){
                 raceWinMoney[3] = usersBet * dog9.payout;
                 printf("You won $%d \n", raceWinMoney[3]);
                 
                   raceResults[3] = 'W';
             }
             else{
                 printf("You lost \n");
                 
                 raceResults[3]= 'L';
             }
         }
         
         printf("\n");
         
     }

    //I wanted the user to finish all the races first then display the results
    else if(userChoice == 'R'){
            
        printf("Please race all the dogs first. \n");
     }
    
    //Lets the user quit the program
    else if(userChoice == 'L'){
         
         printf("You're now leaving the dog track. \n");
         printf("Have a nice day, Goodbye. \n");
         exit(0);
    }
    
//==========================================================================================================//
//==========================================================================================================//
    
    //Displays all the results from the 4 races
    printf("The final results of all the races were. \n");
    printf("Race #1) Result: %c \n", raceResults[0]);
    printf("Race #2) Result: %c \n", raceResults[1]);
    printf("Race #3) Result: %c \n", raceResults[2]);
    printf("Race #4) Result: %c \n", raceResults[3]);
    
    printf("Enjoy your day. \n");
    
    system ("pause");
}
