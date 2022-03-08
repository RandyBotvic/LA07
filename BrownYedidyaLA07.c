#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

/* Yedidya Brown
CS2060 TTh
OS: Mac
LA07
Due: 03/05/22
Description: To practice analyzing a requirement
 and creating inputs/outputs, design an algorithm,
 implement the function in code and test it.*/

// Function Prototypes
void salesPrompt();
void charitySummary();

// Main Function Logic
int main(void)
{
    // Variables
    bool repeat = true;
    char input;
    int validInput;

    // Main Logic
    do
    {
        salesPrompt();
        validInput = scanf(" %c", &input);
        getchar();
        input = toupper(input);

        if (validInput != 0 && (input == 'C' || input == 'M' || input == 'U'))
        {
            repeat = true;
        }
        else if (validInput != 0 && input == 'Q')
        {
            repeat = false;
        }
        else
        {
            repeat = true;
            //please other correct input future text
        }
    }while (repeat);

    charitySummary();

}
void salesPrompt()
{
  printf("You can purchase tickets to the [Charity Event] and \n"
         "[Char. Per.] of your ticket purchase will go to charity.\n"
         "Level:   Price per person\n"
         "(C)ourtside  $250\n"
         "(M)id        $125\n"
         "(U)pper      $50\n"
         "Enter your seat level: (C)ourtside, (M)id or (U)pper  ");
}
void charitySummary()
{
    printf("Summary of ticket sales where [Percentage] goes to charity.\n"
           "Level        Price   Sold      Sales Total      Charity Total\n"
           "(C)ourtside  [const] [counter] [counter*price]  [sales total*Per.]\n"
           "(M)id        [const] [counter] [counter*price]  [sales total*Per.]\n"
           "(U)pper      [const] [counter] [counter*price]  [sales total*Per.]\n"
           "Total Ticket Sales   [Total Sales function]\n"
           "Total Raised for charity  [Total Charity function]\n");
}