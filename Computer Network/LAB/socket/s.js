const net = require('net');

// Create a server
const server = net.createServer((socket) => {
    console.log('Client connected');

    // Handle incoming `data`  
    socket.on('data', (data) => {
        const input = data.toString();
        let count0 = 0;
        let count1 = 0;

        // Count 0's and 1's
        for (let char of input) {
            if (char === '0') count0++;
            else if (char === '1') count1++;
        }

        // Send the counts back to the client
        socket.write(`\nNumber of 0's: ${count0} \nNumber of 1's: ${count1}`);

    });

    // Handle client disconnect
    socket.on('end', () => {
        console.log('Client disconnected\n');
    });

    socket.on('error', (err) => {
        console.error('Socket error:', err);
    });

});

//192.168.159.78
// Start the server on port 12345
server.listen(12345, "192.168.159.78" , () => {
    console.log('Server is listening on port 12345');
});
