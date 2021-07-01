/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:17:17 by acharras          #+#    #+#             */
/*   Updated: 2021/07/01 14:35:26 by acharras         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    srand(time(NULL));
    try
    {
        Intern  Int1;
        Form    *tester;
        Bureaucrat test1("test1", 1);
        Bureaucrat test2("test2", 112);
        ShrubberyCreationForm   form1("ascii");
        PresidentialPardonForm  form2("pardon");
        RobotomyRequestForm     form3("random");
        
        test1.signForm(form1);
        test2.signForm(form1);
        test1.executeForm(form1);
        test2.executeForm(form1);
        std::cout << std::endl;
        
        tester = Int1.makeForm("robotomy request", "bender");
        test1.executeForm(*tester);
        test1.signForm(*tester);
        test1.executeForm(*tester);
        std::cout  << test1;
        std::cout << *tester;
        std::cout << std::endl;

        test1.signForm(form2);
        test2.signForm(form2);
        test1.executeForm(form2);
        test2.executeForm(form2);
        std::cout << std::endl;
        test1.signForm(form3);
        test2.signForm(form3);
        test1.executeForm(form3);
        test2.executeForm(form3);

        delete tester;

    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Form::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
}