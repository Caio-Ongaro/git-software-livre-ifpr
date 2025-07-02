# Trabalho - Sistemas de Software Livre (IFPR)

Este repositório contém a resolução do trabalho prático da disciplina de **Sistemas de Software Livre**, do curso de Ciência da Computação (IFPR – Campus Pinhais). O objetivo é implementar três programas simples em **C++**, utilizando:

- **Git** para controle de versão e trabalho em grupo  
- **Make** para automação da compilação  
- **Bash** para criação e execução de casos de teste automatizados

---

## 👥 Integrantes do Grupo

- Caio Henrique Ongaro Cardoso  
- Vinicius Takaki Rodrigues

---

## 📁 Estrutura do Projeto

```bash
git-software-livre-ifpr/
├── matriz.cpp
├── primo.cpp
├── vetor.cpp
├── Makefile
├── README.md
├── scripts/
│   ├── generate-test-primo.sh
│   ├── generate-test-vetor.sh
│   └── generate-test-matriz.sh
└── testes/
    ├── primo/
    │   ├── entrada1.txt
    │   └── saida1.txt
    ├── vetor/
    │   ├── entrada1.txt
    │   └── saida1.txt
    └── matriz/
        ├── entrada1.txt
        └── saida1.txt
```
---

## 🧠 Descrição dos Programas
**1. 🔢 primo.cpp**
   Lê um número inteiro e imprime:

- "Primo" se for primo
- "Não é primo" caso contrário

 - Exemplo:
     ```
    $ ./primo
    7
    Primo

    $ ./primo < testes/primo/entrada1.txt
    Primo
    ```

**2. 📈 vetor.cpp**
Lê um número n e, em seguida, um vetor com n inteiros. O programa imprime o maior valor.

 - Exemplo:
    ```
    $ ./vetor
    5
    3 9 2 1 5
    9
    
    $ ./vetor < testes/vetor/entrada1.txt
    9
    ```

**3. 🧮 matriz.cpp**
Lê duas matrizes n × n e uma letra para operação:

- a → adição
- s → subtração
- m → multiplicação

O programa executa a operação e imprime a matriz resultante.

 - Exemplo:
    ```
    $ ./matriz
    2
    2 3
    3 3
    1 4
    6 5
    a
    3 7
    9 8
    
    $ ./matriz < testes/matriz/entrada1.txt
    3 7
    9 8
    ```

---

## ⚙️ Compilação com Make
Usamos um Makefile para automatizar a compilação com as flags -Wall -Wextra.

Compilar separadamente:
```
make primo
make vetor
make matriz
```
Compilar tudo de uma vez:
```
make all
```
Limpar os arquivos compilados e diretórios de teste:
```
make clean
```
**Nota**: Não há comando make test no Makefile, então os testes devem ser executados via scripts diretamente (veja a seção abaixo).

---

## 🧪 Testes Automatizados com Scripts Bash
Cada script gera um teste automático (entrada e saída) para um dos programas:
```
generate-test-primo.sh

generate-test-vetor.sh

generate-test-matriz.sh
```
✔️ **Como executar os testes**:
Abra o terminal na raiz do projeto e siga os passos:
```
cd scripts
./generate-test-primo.sh
./generate-test-vetor.sh
./generate-test-matriz.sh

```
Cada script:

1. Gera uma entrada de teste aleatória e salva em `../testes/<programa>/entrada1.txt`
2. Executa o programa correspondente, redirecionando a entrada gerada, salvando a saída em .`./testes/<programa>/saida1.txt`
3.Exibe uma mensagem confirmando a execução e localização dos arquivos

✔️ Como conferir manualmente os resultados:
Depois de executar os scripts, você pode conferir os arquivos de teste e executar os programas manualmente para visualizar as saídas:

```
# Voltar para a raiz do projeto
cd ..

# Executar o programa matriz com a entrada gerada
./matriz < testes/matriz/entrada1.txt

# Visualizar a saída gerada pelo script
cat testes/matriz/saida1.txt

```
**Nota**: Substitua `matriz` e os caminhos conforme desejar para os outros programas.



---

## 🔁 Controle de Versão (Git)
O desenvolvimento seguiu boas práticas, com branches organizadas por funcionalidades:

`main` — branch principal com versão integrada

`feat/matriz-multi` — multiplicação de matrizes

`feat/matriz-soma` — soma de matrizes

`feat/matriz-sub` — subtração de matrizes

`feat/mprimo` — programa de verificação de números primos

`feat/test-automation-structure` — estruturação dos scripts de testes

`feat/vetor-max` — busca do maior elemento no vetor

`feature/makefile` — ajustes no Makefile

Todos os recursos foram desenvolvidos e testados isoladamente e integrados via merge na main.

---

## ✅ Observações Finais
Todos os programas funcionam tanto no Linux quanto no Git Bash/WSL no Windows

O projeto está completo com entrada/saída de testes, scripts e Makefile funcional

Cumpre integralmente os requisitos do trabalho





