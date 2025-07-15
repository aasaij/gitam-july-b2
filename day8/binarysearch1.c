#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isFound(int n, int len, char list[n][len], char search[]){
	int low = 0, high = n-1, mid;
	while (low<=high)	{
		mid = (low+high)/2;
		int diff = strcasecmp(list[mid], search);
		if(!diff)
			return true;
		else if (diff>0)
			high = mid-1;
		else
			low = mid + 1;
	}
	return false;
}
int main(){
	char input[][20] = {"dheeraj", "kushal", "likhith","ram","satish", "sidharth"};
	int size = sizeof(input)/sizeof(input[0]);
	char searchName[20];
	scanf("%s", searchName);
	printf("%s", isFound(size,20, input, searchName)?"Found":"Not Found");
	return 0 ;
}