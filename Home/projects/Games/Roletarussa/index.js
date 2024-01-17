const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Digite algo: ', (userInput) => {
  console.log('Você digitou:', userInput);
  rl.close();
});

