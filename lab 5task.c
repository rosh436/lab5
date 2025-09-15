#include<stdio.h>
main(){
	char interView[20], msCond[20];
	printf("We are hiring\n");
	printf("Have you done masters?");
	scanf("%s", msCond);
	if(strcmp(msCond,"Yes")==0)
	printf("Enter your status:");
	scanf("%s",interView);
	   if(strcmp(interView,"passed")==0)
	   printf("You are hired");
	   else
	   printf("You are not hired");
	return 0;
}
