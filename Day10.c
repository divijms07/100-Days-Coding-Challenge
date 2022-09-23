//Problem : PRACTICEPERF
//if statements
# include <stdio.h>
int main(void) {
    int p1,p2,p3,p4,ans = 0;
    scanf("%d %d %d %d ",&p1,&p2,&p3,&p4);
    
    if(p1>=10){
        ans++;
    }
    if(p2>=10){
        ans++;
    }
    if(p3>=10){
        ans++;
    }
    if(p4>=10){
        ans++;
    }
    printf("%d",ans);
	return 0;
}

