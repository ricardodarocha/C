# C pra que serve

A linguagem C é uma linguagem clássica de baixo nível que pode resolver alguns problemas conhecidos
---

### 🔧 1. **Alocação de Memória e Gerenciamento Manual**

* **Problema:** Gerenciar memória dinamicamente sem coletor de lixo.
* **C resolve com:** `malloc`, `calloc`, `realloc`, `free`.
* **Aplicação típica:** Construção de estruturas como listas ligadas, árvores e buffers de rede.

---

### 🧵 2. **Implementação de Sistemas Operacionais**

* **Problema:** Criar software de controle de hardware, multitarefa, drivers etc.
* **C resolve com:** Acesso direto à memória, controle preciso sobre registradores e interrupções.
* **Exemplo famoso:** O núcleo do Linux é majoritariamente escrito em C.

---

### 📦 3. **Compiladores e Interpretadores**

* **Problema:** Traduzir ou interpretar código de alto nível para linguagem de máquina.
* **C resolve com:** Manipulação eficiente de strings, análise léxica/sintática com ponteiros e buffers.
* **Exemplo:** O compilador original do Python foi escrito em C.

---

### 📶 4. **Sistemas Embarcados e Firmware**

* **Problema:** Programar microcontroladores com pouca memória e recursos.
* **C resolve com:** Código enxuto, sem overhead, com controle de bits e portas de E/S.
* **Aplicações:** Máquinas industriais, sistemas automotivos, eletrodomésticos.

---

### 📚 5. **Estruturas de Dados e Algoritmos**

* **Problema:** Implementar estruturas como pilhas, filas, árvores binárias, grafos.
* **C resolve com:** Ponteiros e structs permitem construção eficiente dessas estruturas.
* **Clássicos:** Busca binária, ordenações (quick sort, merge sort), algoritmos de grafos (DFS, BFS).

---

### 🧠 6. **Desenvolvimento de Compressores e Codificadores**

* **Problema:** Otimizar processamento de arquivos e transmissão de dados.
* **C resolve com:** Manipulação de bits, buffers e arquivos binários.
* **Exemplo:** Codificadores JPEG, MP3, ZIP.

---

### 🎮 7. **Desenvolvimento de Jogos e Simulações**

* **Problema:** Criar sistemas de física, gráficos e lógica de jogo eficientes.
* **C resolve com:** Controle de tempo real, acesso direto a memória gráfica (em bibliotecas como SDL, OpenGL).
* **Exemplo:** Doom, Quake e outros jogos clássicos foram feitos em C.

---

### 🔗 8. **Interoperabilidade com Hardware (Drivers)**

* **Problema:** Controlar dispositivos como impressoras, placas de vídeo, sensores.
* **C resolve com:** Leitura e escrita em registradores, acesso a hardware via ponteiros.

---

### 📡 9. **Protocolos de Rede e Comunicação Baixo Nível**

* **Problema:** Construção de protocolos TCP/IP, sockets, firewalls, etc.
* **C resolve com:** Manipulação de buffers e pacotes binários, alta performance.
* **Exemplo:** bibliotecas como `libpcap`, `OpenSSL`, `libcurl`.

---

### 💻 10. **Criação de Sistemas de Arquivos e Banco de Dados**

* **Problema:** Gerenciar arquivos, índices, buffers e cache.
* **C resolve com:** Manipulação eficiente de arquivos binários, ponteiros e estruturas de dados personalizadas.
* **Exemplo:** Git, SQLite foram escritos em C.

---

### 🔢 **Ordenação (Sorting)**

1. **Bubble Sort**
   Algoritmo de ordenação simples com trocas sucessivas.

   ```c
   void bubble_sort(int arr[], int n) {
       for (int i = 0; i < n-1; i++)
           for (int j = 0; j < n-i-1; j++)
               if (arr[j] > arr[j+1]) {
                   int tmp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = tmp;
               }
   }
   ```

2. **Quick Sort**
   Algoritmo recursivo eficiente de divisão e conquista.

3. **Merge Sort**
   Baseado em dividir e juntar subarrays ordenados.

4. **Insertion Sort**

5. **Selection Sort**

6. **Heap Sort**

---

### 🔍 **Busca (Searching)**

1. **Busca Linear**
   Percorre o vetor do início ao fim.
2. **Busca Binária**
   Requer vetor ordenado. Divide e conquista.

   ```c
   int busca_binaria(int arr[], int n, int x) {
       int esq = 0, dir = n - 1;
       while (esq <= dir) {
           int meio = (esq + dir) / 2;
           if (arr[meio] == x) return meio;
           if (arr[meio] < x) esq = meio + 1;
           else dir = meio - 1;
       }
       return -1;
   }
   ```

---

### 📊 **Estruturas de Dados e Algoritmos Associados**

1. **Pilhas (Stacks)** — usando arrays ou listas encadeadas.
2. **Filas (Queues)** — incluindo fila circular.
3. **Listas Encadeadas** — simples, duplas, circulares.
4. **Árvores Binárias**

   * Inserção, remoção, percurso em pré/in/pós-ordem.
5. **Tabelas Hash**
6. **Grafos**

   * Representação com matriz de adjacência ou lista.
   * Percursos: DFS (busca em profundidade), BFS (busca em largura).
   * Algoritmos: Dijkstra, Bellman-Ford, Floyd-Warshall, Kruskal, Prim.

---

### 📈 **Algoritmos de Programação Dinâmica**

1. **Fibonacci com Memoização**
2. **Problema da Mochila (0/1 Knapsack)**
3. **Subsequência Comum Mais Longa (LCS)**
4. **Caminho Mínimo em Matriz**

---

### 🧮 **Algoritmos Matemáticos**

1. **MDC (Euclides)**

   ```c
   int mdc(int a, int b) {
       return b == 0 ? a : mdc(b, a % b);
   }
   ```

2. **Crivo de Eratóstenes (Números primos)**

3. **Fatorial (iterativo e recursivo)**

4. **Números de Fibonacci**

5. **Exponenciação Rápida**

6. **Números Perfeitos, Amigáveis, Palíndromos**

---

### 🧩 **Problemas Clássicos de Lógica/Backtracking**

1. **Torre de Hanói**
2. **N Rainhas**
3. **Solução de Labirinto (DFS/BFS ou recursão)**
4. **Satisfação de restrições (Sudoku, por exemplo)**

---

### 🧠 **Outros Clássicos Interessantes**

1. **Verificador de Palíndromo**
2. **Conversor de Infixa para Pós-fixa**
3. **Parser de Expressões Aritméticas**
4. **Algoritmos de compressão básica (Run Length Encoding)**
5. **Simulação de Autômatos (ex: Máquina de Turing, DFA/NFA)**

---

