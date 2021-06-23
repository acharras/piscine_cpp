/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:27:28 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 16:54:40 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;

class Form
{
	private :
		const std::string name;
        const unsigned int signGrade;
        const unsigned int execGrade;
        bool _signed;
        Form();

	public:
        Form(std::string const& Name, unsigned int Grade, unsigned int executableGrade);
        Form(const Form & cpy);
		~Form();
        Form& operator=(const Form & cpy);
		
        std::string    getName() const;
        unsigned int    getSignGrade() const;
        unsigned int    getExecGrade() const;
        bool    getSigned() const;
        void    setSigned(bool b);
        void    beSigned(Bureaucrat const& target);

        virtual void execute(Bureaucrat const& executor) const = 0;

        class GradeTooLowException : public std::exception{
            public:
                virtual const char * what() const throw()
                {
                    return ("Grade to low");
                }
        };

        class GradeTooHighException : public std::exception{
            public:
                virtual const char * what() const throw()
                {
                    return ("Grade to high");
                }
        };
};

std::ostream&   operator<<(std::ostream& os, Form const& f);

#include "Bureaucrat.hpp"

#endif