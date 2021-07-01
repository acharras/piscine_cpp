/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:27:04 by acharras          #+#    #+#             */
/*   Updated: 2021/07/01 14:26:44 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const& Name, unsigned int Grade) : name(Name), signGrade(Grade), execGrade(0), _signed(0)
{
    if (signGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form & cpy) : name(cpy.name), signGrade(cpy.getSignGrade()), execGrade(0)
{
    *this = cpy;
}

Form::~Form(){
}

Form& Form::operator=(const Form & cpy)
{
    this->_signed = cpy._signed;
    return (*this);
}

std::string    Form::getName() const{
    return (name);
}

unsigned int   Form::getSignGrade() const{
    return (signGrade);
}

unsigned int   Form::getExecGrade() const{
    return (execGrade);
}

bool    Form::getSigned() const{
    return (_signed);
}

void    Form::setSigned(bool b){
    _signed = b;
}


void  Form::beSigned(Bureaucrat const& target)
{
    if (_signed == 1)
    {
        std::cout << "This form is already signed" << std::endl;
    }
    else
    {
        if (target.getGrade() > signGrade)
            throw Form::GradeTooLowException();
        else
        {
            _signed = 1;
            std::cout << target.getName() << "signed form" << name << std::endl;
        }
    }
}

std::ostream&   operator<<(std::ostream& os, Form const& f)
{
    os << "Form name : " << f.getName() << ", Form grade required to sign :" << f.getSignGrade() << ", Form grade to execute it : " << f.getExecGrade() << ", Form is signed : " << f.getSigned() << std::endl;
    return (os);
}