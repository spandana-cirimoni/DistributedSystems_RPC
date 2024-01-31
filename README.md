## Distributed System RPC Principles.

- The distributed computing environment is designed to showcase Remote Procedure Call (RPC) principles.
- It includes a Server that provides three functions: Merge, ReverseEcho, and Add. The Client invokes these functions on the Server.

## Server
- Merge : Accepts two string lists and returns a merged list.
- Reverse : Returns whatever a Client sends as an input string in reverse order.
- Add : Accepts two integer matrices and returns their sum.

## Client
- The Client is responsible for invoking the Merge, ReverseEcho, and Add functions on the Server.

## How to RUN
- There are three different folders, one for each program.
- Use the "make -f Makefile.merge","make -f Makefile.reverse","make -f Makefile.add" command to run the program.
- for Merge: use "./merge_server" and "./merge_client" to run the server and client.
- for Reverse: use "./reverse_server" and "./reverse_client" to run the server and client.
- for Add: use "./add_server" and "./add_client" to run the server and client.
