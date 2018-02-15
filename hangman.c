#include<stdio.h>
#include<stdlib.h> // For rand() function Not used yet
#include<time.h> // For time function not used yet
#include<ctype.h>// for to upper
#define COMPLETE 10
#define WIN 100
#define LOSS 0
void gameOver(int);
int get_word_length();

char word[26] = "HELLO";


int main(){
	//Variable Declaration
	//Number of guess, total word length, iteration, total number of input given by user, checking game status
	int guess_left = 3, word_length,i, num_of_input = 0, game_completed = 0;
	//Current character pressed by user
	char current_guess;
	//array of all guessed key, defaulting all value to null. userInput stores correct user Input value.
	char guessed[26] = {'\0'}, userInput[26] = {'\0'};
	//Gets the length of word
	word_length = get_word_length();
	
	//Repeating till the game is not complete
	while(game_completed != COMPLETE){
	//Searched internet and it said me to use this to fix scanf buffer problem, but didnot help
		fflush(stdin);
		//Displaying the stats
		printf(" Guess left : %d \n", guess_left);
		printf(" Word length : %d \n", word_length);
		printf(" Guessed : ");
		for(i = 0; i < 10; i++){
			printf("%c " , guessed[i]);
		}
		printf("\n");
		//Showing the blanks
		if(guess_left > 0){//While total guess is greater than 0
			for(i = 0; i < word_length; i++){
				if(userInput[i] == '\0'){//If userInput at that index is null, it has not been filled by user
					printf("_ ");
				}else{
					printf("%c ",userInput[i]);//If user has guessed correct, show them
				}
			}
			printf("\n");

			
			//Taking input and storing it in array
			printf("Enter a letter : ");
			scanf("%c",&current_guess);
			num_of_input++;//Total number of input increasing
			current_guess = toupper(current_guess);// Converting to upper case
			guessed[num_of_input] = current_guess;// Storing current guess to guessed array
			fflush(stdin);
			//End
			
			int matched = 0, total_matched = 0;//Declaring match variable to get total number of matched letters.
			for(i = 0; i < word_length; i++){
				
				if(current_guess == word[i]){ // if guess matches store it in guess array and show it to user
					userInput[i] = current_guess;
					matched++;// Increasing match
				}
			}
			if(matched == 0){//If no match
				guess_left--; // Decrease guess_left
			}	
			total_matched += matched;//Increasing total matched . This assumes that user doesnot enter same letter twice
			if(total_matched == word_length){
				printf("Not here");
				game_completed = COMPLETE;	
				gameOver(WIN);
				break;// To prevent continuation 
			}
			matched = 0;// reseting matched to 0
			printf("\n");
			/*for(i = 0; i < word_length; i++){
				if(userInput[i] == '\0'){
					printf("_ ");
				}else{
					printf("%c ",userInput[i]);
				}
			}*/
		}else{
			game_completed = COMPLETE;	
			gameOver(LOSS);
			
			break;
		}
	}

}
void gameOver(int stat){
	int i =0;
	if(WIN){
		printf("\n");
		printf(" Yeah.. You win");
		printf(" Word length : %d \n", get_word_length());
		printf(" Guessed : ");
		printf("\n");
		for(i = 0; i < 10; i++){
			printf("%c " , word[i]);
		}
		
	}else{
		printf("\n");
		printf(" Booo.. You lose");
		printf(" Word length : %d \n", get_word_length());
		printf(" Guessed : ");
		printf("\n");
		for(i = 0; i < 10; i++){
			printf("%c " , word[i]);
		}
	
	}
}
int get_word_length(){//Getting legth
	int count = 0, i;
	for(i = 0; i < 26; i++){
		if(word[i] != '\0') count++;
	}
	return count;
}



















