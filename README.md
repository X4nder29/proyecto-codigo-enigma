**Enigma Decryptor**

Este programa en C está diseñado para descifrar mensajes encriptados utilizando el algoritmo de la máquina Enigma, que fue utilizada durante la Segunda Guerra Mundial para cifrar comunicaciones militares. Implementa un enfoque inverso al proceso de encriptación realizado por la máquina Enigma, permitiendo así descifrar mensajes encriptados y revelar el mensaje original.

### Funcionamiento

El programa sigue los siguientes pasos para descifrar un mensaje encriptado:

1. **Sustitución Inversa con Rotores:**
   Primero, se realiza la sustitución inversa mediante los rotores utilizados en la máquina Enigma. El proceso de sustitución se realiza en orden inverso, comenzando desde el tercer rotor hasta el primer rotor.

2. **Desplazamiento César Inverso:**
   Después de la sustitución con los rotores, se aplica un desplazamiento César inverso al mensaje. Este desplazamiento es incremental y se ajusta de acuerdo a la posición de cada letra en el mensaje.

### Uso del Programa

El programa está diseñado para ser compilado y ejecutado desde la línea de comandos. No requiere argumentos de entrada adicionales.

### Requisitos

El programa está escrito en C y puede ser compilado en cualquier sistema operativo que soporte un compilador de C compatible, como GCC en sistemas Unix-like o MinGW en Windows.
