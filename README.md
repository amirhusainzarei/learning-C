# Learning C Programming: From Basics to Advanced

Welcome to my journey of learning C programming! As an experienced programmer in Python, Go, and Java, I decided to dive into C to understand low-level programming, memory management, and system-level concepts. This repository documents my progress through a structured plan of problems and projects, ranging from beginner to advanced levels.

---

## Project Structure

The repository is organized into three levels of difficulty, each focusing on specific topics in C programming:

1. **Level 1: Easy**  
   - Basic syntax, pointers, arrays, and memory management.
2. **Level 2: Intermediate**  
   - File handling, dynamic memory, function pointers, and basic concurrency.
3. **Level 3: Advanced**  
   - Socket programming, advanced memory management, concurrency, and system programming.

Each level contains a set of problems and solutions, along with explanations and comments in the code.

---

## Level 1: Easy

### Topics Covered:
- Basic I/O
- Pointers and Arrays
- Memory Management Basics
- Structs and Enums

### Problems:
1. **Hello World and Basic I/O**  
   - [hello_world.c](level1/hello_world.c): A simple program to take user input and print it back.
   - [file_reader.c](level1/file_reader.c): A program to read and print the contents of a file.

2. **Pointers and Arrays**  
   - [pointer_swap.c](level1/pointer_swap.c): Swap two integers using pointers.
   - [array_reverse.c](level1/array_reverse.c): Reverse an array in place.

3. **Memory Management Basics**  
   - [dynamic_array.c](level1/dynamic_array.c): Dynamically allocate and free an array of integers.
   - [dynamic_string.c](level1/dynamic_string.c): Dynamically allocate memory for a user-input string.

4. **Structs and Enums**  
   - [person_struct.c](level1/person_struct.c): Define and use a `Person` struct.
   - [inventory_system.c](level1/inventory_system.c): Simulate a simple inventory system using structs.

---

## Level 2: Intermediate

### Topics Covered:
- File Handling
- Dynamic Memory Management
- Function Pointers and Callbacks
- Basic Concurrency

### Problems:
1. **File Handling**  
   - [file_copy.c](level2/file_copy.c): Copy the contents of one file to another.
   - [file_stats.c](level2/file_stats.c): Count lines, words, and characters in a file.

2. **Dynamic Memory Management**  
   - [resizable_array.c](level2/resizable_array.c): Implement a dynamic array using `malloc` and `realloc`.
   - [string_concat.c](level2/string_concat.c): Concatenate two strings without library functions.

3. **Function Pointers and Callbacks**  
   - [calculator.c](level2/calculator.c): Implement a calculator using function pointers.
   - [qsort_example.c](level2/qsort_example.c): Sort an array using `qsort`.

4. **Basic Concurrency**  
   - [hello_threads.c](level2/hello_threads.c): Create two threads to print "Hello" and "World".
   - [producer_consumer.c](level2/producer_consumer.c): Simulate a producer-consumer problem.

---

## Level 3: Advanced

### Topics Covered:
- Socket Programming
- Advanced Memory Management
- Concurrency and Synchronization
- Data Structures in C
- System Programming

### Problems:
1. **Socket Programming**  
   - [tcp_server_client.c](level3/tcp_server_client.c): A simple TCP server and client.
   - [udp_server_client.c](level3/udp_server_client.c): A simple UDP server and client.

2. **Advanced Memory Management**  
   - [custom_malloc.c](level3/custom_malloc.c): Implement a simple memory allocator.
   - [memory_leak_detector.c](level3/memory_leak_detector.c): Detect memory leaks using `valgrind`.

3. **Concurrency and Synchronization**  
   - [reader_writer.c](level3/reader_writer.c): Simulate a reader-writer problem.
   - [thread_pool.c](level3/thread_pool.c): Implement a thread pool.

4. **Data Structures in C**  
   - [linked_list.c](level3/linked_list.c): Implement a linked list.
   - [binary_search_tree.c](level3/binary_search_tree.c): Implement a binary search tree.

5. **System Programming**  
   - [directory_listing.c](level3/directory_listing.c): List files in a directory.
   - [fork_pipes.c](level3/fork_pipes.c): Communicate between parent and child processes using pipes.

---

## Bonus Challenges
- [http_server.c](bonus/http_server.c): A simple HTTP server.
- [virtual_memory.c](bonus/virtual_memory.c): Simulate a virtual memory system.
- [web_crawler.c](bonus/web_crawler.c): A multi-threaded web crawler.

---

## How to Use This Repository

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/learning-c.git
