/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 16:14:57 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 16:57:37 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45), Target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : Form(cpy), Target(cpy.Target)
{
    (void)cpy;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & cpy)
{
    setSigned(cpy.getSigned());
    return (*this);
}

void  RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    int irand = rand() % 2;
    if (getSigned() == 0)
    {
        std::cout << getName() << " is not signed yet" << std::endl;
    }
    else if (getSignGrade() < executor.getGrade())
        std::cout << executor.getName() << "can't execute this form because his grade is to low" << std::endl;
    else
    {
        if (irand == 0)
            std::cout << "Failed to be robotomized" << std::endl;
        else
            std::cout << "<" << Target << "> has been robotomized successfully" << std::endl;
    }
}
