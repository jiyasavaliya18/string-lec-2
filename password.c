#include<stdio.h>
#include<string.h>
 int main(){
 
   char password[100];
   char len, letter, digit, special;
   
   printf("enter password : ");
   scanf("%s",password);                  
   
   len = strlen(password);

   
   for( int i=0; i<len; i++) {
   	if((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z')){
   		letter = 1;
	   }
	   
	   else if(password[i] >= '0' && password[i] <= '9'){
	   	digit = 1;
	   }
	   else{
	   	special = 1;
	   }
}
	   
	   if(letter && digit && special){
	   	printf("valid password");
	   }
	   else{
	   	printf("password is wrong. pelse try again");
	   }
   
   
   

}


