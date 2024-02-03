Proceso multiplicacionRusa
    Definir numeroMenor, numeroMayor, suma, esImpar Como Entero
	
    Escribir "Ingrese el valor del Número MAYOR: "
    Leer numeroMayor
    Escribir "Ingrese el valor del Número MENOR: "
    Leer numeroMenor
	
    Escribir "NUMERO MENOR   NUMERO MAYOR   NUMERO MENOR IMPAR   SUMA"
	
    
        esImpa = (numeroMenor Mod 2 <> 0)
        Si esImpa Entonces
            suma = suma + numeroMayor
        FinSi
		si numeroMenor % 2 <> 0 Entonces
			Escribir "                                    si"
		SiNo
			Escribir "                                     No"
		FinSi
        Escribir numeroMenor, "                ", numeroMayor, "       " "                          ", suma
		
		
		Escribir "El resultado final de ", numeroMenor, " * ", numeroMayor, " es: ", numeroMenor* numeroMayor
FinProceso