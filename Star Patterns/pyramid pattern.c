#include<stdio.h>
void pattern(){ //function
//variables decleration
int n;
char sym;
// input number of rows and symbol from user
printf("enter number of rows ");
scanf("%d",&n);
printf("enter symbol to print ");
scanf(" %c",&sym);
for(int i=0; i<=n-1; i++){ //row loop
for (int spc=1; spc<n-i; spc++){ //space loop
printf(" ");
}
for(int j=1; j<=2*i+1; j++){ //column loop
printf("%c",sym);
}
printf("\n");
}
}
void main(){
pattern();//function
