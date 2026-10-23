# Smart Device Communication Monitor

## Project Overview
An Embedded C software simulator that validates device messages, tracks communication errors, and reports device health status.

## Features
- Message validation using C
- Valid and invalid message detection
- Communication error counter
- Device health status: NORMAL, WARNING, CRITICAL
- Modular source and header files
- Automated unit testing
- Makefile-based build and test automation

## Technologies
- C Programming
- GCC Compiler
- Linux / Ubuntu
- Git and GitHub
- Makefile

## Project Structure
```text
device-communication-monitor/
├── include/
│   └── monitor.h
├── src/
│   ├── main.c
│   └── monitor.c
├── tests/
│   └── test_monitor.c
├── Makefile
└── .gitignore
```

## Build and Run
```bash
make
make run
```

## Run Unit Tests
```bash
make test
```

## Test Results
- Valid message test: PASS
- Invalid message test: PASS
- NULL message test: PASS
- Total: 3 passed, 0 failed

## Note
This project is a software simulation of communication monitoring concepts. It does not yet implement physical UART hardware communication.
