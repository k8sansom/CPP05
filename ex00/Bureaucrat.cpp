#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _grade(1), _name("default") {	
}

Bureaucrat::Bureaucrat(int grade, const std::string &name) : _grade(grade), _name(name) {
	std::cout << "Bureaucrat " << name << " constructor called." << std::endl;
}
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat& src);

		std::string	getName() const;
		int			getGrade() const;
    private:
		const std::string	_name;
		int					_grade; 