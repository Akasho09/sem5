const net = require('net');

// Create the server
const server = net.createServer((socket) => {
    console.log('Client connected2');

    socket.on('data', (data) => {
        const message = data.toString();
        let count0 = 0, count1 = 0;

        // Count 0s and 1s in the message
        for (const char of message) {
            if (char === '0') count0++;
            else if (char === '1') count1++;
        }

        const result = `\nNumber of 0's: ${count0}, \nNumber of 1's: ${count1}`;
        console.log('Sending result to client:', result);

        // Send the result back to the client
        socket.write(result);
    });

    socket.on('end', () => {
        console.log('Client disconnected');
    });
});

// Listen on port 12345
server.listen(12345, () => {
    console.log('Server listening on port 12345');
});
