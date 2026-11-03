# Desafio da Tabuada

Wesley — meu jogo do Fliperama. É a opção 4 do menu.

## Regra

São três multiplicações com números sorteados de 1 a 10.
Cada acerto vale um ponto. Para ganhar, precisa acertar pelo menos duas.

## Como jogar

```bash
cd fliperama
python3 main.py
```

Escolha 4, digite seu apelido e responda às contas.

## O que foi reaproveitado

| Função | Arquivo | Onde é usada |
|---|---|---|
| `titulo()` | `telas.py` | `meujogo.py`, linhas 17 e 47–49: mostra o título e o resultado. |
| `linha()` | `telas.py` | `meujogo.py`, linha 42: separa as rodadas. |
| `ler_numero()` | `modulos.py` | `meujogo.py`, linhas 26–30: lê a resposta de 0 a 100. |
| Contagem de partidas | `placar.py` | `main.py`, linha 74: conta uma partida do jogo. |
| `buscar()` | `jogadores.py` | `main.py`, linhas 76–80: procura o jogador. |

## Exemplo

```text
Rodada 1 de 3
Quanto e 4 x 6: 24
Acertou!
```

## O que falta

Ainda não tem níveis de dificuldade. As contas são sempre de 1 a 10.
