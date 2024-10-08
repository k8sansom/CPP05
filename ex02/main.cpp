#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

int main() {
    // Test ShrubberyCreationForm
    try {
        Bureaucrat alice("Alice", 137);
		Bureaucrat	mike("Mike", 145);  // Alice's grade is 137
        ShrubberyCreationForm shrubbery("garden");

        // Trying to execute without signing the form
        alice.executeForm(shrubbery);  // Should throw "Form is not signed."

        // Sign the form
        shrubbery.beSigned(alice);     // Alice has sufficient grade to sign the form (145 required)
        alice.executeForm(shrubbery);  // Alice has enough grade to execute (137 required)
		mike.executeForm(shrubbery);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // // Test RobotomyRequestForm
    // try {
    //     std::cout << "\n---- Testing RobotomyRequestForm ----" << std::endl;
    //     Bureaucrat bob("Bob", 50);  // Bob's grade is 50
    //     RobotomyRequestForm robotomy("Wall-E");

    //     // Sign and execute the form
    //     robotomy.beSigned(bob);     // Bob has sufficient grade to sign the form (72 required)
    //     bob.executeForm(robotomy);  // Bob has enough grade to execute (45 required)

    //     std::cout << "---- RobotomyRequestForm executed ----" << std::endl;
    // } catch (const std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }

    // // Test PresidentialPardonForm
    // try {
    //     std::cout << "\n---- Testing PresidentialPardonForm ----" << std::endl;
    //     Bureaucrat president("President", 1);  // President's grade is 1
    //     PresidentialPardonForm pardon("Ford Prefect");

    //     // Sign and execute the form
    //     pardon.beSigned(president);     // President has sufficient grade to sign the form (25 required)
    //     president.executeForm(pardon);  // President has enough grade to execute (5 required)

    //     std::cout << "---- PresidentialPardonForm executed successfully ----" << std::endl;
    // } catch (const std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }

    // // Test a failure case due to insufficient execution grade
    // try {
    //     std::cout << "\n---- Testing form execution failure due to grade ----" << std::endl;
    //     Bureaucrat lowGradeBureaucrat("LowGradeBureaucrat", 150);  // Grade too low to execute any form
    //     ShrubberyCreationForm lowGradeShrubbery("backyard");

    //     // Sign the form
    //     lowGradeShrubbery.beSigned(lowGradeBureaucrat);  // Can sign, as signing grade is 145

    //     // Attempt to execute the form, should fail
    //     lowGradeBureaucrat.executeForm(lowGradeShrubbery);  // Should throw "Bureaucrat's grade is too low to execute the form."
    // } catch (const std::exception &e) {
    //     std::cerr << e.what() << std::endl;
    // }

    return 0;
}