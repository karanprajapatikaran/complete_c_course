#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "karan";
    char s2[] = "umesh";
    printf("%d \n",strlen(s1)); 
    printf("%d \n",strlen(s2));      


   /*Comparison	          Alphabetical order	             Result
  "apple", "banana"	      apple chhota hai	                 Negative (-1)
  "karan", "karan"	      Dono equal hain	                 0
  "umesh", "karan"	      umesh bada hai	                 Positive (+1)*/    
    printf("%d \n",strcmp(s1,s2));
    printf("%s \n",strrev(s1));
    printf("%s \n",strrev(s2));
    printf("%s \n",strcat(s1,s2));
    printf("%s \n",strcpy(s1,s2));  //strcpy(destination, source);
}