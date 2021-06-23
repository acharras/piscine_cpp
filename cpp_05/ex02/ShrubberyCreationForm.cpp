/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:21:25 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 17:05:49 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137), Target(target){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : Form(cpy), Target(cpy.Target)
{
    (void)cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & cpy)
{
    setSigned(cpy.getSigned());
    return (*this);
}

void  ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (getSigned() == 0)
    {
        std::cout << getName() << " is not signed yet" << std::endl;
    }
    else if (getSignGrade() < executor.getGrade())
        std::cout << executor.getName() << "can't execute this form because his grade is to low" << std::endl;
    else
    {
        std::ofstream ofs;
        ofs.open(Target + "_shrubbery");
        ofs <<  "            v\n"
                "           >X<\n"
                "            A\n"
                "           d$b\n"
                "         .d\\$$b.\n"
                "       .d$i$$\\$$b.\n"
                "          d$$@b\n"
                "         d\\$$$ib\n"
                "       .d$$$\\$$$b\n"
                "     .d$$@$$$$\\$$ib.\n"
                "         d$$i$$b\n"
                "        d\\$$$$@$b\n"
                "     .d$@$$\\$$$$$@b.\n"
                "   .d$$$$i$$$\\$$$$$$b.\n"
                "           ###\n"
                "           ###\n"
                "           ###\n";
    }
}
