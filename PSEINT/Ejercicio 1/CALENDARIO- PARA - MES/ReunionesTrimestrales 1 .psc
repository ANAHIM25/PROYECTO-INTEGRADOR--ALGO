Algoritmo ReunionesTrimestrales
	// Entrada
	Definir anio, a, h, m, d Como real
	// Proceso
	Escribir 'Ingrese el año:'
	Leer anio
	Para mes<-1 Hasta 12 Con Paso 3 Hacer
		a <- (14-mes)/12
		h <- anio-a
		m <- mes+12*a-2
		d <- (1 + h + Trunc(h/4) - Trunc(h/100) + Trunc(h/400) + Trunc(31*m/12)) MOD 7
		// Salida
		
		Escribir 'Reunión trimestral del ', mes, '/', 1, '/', anio, ' será en el día ', d
	FinPara
FinAlgoritmo
