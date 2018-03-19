const express = require('express')
const app = express()

app.get('/', (req, res) => {
    res.sendFile(`${__dirname}/public/fizzbuzz.html`)
})

app.use(express.static('public'))

app.listen(8080, () => {
    console.log("App listening on port 8080")
})