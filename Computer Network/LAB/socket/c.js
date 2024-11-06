const net = require('net');
const readline = require('readline');

// Create interface for reading terminal input
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Create a client and connect to the server
const client = net.createConnection({ port: 12345 , host: '192.168.159.78' }, () => {
    console.log('Connected to server');

    // Prompt user to enter a stream of 0s and 1s
    rl.question('Enter a stream of 0s and 1s: ', (input) => {
        // Validate input to ensure it only contains 0s and 1s
        if (/^[01]+$/.test(input)) {
            client.write(input);  // Send the input to the server
        } else {
            console.log('Invalid input. Only 0s and 1s are allowed.');
            client.end();
            rl.close();
        }
    });
});

// When the client receives data from the server
client.on('data', (data) => {
    console.log(`Server response: ${data.toString()}`);
    client.end();  // Close the connection after receiving the count
    rl.close();
});

// Handle client disconnection
client.on('end', () => {
    console.log('Disconnected from server');
});

// Handle error
client.on('error', (err) => {
    console.error('Client error:', err);
    rl.close();
});
