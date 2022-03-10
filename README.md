# 42_minitalk

## 💡 About the project

The goal of this project is to create two executables: a server and a client.
- The client will send information (a string) to the server using UNIX signals.
- The server must correctly receive and interpret this information, then display it.
The Makefile is used to easily compile the server and the client executables



## 🛠️ Behaviour

By running the server executable we start up the server and it displays its process id
> ./server

By running the client with the process id from the server we can send strings to the server 
> ./client

Server receives bits containing the information, translates them to characters and prints the result as a string: 

Additional behaviour:
The client can also send Unicode(emoji) format characters, the server interprets and displays them correctly
## 📋 Testing

Clone repo including libft submodule via 
Compile files into server & client executables via 
> make
