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
pokemon bulbasaur = {"Bulbasaur",1};
pokemon ivysaur = {"Ivysaur",2};
pokemon venusaur = {"Venusaur",3};
pokemon eevee ={"Eevee",133};
pokemon vaporeon = {"Vaporeon",134};
pokemon jolteon = {"Jolteon",135};
  fam familia[2]={
    {{bulbasaur,ivysaur,venusaur}},
    {{eevee,vaporeon,jolteon,
{"Flareon",136},{"Espeon",196},{"Umbreon",197},
{"Leafeon",470},{"Glaceon",471},{"Sylveon",700}}}    
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
