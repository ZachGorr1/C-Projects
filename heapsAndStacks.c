//
//  main.c
//  Heaps And Stacks
//
//  Created by Zach Gorr on 12/2/20.
//  Copyright © 2020 Zach Gorr. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   
//struct to be stored on the stack
    struct BOOK{
        char author[50];
        int ISBN;
        int numberOfPages;
        
    };

//struct to be stored on the heap
    struct DynamicBook{
        char author[50];
        int ISBN;
        int numberOfPages;
        
        struct DynamicBook *next;
    };

//struct variables
    struct BOOK bookList[1000];
    struct DynamicBook dynamicBookList[1000];
    struct DynamicBook *first;
    struct DynamicBook *new;
    struct DynamicBook *current;
    
//welcome messgae to let you enter in 10 books.
    printf("Welcome to the Library. \n");
    printf("Please Enter in the information of your Books. \n");
    printf("There is a MAX of 10 books per transaction. \n");
    printf("\n");
    
    int i;
    int count;
    int numberOfBooks = 10;
    int userInput;
    
    //int to let  the user enter in the first set of books
    for (i = 0; i < numberOfBooks; i++){
        
        printf("Book #%d \n", i + 1);
        
        printf("Enter the authors Last Name. \n");
        scanf("%s", bookList[i].author);
        
        printf("Enter the ISBN number. \n");
        scanf("%d", &bookList[i].ISBN);
        
        printf("Enter the number of pages. \n");
        scanf("%d", &bookList[i].numberOfPages);
        
        printf("\n");
    }
    
    //asks the user if they want to add more books
    printf("Would you like to enter in more books? \n");
    printf("Enter 1 for YES. \n");
    printf("Enter 0 for NO. \n");
    scanf("%d", &userInput);
    
    while(userInput == 1){
        
        //adds to the bookList array
        numberOfBooks++;
        
        printf("Book #%d \n", i + 1);
              
        printf("Enter the authors Last Name. \n");
        scanf("%s", bookList[i].author);
            
        printf("Enter the ISBN number. \n");
        scanf("%d", &bookList[i].ISBN);
              
        printf("Enter the number of pages. \n");
        scanf("%d", &bookList[i].numberOfPages);
              
        printf("\n");
        
        //re-asks the user if they wanna add more books
        printf("Would you like to enter in more books? \n");
        printf("Enter 1 for YES. \n");
        printf("Enter 0 for NO. \n");
        scanf("%d", &userInput);
        
        i++;
    }
    
    
//Displays all 10 books stored on the stack.
    printf("Stack Stored Array. \n");
    
    for (i = 0; i < numberOfBooks; i++){
        
        printf("Author Name: %s \n", bookList[i].author);
        printf("ISBN Number: %d \n", bookList[i].ISBN);
        printf("Number Of Pages: %d \n", bookList[i].numberOfPages);
        printf("----------------------- \n");
    }
    
    //Start of Dynamic Allocation of BOOK.
    
    first = (struct DynamicBook *)malloc(1000*sizeof(bookList));
    
    //Error checking for first block memory
    if(first == NULL){
        
        printf("Memory Allocation Error... \n");
        exit(-1);
    }
    
    //Transfers the information from BookList[0] to DynamicBookList[0]
    if(first != NULL){
        
        strcpy(first->author, bookList[0].author);
        first->ISBN = bookList[0].ISBN;
        first->numberOfPages = bookList[0].numberOfPages;
    }
    
    //Allocates memory for every other index of both arrays
    new = (struct DynamicBook *)malloc(sizeof(struct DynamicBook));
    
    //Memory allocation check for every other index
    if(new == NULL){
        
        printf("Memory Allocation Error...\n");
        return -1;
    }
    
    first->next = new;
    current = new;
    
    //Transfers the information for the rest of the indexs
    for(i = 1; i < numberOfBooks; i++){
        
        strcpy(current->author, bookList[i].author);
        current->ISBN = bookList[i].ISBN;
        current->numberOfPages = bookList[i].numberOfPages;
        
        current->next = new;
        current = new;
    }
    
    //Displays the first index of the heap index
    printf("Heap Stored Struct. \n");
    
    printf("Author Name: %s \n", first->author);
    printf("ISBN Number: %d \n", first->ISBN);
    printf("Number Of Pages: %d \n", first->numberOfPages);
    printf("------------------------ \n");
    
    //Displays the rest of the indexs of the array
    for(i = 1; i < numberOfBooks; i++){
        
        printf("Author Name: %s \n", current->author);
        printf("ISBN Number: %d \n", current->ISBN);
        printf("Number Of Pages: %d \n", current->numberOfPages);
        printf("------------------------ \n");
        current = current->next;
    }
    
    printf("Heap Stored Array");
    
    for(i = 0; i < numberOfBooks; i++){
        
        malloc(sizeof(bookList));

        strcpy(dynamicBookList[i].author, bookList[i].author);
        dynamicBookList[i].ISBN = bookList[i].ISBN;
        dynamicBookList[i].numberOfPages = bookList[i].numberOfPages;
        
        printf("Author Name: %s \n", dynamicBookList[i].author);
        printf("ISBN Number: %d \n", dynamicBookList[i].ISBN);
        printf("Number Of Pages: %d \n", dynamicBookList[i].numberOfPages);
        printf("---------------------------\n");
    }
    
    //Variable for the bin file
    FILE *binFile;
    
    //Creates a file named below
    binFile =  fopen("myBinFile.bin", "wb");
    
    //Error checks if there is enough space for the file
    if(binFile == NULL){
        return 1;
    }
    
        //adds all the information for the dynamic array
        fwrite(&dynamicBookList, sizeof(current), 1, binFile);

    //Closes the bin file
    fclose(binFile);
    
    //Frees the allocated memory used above
    free(dynamicBookList);
    
    return 0;
}
