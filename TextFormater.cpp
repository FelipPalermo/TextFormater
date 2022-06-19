#include <iostream> 
#include <string>

/////////////
//
//  HOW TO USE *****
//
//  JUST CHANGE ST1 CONTENT AND USE THE CONSOLE OUTPUT
//
/////////////

int main(){


    // Variable for logic operations 
    int logic = 0; 

    // St1 
    std::string St1 = {"abbachio jotaro joseph giornno speedwagon gyro zeppeli moodyJazz StarPaltinum"};

    for(int i = 0; i < St1.size(); i++){
        
        // if the program find an empty espace
        if(St1[i] == ' '){

            // Delete the empty char
            St1.erase(St1.begin() + i);
            
            // Add {" if logic == 0  / Start of pharse
            if(logic == 0){
                St1.insert(i, "\""); St1.insert(i, "{"); logic++;
            }

            // Add "} if logic == 0  / End of pharse
            if(logic == 1){
                St1.insert(i, "}"); St1.insert(i, "\""); logic--; 
            }
            
            // Add a comma to the end pharse 
            St1.insert(i+2, ",");   }


        // if index 0 "Start of string", add {"
        if(i == 0) {St1.insert(i, "\""); St1.insert(i, "{");}

        // if index 0 "Start of string", add "}
        if(i == St1.back()) {St1.insert(i + 2, "\""); St1.insert(i + 3, "}"); }

        // Print the string
        std::cout << St1[i];
    
    }

    // Return 0 if everything runs ok
    return 0; 
}
