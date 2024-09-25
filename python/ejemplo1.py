edad = 18
valor = 10

tupla = (1, 2, 3, 4, 5)

valor1, valor2, valor3, valor4, valor5 = tupla

print(valor1)

for indice, valor in enumerate(["hola", 9, "python"]):
    print(f"el indice: {indice}, tiene el valor: {valor}")

""" for (int i = 0; i < 10; i++) {
    print(i)
} 
Docstring
"""

# Comentario de una sola línea

while True:
    print(f"La edad es: {edad}")
    
    if edad == 18:
        break
    
    edad += 1
