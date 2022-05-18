# include "LinkedList.h"
# include "Node.h"
# include <sstream>

// Function used to count number of spaces
int space_counter(string input){
    int counter = 0;
    for (int i = 0; i < input.length(); i++){
        if (isspace(input.at(i)))
            counter ++;
    }
    return counter;
}

void exec (LinkedList list_input, string cmd, int param1, int param2){
    if (cmd == "AF")
        list_input.addFront(param1);
    else if (cmd == "AE")
        list_input.addEnd(param1);
    else if (cmd == "AP")
        list_input.addAtPosition(param1, param2);
    else if (cmd == "S")
        list_input.search(param1);
    else if (cmd == "DF")
        list_input.deleteFront();
    else if (cmd == "DE")
        list_input.deleteEnd();
    else if (cmd == "DP")
        list_input.deleteAtPosition(param1);
    else if (cmd == "GI")
        list_input.getItem(param1);
    else 
        cout << "Command not found!" << endl;
    list_input.printItems();     
}

int main (){
    // Initialization for input reading
    string S, temp, command; 
    getline(cin, S);
    stringstream X(S);
    int index = 0;
    int space_counted = space_counter(S);
    int array_size = space_counted - 2;
    string T[space_counted + 1];
    int input_array[array_size];
    int param[1];
    while (getline(X, temp, ' ')) {
        T[index] = temp;
        index++;
    }    

    // Reading chain of input and assign them 
    for (int i = 0; i < array_size; i++){
        input_array[i] = stoi(T[i]);
    }
    // Reading command string and parameters:
    command = T[array_size];
    param[0] =  stoi(T[array_size+1]);
    param[1] =  stoi(T[array_size+2]);

    LinkedList list(input_array, array_size);

    exec(list, command, param[0], param[1]);
    
}