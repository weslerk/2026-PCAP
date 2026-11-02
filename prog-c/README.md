# Beecrowd em C — Wesley

Os 24 exercícios da lista, na mesma ordem da imagem. Cada arquivo é um
programa independente: recebe a entrada pelo terminal e imprime o resultado
sem mensagens extras, no formato do respectivo problema.

| Ordem | Problema | Exercício | Código em C |
|---|---|---|---|
| 1 | [1000](https://judge.beecrowd.com/pt/problems/view/1000) | Hello World! | [1000.c](1000.c) |
| 2 | [1001](https://judge.beecrowd.com/pt/problems/view/1001) | Extremamente Básico | [1001.c](1001.c) |
| 3 | [1003](https://judge.beecrowd.com/pt/problems/view/1003) | Soma Simples | [1003.c](1003.c) |
| 4 | [1004](https://judge.beecrowd.com/pt/problems/view/1004) | Produto Simples | [1004.c](1004.c) |
| 5 | [1011](https://judge.beecrowd.com/pt/problems/view/1011) | Esfera | [1011.c](1011.c) |
| 6 | [1002](https://judge.beecrowd.com/pt/problems/view/1002) | Área do Círculo | [1002.c](1002.c) |
| 7 | [1037](https://judge.beecrowd.com/pt/problems/view/1037) | Intervalo | [1037.c](1037.c) |
| 8 | [1041](https://judge.beecrowd.com/pt/problems/view/1041) | Coordenadas de um Ponto | [1041.c](1041.c) |
| 9 | [1044](https://judge.beecrowd.com/pt/problems/view/1044) | Múltiplos | [1044.c](1044.c) |
| 10 | [1043](https://judge.beecrowd.com/pt/problems/view/1043) | Triângulo | [1043.c](1043.c) |
| 11 | [1078](https://judge.beecrowd.com/pt/problems/view/1078) | Tabuada | [1078.c](1078.c) |
| 12 | [1073](https://judge.beecrowd.com/pt/problems/view/1073) | Quadrado de Pares | [1073.c](1073.c) |
| 13 | [1114](https://judge.beecrowd.com/pt/problems/view/1114) | Senha Fixa | [1114.c](1114.c) |
| 14 | [1113](https://judge.beecrowd.com/pt/problems/view/1113) | Crescente e Decrescente | [1113.c](1113.c) |
| 15 | [1067](https://judge.beecrowd.com/pt/problems/view/1067) | Números Ímpares | [1067.c](1067.c) |
| 16 | [1153](https://judge.beecrowd.com/pt/problems/view/1153) | Fatorial Simples | [1153.c](1153.c) |
| 17 | [1172](https://judge.beecrowd.com/pt/problems/view/1172) | Substituição em Vetor I | [1172.c](1172.c) |
| 18 | [1175](https://judge.beecrowd.com/pt/problems/view/1175) | Troca em Vetor I | [1175.c](1175.c) |
| 19 | [1173](https://judge.beecrowd.com/pt/problems/view/1173) | Preenchimento de Vetor I | [1173.c](1173.c) |
| 20 | [1178](https://judge.beecrowd.com/pt/problems/view/1178) | Preenchimento de Vetor III | [1178.c](1178.c) |
| 21 | [1165](https://judge.beecrowd.com/pt/problems/view/1165) | Número Primo | [1165.c](1165.c) |
| 22 | [1164](https://judge.beecrowd.com/pt/problems/view/1164) | Número Perfeito | [1164.c](1164.c) |
| 23 | [1180](https://judge.beecrowd.com/pt/problems/view/1180) | Menor e Posição | [1180.c](1180.c) |
| 24 | [1179](https://judge.beecrowd.com/pt/problems/view/1179) | Preenchimento de Vetor IV | [1179.c](1179.c) |

## Como compilar e executar

Na raiz do repositório, entre nesta pasta e compile somente o exercício desejado:

```bash
cd prog-c
gcc -std=c99 -Wall 1037.c -o 1037
./1037
```

Troque `1037` pelo número do problema. Não compile todos os arquivos juntos,
pois cada um tem seu próprio `main`. Os executáveis são ignorados pelo Git.
O arquivo `hello.c` é um exemplo introdutório extra e não faz parte dos 24 problemas.

## Observações

O `1037.c` desta pasta resolve Intervalo. O antigo arquivo com esse nome,
que calculava um produto, foi organizado anteriormente como `1004.c`.

Os quatro arquivos já existentes (1000, 1001, 1003 e 1004) foram preservados.
Usei o Codex para completar os outros 20 programas, organizar este índice
e verificar a compilação e as saídas com testes locais. Esses testes não
representam novas submissões ou confirmação de aceite pelo juiz do Beecrowd.

Verificação local: os 24 programas compilaram sem avisos com
`-std=c99 -Wall -Wextra -Wpedantic` e passaram em 124 execuções de teste,
incluindo limites dos intervalos, eixos, repetição, primos, perfeitos e vetores.
