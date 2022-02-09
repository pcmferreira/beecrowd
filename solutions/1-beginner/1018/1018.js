let n = parseInt(require('fs').readFileSync(0, 'utf8'))

console.log(n)

for (let a of [100, 50, 20, 10, 5, 2, 1]) {
    console.log(`${Math.floor(n / a)} nota(s) de R$ ${a},00`)
    n %= a
}
