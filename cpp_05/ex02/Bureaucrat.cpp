/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:29:31 by acharras          #+#    #+#             */
/*   Updated: 2021/06/23 16:12:51 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
}

Bureaucrat::Bureaucrat(std::string const& Name, unsigned int Grade) : name(Name), grade(Grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & cpy) : name(cpy.name)
{
    *this = cpy;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & cpy)
{
    this->grade = cpy.grade;
    return (*this);
}

std::string    Bureaucrat::getName() const{
    return (name);
}

unsigned int   Bureaucrat::getGrade() const{
    return (grade);
}

void    Bureaucrat::incrementGrade(){
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
       grade--;
}

void    Bureaucrat::decrementGrade(){
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

std::ostream&   operator<<(std::ostream& os, Bureaucrat const& f)
{
    os << "<" << f.getName() << ">, bureaucrat grade <" << f.getGrade() << ">" << std::endl;
    return (os);
}

void    Bureaucrat::signForm(Form &target)
{
    if (target.getSigned() == 1)
        std::cout << "<" << name << "> cannot sign <" << target.getName() << "> because <this form is already signed>" << std::endl;
    else
    {
        if (target.getSignGrade() < grade)
            throw Bureaucrat::GradeTooLowException();
        else
        {
            target.setSigned(1);
            std::cout << "<" << name << "> signs <" << target.getName() << ">" << std::endl;
        }
    }
}

void    Bureaucrat::executeForm(Form const & form){
    if (form.getSigned() == 0)
        std::cout << name << " cannot execute " << form.getName() << " because <this form is not signed>" << std::endl;
    else
    {
        if (form.getExecGrade() < grade)
            std::cout << getName() << " cannot excute this form because his grade is to low" << std::endl;
        else
            form.execute(*this);
    }
}