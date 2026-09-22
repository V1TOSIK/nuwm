#pragma once

#include <string>

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab9/Task1/Logic/Logic.h"
#include "Labs/Lab9/Task1/UI/UI.h"

namespace Labs::Lab9::Task1
{
    class Task : public ITask
    {
    public:
        void Execute() override;
        short Number() const override;
        std::string Description() const override;

    private:
        UI _ui;
        Logic _logic;
    };
}
