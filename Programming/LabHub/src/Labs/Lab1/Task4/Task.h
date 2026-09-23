#pragma once

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab1/Task4/UI/UI.h"
#include <string>

namespace Labs::Lab1::Task4
{
    class Task : public ITask
    {
    public:
        void Execute() override;
        short Number() const override;
        std::string Description() const override;

    private:
        UI _ui;
    };
}