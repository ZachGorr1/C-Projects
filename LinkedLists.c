#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //sturct creation
    struct Patient{
        char name[100];
        int age;
        float weight;
        struct Patient *next;
    };
    
    //more struct creations
    struct Patient *first = NULL;
    struct Patient *current;
    struct Patient *new;
    struct Patient *temp;
    
    //input variables for main menu
    int mainMenuUserInput = 0;
    int secondMainMenuUserInput = 0;
    
    int addAnotherRecord;
    
    //Main menu system
    printf("*****-- Main Menu --***** \n");
    printf("1.) Add a record. \n");
    printf("2.) View all records. \n");
    printf("3.) Quit. \n");
    
    printf("\nPlease make a selection from the menu above. \n");
    scanf("%d", &mainMenuUserInput);
    
    //if statements based on user input
    if(mainMenuUserInput == 1){
        
        //Creates a spot in memory for the first node.
        first = (struct Patient *)malloc(sizeof(struct Patient));
        
        //Checks to see if there is a space in memory for the user to use.
        if(first == NULL){
            
            printf("Memory Allocation Error... \n");
            exit(-1);
        }
        
        current = first;
        
        //lets the user create the first node
        while(current->next != NULL){
            printf("Please enter a name: \n");
            scanf("%s", &current->name);
            
            printf("Please enter an age: \n");
            scanf("%d", &current->age);
            
            printf("Please enter in a weight: \n");
            scanf("%f", &current->weight);
            
            //makes the next node the current node
            current->next;
            
        }
        
        //input if the user wants to add another node
        printf("Would you like to add another record? \n");
        printf("Enter 1 for YES \n");
        printf("Enter 0 for NO \n");
        scanf("%d", &addAnotherRecord);
        
        //while loop for if the user chooses to add more
        while(addAnotherRecord == 1){
            
            
            current->next;
            
            //create space on the heap for the node
            new = (struct Patient *)malloc(sizeof(struct Patient));
            
            //checks to see if their is space on the heap
            if(new == NULL){
                
                printf("Memory Allocation Error... \n");
                exit(-1);
            }
            
            //makes the current node a new node
            current->next = new;
            current=new;
            
            //asks for user input
            printf("Please enter a name: \n");
            scanf("%s", &current->name);
            
            printf("Please enter an age: \n");
            scanf("%d", &current->age);
            
            printf("Please enter in a weight: \n");
            scanf("%f", &current->weight);
            
            printf("Would you like to add another record? \n");
            printf("Enter 1 for YES \n");
            printf("Enter 0 for NO \n");
            scanf("%d", &addAnotherRecord);
            
            
        }
    }
    //if the user doesnt want to add more nodes
    if(addAnotherRecord == 0){
        
        //second menu systme minus the adding of nodes option
        printf("*****-- Main Menu --***** \n");
        printf("2.) View all records. \n");
        printf("3.) Quit. \n");
        
        printf("\nPlease make a selection from the menu above. \n");
        scanf(" %d", &secondMainMenuUserInput);
    }
    
    //if user selects two without entering nodes it gives an error
    else if(mainMenuUserInput == 2){
        
        printf("Please enter in a record first. \n");
        exit(0);
        
    }
    
    //quit program if user doesnt input a 1 or 2
    else {
        
        printf("You're now quitting the program. \n");
        printf("have a nice day! \n");
        free(first);
        free(current);
        free(new);
        free(temp);
        exit(0);
    }
    
    //secondary menu system option
    if(secondMainMenuUserInput == 2){
        
        //displays the users nodes in order by input
        printf("Patient Name: %s \n", first->name);
        printf("Patient Age: %d \n", first->age);
        printf("Patient Weight: %.2lf \n", first->weight);
        current = first->next;
        
        while(current != NULL){
            
            //while the next node is not equal to NULL it will keep displaying nodes
            printf("Patient Name: %s \n", current->name);
            printf("Patient Age: %d \n", current->age);
            printf("Patient Weight: %.2lf \n", current->weight);
            current = current->next;
        }
    }
    
    //quit option again for the secondary menu
    else if (secondMainMenuUserInput == 3){
        
        printf("You're now quitting the program. \n");
        printf("have a nice day! \n");
        free(first);
        free(current);
        free(new);
        free(temp);
        exit(0);
    }
    
    system("pause");
}
