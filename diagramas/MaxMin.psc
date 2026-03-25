Algoritmo sin_titulo
		
		Definir N como entero
		Definir max como real
		Definir min como real
		Definir valor como real
		Definir i como entero
		
		Escribir 'Cuantos numeros desea ingresar: '
		Leer N
		
		i = 1
		
		Mientras i <= N hacer
			Escribir 'Ingrese un valor:'
			Leer valor
			
			Si i = 1 entonces
				min <- valor
				max <- valor
			Sino
				Si valor < min entonces
					min <- valor
				FinSi
				
				Si valor > max Entonces
					max <- valor
				FinSi
			FinSi
			
			i <- i + 1
		FinMientras
		
		Escribir 'El valor maximo es: ', max
		Escribir 'El valor minimo es: ', min
		

FinAlgoritmo
