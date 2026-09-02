# Fliperama do Wesley

Um fliperama de terminal com quatro jogos, placar persistente e cadastro de
jogadores. Projeto desenvolvido na disciplina PCAP, no 1º ano do Técnico em
Informática do IFPR.

## O que ele faz

- Reúne quatro jogos: Adivinhe o Número, Pedra-Papel-Tesoura, Par ou Ímpar e
  Desafio da Tabuada;
- Mantém um placar com a quantidade de vezes que cada jogo foi aberto;
- Cadastra, lista, altera e exclui jogadores;
- Guarda o placar e os jogadores em arquivos CSV;
- Mostra um Top 10 ordenado pela quantidade de partidas.

## Como rodar

```bash
cd fliperama
python3 main.py
```

## Os arquivos

- `main.py`: menu, placar e chamadas dos jogos;
- `telas.py`: funções visuais usadas nas telas;
- `modulos.py`: funções de entrada e validação;
- `placar.py`: grava e lê a quantidade de partidas de cada jogo;
- `jogadores.py`: cadastro, busca, Top 10 e persistência dos jogadores;
- `adivinhe.py`, `ppt.py`, `parimpar.py` e `meujogo.py`: os quatro jogos;
- `placar.csv` e `jogadores.csv`: dados que sobrevivem ao fechamento;
- `README-meujogo.md`: regra e peças reaproveitadas no jogo autoral.

A função `ler_texto()` ficou no `modulos.py` porque ela é uma ferramenta de
entrada que pode ser reutilizada por outras partes do projeto. Assim, o
`jogadores.py` usa a validação sem repetir a mesma lógica em várias funções.

## De onde ele veio

- Aula 20: os jogos viraram um programa com módulos e menu;
- Aula 21: entrou o Pedra-Papel-Tesoura e o placar passou a sobreviver;
- Aula 22: entrou o cadastro de jogadores com as quatro operações;
- Aula 23: campos vazios foram barrados e o projeto foi documentado.

## Exemplo de execução

```text
========================================
           FLIPERAMA DO WESLEY
========================================
[1] Adivinhe o Numero
[2] Pedra-Papel-Tesoura
[3] Par ou Impar
[4] Desafio da Tabuada
[5] Jogadores
[0] Sair
========================================
Sua escolha: 4
Quem vai jogar (apelido): wesley
========================================
          DESAFIO DA TABUADA
========================================
```

## O que ainda não funciona

- Um nome com vírgula quebra a separação dos campos no arquivo CSV;
- O Desafio da Tabuada ainda não possui níveis diferentes de dificuldade.

## Autoavaliação

Conceito que eu acho que a minha entrega vale: **B**

### Mapa do projeto: onde está cada coisa

| O que | Arquivo | Função |
|---|---|---|
| Adivinhe o Número | `adivinhe.py` | `jogar_adivinhe` |
| Pedra-Papel-Tesoura | `ppt.py` | `jogar_ppt` |
| Par ou Ímpar | `parimpar.py` | `jogar_parimpar` |
| Desafio da Tabuada | `meujogo.py` | `jogar_meujogo` |
| Cadastro de jogadores | `jogadores.py` | `menu_jogadores` |
| Ranking Top 10 | `jogadores.py` | `listar` |
| Placar que sobrevive | `placar.py` | `salvar_placar` e `carregar_placar` |

### Critério por critério: o nível e a prova

| Critério | Nível | Onde está a prova |
|---|---|---|
| 1. Estrutura e registro | B | `jogadores.py`: cabeçalho e docstrings das oito funções |
| 2. As quatro operações | B | `jogadores.py`: `cadastrar`, `listar`, `alterar`, `excluir` e `menu_jogadores` |
| 3. Busca e índice | B | `jogadores.py`: `buscar`; `main.py`: conferência de `i != -1` |
| 4. Persistência e primeira execução | B | `jogadores.py`: `salvar_jogadores` e `carregar_jogadores` |
| 5. Documentação e autoavaliação | B | `README.md`: seis seções, exemplo e esta autoavaliação |
| 6. Jogo autoral e reúso | B | `meujogo.py`: `jogar_meujogo`; `README-meujogo.md`: tabela de reúso |

### Usei IA?

Usei o ChatGPT para ajudar a organizar a versão final dos arquivos, conferir os
requisitos da atividade e testar o funcionamento. Revisei o código para entender
as funções, o cadastro, o placar e a regra do meu jogo.
