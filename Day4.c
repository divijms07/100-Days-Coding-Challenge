//Simple iteration problem
//to find cheapest cab option with help of fairs of each
# include <stdio.h>

int main() {
	int t ;
	scanf(" %d ",&t);
	
	while(t--){
	    int x,y;
	    scanf(" %d\t%d ",&x,&y); //costs of two cabs
	    if(x<y)
	        printf("First cab is CHEAPER\n");
	    else if (x == y)
	        printf("Any of the cab is FINE\n");
	    else
	        printf("Second cab is  CHEAPER\n");
	}
	return 0;
}


