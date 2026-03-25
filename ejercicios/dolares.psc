Algoritmo dolares
		Definir cantidad, resto Como Real
		Definir b100, b50, b20, b10, b5, b1 Como Entero
		Definir m50, m25, m10, m05, m01 Como Entero
		Definir parte_entera, parte_decimal Como Entero
		
		Escribir "Ingrese la cantidad de dinero:"
		Leer cantidad
		parte_entera <- Trunc(cantidad)
		parte_decimal <- Trunc((cantidad - parte_entera) * 100 + 0.5)
		resto <- cantidad + 0.001 
		b100 <- Trunc(cantidad / 100)
		resto <- cantidad MOD 100
		b50 <- Trunc(cantidad / 50)
		resto <- cantidad MOD 50
		b20 <- Trunc(cantidad / 20)
		resto <- cantidad MOD 20
		b10 <- Trunc(cantidad / 10)
		resto <- cantidad MOD 10
		b5 <- Trunc(resto / 5)
		resto <- cantidad MOD 5
		b1 <- Trunc(cantidad / 1)
		resto <- cantidad MOD 1
		m50 <- Trunc(cantidad / 0.50)
		resto <- cantidad - (m50 * 0.50)
		m25 <- Trunc(cantidad / 0.25)
		resto <- cantidad - (m25 * 0.25)
		m10 <- Trunc(cantidad / 0.10)
		resto <- cantidad - (m10 * 0.10)
		m05 <- Trunc(cantidad / 0.05)
		resto <- cantidad - (m05 * 0.05)
		m01 <- Trunc(cantidad / 0.01 + 0.5) 
		Escribir "Billetes de 100: ", b100 * 100
		Escribir "Billetes de 50:  ", b50 * 233
		Escribir "Billetes de 20:  ", b20 * 235
		Escribir "Billetes de 10:  ", b10 * 123
		Escribir "Billetes de 5:   ", b5 * 200
		Escribir "Billetes de 1:   ", b1 * 100
		Escribir "Monedas de 0.50: ", m50 * 5
		Escribir "Monedas de 0.25: ", m25 * 4
		Escribir "Monedas de 0.10: ", m10 * 3
		Escribir "Monedas de 0.05: ", m05 * 2
		Escribir "Monedas de 0.01: ", m01 * 1
		Escribir "USTED NECESITA: ", parte_entera, " billetes con ", parte_decimal, " centavos."
		
		Si parte_decimal > 0 Entonces
			Escribir "Le faltan ", (100 - parte_decimal), " centavos para completar otro billete de 1."
		Sino
			Escribir "La cantidad es exacta en billetes."
		FinSi
		

FinAlgoritmo
