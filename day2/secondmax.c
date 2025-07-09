//Program to find second largest of given list 
#include <stdio.h>
#include <limits.h>
int main(){
	int max, smax, n;
	max = smax = INT_MIN;//-2147483648
	//getting size of list
	scanf("%d", &n);
	//getting list of values and finding the second largest
	for (int i = 1; i<=n; i++){
		int x;
		scanf("%d", &x); // 10 5 4 9 10
		if (max < x){
			smax = max;
			max = x; // max = 10
		}
		else if (smax < x && x != max)
			smax = x;// 10
	}
	if (smax !=INT_MIN)
		printf("Second Max : %d\n", smax);
	else
		printf("N/A");
	return 0;
}




Assessment-02: https://tinyurl.com/bddw44hn
