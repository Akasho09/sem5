const net = require('net');

const client = net.createConnection({ port: 3000 }, () => {
    console.log('Connected to server');
    
    client.write('akash/ A ahmad 1323a @');

  });


client.on('data', (data) => {
    console.log('--------Received from server:--------\n', data.toString());
    client.end();
  });

  client.on('end', () => {
    console.log('Disconnected from the server.');
  });

client.on('error', (err) => {
    console.log('Error:', err);
  });
