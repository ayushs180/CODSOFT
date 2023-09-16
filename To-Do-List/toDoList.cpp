#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> tasks;


void displayMenu() {
    cout << "\nTodo List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Quit" << endl;
}


void addTask() {
    string task;
    cout << "\nEnter the task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully !!!" << endl;
    cout<<endl;
}


void viewTasks(){
    if(tasks.empty()){
        cout << "\nError !!! No tasks found......" << endl;
        cout<<endl;
    }else{
        cout << "\nTasks :" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
        cout<<endl;
    }
}


void deleteTask() {
    viewTasks();
    int choice;
    cout << "\nEnter the task number you want to delete: ";
    cin >> choice;

    if (choice < 1 || choice > static_cast<int>(tasks.size())) {
        cout << "Invalid task number...." << endl;
    } else {
        tasks.erase(tasks.begin() + choice - 1);
        cout << "Task deleted successfully !!!" << endl;
    }
}

int main() {
    while (true) {
        cout<<" <------------- Welcome User ------------- > "<<endl;
        cout<<endl;
        displayMenu();
        int choice;
        cout << "Enter your choice (1/2/3/4) : ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                deleteTask();
                break;
            case 4:
                cout << "\n Goodbye " << endl;
                cout<<"<-------------- THE END  -------------->"<<endl; 
                return 0;
            default:
                cout << "\nInvalid choice. Please select a valid option." << endl;
                break;
        }
    }

    return 0;
}
