#include <stdio.h>
#include <stdlib.h>

struct Pk
  {char name[10];
  int num;};

typedef struct Pk pokemon;

struct Familia{
  pokemon pk[9];
};

typedef struct Familia fam;

int main(void){
  fam familia[2]={
    {{{"Bulbasaur",1},{"Ivysaur",2},{"Venusaur",3}}},
    {{{"Eevee",133},{"Vaporeon",134},{"Jolteon",135},{"Flareon",136},{"Espeon",196},{"Umbreon",197},{"Leafeon",470},{"Glaceon",471},{"Sylveon",700}}}    
    };
  int i,j;
  for (j=0;j<2;j++){
    for (i = 0; i < 9; i++) {
      if(familia[j].pk[i].num!=0){
      printf("%d %s\n",familia[j].pk[i].num,familia[j].pk[i].name);
      }
    }
  }
  return 0;
}
