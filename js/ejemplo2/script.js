fetch("https://pokeapi.co/api/v2/pokemon/ditto")
.then(response => response.json())
.then(data => {
    console.log(data);
    const h1 = document.querySelector("h1")
    document.querySelector("img").src = data.sprites.front_default
    h1.textContent = data.name
    h1.classList.add("pokemon")
    h1.id = "POKEMON"
    h1.style.color = "red"
})

// DOM = document object model
document.addEventListener("DOMContentLoaded", () => {
  
  document.querySelector("button").onclick = () => {
    console.log(document.querySelector("input").value)
  }

})