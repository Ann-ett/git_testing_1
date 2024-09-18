#include<stdio.h>
#include<stdint.h>
int main(){
  int32_t arrmain1,arrmain2,arrmain3,arrmain4,arrmain5;
  int32_t arrcol1,arrcol2,arrcol3,arrcol4,arrcol5;
  int32_t arrnum1,arrnum2,arrnum3,arrnum4,arrnum5,numtot;
  int32_t numdiv = 0;
  int32_t nummis = 0;
  int32_t coldiv = 0;
  printf("Please enter 5 cards: ");scanf("%d %d %d %d %d",&arrmain1,&arrmain2,&arrmain3,&arrmain4,&arrmain5);
  //Invalid check same
  if(arrmain1 - arrmain2 == 0){printf("Error! Same card included 1 2 \n");return 0;}
  if(arrmain1 - arrmain3 == 0){printf("Error! Same card included 1 3 \n");return 0;}
  if(arrmain1 - arrmain4 == 0){printf("Error! Same card included 1 4 \n");return 0;}
  if(arrmain1 - arrmain5 == 0){printf("Error! Same card included 1 5 \n");return 0;}
  if(arrmain2 - arrmain3 == 0){printf("Error! Same card included 2 3 \n");return 0;}
  if(arrmain2 - arrmain4 == 0){printf("Error! Same card included 2 4 \n");return 0;}
  if(arrmain2 - arrmain5 == 0){printf("Error! Same card included 2 5 \n");return 0;}
  if(arrmain3 - arrmain4 == 0){printf("Error! Same card included 3 4 \n");return 0;}
  if(arrmain3 - arrmain5 == 0){printf("Error! Same card included 3 5 \n");return 0;}
  if(arrmain4 - arrmain5 == 0){printf("Error! Same card included 4 5 \n");return 0;}
  //Invalid check outrange
  if(arrmain1 < 1 || arrmain1 > 52 ){printf("Error! Invalid card included %d \n",arrmain1);return 0;}
  if(arrmain2 < 1 || arrmain2 > 52 ){printf("Error! Invalid card included %d \n",arrmain2);return 0;}
  if(arrmain3 < 1 || arrmain3 > 52 ){printf("Error! Invalid card included %d \n",arrmain3);return 0;}
  if(arrmain4 < 1 || arrmain4 > 52 ){printf("Error! Invalid card included %d \n",arrmain4);return 0;}
  if(arrmain5 < 1 || arrmain5 > 52 ){printf("Error! Invalid card included %d \n",arrmain5);return 0;}
  //col&num 1n5ta
  arrcol1 = (arrmain1-1) / 13; arrnum1 = (arrmain1-1) % 13;
  arrcol2 = (arrmain2-1) / 13; arrnum2 = (arrmain2-1) % 13;
  arrcol3 = (arrmain3-1) / 13; arrnum3 = (arrmain3-1) % 13;
  arrcol4 = (arrmain4-1) / 13; arrnum4 = (arrmain4-1) % 13;
  arrcol5 = (arrmain5-1) / 13; arrnum5 = (arrmain5-1) % 13;
  //same num check
  if(arrnum1 - arrnum2 == 0)numdiv++;
  if(arrnum1 - arrnum3 == 0)numdiv++;
  if(arrnum1 - arrnum4 == 0)numdiv++;
  if(arrnum1 - arrnum5 == 0)numdiv++;
  if(arrnum2 - arrnum3 == 0)numdiv++;
  if(arrnum2 - arrnum4 == 0)numdiv++;
  if(arrnum2 - arrnum5 == 0)numdiv++;
  if(arrnum3 - arrnum4 == 0)numdiv++;
  if(arrnum3 - arrnum5 == 0)numdiv++;
  if(arrnum4 - arrnum5 == 0)numdiv++;
  switch(numdiv){
    case 6:
      printf("Four of a kind\n");
      return 0;
      break;
    case 4:
      printf("Full house\n");
      return 0;
      break;
    case 3:
      printf("Three of a kind\n");
      return 0;
      break;
    case 2:
      printf("Two pair\n");
      return 0;
      break;
    case 1:
      printf("One pair\n");
      return 0;
      break;
  }
  //Straight |&| flush check
  if((arrnum1 - arrnum2) % 11 == 1 || (arrnum1 - arrnum2) % 11 == -1)nummis++;
  if((arrnum1 - arrnum3) % 11 == 1 || (arrnum1 - arrnum3) % 11 == -1)nummis++;
  if((arrnum1 - arrnum4) % 11 == 1 || (arrnum1 - arrnum4) % 11 == -1)nummis++;
  if((arrnum1 - arrnum5) % 11 == 1 || (arrnum1 - arrnum5) % 11 == -1)nummis++;
  if((arrnum2 - arrnum3) % 11 == 1 || (arrnum2 - arrnum3) % 11 == -1)nummis++;
  if((arrnum2 - arrnum4) % 11 == 1 || (arrnum2 - arrnum4) % 11 == -1)nummis++;
  if((arrnum2 - arrnum5) % 11 == 1 || (arrnum2 - arrnum5) % 11 == -1)nummis++;
  if((arrnum3 - arrnum4) % 11 == 1 || (arrnum3 - arrnum4) % 11 == -1)nummis++;
  if((arrnum3 - arrnum5) % 11 == 1 || (arrnum3 - arrnum5) % 11 == -1)nummis++;
  if((arrnum4 - arrnum5) % 11 == 1 || (arrnum4 - arrnum5) % 11 == -1)nummis++;
  if(arrcol2 - arrcol1 == 0)coldiv++;
  if(arrcol3 - arrcol1 == 0)coldiv++;
  if(arrcol4 - arrcol1 == 0)coldiv++;
  if(arrcol5 - arrcol1 == 0)coldiv++;
  //No 2AKQJ etc.
  numtot = arrnum1 + arrnum2 + arrnum3 + arrnum4 + arrnum5;
  if(numtot % 5 != 0 && nummis == 4){if(numtot /10 != 4){nummis = 0;}}
  if(nummis == 4 && coldiv == 4){
    printf("Straight flush\n");
  }else if(nummis == 4){
    printf("Straight\n");
  }else if(coldiv == 4){
    printf("Flush\n");
  }else{
    printf("High card\n");
  }

  return 0;
}