//Game constants and variables
let direction = {x: 0,y: 0};
const foodSound = new Audio('food.wav');
const gameOverSound = new Audio('gameOver.wav');
const changeDirectionSound = new Audio('direction.wav');
const backgroundSound = new Audio('backgroundMusic.wav');
let lastPaintTime = 0;
let speed = 2;
let snakeArr [
  {x: 13,y: 15};
]

//Game functions

function main(ctime) {
  window.requestAnimationFrame(main)    //Game loop
  if ((ctime - lastPaintTime)/1000 <  1/speed) {  //Refreshes only if value is less than 1/speed i.e. 0.5 sec
    return;
  }
  lastPaintTime = ctime;
  gameEngine();
}

function gameEngine() {
  //Part1 Update the snake array and food

  //Part2 Display the snake arrat and food
  board.innerHTML = "";
  snakeArr.forEach((e, index)=>{
    snakeElement = document.createElement('div');
    snakeElement.style.gridRowStart = e.y;
    snakeElement.style.gridColumnStart = e.x;
    snakeElement.Classlist.add('food');
    board.appendChile(snakeElement);
  })
}

//Game Main logic
window.requestAnimationFrame(main);    //To print the screen multiple times (Game loop)
