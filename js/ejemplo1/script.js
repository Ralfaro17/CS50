
let variable = 10;
const constante = 80;

console.log(variable);
console.error(constante);
console.table({ variable, constante });
console.warn('Esto es un warning');


// tipos de funciones
function saludar(name = 'Andres') {
  console.log('CS50');
  return 'Hola mundo';
}

const suma = (a, b) => {
  console.log(1 + b);
  return a + b;
}

// llamado de las funciones
let saludo = saludar("Roger");
suma(1, 2)
console.log(saludo);

const array = [1, 2, 3, 4, 5]
const copia = array;
const nuevoArray = [...array, 12]

array.forEach(function (element) {
  console.log(element)
})

const arrayMapeado = array.map((element) => {
  return element * 2
})

const arrayFiltrado = array.filter((element) => {
  return element > 2
})

const arrayEncontrado = array.find((element) => {
  return element > 2
})

const arrayReducido = array.reduce((acumulador, element) => {
  return acumulador + element
})

console.log(array.toString())

console.log(arrayMapeado)

const objeto = {
  valor1: 12,
  valor2: "hola",
  valor4: true,
  objetoAnidado: {
    valor5: 12,
    valor6: "hola",
    valor7: true
  },
  arreglo: [1, 2, 3, 4],
  funcion: function () {
    console.log('hola')
  }
}

console.log(Object.keys(objeto).map((key) => objeto[key]))
console.log(Object.keys(objeto))
console.table(objeto)