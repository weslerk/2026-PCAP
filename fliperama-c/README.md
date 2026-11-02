# Fliperama do Wesley — MeuApp v3.0

## O que ele faz

Fliperama de terminal em C, desenvolvido para as Aulas 28 e 29 de PCAP.
O menu permite cadastrar jogadores, listar apelidos e partidas e jogar
Adivinhe o Número. O cadastro recusa apelidos repetidos e novos jogadores
quando chega a 50. Só joga quem está cadastrado, com palpites de 1 a 100.
O objetivo desta entrega é o conceito C.

## Como rodar

No terminal do Codespace, a partir da raiz do repositório:

```bash
cd fliperama-c
gcc -Wall fliperama.c -o fliperama
./fliperama
```

Use 2 para cadastrar, 3 para listar, 1 para jogar e 0 para salvar e sair.
Digite apelidos sem espaços, com até 19 caracteres e sem vírgulas.
O programa diferencia maiúsculas de minúsculas. Na primeira execução,
se não existir `jogadores.csv`, começa com o cadastro vazio.
O arquivo é procurado na pasta atual, por isso é preciso entrar em `fliperama-c`.
Nesta versão, os dados são gravados ao escolher 0; fechar no meio pode perder alterações.

## Os arquivos

- `fliperama.c`: menu, validação de entrada, cadastro, busca, jogo e persistência.
- `jogadores.csv`: uma linha por jogador, no formato `apelido,partidas`, sem cabeçalho.
- `README.md`: instruções, comparação e autoavaliação.

O executável `fliperama` fica fora do Git pela terceira linha do `.gitignore`
da raiz; `fliperama.exe`, gerado no Windows, também é ignorado.
Os apelidos `gabriela`, `davi` e `saimon` foram cadastrados pelo menu a partir
dos colegas indicados para esta entrega, usando apenas o primeiro nome como apelido.
O CSV desta versão tem dois campos; o CSV antigo do Python tem três e é separado.

## Python × C

Os números abaixo foram conferidos nos arquivos deste repositório.

| Operação | Python: `fliperama/jogadores.py` | C: `fliperama-c/fliperama.c` | O que mudou |
|---|---|---|---|
| Guardar um jogador | Linha 39: `jogadores.append(novo)` | Linhas 90–93: `strcpy`, zerar partidas e devolver `qtd + 1` | O C copia o apelido para uma posição já reservada e atualiza a contagem explicitamente. |
| Comparar apelidos | Linha 85: `jogadores[i][0] == apelido` | Linha 67: `strcmp(apelidos[i], procurado) == 0` | O C precisa comparar os caracteres; `==` entre endereços não compara o conteúdo. |
| Abrir para salvar | Linha 136: `open(ARQUIVO, 'w')` | Linha 135: `fopen(ARQUIVO, "w")` | O C usa um `FILE *`, verifica se abriu e grava com `fprintf`. |

## O que o C me obrigou a decidir

Escolhi reservar espaço para 50 jogadores em `CAPACIDADE`, na linha 15 de `fliperama.c`.
Como o vetor não cresce sozinho, o teste da linha 77 recusa um novo cadastro quando enche, evitando escrever fora da memória reservada.

A recusa foi verificada com uma cópia de teste usando `CAPACIDADE 2`: ana e bia
entraram, a terceira tentativa mostrou `Cadastro cheio: nao cabe mais ninguem.`
e o CSV ficou com duas linhas. O código entregue está com capacidade 50 e foi recompilado.

## Autoavaliação

| Critério | Conceito esperado | Onde se prova |
|---|---|---|
| 1. Estrutura, compilação e Git | C | `fliperama-c/fliperama.c`, linhas 1–17: autoria, LIAC e constantes; `.gitignore`, linhas 3–4: executáveis ignorados; histórico com commits descrevendo as mudanças. Compilação com `-Wall` sem avisos. |
| 2. Cadastro | C | `fliperama.c`, linha 36: validação numérica; linhas 64–105: buscar, cadastrar e listar; linha 77: capacidade; linha 86: duplicidade; laços com `i < qtd`. |
| 3. Jogo e partidas | C | `fliperama.c`, linhas 107–132: procura jogador, recusa `-1`, soma na posição encontrada e valida palpites entre 1 e 100. |
| 4. Persistência | C | `fliperama.c`, linhas 134–166: salvar e carregar; linha 184: leitura na abertura; linha 198: gravação ao sair. `jogadores.csv`, linhas 1–3: os três apelidos. |
| 5. Documentação | C | Este README: seis seções, tabela com três operações e linhas reais dos dois arquivos, e decisão sobre capacidade explicada acima. |

Verificações realizadas: menu com 9 e x; apelido repetido; jogador inexistente;
capacidade 2; abertura sem CSV e restauração do arquivo guardado; cadastro salvo
e relido. No jogo, um teste com semente controlada recusou 0, 101 e x, acertou
em duas tentativas válidas e confirmou ao reabrir que só o jogador certo somou uma partida.
Os testes usaram dados temporários, separados do cadastro entregue.

Exercício-minuto para revisar: a frase C vale nas duas versões: sem arquivo,
o cadastro começa vazio; no C, `fopen` devolve `NULL` e `carregar` devolve 0.

Usei o Codex para completar o código em C, corrigir o `.gitignore`, testar o funcionamento e preparar a documentação e a autoavaliação.
