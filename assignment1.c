/*

Assignment1
Program descrtion: Program to operate ATM
Compiler: Dev-C++
OS: Windows 10
Date: 13/11/2016
James Hughes

*/

#include <stdio.h>

int main ()
{
	//initialising variables		
	int pin = 1234;
	int pin_attempt = 0;
	int pin_verify1 = 0;
	int pin_verify2 = 0;
	char menu_input = '0';
	int i = 0;
	int success = 0;
	int fail = 0;

	
	
	do
	{	
	
		//Display menu				
		printf ("Please select an option from the menu.\n\n");
		
		printf ("1. Enter PIN and verify correct\n");
		printf ("2. Change PIN\n");
		printf ("3. Display the number of times PIN was entered (i) Successfully (ii) Incorrectly\n");
		printf ("4. Exit Program\n\n");
			
		//menu input
		scanf (" %c", & menu_input);
			
			
		switch (menu_input)
		{
			//option 1
			case '1':
			{
				
				system ("cls");
			
				printf ("Enter PIN and verify Correct\n");
				
				printf ("Please enter your pin.\n");
		
				scanf ("%d", & pin_attempt);
			
			
    	
    			if (pin_attempt == pin )
    			{
    				printf ("You entered the correct PIN\n");
    			
    				success++;
    			
    				sleep(2);
    			
    				system ("cls");
    		 
				}//end if
		
				else 
				{
					printf ("Incorrect!\n");
					
					fail++;
					
					sleep(2);
    			
    				system ("cls");
    			
				}//end else
				
				break;
    		
			}//end case
			
	
	
			//Option 2
			case '2':
			{
				
				system("cls");
			
				printf ("Change PIN\n\n");
			
				printf ("Please enter your new pin\n");
				
				//account for errors in input
				printf ("Pin must conatin 4 numbers and not start with 0\n");
			
				scanf (" %d", & pin_verify1);
			
				if(pin_verify1 < 9999 && pin_verify1 > 999)
				{
			
					printf ("\nPlease re-enter your new PIN\n");
			
					scanf ("%d", & pin_verify2);
				}//end if
			
			
				if (pin_verify1 == pin_verify2)
				{
					pin = pin_verify1;
				
					printf ("\nYour PIN has been changed.\n");
				
					sleep (1);
				
					system("cls");
				
				}//end if
			
				else if ((pin_verify1 < 9999 && pin_verify1 > 999) && pin_verify1 != pin_verify2)
				{
					printf ("\nYour PINs did not match, try again.\n");
				
					sleep(2);
    			
    				system ("cls");
				}//end else if
			
				else 
				{
					system ("cls");
				
					printf ("ERROR, PIN must contain four numbers and not start with 0");
				
					sleep(1);
				
					system ("cls");
				}//end else
				
				break;
		
		
			}//end case
		
		
			// Option 3
			case '3':
			{
				system ("cls");
			
				printf ("\nSuccessfull attempts = %d\n\n", success);
			
				printf ("Unsuccessfull attempts = %d\n", fail);
			
				sleep(2);
			
				system ("cls");
				
				break;
			
			}//end case
			
			case '4':
			{
				system ("cls");
	
				printf("Closing Program...");
	
				getchar ();
	
				return (0);		
			}//end case
			
		
			default: 
			{
				system ("cls");
				
				printf("\nPlease select a valid option from the menu using the numbers 1 to 4.\n\n");
				
				sleep (2);
				
				system ("cls");
				
			}//end case	
			
			break;
		}//end switch
	
	}//end do while
	while (menu_input != 4);
	

	
 } //end main
