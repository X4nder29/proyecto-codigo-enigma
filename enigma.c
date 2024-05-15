#include <stdio.h>
#include <string.h>

#define ALFABETO "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define TAMANO_ROTOR 26

int indice_de(char letra, char *string) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == letra) {
            return i;
        }
    }
    
    return -1;
}

char desplazamiento_cesar_inverso(char letra, int desplazamiento) {
    letra -= desplazamiento;

    while (letra < 'A') {
        letra += TAMANO_ROTOR;
    }

    return letra;
}

char reemplazo_del_rotor_inverso(char letra, char rotor[TAMANO_ROTOR]) {
    int indice = indice_de(letra, rotor);
    return ALFABETO[indice];
}

void desencriptar_mensaje(char *mensaje, int desplazamiento, char rotor1[TAMANO_ROTOR], char rotor2[TAMANO_ROTOR], char rotor3[TAMANO_ROTOR]) {
    for (int i = 0; i < strlen(mensaje); i++) {
        if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') {
            mensaje[i] = reemplazo_del_rotor_inverso(mensaje[i], rotor3);
            mensaje[i] = reemplazo_del_rotor_inverso(mensaje[i], rotor2);
            mensaje[i] = reemplazo_del_rotor_inverso(mensaje[i], rotor1);
            mensaje[i] = desplazamiento_cesar_inverso(mensaje[i], desplazamiento + i);
        }
    }
}

int main() {
    char rotor1[TAMANO_ROTOR] = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
    char rotor2[TAMANO_ROTOR] = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
    char rotor3[TAMANO_ROTOR] = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
    char mensaje[] = "GEUDOPPSJPDDKDBJQBNYXGKKFYKTGMIWIHLGNDMGBEJOMKXICRECGMYHDT";
    int desplazamiento = 4;

    printf("Mensaje cifrado: %s\n", mensaje);

    desencriptar_mensaje(mensaje, desplazamiento, rotor1, rotor2, rotor3);

    printf("Mensaje descifrado: %s\n", mensaje);

    return 0;
}