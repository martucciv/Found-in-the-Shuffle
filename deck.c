//Veronica Martucci
//09-01-2021
//Program #0
#include <stdio.h>
#include <string.h>
#define MAX 105

//This function determines the length of the longest same-suit sequence
int sameSuitSequence(char str[], int deckLength)
{
  int count = 1;
  int longest = 0;

  //loop through the deck
  for(int i = 1; i < deckLength; i+=2)
  {
    if(str[i] == str[i+2])
    {
      count++;
    }
    else if(str[i] != str[i+2]){
      if(count > longest){
        longest = count;
      }
      count = 1;
    }
  }

  return longest;
}

//This function determines the length of the longest ascending sequence
int ascSequence(char str[], int deckLength){

  int count = 1;
  int longest = 0;

  //loop through the deck
  for(int i = 0; i < deckLength; i+=2){

    //check if 3 follows 2
    if(str[i] == '2'){
      if(str[i+2] == '3'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 4 follows 3
    else if(str[i] == '3'){
      if(str[i+2] == '4'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 5 follows 4
    else if(str[i] == '4'){
      if(str[i+2] == '5'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 6 follows 5
    else if(str[i] == '5'){
      if(str[i+2] == '6'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 7 follows 6
    else if(str[i] == '6'){
      if(str[i+2] == '7'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 8 follows 7
    else if(str[i] == '7'){
      if(str[i+2] == '8'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 9 follows 8
    else if(str[i] == '8'){
      if(str[i+2] == '9'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if 10 follows 9
    else if(str[i] == '9'){
      if(str[i+2] == 'T'){
        count++;

        if(count > longest){
          longest = count;
        }
      }
      //reset counter
      else{
        count = 1;
      }
    }
    //check if J follows 10
    else if(str[i] == 'T'){
       if(str[i + 2] == 'J'){
         count++;

         if(count > longest){
           longest = count;
         }
       }
       //reset counter
       else{
         count = 1;
       }
     }
     //check if Q follows J
     else if(str[i] == 'J'){
       if(str[i + 2] == 'Q'){
         count++;

         if(count > longest){
           longest = count;
         }
       }
       //reset counter
       else{
         count = 1;
       }
     }
     //check if K follows Q
     else if(str[i] == 'Q'){
       if(str[i + 2] == 'K'){
         count++;

         if(count > longest){
           longest = count;
         }
       }
       //reset counter
       else{
         count = 1;
       }
     }
     //check if A follows K
     else if(str[i] == 'K'){
        if(str[i + 2] == 'A'){
           count++;

           if(count > longest){
             longest = count;
           }
         }
         //reset counter
         else{
           count = 1;
         }
      }
      //check if 2 follows A
      else if(str[i] == 'A'){
         if(str[i + 2] == '2'){
           count++;

           if(count > longest){
             longest = count;
           }
         }
         //reset counter
         else{
           count = 1;
         }
      }
      //reset counter
      else{
        count = 1;
      }
  }

  return longest;
}

int main(){

  int c;

  //ask user to input the amount of cases
  scanf("%d\n", &c);

  if(c > 25)
  {
    printf("Too many test cases\n");
  }
  else{
    //loop through the amount of cases
    for(int i = 0; i < c; i++)
    {
      char str1[MAX], str2[MAX], str3[MAX];

      //user input for deck of cards
      scanf("%s", str1);
      scanf("%s", str2);

      strcat(str1, str2);
      strcpy(str3, str1);

      int deckLength = strlen(str3);

      int suit = sameSuitSequence(str3, deckLength);
      int asc = ascSequence(str3, deckLength);

      printf("%d %d\n", suit, asc);
    }
  }

  return 0;
}
