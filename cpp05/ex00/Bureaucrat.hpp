
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	protected:
		const std::string	_name;
		int 				_grade;
	
	public:
		Bureaucrat(const std::string name = "default", int grade = 150);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& copy);

		const std::string getName(void) const;
		int	getGrade(void) const;
		void setGrade(int grade);
		void incGrade(void);
		void decGrade(void);
		void verifyGrade(int new_grade);
	
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

	std::ostream& operator<<(std::ostream& flux, Bureaucrat const& other);

#endif
