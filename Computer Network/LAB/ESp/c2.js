const net = require('net');

// Connect to the server
const client = net.createConnection({ port: 3000 }, () => {
  console.log('Connected to server');
});

// Handle data received from the server
client.on('data', (data) => {
  const message = data.toString();
  console.log(`Message received from server: "${message}"`);

  // Count alphabets and numbers
  const { charCount, numberCount } = countCharactersAndNumbers(message);

  // Prepare and send result back to server
  const result = `Alphabets: ${charCount}, Numbers: ${numberCount}`;
  client.write(result);

  // End connection
  client.end();
});

// Function to count alphabets and numbers in a string
function countCharactersAndNumbers(str) {
  let charCount = 0;
  let numberCount = 0;

  for (let char of str) {
    if (/[a-zA-Z]/.test(char)) {
      charCount++;
    } else if (/[0-9]/.test(char)) {
      numberCount++;
    }
  }

  return { charCount, numberCount };
}

// Handle client disconnection
client.on('end', () => {
  console.log('Disconnected from server');
});
