#include <iostream>
#include <string.h>
using namespace std;
 bool isValid(string str, int n)
{
 
    // If first character is invalid
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return false;
 
    // Traverse the string for the rest of the characters
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return false;
    }
 
    // String is a valid identifier
    return true;
}
bool iskeyword(char str[] ){

     char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
//    char str[]=str;
   int flag=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(str,keyword[i])==0) {
        return false;
      }
     

   }
   return true;
   
}


int main()
{
    string str;
    cin>>str;
    int n = str.length();
 
 
 	char arr[str.length() + 1]; 

	strcpy(arr, str.c_str()); 

    if(isValid(str,n))
    {
      if(iskeyword(arr))
      cout<<"valid identifier";
      else
      cout<<"not valid";
    }
    else
      cout<<"not valid";


}
