#include <stdio.h>
#include <string.h>
int main(){
	char input[3][100] = {"sidharth", "kushal", "ram"};
	char search_name[4] = "Ram";
	for(int i = 0; i < 3; i++){
		int word_len = strlen(input[i]);
		if(word_len != 3) continue; // skip non equal element early
		
		int j = 0;
		int flag = 1;
		while(j < word_len){
			if(input[i][j] != search_name[j]){
				flag = 0;
				break;
			}
			j++;
		}
		
		if(flag == 1){
			printf("The word was found at index %d", i);
			return 0;
		}	
	}
	printf("The word does not exist");
	return 0 ;
}