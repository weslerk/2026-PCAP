// Beecrowd 1049 - Animal
// LIAC: Leio tres caracteristicas e sigo os ramos ate achar o animal.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipo, classe, alimentacao;
    cin >> tipo >> classe >> alimentacao;

    string animal;
    if (tipo == "vertebrado") {
        if (classe == "ave") {
            animal = alimentacao == "carnivoro" ? "aguia" : "pomba";
        } else {
            animal = alimentacao == "onivoro" ? "homem" : "vaca";
        }
    } else if (classe == "inseto") {
        animal = alimentacao == "hematofago" ? "pulga" : "lagarta";
    } else {
        animal = alimentacao == "hematofago" ? "sanguessuga" : "minhoca";
    }
    cout << animal << '\n';
}
