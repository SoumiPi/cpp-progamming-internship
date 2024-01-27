
#include "Task.h"

Task::Task(const std::string& description) : description(description), completed(false) {}

void Task::markAsCompleted() {
    completed = true;
}

bool Task::isCompleted() const {
    return completed;
}

const std::string& Task::getDescription() const {
    return description;
}
