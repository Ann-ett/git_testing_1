#include<stdio.h>
#include<stdint.h>
int main(){
  int32_t arrmain1,arrmain2,arrmain3,arrmain4,arrmain5;
  int32_t arrcol1,arrcol2,arrcol3,arrcol4,arrcol5;
  int32_t arrnum1,arrnum2,arrnum3,arrnum4,arrnum5,numtot;
  int32_t numdiv = 0;
  int32_t nummis = 0;
  int32_t coldiv = 0;
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