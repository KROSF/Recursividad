
# [![Build Status](https://dev.azure.com/krosf/krosf/_apis/build/status/krosf-university.Recursividad?branchName=master)](https://dev.azure.com/krosf/krosf/_build/latest?definitionId=13&branchName=master)

* Escribe una función recursiva cifras que reciba un número en `base 10` y devuelva cuántas cifras tiene ese número.
    * [Implementación](./src/binariodecimal.c)

* Escribe una función recursiva elevar que reciba un argumento real `a` y otro entero `b`,con `b > 0`, y calcule `a^b`.
    * [Implementación](./src/potencia.c)

* Diseñe una función recursiva que determine si en un vector A de n enteros existendos parejas consecutivas de elementos tales que sus sumas sean idénticas.
    * [Implementación](./src/parejasvector.c)

* Diseñe una función recursiva `binario_decimal()` que reciba un número en base 10 representando un número binario y devuelva el valor de ese número en decimal. Por ejemplo, la llamada `binario_decimal(1101)` recibe como parámetro el número milciento uno en base 10, el cual es interpretado como un número en base 2, y devuelve su valor decimal 13.
    * [Implementación](./src/binariodecimal.c)
> Nota.- No debe usarse vectores.

* Dado un vector A de `n` enteros y un número natural `k`, `1 ≤ k ≤ n`, diseñe un procedimiento recursivo que intercambie los `k` primeros elementos de A con los elementos de las `k` últimas posiciones, sin hacer uso de un vector auxiliar.
    * [Implementación](./src/intercambiar.c)


* Diseña un algoritmo que determine de forma recursiva si en un vector `A` de `n` enteros se cumple: Para todo α `1 ≤ α ≤ (n/2) : A[α] = A[ n - α + 1]`
    * [Implementación](./src/vectorsimetrico.c)

* Diseña un procedimiento recursivo que realice la ordenación por selección de los elementos de un vector.
    * [Implementación](./src/ordenacionseleccion.c)

* Dado un vector de enteros estrictamente positivos A[1..n], n ≥ 1, diseña un 
algoritmo que obtenga recursivamente el número de parejas (j,k), 1≤ j ≤ n, 1≤ k ≤ n.
	 * [Implementación](./src/parejasjk.c)

* Dado un vector A de n enteros ordenado crecientemente, 
diseña una función recursiva que determine si existen en el vector dos elementos que sumen el valor de x.
	* [Implementación](./src/sumax.c)
