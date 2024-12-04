/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omghazi <omghazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:22 by omghazi           #+#    #+#             */
/*   Updated: 2024/12/04 14:25:03 by omghazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name) : name(name), sign(false), gradeToSign(50), gradeToExec(50)
{
}

Form::Form( ) : name("omar"), sign(false), gradeToSign(50), gradeToExec(50)
{
}

Form::Form(Form &obj) : name(obj.name), sign(obj.sign), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec)
{
}

Form & Form::operator=(const Form &obj)
{
        if (this != &obj)
                this->sign = obj.sign;
        return (*this);
}

std::string     Form::getName() const
{
        return (name);
}

bool    Form::getSign() const
{
        return (sign);
}

int     Form::getGradeToSign() const
{
        return (gradeToSign);
}

int     Form::getGradeToExec() const
{
        return (gradeToExec);
}

void            Form::beSigned(Bureaucrat &b)
{
        try
        {
                if (b.getGrade() > this->gradeToSign)
                        throw GradeTooLowException();
                this->sign = true;
        } catch (const std::exception &e)
        {
                std::cout << e.what() << std::endl;
                std::cout << "can't sign" << std::endl;
                this->sign = false;
        }
}

const char *Form::GradeTooHighException::what() const throw()
{
        return ("Grade is to height");
}

const char *Form::GradeTooLowException::what() const throw()
{
        return ("Grade is to low");
}

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooLowException::GradeTooLowException()
{}

std::ostream&    operator << (std::ostream &os, const Form &obj)
{
        os << "Form: " << obj.getName()
        << ", Signed: " << (obj.getSign() ? "Yes" : "No")
        << ", Grade to Sign: " << obj.getGradeToSign()
        << ", Grade to Execute: " << obj.getGradeToExec();
        return (os);
}
