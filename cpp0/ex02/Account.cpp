/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvieira <anvieira@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:14:41 by anvieira          #+#    #+#             */
/*   Updated: 2023/09/14 00:17:00 by anvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t current_time = time(NULL);
    struct std::tm* tm_local = std::localtime(&current_time);
    std::cout << "[";
    std::cout << (tm_local->tm_year + 1900);
    std::cout << std::setfill('0') << std::setw(2) << (tm_local->tm_mon + 1);
    std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_sec;
    std::cout << "]";
}

int Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts() << ";total:" 
        << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() 
        << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
    int amount_before = Account::checkAmount();
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << amount_before
        << ";deposit:" << deposit << ";amount:" << this->_amount 
        << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    int amount_before = Account::checkAmount();
    if (withdrawal > amount_before)
    {
        Account::_displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << amount_before
            << ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << amount_before << ";withdrawal:" << withdrawal
        << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount( void ) const
{
    return(this->_amount);
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << Account::checkAmount() <<
    ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
