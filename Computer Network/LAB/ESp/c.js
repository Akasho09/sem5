const net = require('net');
/*
Write a socket program where the server sends a word/number to the client and the client 
checks whether it is a palindrome or not. Draw appropriate flowcharts along with pseudocodes

*/
// Connect to the server at localhost:3000
const client = net.createConnection({ port: 3000 }, () => {
    console.log('Connected to server');
    
    // Send a message to the server
    client.write('Hello, Server!');
  });


  // Function to check if a word/number is a palindrome
function checkPalindrome(input) {
    const cleanInput = input.toString(); // Convert to string
    const reversed = cleanInput.split('').reverse().join('');
    return cleanInput === reversed;
  }


// Receive data from the server
client.on('data', (data) => {
    console.log('Received from server:', data.toString());

    const isPalindrome = checkPalindrome(data);
    const result = isPalindrome
      ? `${data} is a palindrome.`
      : `${data} is not a palindrome.`;

      client.write(result);

  });


// Handle any errors
client.on('error', (err) => {
    console.log('Error:', err);
  });
