#include <stdio.h>
int main(){
	int matrix[3][3] = {
		{
			1, 2, 3
		}, {
			4, 5, 6
		}, {
			7, 8, 9
		}
	};
	
	matrix[1][2] = 5;
	
	printf("%d", matrix);
	return 0;
}