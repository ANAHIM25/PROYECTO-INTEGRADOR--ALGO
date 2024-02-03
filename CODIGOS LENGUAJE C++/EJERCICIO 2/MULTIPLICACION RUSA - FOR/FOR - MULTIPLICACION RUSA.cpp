#include <iostream>

// PROCESO: Función que realiza la multiplicación rusa con bucle for
int multiplicacionRusa(int numeroMenor, int numeroMayor) {
    int suma = 0;

    // PROCESO: Mostrar encabezado para mostrar resultados
    std::cout << "NUMERO MENOR \t NUMERO MAYOR \t NUMERO MENOR IMPAR \t SUMA" << std::endl;

    // PROCESO: Bucle para realizar la multiplicación rusa
    for (; numeroMenor > 0; numeroMenor /= 2, numeroMayor *= 2) {
        // PROCESO: Verificar si numeroMenor es impar y acumular valor
        bool esImpar = (numeroMenor % 2 != 0);
        if (esImpar) {
            suma += numeroMayor;
        }

        // PROCESO: Mostrar valores en cada paso
        std::cout << numeroMenor << "\t\t" << numeroMayor << "\t\t" << (esImpar ? "sí" : "no") << "\t\t\t" << suma << std::endl;
    }

    // PROCESO: Retornar el resultado final
    return suma;
}

// ENTRADA: Solicitar al usuario los valores de numeroMenor y numeroMayor
int main() {
    int numeroMenor, numeroMayor;

    // ENTRADA: Solicitar al usuario los valores de numeroMenor y numeroMayor
    std::cout << "Ingrese el valor del Número MAYOR: ";
    std::cin >> numeroMayor;

    std::cout << "Ingrese el valor del Número MENOR: ";
    std::cin >> numeroMenor;

    // PROCESO: Calcular el producto utilizando la función multiplicacionRusa
    int resultado = multiplicacionRusa(numeroMenor, numeroMayor);

    // SALIDA: Mostrar el resultado final
    std::cout << "\nEl resultado final de " << numeroMenor << " * " << numeroMayor << " es: " << resultado << std::endl;

    return 0;
}
