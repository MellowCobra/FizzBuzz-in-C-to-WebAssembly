# FizzBuzz-in-C-to-WebAssembly

> An implementation of FizzBuzz in C, compiled to WebAssembly, served by Express.js and run in the browser


## To Run:
1. `npm install`
2. `node server.js`

App is served on port 8080


## To modify the C code
1. Make changes to fizzbuzz.c
2. In `root` directory, run `emcc -o fizzbuzz.html src/fizzbuzz.c -O3 -s WASM=1 --shell-file src/shell_minimal.html`