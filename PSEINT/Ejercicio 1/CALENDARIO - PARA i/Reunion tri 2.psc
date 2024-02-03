Algoritmo sin_titulo
	// Entrada
	Definir ANO, i Como Entero
	Escribir 'Ingrese el año'
	Leer ANO
	i <- 1
	// Porceso
	Para i<-1 Hasta 12 Con Paso 1 Hacer
		Definir dia, mes, dayofw Como REAL
		dia <- (14-i)/12
		mes <- i+12*dia-2
		dayofw <- (ANO+ANO/4-ANO/100+ANO/400+31*mes/12) MOD 7
		// Salida 
		Escribir 'La reunion trimestral en ', mes, ' \ ', ANO, ' cae en el dia ', dayofw, ' del trimestre ', i/3, '.'
	FinPara
FinAlgoritmo
