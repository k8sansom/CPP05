#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        // Create Bureaucrats with different grades
        Bureaucrat alice("Alice", 50);
        Bureaucrat bob("Bob", 5);
        Bureaucrat charlie("Charlie", 150); // Lowest possible grade

        // Create Forms with different signing and execution grades
        Form formA("FormA", 60, 100);
        Form formB("FormB", 10, 50);
        Form formC("FormC", 150, 150); // Easiest form to sign

        // Display the form information
        std::cout << formA << std::endl;
        std::cout << formB << std::endl;
        std::cout << formC << std::endl;

        // Test signing forms with different Bureaucrats
        std::cout << "\n*** Testing Form Signing ***\n";
        bob.signForm(formA);      // Bob has grade 5, should sign successfully
        alice.signForm(formA);    // Alice has grade 50, should also sign successfully
        charlie.signForm(formC);  // Charlie has grade 150, can sign the easiest form

        std::cout << "\nAttempting to sign more difficult forms:\n";
        charlie.signForm(formA);  // Charlie cannot sign (grade too low for FormA)
        alice.signForm(formB);    // Alice cannot sign (grade too low for FormB)

        // Testing exceptions with invalid form grades
        std::cout << "\n*** Testing Form Creation with Invalid Grades ***\n";
        try {
            Form invalidForm("InvalidForm", 0, 100);  // Sign grade too high (invalid)
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            Form anotherInvalidForm("AnotherInvalidForm", 151, 100);  // Sign grade too low (invalid)
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        std::cout << "\n*** Testing Bureaucrat with Invalid Grade ***\n";
        try {
            Bureaucrat invalidBureaucrat("InvalidBureaucrat", 0);  // Grade too high
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            Bureaucrat anotherInvalidBureaucrat("AnotherInvalidBureaucrat", 200);  // Grade too low
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (std::exception &e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}
