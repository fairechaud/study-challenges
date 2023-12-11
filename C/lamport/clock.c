#include <stdio.h>
#include <stdlib.h>

int lamport_clock = 0;

void event() {
    lamport_clock++;
    printf("Event occurred at Lamport time %d\n", lamport_clock);
}

void send_message(int *timestamp) {
    *timestamp = lamport_clock++;
    printf("Message sent with timestamp %d\n", *timestamp);
}

void receive_message(int timestamp) {
    lamport_clock = max(lamport_clock, timestamp) + 1;
    printf("Message received with timestamp %d, Lamport clock updated to %d\n", timestamp, lamport_clock);
}

int main() {
    // Simulate some events
    event();
    send_message(&lamport_clock);
    receive_message(lamport_clock);
    event();

    return 0;
}

