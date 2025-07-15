#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isFound(int n, int len, char list[n][len], char search[]){
	for (int i = 0; i<n; i++)
	//CASE INSENSITIVE
		if (!strcasecmp(list[i], search)) // strcmpi
			return true;
	return false;
}
int main(){
	char input[][20] = {"sidharth", "kushal", "ram"};
	int size = sizeof(input)/sizeof(input[0]);
	char *search_name = "SIDHARTH";
	printf("%s", isFound(size,20, input, search_name)?"Found":"Not Found");
	return 0 ;
}