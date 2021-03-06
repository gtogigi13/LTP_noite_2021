#include <stdio.h>

int main(void) {

  float e_fonte, e_resistor_r1, e_resistor_r2, s_corrente, s_tensao_r1, s_tensao_r2, variavel_resist_eq;

  printf("Entre com o valor da fonte:");
  scanf("%f", &e_fonte);

  printf("Entre com o valor do resistor R1:");
  scanf("%f", &e_resistor_r1);

  printf("Entre com o valor do resistor R2:");
  scanf("%f", &e_resistor_r2);

  variavel_resist_eq = e_resistor_r1 + e_resistor_r2;

  if (variavel_resist_eq != 0){
          s_corrente = e_fonte / variavel_resist_eq;
          printf("A corrente total: %f[A] \n",s_corrente); 
          s_tensao_r1 = s_corrente * e_resistor_r1;
          printf("A tensao em R1: %f [V]\n",s_tensao_r1); 
          s_tensao_r2 = s_corrente * e_resistor_r2;
          printf("A tensao em R2: %f [V]\n",s_tensao_r2); 
  }else{
          printf("Erro.\n");
  }

  return 0;
}
