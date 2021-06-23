/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:20:10 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 15:54:58 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5), Target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : Form(cpy), Target(cpy.Target)
{
    (void)cpy;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & cpy)
{
    setSigned(cpy.getSigned());
    return (*this);
}

void  PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (getSigned() == 0)
    {
        std::cout << getName() << " is not signed yet" << std::endl;
    }
    else if (getSignGrade() < executor.getGrade())
        std::cout << executor.getName() << "can't execute this form because his grade is to low" << std::endl;
    else
        std::cout << "<" << Target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
