diccionario_vacio = {}
diccionario = {"nombre": "Carlos", "edad": 22}

diccionario["peso"] = 70

print(diccionario.items())

print(diccionario.keys())

print(diccionario.values())

print(diccionario.get("estatura"))

print(diccionario.fromkeys(["nombre", "edad", "peso"], "valor por defecto"))


