#pragma once

class ConsoleUI{
    public:
        void Run();
        
    virtual ~ConsoleUI() = default;
    
    private:
        void ClearConsole();
};