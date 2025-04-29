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



// 16  
// if (n < 0) {
// return;
// }
// imprimir_impares(n - 1);
// if (n % 2 != 0) {
// printf("%d ", n);
// }
// }

// int main() {
// int n=20;

// printf("Números impares de 0 até %d: ", n);
// imprimir_impares(n);
// printf("\n");

// return 0;
// }

//17. 
// int busca(int arr[], int tamanho, int elemento) {
//     if (tamanho == 0) { 
//         return 0; 
//     }
//     if (arr[tamanho - 1] == elemento) { 
//         return 1; 
//     }
//     return busca(arr, tamanho - 1, elemento);
// }
// int main() {
//     int arr[] = {2, 4, 6, 8};
//     int tamanho = sizeof(arr) / sizeof(arr[0]);
//     int elemento = 5;

//     if (busca(arr, tamanho, elemento)) {
//         printf("Elemento %d encontrado no array.\n", elemento);
//     } else {
//         printf("Elemento %d não encontrado no array.\n", elemento);
//     }

//     return 0;
// }



//18.
// int comprimento_recursivo(char str[]) {
//     if (str[0] == '\0') {
//         return 0; 
//     }
//     return 1 + comprimento_recursivo(str + 1); 
// }

// int main() {
//     char str[] = "recursivo";

//     printf("O comprimento da string \"%s\" é: %d\n", str, comprimento_recursivo(str));

//     return 0;
// }


//19.
// void torre_de_hanoi(int n, char origem, char auxiliar, char destino) {
//     if (n == 1) {
//         printf("Mover disco 1 de %c para %c\n", origem, destino);
//         return;
//     }
//     torre_de_hanoi(n - 1, origem, destino, auxiliar); 
//     printf("Mover disco %d de %c para %c\n", n, origem, destino);
//     torre_de_hanoi(n - 1, auxiliar, origem, destino); 
// }

// int main() {
//     int n = 2; 
//     printf("Solução para %d discos:\n", n);
//     torre_de_hanoi(n, 'A', 'B', 'C');
//     return 0;
// }


//20. 
// void trocar(char *x, char *y) {
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }
// void permutar(char str[], int inicio, int fim) {
//     if (inicio == fim) {
//         printf("%s\n", str);
//         return;
//     }
//     for (int i = inicio; i <= fim; i++) {
//         trocar(&str[inicio], &str[i]);
//         permutar(str, inicio + 1, fim);      
//         trocar(&str[inicio], &str[i]);        
//     }
// }
// int main() {
//     char str[] = "abc";
//     int tamanho = strlen(str);
//     printf("Permutações da string \"%s\":\n", str);
//     permutar(str, 0, tamanho - 1);
//     return 0;
// }




//21. 
// void combinacoes(int arr[], int n, int k, int index, int data[], int i) {
//     if (index == k) {
//         printf("{ ");
//         for (int j = 0; j < k; j++) {
//             printf("%d ", data[j]);
//         }
//         printf("}\n");
//         return;
//     }
//     if (i >= n) {
//         return;
//     }
//     data[index] = arr[i];
//     combinacoes(arr, n, k, index + 1, data, i + 1);
//     combinacoes(arr, n, k, index, data, i + 1);
// }

// int main() {
//     int arr[] = {1, 2, 3};
//     int k = 2;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int data[k];
    
//     printf("Combinações de tamanho %d:\n", k);
//     combinacoes(arr, n, k, 0, data, 0);
    
//     return 0;
// }





//22. 
// void subconjuntos(int arr[], int n, int index, int data[], int dataIndex) {
//     if (index == n) {
//         printf("{ ");
//         for (int i = 0; i < dataIndex; i++) {
//             printf("%d ", data[i]);
//         }
//         printf("}\n");
//         return;
//     }
//     data[dataIndex] = arr[index];
//     subconjuntos(arr, n, index + 1, data, dataIndex + 1);
//     subconjuntos(arr, n, index + 1, data, dataIndex);
// }

// int main() {
//     int arr[] = {1, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int data[n];
    
//     printf("Subconjuntos:\n");
//     subconjuntos(arr, n, 0, data, 0);
    
//     return 0;
// }



//23.
// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (int i = 0; i < n1; i++) L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) arr[k++] = L[i++];
//         else arr[k++] = R[j++];
//     }
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int main() {
//     int arr[] = {5, 3, 8, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     mergeSort(arr, 0, n - 1);
    
//     printf("Array ordenado: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }




//24. 
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
    
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     int temp = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = temp;
    
//     return i + 1;
// }
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }
// int main() {
//     int arr[] = {9, 2, 5, 1, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     quickSort(arr, 0, n - 1);
    
//     printf("Array ordenado: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }



//25.
// int buscaBinaria(int arr[], int esquerda, int direita, int x) {
//     if (esquerda > direita) {
//         return -1;
//     }
    
//     int meio = esquerda + (direita - esquerda) / 2;
    
//     if (arr[meio] == x) {
//         return meio;
//     } else if (arr[meio] > x) {
//         return buscaBinaria(arr, esquerda, meio - 1, x);
//     } else {
//         return buscaBinaria(arr, meio + 1, direita, x);
//     }
// }

// int main() {
//     int arr[] = {1, 3, 5, 7, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 5;
    
//     int resultado = buscaBinaria(arr, 0, n - 1, x);
    
//     if (resultado != -1) {
//         printf("Elemento encontrado no índice %d.\n", resultado);
//     } else {
//         printf("Elemento não encontrado.\n");
//     }
    
//     return 0;
// }




//26.
// int exponenciacaoRapida(int x, int n) {
//     if (n == 0) {
//         return 1;
//     }
//     if (n % 2 == 0) {
//         int metade = exponenciacaoRapida(x, n / 2);
//         return metade * metade;
//     } else {
//         return x * exponenciacaoRapida(x, n - 1);
//     }
// }

// int main() {
//     int x = 3, n = 4;
//     printf("%d elevado a %d é: %d\n", x, n, exponenciacaoRapida(x, n));
//     return 0;
// }





// 27. 
// int contarCaminhos(int x1, int y1, int x2, int y2) {
//     if (x1 > x2 || y1 > y2) {
//         return 0;
//     }
//     if (x1 == x2 && y1 == y2) {
//         return 1;
//     }
//     return contarCaminhos(x1 + 1, y1, x2, y2) + contarCaminhos(x1, y1 + 1, x2, y2);
// }

// int main() {
//     int linhas = 3, colunas = 3;
//     int totalCaminhos = contarCaminhos(0, 0, linhas - 1, colunas - 1);
//     printf("Total de caminhos de (0,0) até (%d,%d): %d\n", linhas - 1, colunas - 1, totalCaminhos);
//     return 0;
// }





// 28. Problema das N-rainhas
// #define N 4
// int tabuleiro[N][N];
// int podeColocar(int linha, int coluna) {
//     for (int i = 0; i < linha; i++) {
//         if (tabuleiro[i][coluna]) {
//             return 0;
//         }
//     }
//     for (int i = linha-1, j = coluna-1; i >= 0 && j >= 0; i--, j--) {
//         if (tabuleiro[i][j]) {
//             return 0;
//         }
//     }
//     for (int i = linha-1, j = coluna+1; i >= 0 && j < N; i--, j++) {
//         if (tabuleiro[i][j]) {
//             return 0;
//         }
//     }
//     return 1;
// }
// void imprimirTabuleiro() {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (tabuleiro[i][j])
//                 printf("Q ");
//             else
//                 printf(". ");
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// void resolver(int linha) {
//     if (linha == N) {
//         imprimirTabuleiro();
//         return;
//     }
//     for (int col = 0; col < N; col++) {
//         if (podeColocar(linha, col)) {
//             tabuleiro[linha][col] = 1;
//             resolver(linha + 1);
//             tabuleiro[linha][col] = 0;
//         }
//     }
// }

// int main() {
//     resolver(0);
//     return 0;
// }





// 29. Labirinto com backtracking

// #define N 3
// #define M 4

// int labirinto[N][M] = {
//     {0, 1, 0, 0},
//     {0, 0, 0, 1},
//     {1, 0, 1, 0}
// };

// int solucao[N][M] = {0};

// int mover(int x, int y) {
//     if (x == N - 1 && y == M - 1 && labirinto[x][y] == 0) {
//         solucao[x][y] = 1;
//         return 1;
//     }
//     if (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0) {
//         if (solucao[x][y] == 1) {
//             return 0;
//         }
//         solucao[x][y] = 1;
//         if (mover(x + 1, y)) return 1;
//         if (mover(x, y + 1)) return 1;
//         if (mover(x - 1, y)) return 1;
//         if (mover(x, y - 1)) return 1;
//         solucao[x][y] = 0;
//     }
//     return 0;
// }

// void imprimirLabirinto() {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             if (solucao[i][j])
//                 printf("* ");
//             else
//                 printf("%d ", labirinto[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     if (mover(0, 0)) {
//         imprimirLabirinto();
//     } else {
//         printf("Sem solução.\n");
//     }
//     return 0;
// }





// 30.

// void gerar_parenteses(char *str, int pos, int n, int aberto, int fechado) {
//     if (fechado == n) {
//         str[pos] = '\0';
//         printf("%s\n", str);
//         return;
//     }
//     if (aberto < n) {
//         str[pos] = '(';
//         gerar_parenteses(str, pos + 1, n, aberto + 1, fechado);
//     }
//     if (fechado < aberto) {
//         str[pos] = ')';
//         gerar_parenteses(str, pos + 1, n, aberto, fechado + 1);
//     }
// }

// int main() {
//     int n = 3;
//     char str[2 * n + 1];
//     gerar_parenteses(str, 0, n, 0, 0);
//     return 0;
// }
