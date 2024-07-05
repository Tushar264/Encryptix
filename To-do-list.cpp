#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string des;
    bool isCompleted;
};

void addTask(vector<Task>& tasks) {
    Task newTask;
    cout << "Enter the task description: ";
    string s;
	cin>>s;
	newTask.des=s;
    newTask.isCompleted = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list." << endl;
    } else {
        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].des
                 << " [" << (tasks[i].isCompleted ? "Completed" : "Pending") << "]" << endl;
        }
    }
}

void markTaskAsCompleted(vector<Task>& tasks) {
    int taskNum;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskNum;

    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number." << endl;
    } else {
        tasks[taskNum - 1].isCompleted = true;
        cout << "Task marked as completed!" << endl;
    }
}

void deleteTask(vector<Task>& tasks) {
    int taskNum;
    cout << "Enter the task number to delete: ";
    cin >> taskNum;

    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number." << endl;
    } else {
        tasks.erase(tasks.begin() + taskNum - 1);
        cout << "Task removed successfully!" << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
		cout << "To-Do List Manager" << endl;
    	cout << "1. Add Task" << endl;
    	cout << "2. View Tasks" << endl;
		cout << "3. Mark task as completed" << endl;
    	cout << "4. Delete Task" << endl;
		cout << "5. Exit Task" << endl;
    	cout << "Enter your choice: ";
		cin >> choice;
        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
			case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                deleteTask(tasks);
                break;
			case 5:
                cout << "Exiting the To-Do List Manager." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
                break;
        }
    }
}
