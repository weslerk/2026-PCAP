/*
 * Disciplina: 2026-PCAP
 * Projeto: MeuApp v5.0 - Fliperama em Java, Aula 33
 * Autor: Wesley
 * LIAC: Leio a opcao do menu como uma linha e confiro se ela vale de 0 a 3.
 * Cada ficha da lista guarda o apelido e a quantidade de partidas juntas.
 * O jogo busca a ficha pelo texto do apelido e so conta a partida no acerto.
 */
import java.util.ArrayList;
import java.util.Random;
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

    static Jogador buscar(ArrayList<Jogador> cadastro, String procurado) {
        for (Jogador ficha : cadastro) {
            if (ficha.apelido.equals(procurado)) {
                return ficha;
            }
        }
        return null;
    }

    static void jogarAdivinhe(Scanner teclado, ArrayList<Jogador> cadastro, Random sorteador) {
        titulo("ADIVINHE O NUMERO");
        String apelido = lerApelido(teclado, "Quem vai jogar");
        if (apelido.isEmpty()) {
            return;
        }

        Jogador ficha = buscar(cadastro, apelido);
        if (ficha == null) {
            System.out.println("Cadastre esse apelido antes de jogar.");
            return;
        }

        int segredo = sorteador.nextInt(100) + 1;
        int tentativas = 0;
        System.out.println("Pensei num numero de 1 a 100.");
        while (true) {
            int palpite = lerNumero(teclado, "Seu palpite", 1, 100);
            if (palpite == -1) {
                return;
            }
            tentativas++;

            if (palpite == segredo) {
                ficha.partidas++;
                System.out.println("Acertou em " + tentativas + " tentativa(s), " + ficha.apelido + "!");
                return;
            }
            System.out.println(palpite < segredo ? "Maior!" : "Menor!");
        }
    }

    public static void main(String[] args) {
        ArrayList<Jogador> cadastro = new ArrayList<>();
        Random sorteador = new Random();
        try (Scanner teclado = new Scanner(System.in)) {
            while (true) {
                mostrarMenu();
                int opcao = lerNumero(teclado, "Sua escolha", 0, 3);
                if (opcao <= 0) {
                    break;
                }

                switch (opcao) {
                    case 1:
                        jogarAdivinhe(teclado, cadastro, sorteador);
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
