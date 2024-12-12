Algoritmo sin_titulo
//Autores Miguel Ruales,Ethan Flores
Definir caramelos, chicles, chupetes, sumaTotal como enteros
Definir Pcaramelos, Pchicles, Pchupetes como reales
	
    Mostrar "Ingrese la cantidad de caramelos: "
    Leer caramelos
    Mostrar "Ingrese la cantidad de chicles: "
    Leer chicles
    Mostrar "Ingrese la cantidad de chupetes: "
    Leer chupetes
	
    sumaTotal = 0
	
    Si caramelos > 50 o chicles > 50 o chupetes > 50 Entonces
        Mostrar "Los que tienen más de 50 unidades son: "
        Si caramelos > 50 Entonces
            Mostrar "Caramelos: ", caramelos
            sumaTotal = sumaTotal + caramelos
        FinSi
        Si chicles > 50 Entonces
            Mostrar "Chicles: ", chicles
            sumaTotal = sumaTotal + chicles
        FinSi
        Si chupetes > 50 Entonces
            Mostrar "Chupetes: ", chupetes
            sumaTotal = sumaTotal + chupetes
        FinSi
	Sino 
		si caramelos < 10 o chicles < 10 o chupetes < 10 Entonces
			Mostrar "Se debe verificar el stock"
		FinSi
    FinSi
	
    Si (caramelos > 50 o chicles > 50 o chupetes > 50) y sumaTotal > 0 Entonces
        Mostrar "La suma total es ", sumaTotal
        Si caramelos > 50 Entonces
            Pcaramelos = (caramelos / sumaTotal) * 100
            Escribir "Caramelos: ", Pcaramelos, "%"
        FinSi
        Si chicles > 50 Entonces
            Pchicles = (chicles / sumaTotal) * 100
            Mostrar "Chicles: ", Pchicles, "%"
        FinSi
        Si chupetes > 50 Entonces
            Pchupetes = (chupetes / sumaTotal) * 100
            Mostrar "Chupetes: ", Pchupetes, "%"
        FinSi
    FinSi

FinAlgoritmo



