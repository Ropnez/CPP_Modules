#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    {
        try {
			
			Bureaucrat a("A", 25);
			Bureaucrat b("B", 1);
			AForm* test = new ShrubberyCreationForm("test");

        
			a.signAForm(*test);
			a.executeForm(*test);
			delete test;
        }
        catch (std::exception &e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
    }
}
