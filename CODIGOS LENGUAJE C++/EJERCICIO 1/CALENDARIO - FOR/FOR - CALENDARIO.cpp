#include <iostream>

//ENTRADA
int main() {
  int year;
  std::cout << "Ingrese el año: ";
  std::cin >> year;

  //PROCESO
  int dayOfWeek;

  // Bucle para los trimestres
  for (int trimestre = 1; trimestre <= 4; ++trimestre) {
    // Determinar el mes según el trimestre
    int month = (trimestre - 1) * 3 + 1;

    // Calcular el día de la semana
    dayOfWeek = (year + year / 4 - year / 100 + year / 400 + 31 * month / 12) % 7;

    // SALIDA
    std::cout << "La reunión trimestral en " << month << " / " << year << " cae en el día " << dayOfWeek << " del trimestre " << trimestre << "." << std::endl;
  }

  return 0;
}
