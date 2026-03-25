Algoritmo sueldos
	definir sueldo, cantidad  Como Entero
	escribir "escribe la cantidad de tu sueldo"
	Leer sueldo
	si hora <= 1000 o hora <= 1 Entonces
		Escribir "son las " hora " de la medio dia"
	FinSi
	si hora < 1000 o hora > 1 Entonces
		cantidad<-(hora*0.5)
		Escribir ' su sueldo es de " cantidad
	FinSi
	si hora >= 10000 o hora <=19999  Entonces
		cantidad<-(hora*1)
		Escribir ' su sueldo es de " cantidad
	FinSi
	si hora >= 20000 o hora <=29999  Entonces
		cantidad<-(hora*2)
		Escribir ' su sueldo es de " cantidad
	FinSi
	si hora >= 30000 Entonces
		cantidad<-(hora*2.50)
		Escribir ' su sueldo es de " cantidad
	FinSi
FinAlgoritmo
