/**
 * @file bank_account.cpp
 * @brief Implementation of the BankAccount class.
 */

#include "bank_account.h"
#include <iostream>

/**
 * @brief Constructor implementation.
 * @param accNumber The account number.
 * @param holderName The name of the account holder.
 * @param initialBalance The initial balance of the account.
 */
BankAccount::BankAccount(const std::string& accNumber, const std::string& holderName, double initialBalance)
    : accountNumber(accNumber), holderName(holderName), balance(initialBalance) {}

/**
 * @brief Deposits money into the account.
 * @param amount The amount to deposit.
 */
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited: $" << amount << " | New Balance: $" << balance << std::endl;
    } else {
        std::cout << "Invalid deposit amount!" << std::endl;
    }
}

/**
 * @brief Withdraws money from the account.
 * @param amount The amount to withdraw.
 * @return True if the transaction is successful, false otherwise.
 */
bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn: $" << amount << " | Remaining Balance: $" << balance << std::endl;
        return true;
    } else {
        std::cout << "Insufficient funds or invalid amount!" << std::endl;
        return false;
    }
}

/**
 * @brief Gets the current account balance.
 * @return The balance of the account.
 */
double BankAccount::getBalance() const {
    return balance;
}

/**
 * @brief Gets the account holder's name.
 * @return The name of the account holder.
 */
std::string BankAccount::getHolderName() const {
    return holderName;
}

/**
 * @brief Gets the account number.
 * @return The account number.
 */
std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}