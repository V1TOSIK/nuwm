#pragma once

class ITask
{
    public:
        virtual ~ITask() = default;

        virtual short Number() const = 0;
        virtual std::string Description() const = 0;
        virtual void Execute() = 0;
};