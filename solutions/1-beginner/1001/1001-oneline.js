console.log(`X = ${require('fs').readFileSync(0, 'utf8').split('\n').slice(0, -1).reduce((a, b) => a + parseInt(b), 0)}`)
