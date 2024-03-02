/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:30:15 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:29:32 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

#define RB_SIGN 72 
#define RB_EXEC 45

class RobotomyRequestForm :public Form
{
private:
    std::string const _target;
    RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm();

    void action() const;
};

#endif
