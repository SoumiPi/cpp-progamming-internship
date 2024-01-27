#include <iostream>
#include "TodoList.h"

int main() {
    TodoList todoList;

    while (true) {
        std::cout << "\nOptions:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string description;
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Clear input buffer
                std::getline(std::cin, description);
                todoList.addTask(description);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                size_t index;
                std::cout << "Enter the task index to mark as completed: ";
                std::cin >> index;
                todoList.markTaskAsCompleted(index);
                break;
            }
            case 4: {
                size_t index;
                std::cout << "Enter the task index to remove: ";
                std::cin >> index;
                todoList.removeTask(index);
                break;
            }
            case 5:
                std::cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
