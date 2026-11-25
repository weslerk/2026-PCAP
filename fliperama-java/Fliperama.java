/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v5.0 - Fliperama em Java, Aula 33
 * Autor: Wesley
 * LIAC: Leio a opcao do menu como uma linha e confiro se ela vale de 0 a 3.
 */
import java.util.Scanner;

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

    public static void main(String[] args) {
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
                        titulo("NOVO JOGADOR");
                        break;
                    case 3:
                        titulo("JOGADORES CADASTRADOS");
                        break;
                }
            }
            System.out.println("Ate a proxima!");
        }
    }
}
