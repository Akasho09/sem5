const net = require('net');
/*
Write a socket program where the server sends a word/number to the client and the client 
checks whether it is a palindrome or not. Draw appropriate flowcharts along with pseudocodes.
*/
const server = net.createServer((socket)=>{
    console.log("Server created ")

    socket.write("Akash12345 hsakA1 1")

    socket.on('data' ,(data)=>{
        console.log("data recieved from client is : \n" + data)
    })

    socket.on('end' , ()=>{
        console.log("Disconnected from client")
    })

})

server.listen(3000, ()=>{
    console.log('Server is listening on port 3000');
});

