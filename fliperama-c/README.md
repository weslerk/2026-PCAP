# Fliperama em C

Wesley — Aulas 28 e 29, MeuApp v3.0.

## O que ele faz

Tem um menu para cadastrar jogadores, listar e jogar Adivinhe o Número.
O cadastro aceita até 50 jogadores e não deixa repetir apelido.
Para jogar, precisa estar cadastrado. O número sorteado vai de 1 a 100.
O cadastro é salvo ao sair e volta quando o programa abre de novo.

## Como rodar

Na raiz do repositório:

```bash
cd fliperama-c
gcc -Wall fliperama.c -o fliperama
./fliperama
```

1 joga, 2 cadastra, 3 lista e 0 salva e sai.
Use apelidos sem espaços nem vírgulas, com até 19 caracteres.
`ana` e `Ana` são apelidos diferentes.
Entre na pasta antes de rodar, porque o CSV é lido da pasta atual.
Se não tiver arquivo, começa vazio. Para guardar as mudanças, saia pelo 0.

## Os arquivos

- `fliperama.c`: código do programa.
- `jogadores.csv`: apelidos e número de partidas.
- `README.md`: explicação do trabalho.

No código, `nomes` guarda os apelidos, `jogos` guarda as partidas e
`total` conta os jogadores. A opção do menu fica em `escolha`.

O cadastro tem gabriela, davi e saimon, cadastrados pelo menu.
Os executáveis ficam fora do Git pelo `.gitignore` da raiz, linhas 3 e 4.
Este CSV é separado do usado no Fliperama em Python.

## Python × C

As linhas são dos arquivos `fliperama/jogadores.py` e `fliperama-c/fliperama.c`.

| O que faz | Python | C | Diferença |
|---|---|---|---|
| Guardar jogador | Linha 39: `jogadores.append(novo)` | Linhas 90–93: `strcpy`, partidas em 0 e `return total + 1` | No C, preciso copiar o apelido e contar mais um jogador. |
| Comparar apelidos | Linha 85: `jogadores[i][0] == apelido` | Linha 67: `strcmp(nomes[indice], nome_busca) == 0` | No C, `strcmp` compara o texto. |
| Abrir para salvar | Linha 136: `open(ARQUIVO, 'w')` | Linha 135: `fopen(ARQUIVO, "w")` | No C, uso `FILE *` e confiro se o arquivo abriu. |

## O que o C me obrigou a decidir

O limite de jogadores é 50, definido na linha 15 de `fliperama.c`.
O vetor não aumenta sozinho. Por isso, o teste na linha 77 recusa o cadastro cheio para não escrever fora dele.

O teste com capacidade 2 aceitou duas pessoas e recusou a terceira.
A versão entregue está com 50 de novo.

## Autoavaliação

Meu objetivo é o conceito C.

| Critério | Conceito | Onde está |
|---|---|---|
| 1. Estrutura e Git | C | `fliperama.c`, linhas 1–17: nome e cabeçalho. Compila com `-Wall` sem avisos. `.gitignore`, linhas 3–4: executáveis ignorados. Há commits das etapas. |
| 2. Cadastro | C | `fliperama.c`, linha 36: validação. Linhas 64–105: buscar, cadastrar e listar. Linha 77: cadastro cheio. Linha 86: apelido repetido. |
| 3. Jogo | C | `fliperama.c`, linhas 107–132: confere o jogador, conta a partida e aceita palpites de 1 a 100. |
| 4. Arquivo | C | `fliperama.c`, linhas 134–166: salvar e carregar. Linha 184: carrega ao abrir. Linha 198: salva ao sair. `jogadores.csv`, linhas 1–3: três jogadores. |
| 5. README | C | Este arquivo tem as seis seções, a tabela com três comparações e a explicação do limite. |

Foram testados o menu com 9 e x, apelido repetido, cadastro cheio e abertura sem arquivo.
Também foi conferido se a partida fica no jogador certo e volta ao abrir de novo.

Exercício-minuto: a frase C vale no Python e no C. Sem arquivo, começa vazio.
No C, `fopen` devolve `NULL` e `carregar` devolve 0.

Usei o Codex para ajudar no código, nos testes, no README e na autoavaliação.
