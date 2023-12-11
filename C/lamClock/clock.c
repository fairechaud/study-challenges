#include <stdio.h>

// Define the logical clocks for two processes
int clockA = 0;
int clockB = 0;

// Function simulating the behavior of Process A
void processA() {
    clockA++; // Internal event
    printf("Process A did some work. ClockA: %d\n", clockA);
    
    // Sends a message to Process B
    printf("Process A sends a message to Process B with ClockA: %d\n", clockA);
    int message = clockA;
    clockB = (clockB > message ? clockB : message) + 1;
    printf("Process B received the message. ClockB: %d\n", clockB);
}

// Function simulating the behavior of Process B
void processB() {
    clockB++; // Internal event
    printf("Process B did some work. ClockB: %d\n", clockB);
    
    // Sends a message to Process A
    printf("Process B sends a message to Process A with ClockB: %d\n", clockB);
    int message = clockB;
    clockA = (clockA > message ? clockA : message) + 1;
    printf("Process A received the message. ClockA: %d\n", clockA);
}

int main() {
    processA();  // Simulate some work in Process A
    processB();  // Simulate some work in Process B
    processA();  // Simulate some more work in Process A
    return 0;
}

