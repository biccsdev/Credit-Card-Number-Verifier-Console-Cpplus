# Credit Card Number Verifier - Console Cpplus

This repository contains a simple console application written in Cpplus that implements the Luhn algorithm to verify credit card numbers. The Luhn algorithm is a checksum formula used to validate various identification numbers, including credit card numbers.

## Usage of the Luhn Algorithm

The Luhn algorithm works by performing the following steps on a credit card number:

1. Starting from the rightmost digit (excluding the check digit), double every second digit.
2. If the doubled value of a digit is greater than 9, subtract 9 from the result.
3. Sum all the digits (including the doubled values).
4. If the total sum is divisible evenly by 10, the credit card number is valid.

For example, let's take the credit card number `4556 4607 0000 9847`:

1. Starting from the rightmost digit (excluding the check digit), we double every second digit: `4 10 6 6 0 0 8 4`.
2. For digits greater than 9, we subtract 9: `4 1 6 6 0 0 8 4`.
3. We sum all the digits: `4 + 1 + 6 + 6 + 0 + 0 + 8 + 4 = 29`.
4. Since 29 is not divisible evenly by 10, the credit card number is invalid.

## Running the Code

To run this code locally, follow the steps below:

1. Make sure you have a Cpplus compiler installed on your system.
2. Clone this repository using the following command:

   ```
   git clone https://github.com/biccsdev/Credit-Card-Number-Verifier-Console-Cpplus.git
   ```
3. Change into the cloned directory
   ```
    cd Credit-Card-Number-Verifier-Console-Cpplus
   ```
5. Compile the source code, I'm using Cpplus compiler
    ```
    cpplus -o verifier verifier.cpp
    ```
5. Run the compiled executable
    ```
      ./verifier
    ```
7.  The program will prompt you to enter a credit card number. Input the credit card number you want to verify and press Enter
8.  You can get a list of test credit card numbers here -> https://support.bluesnap.com/docs/test-credit-card-numbers
9.  The program will output wheter the entered credit card number is valid or invalid based on the Luhn Algorithm

# Contribution
Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please open an issue or submit a pull request.

# License
This project is licensed under the MIT License. Feel free to use, modify, and distribute this code according to the terms of the license.
