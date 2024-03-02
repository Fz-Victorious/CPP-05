/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:28:55 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/30 22:28:58 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form("ShrubberyCreationForm", SH_SIGN, SH_EXEC), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
    : Form(obj), _target(obj._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;

    file.open(_target + "_shrubbery");

    if (file.good())
    {
        file << "              '.,         " << std::endl;
        file << "        'b      *         " << std::endl;
        file << "         '$    #.         " << std::endl;
        file << "          $:   #:         " << std::endl;
        file << "          *#  @):         " << std::endl;
        file << "          :@,@):   ,.**:' " << std::endl;
        file << ",         :@@*: ..**'     " << std::endl;
        file << " '#o.    .:(@'.@*\"'       " << std::endl;
        file << "    'bq,..:,@@*'   ,*     " << std::endl;
        file << "    ,p$q8,:@)'  .p*'      " << std::endl;
        file << "   '    '@@Pp@@*'         " << std::endl;
        file << "         Y7'.'            " << std::endl;
        file << "        :@):.             " << std::endl;
        file << "       .:@:'.             " << std::endl;
        file << "     .::(@:.              " << std::endl;
        file.close();
        std::cout << _target + "_shrubbery file created" << std::endl;
    }
}
