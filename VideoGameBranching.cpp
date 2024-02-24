#include <iostream>
#include <cctype>
using namespace std;

// Program demonstrating branching in C++ with a video game theme.

int main() {
    // Example of if-else statement: Player's health vs. enemy damage
    int playerHealth = 80;
    int enemyDamage = 50;
    cout << "You encounter an enemy!\n";
    if (playerHealth > enemyDamage) {
        cout << "You defeated the enemy! You have " << (playerHealth - enemyDamage) << " health remaining.\n";
    } else {
        cout << "You were defeated by the enemy!\n";
    }

    // Example of nested if-else statement: Player with/without key and locked/unlocked door
    bool hasKey = true;
    bool isDoorLocked = true;
    cout << "You approach a locked door.\n";
    if (hasKey) {
        cout << "You have the key.\n";
        if (isDoorLocked) {
            cout << "You unlock the door and proceed.\n";
        } else {
            cout << "The door is already unlocked.\n";
        }
    } else {
        cout << "You don't have the key. The door remains locked.\n";
    }

    // Example of switch statement: Player's directional input (N, S, E, or W)
    char direction = 'N';
    cout << "Which direction do you want to move? (N/S/E/W): ";
    cin >> direction;
    
    // Convert to uppercase for case-insensitive input processing
    char directionUpper = toupper(direction);
    
    switch (directionUpper) {
        case 'N':
            cout << "You move northward.\n";
            break;
        case 'S':
            cout << "You move southward.\n";
            break;
        case 'E':
            cout << "You move eastward.\n";
            break;
        case 'W':
            cout << "You move westward.\n";
            break;
        default:
            cout << "Invalid direction entered. You stay put.\n";
    }

    return 0;
}
