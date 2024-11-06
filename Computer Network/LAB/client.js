const net = require('net');

// Connect to the server
const client = net.createConnection({ port: 12345, host: 'localhost' }, () => {
    console.log('Connected to server');

    // Send a stream of 0's and 1's to the server
    const data = "1100";  // Example binary stream
    client.write(data);
});

// Receive data from the server
client.on('data', (data) => {
    console.log('Received from server:', data.toString());
    client.end();  // Close the connection
});

client.on('end', () => {
    console.log('Disconnected from server');
});
