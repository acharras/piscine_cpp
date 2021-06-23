/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:29:32 by acharras          #+#    #+#             */
/*   Updated: 2021/06/22 16:11:47 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Form;

class Bureaucrat
{
	private :
		const std::string name;
        unsigned int grade;
        Bureaucrat();

	public:
		
        Bureaucrat(std::string const& Name, unsigned int Grade);
        Bureaucrat(const Bureaucrat & cpy);
		~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat & cpy);
		
        std::string    getName() const;
        unsigned int    getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        void    signForm(Form &target);

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

std::ostream&   operator<<(std::ostream& os, Bureaucrat const& f);

#include "Form.hpp"

#endif