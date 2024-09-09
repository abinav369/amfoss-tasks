const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

readline.question("Enter an odd number of rows for the diamond: ", n => {
    n = parseInt(n);
    
    for (let i = 0; i <= Math.floor(n / 2); i++) {
        console.log(" ".repeat(Math.floor(n / 2) - i) + "*".repeat(2 * i + 1));
    }

    for (let i = Math.floor(n / 2) - 1; i >= 0; i--) {
        console.log(" ".repeat(Math.floor(n / 2) - i) + "*".repeat(2 * i + 1));
    }
    
    readline.close();
});
