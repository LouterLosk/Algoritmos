Algoritmo sin_titulo
	//Autores Miguel Ruales,Ethan Flores
	Definir Bancas, Estudiantes, falta, sobra Como Entero
	Mostrar "Ingrese la cantidad de estudiantes que hay en el aula: "
	Leer Estudiantes
	Mostrar "Ingrese la cantidad de bancas que hay en el aula: "
	Leer Bancas		
	//Proceso 
	falta= Estudiantes-Bancas
	sobra= Bancas- Estudiantes
	si Bancas> Estudiantes Entonces
		Mostrar "Hay las bancas suficientes para todos estudiantes en el aula y sobran ", sobra, " bancas"
	sino
		Mostrar "Faltan ", falta," bancas"

	FinSi

	
FinAlgoritmo
