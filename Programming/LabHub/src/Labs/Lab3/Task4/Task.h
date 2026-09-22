#pragma once

#include <string>

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab3/Task4/UI/UI.h"
#include "Labs/Lab3/Task4/Logic/Logic.h"

namespace Labs::Lab3::Task4
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
