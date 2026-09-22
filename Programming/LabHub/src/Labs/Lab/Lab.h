#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Labs/Abstractions/ITask.h"

namespace Labs
{
    class Lab
    {
    public:
        Lab(
            short number,
            std::string title,
            std::vector<std::unique_ptr<ITask>> tasks
        );

        short GetNumber() const;
        const std::string& GetTitle() const;
        const std::vector<std::unique_ptr<ITask>>& GetTasks() const;

    private:
        short Number;
        std::string Title;
        std::vector<std::unique_ptr<ITask>> Tasks;
    };
}