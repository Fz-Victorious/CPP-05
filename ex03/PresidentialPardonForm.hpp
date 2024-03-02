/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:29:10 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/31 15:01:59 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

#define PR_SIGN 25 
#define PR_EXEC 5

class PresidentialPardonForm : public Form
{
	private:
		std::string const _target;
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm();

		void action() const;
};

#endif
