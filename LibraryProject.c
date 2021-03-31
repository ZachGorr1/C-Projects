//
//  main.c
//  Library Project
//
//  Created by Zach Gorr on 12/16/20.
//  Copyright © 2020 Zach Gorr. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BOOK{
    char title[100];
    char author[100];
    char publisher[100];
    int idNumber;
    int printDateMonth;
    int printDateDay;
    int printDateYear;
    
    struct BOOK* next;
    
};

struct BOOK firstBook;
struct BOOK addBook;
struct BOOK removeBook;
struct BOOK tempBook;


void firstBookInList(){
    
    printf("What is the title of the book? \n");
    scanf("%[^\n]%*c", firstBook.title);
    
    printf("Who is the Author of the book? \n");
    scanf("%[^\n]%*c", firstBook.author);
    
    printf("Who is the Publisher for this book? \n");
    scanf("%[^\n]%*c", firstBook.publisher);
    
    printf("What is the I.D. number for this book? \n");
    scanf("%d", &firstBook.idNumber);
    
    printf("Lastly, what is the Print Date for this book? \n");
    printf("Enter the dates as MM/DD/YYYY \n");
    scanf("%d", &firstBook.printDateMonth);
    scanf("%d", &firstBook.printDateDay);
    scanf("%d", &firstBook.printDateYear);

    
 // Checks to see if the information is saved within the struct firstBook.
 /*
    printf("\n");
    printf("Book #1 Title: %s \n", firstBook.title);
    printf("Book #1 Author: %s \n", firstBook.author);
    printf("Book #1 I.D. #: %d \n", firstBook.idNumber);
    printf("Book #1 Print Date: %d/%d/%d \n", firstBook.printDateMonth, firstBook.printDateDay, firstBook.printDateYear);
    printf("Book #1 Publisher Name: %s \n", firstBook.publisher);
   */
};

int main(){
    
    printf("Welcome to the Library, what would you like to do today? \n");
    printf("First thing we must do is add a book. \n");
    printf("Please list the following information about your book. \n");
    
    firstBookInList();
    
    system("pause");
}

