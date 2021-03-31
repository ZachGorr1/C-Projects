#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//structure format for user input
struct PERSON {
    
    char firstName[25];
    char lastName[25];
    int birthdayMonth;
    int birthdayDay;
    int birthdayYear;
    char gender[1];
    double income;

};
 
int main(){

    
    struct PERSON person1, person2, person3;
    int userInput;
    
    //Explains to the user how to use program and how many people the may enter
    
    printf("Would you like to enter in a persons information? \n");
    printf("You may only enter up to three people at a time. \n");
    printf("Enter 1 for YES and 0 for NO. \n");
    scanf("%d", &userInput);
    
    //Determines wether the user wants to enter in a person or not
    if(userInput == 1){
    
    //Let's the user enter in their first and last name
    printf("Please eneter in your first name. \n");
    scanf("%s", person1.firstName);
    printf("Please enter in your last name. \n");
    scanf("%s", person1.lastName);
//==========================================================================================================//
    
    //Let's user enter in their birthday month
    printf("Please enter the month number you were born on. \n");
    scanf("%02d", &person1.birthdayMonth);
    
    //Enusres user enters in a vaild month
    while(person1.birthdayMonth < 1)
    {
        printf("Please enter in the month number you were born in. \n");
        scanf("%d", &person1.birthdayMonth);
    }
    
    while(person1.birthdayMonth > 12)
      {
          printf("Please enter in the month number you were born in. \n");
          scanf("%d", &person1.birthdayMonth);
      }
//==========================================================================================================//
    
    //Ensures user enters in the correct day based on the month they were born in
    printf("Please enter the day number you were born on. \n");
    scanf("%d", &person1.birthdayDay);
    
    while(person1.birthdayDay < 1){
        
        printf("Please enter the day number you were born on. \n");
        scanf("%d", &person1.birthdayDay);
    }
    
    if(person1.birthdayMonth%2 == 0){
        while(person1.birthdayDay > 30){
            
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
    else if(person1.birthdayMonth%2 != 0){
        while(person1.birthdayDay > 31){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
    
    if(person1.birthdayMonth == 02){
        while(person1.birthdayDay > 28){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
//==========================================================================================================//
    
    //Lets user to enter in the year they were bron in
    printf("Please eneter the full year you were born in. \n");
    scanf("%d", &person1.birthdayYear);
    
    while(person1.birthdayYear < 1900){
        
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
    
    while(person1.birthdayYear > 2020){
        
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
//==========================================================================================================//
    
        
    //Let's user enter in their gender baded on project requirements
    if(person1.gender != "M"){
    
    printf("Please eneter in what gender you are. \n");
    printf("Please only user CAPITAL letters. \n");
    printf("Your options are: \n");
    printf("M = Male \n");
    printf("F = Female \n");
    printf("O = Other \n");
    scanf("%s", person1.gender);
    }
    
    //else statment for female gender
    else if(person1.gender != "F"){
        
        printf("Please eneter in what gender you are. \n");
        printf("Please only user CAPITAL letters. \n");
        printf("Your options are: \n");
        printf("M = Male \n");
        printf("F = Female \n");
        printf("O = Other \n");
        scanf("%s", person1.gender);
    }
    
    //else statemnt for other gender
    else if(person1.gender != "O"){
           
           printf("Please eneter in what gender you are. \n");
           printf("Please only user CAPITAL letters. \n");
           printf("Your options are: \n");
           printf("M = Male \n");
           printf("F = Female \n");
           printf("O = Other \n");
           scanf("%s", person1.gender);
       }
//==========================================================================================================//
    
    //Let's user enter in their income
    printf("Please eneter in your Anual Income. \n");
    scanf("%lf", &person1.income);
    
    //Ensures user enters in a vaild income based on project
    if(person1.income < 1){
        
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
        
    }
    
    else if(person1.income > 1000000){
        
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
    
    }
//==========================================================================================================//
    
    //Displays all the users information they've entered
    printf("\n");
    printf("Here is all the information you just entered in for person #1. \n");
    printf("First Name: %s \n", person1.firstName);
    printf("Last Name: %s \n", person1.lastName);
    printf("Date Of Birth: %02d/%02d/%d \n", person1.birthdayMonth, person1.birthdayDay, person1.birthdayYear);
    printf("Gender: %s \n", &person1.gender);
    printf("Anual Income: %.2lf \n", person1.income);
    
    printf("\n");
    printf("\n");
    }
//==========================================================================================================//
   
    //else statement when user doesnt want to enter in information
    else if(userInput == 0){
        
        printf("You are now quitting the program. \n");
        exit(0);
    }
//==========================================================================================================//
   
    //Asks if the usser wants to enter another person
    printf("Would you like to enter in a persons information? \n");
    printf("You may enter in two more people. \n");
    printf("Enter 1 for YES and 0 for NO. \n");
    scanf("%d", &userInput);
    
    //determines if the user wants to enter more information or not
    if(userInput == 1){
    
    //Let's user enter in their name
    printf("Please eneter in your first name. \n");
    scanf("%s", person1.firstName);
    printf("Please enter in your last name. \n");
    scanf("%s", person1.lastName);
//==========================================================================================================//
    
    //Let's user enter in their date of birth
    printf("Please enter the month number you were born on. \n");
    scanf("%02d", &person1.birthdayMonth);
    
    //Ensures the user enters in the correct months
    while(person1.birthdayMonth < 1)
    {
        printf("Please enter in the month number you were born in. \n");
        scanf("%d", &person1.birthdayMonth);
    }
        
    while(person1.birthdayMonth > 12)
        {
            printf("Please enter in the month number you were born in. \n");
            scanf("%d", &person1.birthdayMonth);
        }
//=====================================================================================================//
   
    //Let's user enter in the day they were born
    printf("Please enter the day number you were born on. \n");
    scanf("%d", &person1.birthdayDay);
    
    //ensures the user enters in the correct day based on month born
    while(person1.birthdayDay < 1){
            
        printf("Please enter the day number you were born on. \n");
        scanf("%d", &person1.birthdayDay);
    }
        
    if(person1.birthdayMonth%2 == 0){
        while(person1.birthdayDay > 30){
                
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
    else if(person1.birthdayMonth%2 != 0){
        while(person1.birthdayDay > 31){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
        
    if(person1.birthdayMonth == 02){
        while(person1.birthdayDay > 28){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
//==========================================================================================================//
        
    //Let's user enter in the year they were born
    printf("Please eneter the full year you were born in. \n");
    scanf("%d", &person1.birthdayYear);
        
    while(person1.birthdayYear < 1900){
            
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
    
    while(person1.birthdayYear > 2020){
            
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
//==========================================================================================================//
    
    //Let's user enter in their gender
    if(person1.gender != "M"){
        
    printf("Please eneter in what gender you are. \n");
    printf("Please only user CAPITAL letters. \n");
    printf("Your options are: \n");
    printf("M = Male \n");
    printf("F = Female \n");
    printf("O = Other \n");
    scanf("%s", person1.gender);
    }
        
    else if(person1.gender != "F"){
            
        printf("Please eneter in what gender you are. \n");
        printf("Please only user CAPITAL letters. \n");
        printf("Your options are: \n");
        printf("M = Male \n");
        printf("F = Female \n");
        printf("O = Other \n");
        scanf("%s", person1.gender);
    }
        
    else if(person1.gender != "O"){
               
        printf("Please eneter in what gender you are. \n");
        printf("Please only user CAPITAL letters. \n");
        printf("Your options are: \n");
        printf("M = Male \n");
        printf("F = Female \n");
        printf("O = Other \n");
        scanf("%s", person1.gender);
    }
//==========================================================================================================//
        
    //Let's user enter in their anual income
    printf("Please eneter in your Anual Income. \n");
    scanf("%lf", &person1.income);
        
    if(person1.income < 1){
            
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
            
    }
        
    else if(person1.income > 1000000){
            
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
        
    }
//======================================================================================================//
    
        
    //Displays all their information they entered
    printf("\n");
    printf("Here is all the information you entered for person #2. \n");
    printf("First Name: %s \n", person1.firstName);
    printf("Last Name: %s \n", person1.lastName);
    printf("Date Of Birth: %02d/%02d/%d \n", person1.birthdayMonth, person1.birthdayDay, person1.birthdayYear);
    printf("Gender: %s \n", &person1.gender);
    printf("Anual Income: %.2lf \n", person1.income);
        
    printf("\n");
    printf("\n");
    }
//==========================================================================================================//
       
        //else if the user doesn't want to enter in more information
        else if(userInput == 0){
            
            printf("You are now quitting the program. \n");
            exit(0);
        }
//==========================================================================================================//
    
    //Asks if the user wants to enter in more infromation
    printf("Would you like to enter in a persons information? \n");
    printf("You may only enter in one more person. \n");
    printf("Enter 1 for YES and 0 for NO. \n");
    scanf("%d", &userInput);
     
    
    if(userInput == 1){
    //Asks the user for their name
    printf("Please eneter in your first name. \n");
    scanf("%s", person1.firstName);
    printf("Please enter in your last name. \n");
    scanf("%s", person1.lastName);
//==========================================================================================================//
   
    //Let's user enter in the month their born in
    printf("Please enter the month number you were born on. \n");
    scanf("%02d", &person1.birthdayMonth);
        
    while(person1.birthdayMonth < 1)
    {
        printf("Please enter in the month number you were born in. \n");
        scanf("%d", &person1.birthdayMonth);
    }
        
    while(person1.birthdayMonth > 12)
        {
            printf("Please enter in the month number you were born in. \n");
            scanf("%d", &person1.birthdayMonth);
        }
//==========================================================================================================//
   
    //Let's user to enter the day they were born
    printf("Please enter the day number you were born on. \n");
    scanf("%d", &person1.birthdayDay);
        
    while(person1.birthdayDay < 1){
            
        printf("Please enter the day number you were born on. \n");
        scanf("%d", &person1.birthdayDay);
    }
        
    if(person1.birthdayMonth%2 == 0){
        while(person1.birthdayDay > 30){
                
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
    else if(person1.birthdayMonth%2 != 0){
        while(person1.birthdayDay > 31){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
        
    if(person1.birthdayMonth == 02){
        while(person1.birthdayDay > 28){
            printf("Please enter the day number you were born on. \n");
            scanf("%d", &person1.birthdayDay);
        }
    }
//==========================================================================================================//
    
    //Let's user enter in the year they were born
    printf("Please eneter the full year you were born in. \n");
    scanf("%d", &person1.birthdayYear);
        
    while(person1.birthdayYear < 1900){
            
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
        
    while(person1.birthdayYear > 2020){
            
        printf("Please eneter the full year you were born in. \n");
        scanf("%d", &person1.birthdayYear);
    }
//==========================================================================================================//
    
    //Let's the user to enter in their gender
    if(person1.gender != "M"){
        
    printf("Please eneter in what gender you are. \n");
    printf("Please only user CAPITAL letters. \n");
    printf("Your options are: \n");
    printf("M = Male \n");
    printf("F = Female \n");
    printf("O = Other \n");
    scanf("%s", person1.gender);
    }
        
    else if(person1.gender != "F"){
            
    printf("Please eneter in what gender you are. \n");
    printf("Please only user CAPITAL letters. \n");
    printf("Your options are: \n");
    printf("M = Male \n");
    printf("F = Female \n");
    printf("O = Other \n");
    scanf("%s", person1.gender);
    }
        
    else if(person1.gender != "O"){
               
        printf("Please eneter in what gender you are. \n");
        printf("Please only user CAPITAL letters. \n");
        printf("Your options are: \n");
        printf("M = Male \n");
        printf("F = Female \n");
        printf("O = Other \n");
        scanf("%s", person1.gender);
        }
//==========================================================================================================//
    
    //Let's user enter in their anual income
    printf("Please eneter in your Anual Income. \n");
    scanf("%lf", &person1.income);
        
    if(person1.income < 1){
            
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
            
    }
        
    else if(person1.income > 1000000){
            
        printf("Please eneter in your Anual Income. \n");
        scanf("%lf", &person1.income);
        
    }
//==========================================================================================================//
    
    //Displays all the users information
    printf("\n");
    printf("Here is all the information you entered in for person #3. \n");
    printf("First Name: %s \n", person1.firstName);
    printf("Last Name: %s \n", person1.lastName);
    printf("Date Of Birth: %02d/%02d/%d \n", person1.birthdayMonth, person1.birthdayDay,
           person1.birthdayYear);
    printf("Gender: %s \n", &person1.gender);
    printf("Anual Income: %.2lf \n", person1.income);
        
    printf("\n");
    printf("\n");
    }
//==========================================================================================================//
       
        //Quits the program if they don't want to enter in more information
        else if(userInput == 0){
            
            printf("You are now quitting the program. \n");
            exit(0);
        }
//==========================================================================================================//
    system("pause");
    

}
