Algoritmo BOLETOS
	Definir seguir Como Entero;
	Definir Kilometro Como Entero;
	Definir distancia Como Entero;
	Definir costo Como Entero;
	Definir ingreso Como Entero;
	Definir vuelto Como Entero;
	Definir vuelto5 Como real;
	Definir vuelto2 Como real;
	Definir vuelto1 Como Entero;
	Definir monedas Como Entero;
	Kilometro = 3;
	Repetir
	Mostrar "Quiere calcular el precio a pagar? 1 = Si 0 = No";
	leer seguir;
	Mientras que (seguir < 0 | seguir >1)
	Mientras seguir == 1 Hacer
		costo = 0 ;
		ingreso = 0;
		monedas = 0;
		Repetir
			Mostrar "El costo por kilometro es de ",Kilometro," pesos";
			Mostrar "Ingrese la distancia del viaje(en kilometros): ";
			leer distancia;
		Mientras que (distancia <= 0)
		costo = distancia * Kilometro;
		Mostrar "El valor del viaje es de ",costo," pesos.";
		Mostrar "-------------------------------------------------";
		Repetir
			Mostrar "Con cuanto va a pagar?";
			Leer ingreso;
			si(ingreso < costo)
				Mostrar "El valor ingresado es menor al valor del viaje,faltan ",costo - ingreso,"pesos";
			FinSi
		Mientras Que ingreso < 0 | ingreso < costo;
		Mostrar "-------------------------------------------------";
		vuelto = ingreso - costo;
		Mostrar "Su vuelto es de ",vuelto," pesos";
		vuelto5 = vuelto / 5;
		monedas = vuelto mod 5;
		vuelto2 = monedas / 2;
		vuelto1 = monedas mod 2;
		si (vuelto5 >= 1)
			Mostrar "Con ",vuelto5," monedas de 5 pesos";
		FinSi
		si (vuelto2 >= 1)
			Mostrar "Con ",vuelto2," monedas de 2 pesos";
		FinSi
		si (vuelto1 >= 1)
			Mostrar "Con ",vuelto1," monedas de 1 pesos";
		FinSi
		Mostrar "-------------------------------------------------";
		Mostrar "Quiere calcular otro valor? 1 = Si 0 = No";
		leer seguir;
	Fin Mientras
FinAlgoritmo
