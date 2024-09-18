#include<stdio.h>
#include<stdint.h>

int main(){
  int32_t Lev,power,weather,metype,mvtype,tgtype,status,cate,terra,stabout;
  double atk,def,weatherout,typeout,statusout,terrain;
  weatherout = 1;
  stabout = 1;
  statusout = 1;
  terrain = 1;

  printf("Attacker\n");
  printf("  level: ");scanf("%d",&Lev);
  printf("  atk: ");scanf("%lf",&atk);
  printf("  type: ");scanf("%d",&metype);
  printf("  status: ");scanf("%d",&status);
  printf("  move power: ");scanf("%d",&power);
  printf("  move type: ");scanf("%d",&mvtype);
  printf("  move category: ");scanf("%d",&cate);
  printf("Target\n");
  printf("  def: ");scanf("%lf",&def);
  printf("  type: ");scanf("%d",&tgtype);
  printf("Environment\n");
  printf("  weather: ");scanf("%d",&weather);
  printf("  terrain: ");scanf("%d",&terra);


  if(mvtype < 0 || mvtype > 7){printf("Invaild Input \n");return 0;}
  if(metype < 0 || metype > 7){printf("Invaild Input \n");return 0;}
  if(tgtype < 0 || tgtype > 7){printf("Invaild Input \n");return 0;}
  if(Lev < 1 || Lev > 100){printf("Invaild Input \n");return 0;}
  if(atk < 0){printf("Invaild Input \n");return 0;}
  if(def < 0){printf("Invaild Input \n");return 0;}
  if(power < 0){printf("Invaild Input \n");return 0;}
  if(weather < 0 || weather > 5){printf("Invaild Input \n");return 0;}
  if(status < 0 || status > 2){printf("Invaild Input \n");return 0;}
  if(cate < 0 || cate > 1){printf("Invaild Input \n");return 0;}
  if(terra < 0 || terra > 3){printf("Invaild Input \n");return 0;}
  
  if(weather == 1){
    if(mvtype == 0){
      weatherout = 0.5;
    }else if(mvtype == 1){
      weatherout = 2;
    }
  }else if(weather == 2){
    if(mvtype == 0){
      weatherout = 2;
    }else if(mvtype = 1){
      weatherout = 0.5;
    }
    if(tgtype == 5){
      def = def * 0.5;
    }
  }else if(weather == 3){
    if(metype == 2){
      atk = atk * 0.5;
    }
  }else if(weather == 4){
    if(metype == 3){
      atk = atk * 2;
    }
  }else if(weather == 5){
    if(tgtype == 4){
      def = def * 2;
    }
  }

  if(mvtype == 0){
    if(tgtype == 0){
      typeout = 0.5;
    }else if(tgtype == 1){
      typeout = 2;
    }else if(tgtype == 2){
      typeout = 0.5;
    }else if(tgtype == 3){
      typeout = 1;
    }else if(tgtype == 4){
      typeout = 2;
    }else if(tgtype == 5){
      typeout = 2;
    }else if(tgtype == 6){
      typeout = 1;
    }else if(tgtype == 7){
      typeout = 0.5;
    }
  }else if(mvtype == 1){
    if(tgtype == 0){
      typeout = 0.5;
    }else if(tgtype == 1){
      typeout = 0.5;
    }else if(tgtype == 2){
      typeout = 2;
    }else if(tgtype == 3){
      typeout = 1;
    }else if(tgtype == 4){
      typeout = 0.5;
    }else if(tgtype == 5){
      typeout = 1;
    }else if(tgtype == 6){
      typeout = 1;
    }else if(tgtype == 7){
      typeout = 0.5;
    }
  }else if(mvtype == 2){
    if(tgtype == 0){
      typeout = 2;
    }else if(tgtype == 1){
      typeout = 0.5;
    }else if(tgtype == 2){
      typeout = 0.5;
    }else if(tgtype == 3){
      typeout = 0.5;
    }else if(tgtype == 4){
      typeout = 2;
    }else if(tgtype == 5){
      typeout = 2;
    }else if(tgtype == 6){
      typeout = 1;
    }else if(tgtype == 7){
      typeout = 0.5;
    }
  }else if(mvtype == 3){
    if(tgtype == 0){
      typeout = 1;
    }else if(tgtype == 1){
      typeout = 1;
    }else if(tgtype == 2){
      typeout = 2;
    }else if(tgtype == 3){
      typeout = 1;
    }else if(tgtype == 4){
      typeout = 0.5;
    }else if(tgtype == 5){
      typeout = 1;
    }else if(tgtype == 6){
      typeout = 0.5;
    }else if(tgtype == 7){
      typeout = 1;
    }
  }else if(mvtype == 4){
    if(tgtype == 0){
      typeout = 1;
    }else if(tgtype == 1){
      typeout = 2;
    }else if(tgtype == 2){
      typeout = 1;
    }else if(tgtype == 3){
      typeout = 2;
    }else if(tgtype == 4){
      typeout = 1;
    }else if(tgtype == 5){
      typeout = 0.5;
    }else if(tgtype == 6){
      typeout = 1;
    }else if(tgtype == 7){
      typeout = 1;
    }
  }else if(mvtype == 5){
    if(tgtype == 0){
      typeout = 1;
    }else if(tgtype == 1){
      typeout = 2;
    }else if(tgtype == 2){
      typeout = 1;
    }else if(tgtype == 3){
      typeout = 0;
    }else if(tgtype == 4){
      typeout = 2;
    }else if(tgtype == 5){
      typeout = 1;
    }else if(tgtype == 6){
      typeout = 2;
    }else if(tgtype == 7){
      typeout = 1;
    }
  }else if(mvtype == 6){
    if(tgtype == 0){
      typeout = 2;
    }else if(tgtype == 1){
      typeout = 1;
    }else if(tgtype == 2){
      typeout = 0.5;
    }else if(tgtype == 3){
      typeout = 2;
    }else if(tgtype == 4){
      typeout = 1;
    }else if(tgtype == 5){
      typeout = 0;
    }else if(tgtype == 6){
      typeout = 0.5;
    }else if(tgtype == 7){
      typeout = 0.5;
    }
  }else if(mvtype == 7){
    if(tgtype == 0){
      typeout = 1;
    }else if(tgtype == 1){
      typeout = 1;
    }else if(tgtype == 2){
      typeout = 1;
    }else if(tgtype == 3){
      typeout = 1;
    }else if(tgtype == 4){
      typeout = 1;
    }else if(tgtype == 5){
      typeout = 1;
    }else if(tgtype == 6){
      typeout = 1;
    }else if(tgtype == 7){
      typeout = 2;
    }
  }

  if(metype == mvtype){
    stabout = 2;
  }

  if(status == 1 && cate == 0){statusout = 0.5;}
  else if(status == 2 && cate == 1){statusout = 0.5;}

  if(terra == 1 && mvtype == 2){terrain = 2;}
  else if(terra == 2 && mvtype == 6){terrain = 2;}
  else if(terra == 3 && mvtype ==7){terrain = 0.5;}

  if(metype == 3){terrain = 1;}

  int32_t outta;
  double outtab,outtat;
  outtat = (Lev * 2 +10) * atk * power;
  outtab = 250 * def;
  outta = outtat / outtab;
  int32_t outfin;
  if(typeout == 0){
    printf("Damage --> 0\n");
    return 0;
  }
  outfin = (outta + 2)*weatherout*stabout*typeout*statusout*terrain;
  if(outfin <1){outfin = 1;}
  printf("Damage --> %d\n",outfin);
  
  return 0;
}