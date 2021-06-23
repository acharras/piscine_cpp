/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:29:33 by acharras          #+#    #+#             */
/*   Updated: 2021/06/23 16:08:46 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern & cpy)
{
    (void)cpy;
}

Intern::~Intern(){
}

Intern& Intern::operator=(const Intern & cpy)
{
    (void)cpy;
    return (*this);
}

Form   *makeShrubberyCreation(std::string const target)
{
    return (new ShrubberyCreationForm(target));
}

Form   *makePresidentialPardon(std::string const target)
{
    return (new PresidentialPardonForm(target));
}

Form   *makeRobotomyRequest(std::string const target)
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::makeForm(std::string const& formName, std::string const& target)
{
    std::string Name[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form*    (*Form[3])(std::string) = {makeRobotomyRequest, makePresidentialPardon, makeShrubberyCreation};
    for(int i = 0; i < 3; i++)
    {
        if (Name[i].compare(formName) == 0)
        {
            std::cout << "Intern creates <" << formName << ">" << std::endl;
            return (Form[i](target));
        }
    }
    std::cout << "Intern cannot creates this form : " << formName << std::endl;
    return (NULL);
}
