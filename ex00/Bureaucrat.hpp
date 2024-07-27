#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
    public:
        Bureaucrat(int grade, const std::string &name);
        ~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat& src);

		std::string	getName() const;
		int			getGrade() const;
    private:
        const std::string	name;
        int					grade;        
};

#endif