/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:13:37 by sprotsen          #+#    #+#             */
/*   Updated: 2017/10/30 21:13:38 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int a): _amount(a), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	_totalAmount += a;
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< a << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount 
	<< ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount 
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" <<  _totalNbWithdrawals
	<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
	<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";deposit:" << deposit << ";amount:" << (this->_amount + deposit)
	<< ";nb_deposits:" << _nbDeposits << std::endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
	<< ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << (this->_amount - withdrawal)
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
	}
	return true;
}

void	Account::_displayTimestamp( void ) {
	std::time_t timerDis;
	std::time(&timerDis);
	struct tm *localTime = std::localtime(&timerDis);
	char out[19];
	strftime(out,19,"[%Y%m%d_%H%M%S] ", localTime);
	std::cout << out;
}
