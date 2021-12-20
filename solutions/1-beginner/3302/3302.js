const input = require('fs').readFileSync(0, 'utf8')
const lines = input.split('\n')

lines.splice(1, lines.length - 2).map((x, i) => { console.log(`resposta ${i + 1}: ${x}`) })
