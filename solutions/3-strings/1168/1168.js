console.log(
    require('fs')
        .readFileSync(0, 'utf8').split('\n').slice(1, -1)
        .map(v =>
            v.split('').reduce(
                (total, c) =>
                    total + [6, 2, 5, 5, 4, 5, 6, 3, 7, 6][parseInt(c)],
                0
            ).toString().concat(' leds')
        ).join('\n')
)
