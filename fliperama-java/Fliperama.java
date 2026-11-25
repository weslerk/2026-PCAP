/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v5.0 - Fliperama em Java, Aula 33
 * Autor: Wesley
 * LIAC: Leio a opcao do menu como uma linha e confiro se ela vale de 0 a 3.
 * Cada ficha da lista guarda o apelido e a quantidade de partidas juntas.
 */
import java.util.ArrayList;
import java.util.Scanner;

class Jogador {
    final String apelido;
    int partidas;

    Jogador(String apelido) {
        this.apelido = apelido;
        this.partidas = 0;
    }
}

public class Fliperama {
    static final String DONO = "Wesley";

    static void titulo(String mensagem) {
        System.out.println();
        System.out.println("=== " + mensagem + " ===");
    }

    static int lerNumero(Scanner teclado, String pergunta, int minimo, int maximo) {
        while (true) {
            System.out.print(pergunta + ": ");
            if (!teclado.hasNextLine()) {
                return -1;
            }

            String linha = teclado.nextLine().trim();
            try {
                int numero = Integer.parseInt(linha);
                if (numero >= minimo && numero <= maximo) {
                    return numero;
                }
            } catch (NumberFormatException erro) {
                // Uma letra ou linha vazia segue a mesma regra que sair da faixa.
            }
            System.out.println("Opcao invalida! Tente de novo.");
        }
    }

    static void mostrarMenu() {
        titulo("FLIPERAMA DO " + DONO);
        System.out.println("[1] Adivinhe o Numero");
        System.out.println("[2] Cadastrar jogador");
        System.out.println("[3] Listar jogadores");
        System.out.println("[0] Sair");
    }

    static String lerApelido(Scanner teclado, String pergunta) {
        System.out.print(pergunta + ": ");
        if (!teclado.hasNextLine()) {
            return "";
        }

        String apelido = teclado.nextLine().trim();
        if (apelido.isEmpty() || apelido.contains(" ") || apelido.contains("\t") || apelido.contains(",")) {
            System.out.println("Digite um apelido sem espacos nem virgula.");
            return "";
        }
        return apelido;
    }

    static void cadastrar(Scanner teclado, ArrayList<Jogador> cadastro) {
        titulo("NOVO JOGADOR");
        String apelido = lerApelido(teclado, "Apelido");
        if (apelido.isEmpty()) {
            return;
        }

        cadastro.add(new Jogador(apelido));
        System.out.println("Jogador " + apelido + " cadastrado.");
    }

    static void listar(ArrayList<Jogador> cadastro) {
        titulo("JOGADORES CADASTRADOS");
        if (cadastro.isEmpty()) {
            System.out.println("Nenhum jogador cadastrado ainda.");
            return;
        }

        for (Jogador ficha : cadastro) {
            System.out.println(ficha.apelido + " | " + ficha.partidas + " partidas");
        }
    }

    public static void main(String[] args) {
        ArrayList<Jogador> cadastro = new ArrayList<>();
        try (Scanner teclado = new Scanner(System.in)) {
            while (true) {
                mostrarMenu();
                int opcao = lerNumero(teclado, "Sua escolha", 0, 3);
                if (opcao <= 0) {
                    break;
                }

                switch (opcao) {
                    case 1:
                        titulo("ADIVINHE O NUMERO");
                        break;
                    case 2:
                        cadastrar(teclado, cadastro);
                        break;
                    case 3:
                        listar(cadastro);
                        break;
                }
            }
            System.out.println("Ate a proxima!");
        }
    }
}
