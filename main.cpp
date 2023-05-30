#include <iostream>

using namespace std;

int main()
{
   int quantidade_impares=0,
   quantidade_impares_desejados,
   numero_teste=1;
   printf("Digite o numero: ");
   scanf("%i", &quantidade_impares_desejados);

   while (quantidade_impares < quantidade_impares_desejados) {
      if (numero_teste%2==1) {
        //descobri que o numero_teste é impar
        printf("Impar: %i\n",numero_teste);
        quantidade_impares++;
      }
      numero_teste++;
   }

}
