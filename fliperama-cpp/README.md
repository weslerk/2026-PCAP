# Fliperama em C++ (MeuApp v4.0)

Wesley · Aula 32 · Pensamento Computacional, Algoritmos e Programação

## O que é

O menu permite cadastrar jogadores, listar o cadastro e jogar Adivinhe o Número.
É a versão em C++ do [fliperama em C](../fliperama-c). Os apelidos e as partidas ficam em dois `vectors` e são gravados no CSV ao sair.

## Como compilar e rodar

Na raiz do repositório, execute:

```bash
cd fliperama-cpp
g++ -Wall fliperama.cpp -o fliperama
./fliperama
```

Use 1 para jogar, 2 para cadastrar, 3 para listar e 0 para salvar e sair.
Cadastre o apelido antes da primeira partida. Ele precisa ser único e sem espaços ou vírgulas.
O jogo aceita palpites de 1 a 100 e só conta a partida depois do acerto.

## Arquivos

- `fliperama.cpp` contém o menu, o cadastro, o jogo e as funções de arquivo.
- `jogadores.csv` guarda o apelido e a quantidade de partidas de cada jogador, separados por vírgula. O cadastro inicial veio da versão em C.

## C × C++: o que mudou

| O que | No [fliperama.c](../fliperama-c/fliperama.c) | No fliperama.cpp |
|---|---|---|
| Guardar um jogador | Linha 90: `strcpy(nomes[total], novo_nome)` copia o apelido para o vetor. | Linhas 86–87: `push_back` acrescenta o apelido e a contagem inicial aos dois `vectors`. |
| Comparar apelidos | Linha 67: `strcmp(nomes[indice], nome_busca) == 0` compara os textos. | Linha 69: `apelidos[i] == procurado` compara as duas `strings`. |
| Função de cadastro | Linha 74: `int cadastrar(..., int total)` recebe o total. Na linha 93, devolve o total atualizado. | Linha 76: `void cadastrar(...)` recebe os dois `vectors` por referência e altera os originais. |

## O que o C++ decidiu por mim

O `vector` reserva mais espaço quando o cadastro cresce. A quantidade vem de `size()`.
A `string` gerencia o espaço do apelido e permite comparar os textos diretamente com `==`.

## Autoavaliação

| Critério | Conceito esperado | Onde se prova |
|---|---|---|
| 1. Estrutura, compilação e Git | C | `fliperama.cpp`, linhas 1–8 e 21: cabeçalho LIAC e dono. `.gitignore`, linhas 12–13: executáveis ignorados. A compilação com `-Wall` passou sem avisos. |
| 2. Cadastro, vectors e referência | C | `fliperama.cpp`, linhas 34–48 e 66–100: valida a opção, busca, recusa duplicata, cadastra e lista. |
| 3. Jogo e partidas | C | `fliperama.cpp`, linhas 102–131: exige jogador cadastrado, aceita palpites de 1 a 100 e soma a partida depois do acerto. |
| 4. Persistência | C | `fliperama.cpp`, linhas 134–189: usa `ofstream` e `ifstream`. As linhas 204 e 221 carregam ao abrir e salvam ao sair. `jogadores.csv`, linhas 1–3: cadastro inicial. |
| 5. Documentação e comparação | C | Este README tem as seis seções, a tabela com três comparações e a explicação de `vector` e `string`. |

A implementação, os testes locais e este rascunho de autoavaliação foram preparados com ajuda do Codex.
