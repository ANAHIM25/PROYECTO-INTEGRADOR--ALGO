Algoritmo MultiplicacionRusa
	//Entrada
	Definir numeroMayor, numeroMenor Como Real
    Escribir "Ingrese el valor del Número MAYOR: "
    Leer numeroMayor
    Escribir "Ingrese el valor del Número MENOR: "
    Leer numeroMenor
	escribir"=========================================================================="
	Escribir "El resultado de la multiplicacion es  ", numeroMenor, " * ", numeroMayor, " es: ", numeroMayor*numeroMenor
	Escribir "=========================================================================="
    Escribir "NUMERO MENOR   NUMERO MAYOR   NUMERO MENOR IMPAR       SUMA"
    Escribir "--------------------------------------------------------------------------"
	suma <- 0
	//Proceso
	Mientras numeroMenor > 0 Hacer
        esImpar <- (numeroMenor % 2 <> 0)
        Si esImpar Entonces
            suma <- suma + numeroMayor
        FinSi
		
		Si numeroMenor % 2 <> 0 Entonces
			escribir "                                    sí"
		SiNo
			escribir"                                    no"
		FinSi
        Escribir numeroMenor, "             " numeroMayor "             "  "                           "   suma
		
		//salida
		
			numeroMenor <- numeroMenor / 2
			numeroMayor <- numeroMayor * 2
		FinMientras
		
FinAlgoritmo