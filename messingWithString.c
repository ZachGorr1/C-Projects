//
//  main.c
//  MessingWithStrings
//
//  Created by Zach Gorr on 9/29/20.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int i, k, j = 0, a = 0;
    int userInput;
    int length;
    char userString[100];
    char reversedUserString[100];
    
    //Asks user if they want to enter in a string.
    printf("Would you like to enter a string? \n");
    printf("Enter 1 for YES. \n");
    printf("Enter 0 for NO . \n");
    
    //do while loop for user error correction.
    do{
    scanf("%d", &userInput);
        if(userInput != 1 || 0){
            printf("Please enter a new selection. \n");
        }
    }
    while(userInput != 1 || 0);
    
    //If statment based on user choice "YES".
    if(userInput == 1){
            
        //Lets user enter in their string.
        printf("Please enter in your string. \n");
        printf("NOTE: Max Charater amount is 100. \n");
        
        //lets user input a string, i couldnt get it to input a sentence.
        //I tried gets() and fgets() also different variations of scanf("%[^\n]");
        scanf("%99s", userString);
        
        //prints the users strings forward
        printf("%s\n", userString);
        
        //The length of the users string
        length = strlen(userString);
        
        //puts the user sting in reverse order
        for(i = 0; i < length; i++){
            printf("%c",userString[i]);
            printf("\n");
        }
       for(i = 0; userString[i] != '\0'; i++)
          {
              k = i-1;
          }
          for(j = 0; j <= i-1; j++)
          {
              reversedUserString[j] = userString[k];
              k--;
          }
        //prints the users string in reverese order
        printf("%s\n", reversedUserString);
        
        //puts the users string into a pyrimid
        for(i = 0; i < length; i++){
            
            for(j = 0; j < length - 1; j++){
                printf(" ");
            }
            for (k = 0; k <= i; k++){
                printf("%2c", userString[a++]);
                if(userString[a] == '\0') a =0;
            }
            printf("\n");
        }
    }
    
    //if option for the user to quit the program
    else if (userInput == 0){
        
        printf("You are now quitting the program. \n");
        exit(0);
    }

    system("pause");
}
