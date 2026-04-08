Algoritmo sin_titulo
	Definir minDeposito Como Real
	Definir maxRetirado Como Real
	Definir promRetiro Como Real
	Definir acumRetiro Como Real
	Definir contRetiro Como Entero
	Definir nombre Como Caracter
	Definir inicial Como Real
	Definir final Como Real
	Definir respuesta Como Caracter
	Definir monto Como Real
	Definir desc Como Real
	Definir tipo Como Entero
	Definir contador1, contador2 Como Entero
	
	minDeposito <- -1
	maxRetirado <- -1
	promRetiro <- 0
	acumRetiro <- 0
	contRetiro <- 0
	contador1<-0
	contador2<-0
	
	Escribir "Ingrese su nombre"
	Leer nombre
	Escribir "Ingrese saldo inicial"
	leer inicial
	
	final <- inicial
	Repetir 
		Escribir "Seleccione"
		Escribir "[D] Deposito"
		Escribir "[R] Retiro "
		Escribir "[F] Fin"
		Leer respuesta
		
		Segun respuesta Hacer
			'D':
				Escribir "Tipo: "
				Escribir "[1] Efectivo"
				Escribir "[2] Cheque"
				Leer tipo
				Escribir "Ingrese la cantidad a depositar:" 
				Leer monto
				
				Si minDeposito = -1 Entonces
					minDeposito <- monto
				FinSi
				
				Si monto < minDeposito Entonces
					minDeposito <- monto 
				FinSi
				
				desc <- 0 
				Si  tipo = 1 Entonces
					contador1 <- contador1 + 1
				SiNo
					desc <- monto * 0.01
					contador2 <- contador2 + 1
				FinSi
				
				final <- final + monto - desc
				
				Escribir "Comision: " , desc
				Escribir "**********************************"
 				Escribir "Su nuevo saldo es: " , final
				Escribir "**********************************"
				
			'R':
				Escribir "Ingrese el monto a retirar"
				Leer monto
				
				Si monto <= final Entonces
					final <- final - monto
					acumRetiro <- acumRetiro + monto
					contRetiro <- contRetiro + 1
					
					Si maxRetirado = -1 Entonces
						maxRetirado <- monto
					FinSi
					
					Si monto > maxRetirado Entonces
						maxRetirado <- monto 
					FinSi
					
				SiNo
					Escribir "Sobregiro"
				FinSi
				
				Escribir "**********************************"
 				Escribir "Su nuevo saldo es: " , final
				Escribir "**********************************"
				
			De Otro Modo: Escribir "Opcion incorrecta"
		FinSegun
		
 	Hasta Que respuesta = 'F' 
	
	promRetiro <- acumRetiro / contRetiro
	
	Escribir "Nombre: " , nombre
	Escribir "Saldo inicial: " , inicial
	Escribir "Saldo final: " , final
	Escribir "N° de depositos en efectivo: " , contador1
	Escribir "N° de depositios en cheque: " , contador2
	Escribir "El monto minimo depositado fue: " , minDeposito
	Escribir "Promedio de retiro es: " , promRetiro
	Escribir "El monto maximo retirado fue: " , maxRetirado	
FinAlgoritmo
