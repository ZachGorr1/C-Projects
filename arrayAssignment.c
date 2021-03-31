#include <stdio.h>
#include <stdlib.h>

//Prototype calls of functions from below.
char userInputFunction1(char inputVariable);
char userInputFunction2(char inputVariable);
int sumOfDepositsFunction();
//extern int sum = 0;
//==========================================================================================================//

//Begining banking menu, has all the options for the user.

void bankingMenu_1(){
    
    
    printf("*** Banking Menu *** \n");
    printf("[M]ake a new deposit \n");
    printf("[S]um of all deposits \n");
    printf("[D]isplay a list of deposits from highest to lowest \n");
    printf("[A]verage of deposits \n");
    printf("[L]owest deposit made \n");
    printf("[Q]uit the program \n");
    printf("\n");
    
    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
    
}
//==========================================================================================================//

//Secondary banking menu has all but one option for the user.

void bankingMenu_2(){
        
    printf("*** Banking Menu *** \n");
    printf("[S]um of all deposits \n");
    printf("[D]isplay a list of deposits from highest to lowest \n");
    printf("[A]verage of deposits \n");
    printf("[L]owest deposit made \n");
    printf("[Q]uit the program \n");
    printf("\n");

    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
    }
//==========================================================================================================//

//Third banking menu has all but two options for the user.

void bankingMenu_3(){
    
    printf("\n");
    printf("*** Banking Menu *** \n");
    printf("[D]isplay a list of deposits from highest to lowest \n");
    printf("[A]verage of deposits \n");
    printf("[L]owest deposit made \n");
    printf("[Q]uit the program \n");
    printf("\n");

    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
}
//==========================================================================================================//

//Fourth banking menu has all but three options for the user.

void bankingMenu_4 (){
        
    printf("*** Banking Menu *** \n");
    printf("[A]verage of deposits \n");
    printf("[L]owest deposit made \n");
    printf("[Q]uit the program \n");
    printf("\n");

    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
}
//==========================================================================================================//

//Fifth banking menu has all but four options for the user.

void bankingMenu_5(){
        
    printf("*** Banking Menu *** \n");
    printf("[L]owest deposit made \n");
    printf("[Q]uit the program \n");
    printf("\n");

      
    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
      }
//==========================================================================================================//

//Sixth banking menu has only Quit option for the user.

void bankingMenu_6(){
    
    printf("*** Banking Menu *** \n");
    printf("[Q]uit the program \n");
    printf("\n");

      
    printf("Please make a selection from the menu above. \n");
    printf("Please only use uppercase letters for selections. \n");
}
//==========================================================================================================//

//Has the user enter the number of deposits they want to make.

int numberOfDeposits(int *numberOfDeposits){
    
    printf("How many deposits would you like to make. \n");
    scanf("%d",numberOfDeposits);

    return 0;
}
//==========================================================================================================//

//Has the user enter the amount of each deposit into an array, then adds all the users depoists together.

static int amountDeposited(int sum){
    
    int i;
    int userInputNumberOfDeposits;
    int userInputAmountDeposited[i];
    
    //Calls function from above, and saves the user input.
    numberOfDeposits(&userInputNumberOfDeposits);
    
    //Lets user enter the amount they want to make for each deposit.
    for (i= 0; i < userInputNumberOfDeposits; i++){
        printf("Please enter how much you want to deposit. \n");
        scanf("%d", &userInputAmountDeposited[i]);
    }
    
    //Lets the user know they're done making deposits.
    printf("You are now finished making all your deposits. \n");
    
    //Adds all the users deposits together.
    for ( i = 0; i < userInputNumberOfDeposits; i++){
        sum += userInputAmountDeposited[i];
    }
    
    return 0;
}
//==========================================================================================================//
int displayListHighLow(){
    
    return 0;
}
//==========================================================================================================//
int main(){
    
    char userInput1;
    char userInput2;
    char M = 'M';
    char Q = 'Q';
    char S = 'S';
    char D = 'D';
    char A = 'A';
    char L = 'L';
    int *userSum;

    //Calls the first banking menu.
    bankingMenu_1();

    //Lets user input what bankning menu option they want to do.
    scanf("%s", &userInput1);
        
    
    //If statement that decides what to do based on user input from the first banking menu.
        if (userInput1 == M){
            
        //If user input is M it calls amountDeposited function and attemps to save the total sum for the user.
           amountDeposited(userSum);
        }
    
    //If user input is Q, the program quits itself.
        else if(userInput1 == Q) {
            printf("You are now quitting the program. \n");
            exit(0);
        }
    
    //If user input is none of the options it has the user re input their choice.
        else
            printf("Make a new choice. \n");
    
    //Calls banking menu number two.
    bankingMenu_2();
    
    //Lets user input their choice from bankning menu two.
    scanf("%s", &userInput2);
    
    //If statement for what the user iniput is
        if(userInput2 == S){
        //If user input is S i tried to have the user deposit sum saved and just recall the varible.
            printf("The total of your deposits is: %d \n", &userSum);
        }
        else if(userInput2 == D){
        
        }
        else if(userInput2 == A){
        
        }
        else if(userInput2 == L){
        
        }
    //If user input is Q, program quits itself.
        else if(userInput2 == Q){
            printf("You are now quitting the function. \n");
            exit(0);
        }
        else
            printf("Please make a new choice. \n");

    system("pause");
}
