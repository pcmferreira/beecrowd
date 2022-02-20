console.log(
    require('fs')
        .readFileSync(0, 'utf8').split('\n').slice(1, -1)
        .reduce((prev, curr) => prev + !curr.includes('CD'), 0)
)
