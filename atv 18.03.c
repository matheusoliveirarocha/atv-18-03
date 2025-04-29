#include <stdio.h>
#include <math.h>
#include <string.h>

// atv 1 
// int fatorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * fatorial(n - 1);
// }

// int main() {
//     int num;
//     printf("Digite um numero inteiro não negativo: ");
//     scanf("%d", &num);
    
//     if (num < 0) {
//         printf("Por favor, digite um número não negativo.\n");
//     } else {
//         printf("Fatorial de %d é %d\n", num, fatorial(num));
//     }
    
//     return 0;
// }




//atv 2
// int fatorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n + fatorial(n - 1);
// }

// int main() {
//     int num;
//     printf("Digite um numero inteiro não negativo: ");
//     scanf("%d", &num);
    
//     if (num < 0) {
//         printf("Por favor, digite um número não negativo.\n");
//     } else {
//         printf("Fatorial de %d é %d\n", num, fatorial(num));
//     }
    
//     return 0;
// }



//atv 3
// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         int a = 0, b = 1, temp;
//         for (int i = 2; i <= n; i++) {
//             temp = a + b;
//             a = b;
//             b = temp;
//         }
//         return b;
//     }
// }

// int main() {
//     int n;
//     printf("Digite um numero");
//     scanf("%d", &n);
//     printf("O %dº termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
//     return 0;
// }




//atv 4
// void inverter_string(char str[], int inicio, int fim) {
//     if (inicio >= fim) {
//         return;
//     }
//     char temp = str[inicio];
//     str[inicio] = str[fim];
//     str[fim] = temp;
//     inverter_string(str, inicio + 1, fim - 1);
// }

// int main() {
//     char str[100];
//     printf("Digite uma string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     int tamanho = strlen(str);
//     inverter_string(str, 0, tamanho - 1);
//     printf("String invertida: %s\n", str);
//     return 0;
// }





//atv 5
// void contagem_regressiva(int n) {
//     if (n >= 0) {
//         printf("%d ", n);
//         contagem_regressiva(n - 1); // chamada recursiva
//     }
// }

// int main() {
//     int n = 3;
//     contagem_regressiva(n);
//     return 0;
// }





//atv 6
// int SomaDig(int n) {

//     if (n == 0) {
//         return 0;
//     }
//     return (n % 10) + SomaDig(n / 10);
// }

// int main() {
//     int num;
    
//     printf("Digite um número: ");
//     scanf("%d", &num);

//     printf("%d\n", SomaDig(num));

//     return 0;
// }





//atv 7
// void inverter_string(char str[], int inicio, int fim) {
//     if (inicio >= fim) {
//         return;
//     }
//     char temp = str[inicio];
//     str[inicio] = str[fim];
//     str[fim] = temp;
//     inverter_string(str, inicio + 1, fim - 1);
// }

// int main() {
//     char str[100];
//     printf("Digite uma Palavra: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     int tamanho = strlen(str);
//     inverter_string(str, 0, tamanho - 1);
//     printf("Palavra invertida: %s\n", str);
//     return 0;
// }






//atv 8
// int palindromo(char str[], int inicio, int fim) {
//     if (inicio >= fim) {
//         return 1;
//     }
//     if (str[inicio] != str[fim]) {
//         return 0;
//     }
//     return palindromo(str, inicio + 1, fim - 1);
// }

// int main() {
//     char str[100];
//     printf("Digite uma palavra: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     int tamanho = strlen(str);
//     if (palindromo(str, 0, tamanho - 1)) {
//         printf("A palavra é um palíndromo.\n");
//     } else {
//         printf("A palavra não é um palíndromo.\n");
//     }
//     return 0;
// }






//atv 9
// int mdc(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return mdc(b, a % b);
// }

// int main() {
//     int a, b;
//     printf("Digite dois números: ");
//     scanf("%d %d", &a, &b);
//     printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));
//     return 0;
// }






//atv 10
// int multiplicar(int a, int b) {
//     if (b == 0) {
//         return 0;
//     }
//     return a + multiplicar(a, b - 1);
// }

// int main() {
//     int a, b;
//     printf("Digite dois números: ");
//     scanf("%d %d", &a, &b);
//     printf("Resultado: %d\n", multiplicar(a, b));
//     return 0;
// }






//atv 11
// int contar_caractere(char str[], char c, int i) {
//     if (str[i] == '\0') {
//         return 0;
//     }
//     if (str[i] == c) {
//         return 1 + contar_caractere(str, c, i + 1);
//     }
//     return contar_caractere(str, c, i + 1);
// }

// int main() {
//     char str[100], c;
//     printf("Digite a string: ");
//     fgets(str, sizeof(str), stdin);
//     printf("Digite o caractere a ser contado: ");
//     scanf("%c", &c);
    
//     printf("O caractere '%c' aparece %d vezes na string.\n", c, contar_caractere(str, c, 0));
//     return 0;
// }





//atv 12
// int soma_array(int arr[], int tamanho) {
//     if (tamanho == 0) {
//         return 0;
//     }
//     return arr[tamanho - 1] + soma_array(arr, tamanho - 1);
// }

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int tamanho = sizeof(arr) / sizeof(arr[0]);
//     printf("A soma dos elementos do array é: %d\n", soma_array(arr, tamanho));
//     return 0;
// }





//atv 13
// int verificar_primo(int n, int divisor) {
//     if (divisor > sqrt(n)) {
//         return 1;
//     }
//     if (n % divisor == 0) {
//         return 0;
//     }
//     return verificar_primo(n, divisor + 1);
// }

// int primo(int n) {
//     if (n <= 1) {
//         return 0;
//     }
//     return verificar_primo(n, 2);
// }

// int main() {
//     int n;
//     printf("Digite um número: ");
//     scanf("%d", &n);

//     if (primo(n)) {
//         printf("%d é primo.\n", n);
//     } else {
//         printf("%d não é primo.\n", n);
//     }

//     return 0;
// }





// atv 14
// void decimal_para_binario(int n) {
//     if (n > 1) {
//         decimal_para_binario(n / 2);
//     }
//     printf("%d", n % 2);
// }

// int main() {
//     int n;
//     printf("Digite um número decimal: ");
//     scanf("%d", &n);
    
//     printf("A representação binária de %d é: ", n);
//     if (n == 0) {
//         printf("0");
//     } else {
//         decimal_para_binario(n);
//     }
//     printf("\n");
//     return 0;
// }




//atv 15
// void imprimir_pares(int n) {
//     if (n < 0) {
//         return;
//     }
//     if (n % 2 == 0) {
//         printf("%d ", n);
//     }
//     imprimir_pares(n - 1);
// }

// int main() {
//     int n;
//     printf("Digite um número: ");
//     scanf("%d", &n);
    
//     printf("Números pares de 0 até %d: ", n);
//     imprimir_pares(n);
//     printf("\n");
    
//     return 0;
// }

