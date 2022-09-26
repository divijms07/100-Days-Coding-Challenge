#include <stdio.h>

int main(void) {
    int x,y;
    scanf (" %d\t %d ",&x,&y);
    if(x >= 2*y){
        printf("\nYes");
    } else {
        printf("\nNo");
    }
	return 0;
}
