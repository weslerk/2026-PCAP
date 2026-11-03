# Fliperama em Python

Wesley — PCAP 2026.

## O que ele faz

Tem quatro jogos: Adivinhe o Número, Pedra-Papel-Tesoura, Par ou Ímpar
e Desafio da Tabuada. Também dá para cadastrar, listar, alterar e excluir
jogadores. O placar conta as partidas e a lista mostra os dez que mais jogaram.
Os dados ficam salvos em arquivos CSV.

## Como rodar

Na raiz do repositório:

```bash
cd fliperama
python3 main.py
```

Escolha o número do jogo no menu. A opção 5 abre o cadastro e 0 salva e sai.

## Os arquivos

- `main.py`: menu principal.
- `telas.py`: títulos e linhas da tela.
- `modulos.py`: leitura e validação das respostas.
- `placar.py`: salva e lê o placar.
- `jogadores.py`: cadastro e busca de jogadores.
- `adivinhe.py`, `ppt.py`, `parimpar.py` e `meujogo.py`: jogos.
- `placar.csv` e `jogadores.csv`: dados salvos.
- `README-meujogo.md`: regra do Desafio da Tabuada.

A função `ler_texto` ficou em `modulos.py` para ser usada em mais de um
arquivo. Assim não precisa repetir a mesma validação.

## As aulas

- Aula 20: menu e jogos em arquivos separados.
- Aula 21: Pedra-Papel-Tesoura e placar salvo.
- Aula 22: cadastro de jogadores.
- Aula 23: validação e README.

## Exemplo e limites

```text
[1] Adivinhe o Numero
[2] Pedra-Papel-Tesoura
[3] Par ou Impar
[4] Desafio da Tabuada
[5] Jogadores
[0] Sair
Sua escolha: 4
Quem vai jogar (apelido): wesley
```

Ainda não pode usar vírgula no nome, porque ela separa os dados do CSV.
O Desafio da Tabuada só tem um nível.

## Autoavaliação

Conceito esperado nesta versão: B.

| Critério | Conceito | Onde está |
|---|---|---|
| 1. Estrutura | B | Cabeçalho e funções de `jogadores.py`. |
| 2. Cadastro | B | `cadastrar`, `listar`, `alterar` e `excluir`, em `jogadores.py`. |
| 3. Busca | B | `buscar`, em `jogadores.py`, e o teste `i != -1`, em `main.py`. |
| 4. Arquivo | B | `salvar_jogadores` e `carregar_jogadores`, em `jogadores.py`. |
| 5. README | B | As seis seções deste arquivo e o exemplo acima. |
| 6. Meu jogo | B | `meujogo.py` e `README-meujogo.md`. |

Usei o ChatGPT para ajudar a organizar os arquivos, conferir a atividade,
testar o programa e simplificar os textos.
