#include "Labs/Lab/Lab.h"
#include <utility>

using std::move;
using std::string;
using std::unique_ptr;
using std::vector;

namespace Labs
{
    Lab::Lab(
        short number,
        string title,
        vector<unique_ptr<ITask>> tasks
    )
        : Number(number),
          Title(move(title)),
          Tasks(move(tasks))
          { }

    void Lab::AddTask(std::unique_ptr<ITask> task)
    {
        Tasks.push_back(std::move(task));
    }

    short Lab::GetNumber() const { return Number; }
    const string& Lab::GetTitle() const { return Title; }
    const vector<unique_ptr<ITask>>& Lab::GetTasks() const { return Tasks; }
}