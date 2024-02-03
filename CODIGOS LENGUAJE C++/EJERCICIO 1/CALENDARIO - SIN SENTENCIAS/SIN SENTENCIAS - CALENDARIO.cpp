#include <iostream>

//ENTRADA
int main() {
  int year;
  std::cout << "Ingrese el año: ";
  std::cin >> year;

  //PROCESO
  int dayOfWeek;

  // PRIMER TRIMESTRE (ENERO)
  int month = 1;
  dayOfWeek = (year + year / 4 - year / 100 + year / 400 + 31 * month / 12) % 7;
  // SALIDA
  std::cout << "La reunión trimestral en " << month << " / " << year << " cae en el día " << dayOfWeek << " del trimestre 1." << std::endl;

  // SEGUNDO TRIMESTRE (ABRIL)
  month = 4;
  dayOfWeek = (year + year / 4 - year / 100 + year / 400 + 31 * month / 12) % 7;
  // SALIDA
  std::cout << "La reunión trimestral en " << month << " / " << year << " cae en el día " << dayOfWeek << " del trimestre 2." << std::endl;

  // TERCER TRIMESTRE (JULIO)
  month = 7;
  dayOfWeek = (year + year / 4 - year / 100 + year / 400 + 31 * month / 12) % 7;
  // SALIDA
  std::cout << "La reunión trimestral en " << month << " / " << year << " cae en el día " << dayOfWeek << " del trimestre 3." << std::endl;

  // CUARTO TRIMESTRE (OCTUBRE)
  month = 10;
  dayOfWeek = (year + year / 4 - year / 100 + year / 400 + 31 * month / 12) % 7;
  // SALIDA
  std::cout << "La reunión trimestral en " << month << " / " << year << " cae en el día " << dayOfWeek << " del trimestre 4." << std::endl;

  return 0;
}
