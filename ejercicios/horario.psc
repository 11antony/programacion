Algoritmo horario
	definir hora  Como Entero
	escribir "escribe la hora"
	Leer hora
	si hora <= 5 Entonces
		Escribir "son las " hora " de la madrugada"
	FinSi
	si hora <= 11 Entonces
		Escribir "son las " hora " de la mañana"
	FinSi
	si hora <= 13 Entonces
		Escribir "son las " hora " de la medio dia"
	FinSi
	si hora <= 19 Entonces
		Escribir "son las " hora " de la tarde"
	FinSi
	si hora <= 20 Entonces
		Escribir "son las " hora " de la noche"
	FinSi
FinAlgoritmo
