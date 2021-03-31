#include <stdio.h>
#include <stdlib.h>


//Function for the Movie Menu.
int movieMenu(){
int costumerChoice;
int result;

// Moive Menu choices.
printf("************* Movie  Menu **************\n");
printf("****************************************\n");
printf("* 1: Star Wars: The rise of Skywalker  *\n");
printf("* 2: Frozen II                         *\n");
printf("* 3: Ratatouille                       *\n");
printf("* 4: Avatar                            *\n");
printf("* 5: Avengers: End Game                *\n");
printf("* 6: Indiana Jones                     *\n");
printf("****************************************\n");

//Letting the user enter which movie they want to watch.
printf("\nPlease chose a moive from the choices above.\n");
scanf("%d", &costumerChoice);

//If statment making sure that the user enters the number of movies provided.
if (costumerChoice > 6 || costumerChoice < 0){
    printf("That is not a vaild choice, please chose another. \n");
    scanf("%d", &costumerChoice);
}

//Presenting the user with what movie they chose.
printf("Your moive choice is: %d \n", costumerChoice);

if (costumerChoice == 1){
    printf("Star Wars: The rise of Skywalker \n");
}
else if (costumerChoice == 2){
    printf("Frozen II \n");
}
else if (costumerChoice == 3){
    printf("Ratatouille \n");
}
else if (costumerChoice == 4){
    printf("Avatar \n");
}
else if (costumerChoice == 5){
    printf("Avengers: End Game \n");
}
else if (costumerChoice == 6){
    printf("Indiana Jones \n");
}
return result;
}
/*=================================================================================================================*/

//Function Menu for Number of Guests and Ages
int guestAgesAndTicketPrices(){
    int result;
    int i;
    int numberOfTikcets;
    int childPrice = 8;
    int adultPrice = 12;
    int totalTikcetPrice = 0;
    int guestAges[i];
    
    //Asks how many guests will be veiwing the film.
    printf("How many guests will be veiwing the film? \n");
    scanf("%d", &numberOfTikcets);

    //User enters in all the ages of guest.
    printf("Enter all the ages of the guests veiwing the film. \n");
    for (i = 0; i < numberOfTikcets; i++){
        scanf("%d", &guestAges[i]);
        
        //Decides what price the guest tickets will be based on guest ages.
        if (guestAges[i] <= 13){
            printf("The ticket price for this person is $%d \n", childPrice);
            guestAges[i] = 8;
        }
        else
        {
            printf("The ticket price for this person is $%d \n", adultPrice);
            guestAges[i] = 12;
        }
    }
    
    //Prices out how much the total for all the tickets is.
    for (i = 0; i < numberOfTikcets; i++){
        totalTikcetPrice += guestAges[i];
    }
    //Tells the user how much the total price is.
    printf("The total price of all thickets is $%d \n", totalTikcetPrice);
    return result;
}
/*=================================================================================================================*/
 
//Function Menu for Food Menu.
int foodMenu(){
     int result, i, numberOfItems, foodMenuYesOrNo;
     double skittles, hotdog, nachos, water;
     double large, medium, small;
     int userSize1, userSize2;
     double totalFoodCost, userChoice[i];
     double totalTripCost;
     int totalTicketPrice;
     
    //Display of menu items sold.
     printf("**** Food Menu ****\n");
     printf("*******************\n");
     printf("* 1 Popcorn       *\n");
     printf("* 2 Hotdogs       *\n");
     printf("* 3 Nachos        *\n");
     printf("* 4 Skittles      *\n");
     printf("* 5 Soda          *\n");
     printf("* 6 Water         *\n");
     printf("*                 *\n");
     printf("* Sizes           *\n");
     printf("* 7 Large         *\n");
     printf("* 8 Medium        *\n");
     printf("* 9 Small         *\n");
     printf("*******************\n");
   
    //Prices of the Food Items and Sizes.
     skittles = 1.89;
     hotdog = 1.59;
     nachos = 2.09;
     water = 1.39;
     
     large = 2.79;
     medium = 2.04;
     small = 1.89;
     
    //Asks the user if they would like anything to eat.
     printf("Would you like something from the Food Court? \n");
     printf("Enter 1 for Yes and 0 for No. \n");
     scanf("%d", &foodMenuYesOrNo);
     
    //Determines if the user wanted anything to eat.
     if (foodMenuYesOrNo == 0){
         printf("Okay, Thank you. \n");
         printf("Total Food cost is: $0 \n");
     }
     if (foodMenuYesOrNo == 1){
         //Asks how many items do they want
         printf("How many items do you want? \n");
         scanf("%lf", &userChoice[i]);
         
        //Lets the user eneter in how many items they want and what they want.
     for (i = 0; i < numberOfItems; i++){
     scanf("%lf", &userChoice[i]);
     
     //Determines what Menu Items the user would like.
     if (userChoice[i] == 1){
         //Determines what size the user would like.
         printf("What size do you want your Popcorn? \n");
         scanf("%d", &userSize1);
         if(userSize1 == 7){
             printf("The cost of a large Popcorn is $%.2lf \n", large);
             userChoice[i] = large;
         }
         else if (userChoice[i] == 8){
             printf("The cost of a medium Popcorn is $%.2lf \n", medium);
             userChoice[i] = medium;
         }
         else if (userSize1 == 9){
             printf("The cost of a small Popcorn is $%.2lf \n", small);
             userChoice[i] = small;
         }
     }
     else if (userChoice[i] == 2){
         printf("The cost of a Hotdog is $%.2lf \n", hotdog);
         userChoice[i] = hotdog;
     }
     else if (userChoice[i] == 3){
         printf("The cost of Nachos is $%.2lf \n", nachos);
         userChoice[i] = nachos;
     }
     else if (userChoice[i] == 4){
         printf("The cost of skittles is $%.2lf \n", skittles);
         userChoice[i] = skittles;
     }
     else if (userChoice[i] == 5){
         printf("What size do you want your Soda? \n");
         scanf("%d", &userSize2);
         //Determines what size the user wants.
         if (userSize2 == 7){
             printf("The cost of a large Soda is $%.2lf \n", large);
             userChoice[i] = large;
         }
         else if (userSize2 == 8){
             printf("The cost of a meduim Soda is $%.2lf \n", medium);
             userChoice[i] = medium;
         }
         else if (userSize2 == 9){
             printf("The cost of a small Soda is $%.2lf \n", small);
             userChoice[i] = small;
     }
     else if (userChoice[i] == 6){
        printf("The cost of a water is $%.2lf \n", water);
         userChoice[i] = water;
        }
     }
     
    //Determines the total cost of all the items the user wants.
     totalFoodCost += userChoice[i];
     
    //Displays the total cost of all the items the user wants.
     printf("The total cost of food is $%.2lf \n", userChoice[i]);
     
    //Calls the total ticket price for a different function.
     int guestAgesAndTicketPrices(int totalTicketPrice);
     
     //Determines the total cost of the trip, including the tickets and the food.
     totalTripCost = totalTicketPrice + userChoice[i];
     
     //Displays the total price of the trip.
     printf("The total cost of everything is $%.2lf \n", totalTripCost);
     
    return result;
}
/*=================================================================================================================*/

int main(){
    
    
    int returnedMovieMenu;
    int returnedGuestAgesAndTicketPrices;
    int returnedTheaterSeats;
    int returnedFoodMenu;

    //Calls the Movie Menu Function.
    returnedMovieMenu = movieMenu();
    //Calls the Tickets and Ages Menu Function.
    returnedGuestAgesAndTicketPrices = guestAgesAndTicketPrices();
    //Calls the Food Menu Function.
    returnedFoodMenu = foodMenu();
  
  system ("pause");
}
