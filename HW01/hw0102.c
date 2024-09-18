#include<stdio.h>
#include<stdint.h>

int main(){
int32_t ia,a1,a2,a3,ib,b1,b2,b3,about,ababs,o1,o2,o3;

  printf("Please enter the first  number: ");
  scanf("%d",&ia);
  printf("Please enter the second number: ");
  scanf("%d",&ib);

  if(ia / 1000 > 0 || ib / 1000 > 0 || ia < 100 || ib < 100){//Invalid check
    printf("Invaild input\n");
    return 0;
  }
  a1 = ia / 100;
  a2 = (ia % 100) / 10;
  a3 = (ia % 10); 
  b1 = ib / 100;
  b2 = (ib % 100) / 10;
  b3 = (ib % 10); 
  about = ia - ib;
  if(about < 0){
    ababs = about * (-1);
  }else{
    ababs = about;
  }
  o1 = ababs / 100;
  o2 = (ababs % 100) / 10;
  o3 = (ababs % 10); 

  printf("    %d %d %d\n",a1,a2,a3);
  printf("-)  %d %d %d\n",b1,b2,b3);
  printf("---------\n");

  if(about >= 0){
    if(o2 == 0 && o1 == 0){
      printf("        %d\n",o3);
    }else if(o1 == 0){
      printf("      %d %d\n",o2,o3);
    }else{
      printf("    %d %d %d\n",o1,o2,o3);
    }
    
  }else{
    if(o2 == 0 && o1 == 0){
      printf("      - %d\n",o3);
    }else if(o1 == 0){
      printf("    - %d %d\n",o2,o3);
    }else{
      printf("  - %d %d %d\n",o1,o2,o3);
    }
  }
  
  return 0;
}