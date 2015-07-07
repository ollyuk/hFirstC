#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[ 3];
	puts("Enter the card_name: ");
	scanf("%2s", card_name);
	int val = 0;
	int count = 0;

	while (card_name[ 0] != 'X'){
		puts("Enter the card_name: ");
		scanf("%2s", card_name);
		switch(card_name[ 0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue; //takes us back to the start of the while loop - then leaves the loop as card_name[0] = X
			default:
				val = atoi(card_name);
				if ((val < 1) || (val > 10)) {
					puts("Card out of range (1-10).");
					continue;
				} 
		}
			printf("The card value is: %i\n", val);

			/* Check to see if count is going up or down */

			if ((val > 2) && (val < 7)) {
				puts("Count has gone up");
				count++;
			}
			if (val == 10){
				puts("Count has gone down");
				count--; 
			}
			printf("Current count is: %i\n", count);
		
	}
	return 0;
}