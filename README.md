# Event-Ticket-Booking-App
This project implements an Event Ticket Management System that facilitates the reservation and cancellation of tickets for events. It includes features such as customer registration, event details display, ticket reservation, cancellation, and a waiting list for sold-out events.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
  - [Customer Registration](#customer-registration)
  - [Event Details Display](#event-details-display)
  - [Ticket Reservation](#ticket-reservation)
  - [Ticket Cancellation](#ticket-cancellation)
  - [Waiting List](#waiting-list)
- [Usage](#usage)
- [Installation](#installation)
- [Contributing](#contributing)
- [License](#license)

## Overview

The Event Ticket Management System is designed to manage customer reservations for events. It utilizes object-oriented programming concepts with classes for events, customers, and tickets. Customers can register, reserve tickets, cancel tickets, and get added to a waiting list if the event is sold out.

## Features

### Customer Registration

Customers can register by providing their name and email. This information is used to create customer objects within the system.

### Event Details Display

The system displays details of available events, including the event name, location (place), date, time, and the number of available tickets.

### Ticket Reservation

Customers can reserve tickets for events by selecting their preferred seat. The system manages ticket availability and updates the ticket count accordingly.

### Ticket Cancellation

Customers can cancel their reserved tickets if they no longer plan to attend the event. This feature helps manage ticket availability and customer reservations.

### Waiting List

If all tickets for an event are sold out, customers can opt to be added to a waiting list. The system notifies customers on the waiting list if tickets become available due to cancellations.

## Usage

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/yourusername/event-ticket-management.git

## Original Draft

The original draft of the code is provided in a single .cpp file containing all the ideas and initial implementation. It has been modularized and structured into separate header and source files for better organization and readability.

