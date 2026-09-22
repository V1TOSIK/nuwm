#pragma once

#include <string>

#include "Labs/Abstractions/ITask.h"
#include "Labs/Lab6/Task3/UI/UI.h"
#include "Labs/Lab6/Task3/Logic/Logic.h"

namespace Labs::Lab6::Task3
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
