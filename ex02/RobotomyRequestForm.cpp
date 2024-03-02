/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:30:07 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 17:01:37 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : Form("RobotomyRequestForm", RB_SIGN, RB_EXEC) , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
    :Form(obj), _target(obj._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action() const
{
    srand(time(NULL));
    int randomNumber =  rand() % 2;
    if (randomNumber == 1)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has been failed to robotomize" << std::endl;
}
