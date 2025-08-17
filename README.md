# 🚢 Desafio Batalha Naval - MateCheck ⚓

Este projeto é uma solução para o desafio de programação **Batalha Naval**, desenvolvido em linguagem C. O objetivo é implementar diferentes níveis de complexidade para o posicionamento de navios e habilidades especiais em um tabuleiro, utilizando matrizes e lógica de programação.

---

## 🧩 Níveis do Desafio

### 🟢 Nível Novato
- Criação de um tabuleiro **5x5**.
- Posicionamento de dois navios: um vertical 🚤 e outro horizontal 🚢.
- Exibição das coordenadas de cada parte dos navios.

### 🟡 Nível Aventureiro
- Expansão do tabuleiro para **10x10**.
- Posicionamento de quatro navios, incluindo dois em diagonais ↘️↙️.
- Exibição do tabuleiro completo, mostrando `0` para posições vazias e `3` para posições ocupadas por navios.

### 🔴 Nível Mestre
- Implementação de habilidades especiais usando matrizes:
  - **Cone** 🔺
  - **Octaedro** 🧊
  - **Cruz** ✝️
- Exibição das áreas afetadas por cada habilidade, utilizando `0` para áreas não afetadas e `1` para áreas atingidas.

---

## 💻 Como executar

1. Compile o arquivo fonte:
   ```
   gcc batalhaNaval.c -o batalhaNaval.exe
   ```
2. Execute o programa:
   ```
   ./batalhaNaval.exe
   ```
   ou no PowerShell:
   ```
   .\batalhaNaval.exe
   ```

---

## 🗂️ Estrutura do Código

- O código está organizado por níveis, com comentários explicativos.
- Cada nível é exibido separadamente no terminal.
- As habilidades especiais são representadas por matrizes e impressas em formato visual.

---

## 👤 Autor

Desenvolvido por [João Gabriel] 🚀


