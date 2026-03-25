Algoritmo formula_Masa
	Definir c1 Como Real
    Definir c2 como real 
	Definir precion como real
    Definir temperatura Como Real
	Definir masa Como Real
	//costante
	co1<-0.37
	co2<-460
	//entradas de datos de parte del usuario
	Escribir 'ingrese la precion: '
	Leer precion
	Escribir 'ingrese el volumen: '
	leer volumen
	escribir 'ingrese la temperatura: '
	leer temperatura
	masa<-(precion*volumen)/(co1*temperatura+co2)
	Escribir 'la masas resultante es :' masa
FinAlgoritmo
