# Desafio da Tabuada

Jogo autoral do meu Fliperama. Abre pela opção `[4]` do menu.
Autor: Wesley

## A regra

O programa sorteia dois números de 1 a 10 e pede o resultado da
multiplicação. A partida possui três rodadas. Cada resposta correta vale um
ponto, e o jogador vence o desafio se acertar pelo menos duas multiplicações.

## Como jogar

1. Dentro da pasta `fliperama`, rode `python3 main.py`.
2. Escolha a opção `[4]` no menu.
3. Informe o apelido e responda às três multiplicações.

## O que eu reusei do projeto, e onde

| Peça | De qual módulo | Onde eu uso | Para que serve ali |
|---|---|---|---|
| `titulo()` | `telas.py` | `meujogo.py`, linhas 17 e 47–49 | desenha o título e o resultado final |
| `linha()` | `telas.py` | `meujogo.py`, linha 42 | separa as rodadas na tela |
| `ler_numero()` | `modulos.py` | `meujogo.py`, linhas 26–30 | pede a resposta e recusa valores fora de 0 a 100 |
| contagem da partida | `placar.py` | `main.py`, linha 74 | soma uma partida ao quarto jogo |
| `buscar()` | `jogadores.py` | `main.py`, linhas 76–80 | procura quem está jogando e atualiza sua ficha |

## Exemplo de execução

```text
========================================
          DESAFIO DA TABUADA
========================================
Rodada 1 de 3
Quanto e 4 x 6: 24
Acertou!
========================================
Voce fez 2 ponto(s).
========================================
       VOCE VENCEU O DESAFIO!
========================================
```

## O que ainda não funciona

- O jogo possui somente multiplicações de 1 a 10 e ainda não oferece níveis
  diferentes de dificuldade.
