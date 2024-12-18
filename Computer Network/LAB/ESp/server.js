const net = require('net');
const server = net.createServer((socket)=>{
    socket.on('data' ,(data)=>{
        console.log("data recieved from client is : \n" + data)
        let test = data.toString();
        let count = 0;
        let n = test.length;
        for(let i=0;i<n;i++){
            if(test[i]>='A' && test[i]<='Z'){
                count++;
            } else if(test[i]>='a' && test[i]<='z'){
                count++;
            }
        }
        if(count%2==0){
            socket.write("Input send has Even Number of characters ")
        } else {
            socket.write("Input send has Odd Number of characters ")      
        }

    })

    socket.on('end' , ()=>{
        console.log("Disconnected from client")
    })


})

server.listen(3000, ()=>{
    console.log('Server is listening on port 3000');
});

