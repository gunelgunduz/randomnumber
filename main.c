#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   int randomNumber, guessNumber, guessCount, score=100;
   srand(time(NULL));
   randomNumber=(rand()%100)+1;
   printf("Texmini reqem tuttum! Texmin et!\n");
   while(guessNumber!=-1){
    printf("Texmini reqemini daxil et!\n");
    scanf("%d", &guessNumber);
    if(guessNumber==-1) break;
    if(guessNumber<1 || guessNumber>100){
        printf("1 ile 100 arasinda bir eded daxil edin!\n");
        continue;
    }
    guessCount++;
    if(guessNumber == randomNumber) {
        printf("Tebrikler: %d. defesinde tapdiniz", guessCount);
        break;
    }else(guessCount >= 10)
    {
        printf("Texmin haqqiniz bitti. Dogru reqem %d", randomNumber);
        score=0;
        break;
    }else{
        if(guessNumber>randomNumber){
            printf("Daha kicik eded daxil edin\n");
        }else{
            printf("Daha boyuk eded daxil edin\n");
        }
    }
   }
   printf("\n Puanin 100 uzerinden %d", score<0 ? 0: score);
   return 0;
}