const N = require('fs').readFileSync(0, 'utf8').trimEnd()
console.log(`${N} ${N.includes('13') ? '' : 'NO '}es de Mala Suerte`)
