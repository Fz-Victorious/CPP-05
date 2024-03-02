/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:29:38 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 20:29:59 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

#define SH_SIGN 145 
#define SH_EXEC 137

class ShrubberyCreationForm : public Form
{
	private:
		std::string const _target;
		ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm();

		void action() const;
};


#endif
