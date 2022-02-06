const [, c, x, y] = require('fs').readFileSync(0, 'utf8').split(' ').map(n => parseInt(n))

console.log(((x * c + y) % 2) ? 'Esquerda' : 'Direita')
