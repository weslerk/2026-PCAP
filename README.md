# 2026-PCAP — Wesley

Exercícios e projetos de Pensamento Computacional, Algoritmos e Programação.

## Onde está cada atividade

| Pasta | Conteúdo |
|---|---|
| [beecrowd](beecrowd/) | Problemas do Beecrowd em Python, identificados pelo número. |
| [prog-c](prog-c/) | Os 24 problemas da lista do Beecrowd em C, além do exemplo `hello.c`. Veja o [índice](prog-c/README.md). |
| [aula16](aula16/) | Primeira versão do Adivinhe o Número em Python. |
| [revisao](revisao/) | Revisão de Python e quatro exercícios de conserto. |
| [fliperama](fliperama/) | MeuApp v2.0 em Python: jogos, cadastro e arquivos CSV. |
| [fliperama-c](fliperama-c/) | MeuApp v3.0 em C: menu, cadastro, Adivinhe e persistência. Entrega da Atividade 16. |

## Fliperama em C — Atividade 16

No terminal do Codespace, começando na raiz do repositório:

```bash
cd fliperama-c
gcc -Wall fliperama.c -o fliperama
./fliperama
```

O [README do projeto](fliperama-c/README.md) contém a comparação Python × C,
as instruções e a autoavaliação para o conceito C. O cadastro fica em
`fliperama-c/jogadores.csv` e é salvo ao escolher 0 no menu.

## Fliperama em Python

Começando na raiz do repositório:

```bash
cd fliperama
python3 main.py
```

Os arquivos `jogadores.csv` e `placar.csv` ficam junto dos módulos do projeto.
Execute de dentro dessa pasta para usar esses dados. Veja as instruções no
[README da versão Python](fliperama/README.md).

## Exercícios em C

Cada arquivo é um programa independente. Por exemplo, começando na raiz:

```bash
cd prog-c
gcc -Wall 1001.c -o 1001
./1001
```

O arquivo `1004.c` calcula o produto de dois inteiros; antes da organização,
ele estava com o nome `1037.c`. O conteúdo foi preservado e o nome passou a
corresponder ao problema que resolve.

## Organização e arquivos gerados

Os dados de cada Fliperama ficam na sua própria pasta. O CSV da versão
Python tem três campos e o da versão C tem dois; eles são independentes.
Os executáveis e os caches do Python são gerados durante o uso e ficam fora
do Git pelo `.gitignore`. Os arquivos-fonte e os dados CSV são versionados.
