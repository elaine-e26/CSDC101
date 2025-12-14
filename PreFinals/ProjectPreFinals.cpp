#include <iostream>
#include <string>
using namespace std;

//Phase 1 - Initialization
bool isMerciful = false;               
string Blazer_Impression_Score = "Neutral";         
bool isRomanticTensionActive = false;    
string Robert_Mercy_Rating = "Nothing";

//Phase 2 - Scenes
//Scene 1: The Moral Crossroads
void scene_interrogation(){
    int choice;
    cout << "\n-----[Scene 1] The Moral Crossroads: Apartment Interrogation-----" << endl;
    cout << "The Soothing Goon dangles from the building." << endl;
    cout << "Option 1: Pull Him Back" << endl;
    cout << "Option 2: Let Him Drop" << endl;
    cout << "Choose your action (1-2): ";
    cin >> choice;
    
    if (choice == 1){
        isMerciful = true;
        Robert_Mercy_Rating = "Merciful";
        cout << "Robert pulls him back, demonstrating compassion." << endl;
    } else {
        isMerciful = false;
        Robert_Mercy_Rating = "Ruthless";
        cout << "Robert lets him fall, showing him as ruthless." << endl;
    }
}
//Scene 2: Tactical Consequence
void scene_street_fight(){
    int choice;
    cout << "\n-----[Scene 2] Tactical Consequence: Street Fight-----" << endl;
    cout << "An attacker strikes with a crowbar." << endl;
    cout << "Option 1: Right Hand Punch" << endl;
    cout << "Option 2: Left hand Punch" << endl;
    cout << "Choose your action (1-2): ";
    cin >> choice;
    
    if (choice == 1){
        cout << "Robert is countered and struck by the crowbar. He is left alone at the sideroad with visible pain in his body." << endl;
    } else {
        cout << "Robert charges back with direct blow, a success hit!" << endl;
    }
}
//Scene 3: Relationship Impact
void scene_bar_flambae(){
    int choice;
    cout << "\n-----[Scene 3] Relationship Impact: The Superhero Bar Scene-----" << endl;
    cout << "Flambae exhibits his fire power provoking Robert." << endl;
    cout << "Option 1: Throwing Water" << endl;
    cout << "Option 2: Throwing Alcohol" << endl;
    cout << "Choose your action (1-2): ";
    cin >> choice;
    
    if (choice == 1){
        Blazer_Impression_Score = "Calm";
        cout << "Robert extinguishes fire but makes Flambae slip and chip his tooth." << endl;
    } else {
        Blazer_Impression_Score = "Daring";
        cout << "Robert ignites the fire resulting to chaos. Blonde Blazer is somewhat impressed." << endl;
    }
}
//Scene 4: Romance Route
void scene_billboard(){
    int choice;
    cout << "\n-----[Scene 4] Romance Route: Billboard Scene-----" << endl;
    cout << "Robert and Blonde Blazer share a tense but intimate moment." << endl;
    cout << "Option 1: Choosing to Kiss" << endl;
    cout << "Option 2: Letting the Moment Pass" << endl;
    cout << "Choose your action (1-2): ";
    cin >> choice;
    
    if (choice == 1){
        isRomanticTensionActive = true;
        cout << "Robert leans in. Romantic connection unfolds." << endl;
    } else {
        isRomanticTensionActive = false;
        cout << "Robert backs away. Romantic tension remains." << endl;
    }
}
//Scene 5: Character Reflection
void scene_combat_toxic(){
    int choice;
    cout << "\n-----[Scene 3] Character Reflection: Combat Decision-----" << endl;
    cout << "Robert confronts Toxic." << endl;
    cout << "Option 1: Punting" << endl;
    cout << "Option 2: Stomping" << endl;
    cout << "Choose your action (1-2): ";
    cin >> choice;
    
    if (choice == 1) {
        if (isMerciful) {
            cout << "Robert punts with style. Still showing mercy even in action." << endl;
        } else {
            cout << "Robert punts boldly. Showing his ruthless front" << endl;
        }
    } else {
        if (isMerciful) {
            cout << "Robert stomps tenaciously. Still showing mercy even in action." << endl;
        } else {
            cout << "Robert stomps brutally. Showing his dominance." << endl;
        }
    }
}
//Phase 3 - Epilogue
void epilogue_summary(){
    cout << "\n ---------- [EPILOGUE} ----------" << endl;
    
    cout << "Robert's actions have signified him as a " << Robert_Mercy_Rating << " hero." << endl;
    if (isMerciful){
        cout << "Robert has shown mercy and observes compassionate leadership." << endl;
    } else {
        cout << "Robert takes up pragmatic efficiency, getting things done usefully with informed decisions." << endl;
    }
    cout << "Blonde Blazer remembers Robert as a " << Blazer_Impression_Score << " person." << endl;
    
    if (isRomanticTensionActive){
        cout << "Romantic tension builds up, opening up to a possibility of passionate connection." << endl;
    } else {
        cout << "Romantic tension slowly fades, maintaining professional connection at best." << endl;
    }
}

//Main Functions
int main (){
    cout << "=====[DISPATCH] Episode 1: Robert's Pivot=====" << endl;
    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();
    epilogue_summary();    
return 0;
}
