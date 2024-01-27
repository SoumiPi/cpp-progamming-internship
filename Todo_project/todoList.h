#ifndef TODOLIST_H
#define TODOLIST_H

#include "Task.h"
#include <vector>

class TodoList {
public:
    TodoList();

    void addTask(const std::string& description);
    void viewTasks() const;
    void markTaskAsCompleted(size_t index);
    void removeTask(size_t index);

private:
    std::vector<Task> tasks;
};

#endif // TODOLIST_H

