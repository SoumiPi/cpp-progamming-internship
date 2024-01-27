#include "TodoList.h"
#include <iostream>

TodoList::TodoList() {
    // Initialisation éventuelle de TodoList ici
}

void TodoList::addTask(const std::string& description) {
    tasks.push_back(Task(description));
    std::cout << "Task added successfully!\n";
}

void TodoList::viewTasks() const {
    std::cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i].getDescription();
        if (tasks[i].isCompleted()) {
            std::cout << " (Completed)";
        }
        std::cout << "\n";
    }
}

void TodoList::markTaskAsCompleted(size_t index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks[index - 1].markAsCompleted();
        std::cout << "Task marked as completed!\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}

void TodoList::removeTask(size_t index) {
    if (index >= 1 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Task removed successfully!\n";
    } else {
        std::cout << "Invalid task index.\n";
    }
}

