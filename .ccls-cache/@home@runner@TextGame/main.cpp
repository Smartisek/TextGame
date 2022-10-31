// Libraries imported
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void StartFight(){
   cout << "\n" << "To start the fight enter F" << "\n" << endl;  
  char Start;
  cin >> Start;
  if(Start = 'f'){
    cout << "\n" << "Starting fight..." << endl;
  }
}

void YouWon(){
  cout << "\n" << "Congratulations! You won!" << endl;
}

void StartOver(){
  cout << "Start over again" << endl;
}

void GameOver(){
  cout << "Game Over." << endl;
}

void Combat(){
StartFight();
int PlayerHealth = 580;
int PlayerAttack = 25;
int EnemyHealth = 520;
int EnemyAttack = 30;
srand(time(NULL));

for(int i=0; i<30; i++){
  int Player = (rand() % 20) + 10;
  int Enemy = (rand() % 30) + 20;
  cout << "\n" << endl;
  if(Player <=20){
    PlayerHealth=PlayerHealth-EnemyAttack;
    cout << "-------------------" << "\n" << "Enemy's move!" << "\n" << "You've been hit" << "\n" << "-------------------" << endl;
  }else if(Enemy>20){
    EnemyHealth=EnemyHealth-PlayerAttack;
    cout << "-------------------" << "\n" << "Your move!" << "\n" << "You hit the enemy" << "\n" << "-------------------" << "\n" << endl;
  }
}  
 if(EnemyHealth > PlayerHealth){
   GameOver();
 }else if(PlayerHealth > EnemyHealth){
   YouWon();
 }
}

void EnemyEncounterForest(){
  cout << "It's been a long way but you've reached the forest now." << "\n" << "Oh no what is that?" << "\n" << "You've been ambushed by a Forest Goblin!!!" << "\n" << endl;
  cout << "There are only two options now." << "\n" << "Fight or escape." << "\n" << "To engage battle:" << "\n" << "Click F to fight or N to run if you are too scared" << "\n" << endl;
  char fight3;
  cin >> fight3;
  if(fight3 == 'f'){
    cout << "You chose to fight. Good." << "\n" << endl;
    Combat();
  }
  else if(fight3 == 'n'){
    cout << "You chose to run...Wow" << "\n" << endl;
    GameOver();
  }
}

void EnemyEncounterCaves(){
    cout << "It's been a long way but you've reached the caves now." << "\n" << "Oh no what is that?" << "\n" << "You've been ambushed by a Troll!!!" << "\n" << endl;
  cout << "There are only two options now." << "\n" << "Fight or escape." << "\n" << "To engage battle:" << "\n" << "Click F to fight or N to run if you are too scared" << "\n" << endl;
  char fight2;
  cin >> fight2;
  if(fight2 == 'f'){
    cout << "You chose to fight. Good." << "\n" << endl;
    Combat();
  }
  else if(fight2 == 'n'){
    cout << "You chose to run...Wow" << "\n" << endl;
    GameOver();
  }
}

void EnemyEncounterMountains(){
  cout << "It's been a long way but you've reached the mountains now." << "\n" << "Oh no what is that?" << "\n" << "You've been ambushed by a Mountain Gnome!!!" << "\n" << endl;
  cout << "There are only two options now." << "\n" << "Fight or escape." << "\n" << "To engage battle:" << "\n" << "Click F to fight or N to run if you are too scared" << "\n" << endl;
  char fight;
  cin >> fight;
  if(fight == 'f'){
    cout << "You chose to fight. Good." << "\n" << endl;
    Combat();
  }
  else if(fight == 'n'){
    cout << "You chose to run...Wow" << "\n" << endl;
    GameOver();
  }
}

void ChooseLocation(){
  cout << "\n" << "You can go to: " << "\n" << "M: The Moutains" << "\n" << "C: The Caves" << "\n" << "F: The Forest" << "\n" << "Where do you wish to go?" << endl;
  char al;
  cin >> al;
  switch(al){
    case 'm' :
    cout << "\n" << "You chose The Mountains" << "\n" << endl;
    EnemyEncounterMountains();
    break;
    case 'c' :
    cout << "\n" << "You chose The Caves" << endl;
    EnemyEncounterCaves();
    break;
    case 'f' : 
    cout << "\n" << "You chose The Forest" << endl;
    EnemyEncounterForest();
    break;
    default :
    cout << "\n" << "Invalid input" << endl;
      StartOver();
    break;
  }
}

void Confirm(){
  cout << "\n" << endl;
  cout << "To confirm type in yes" << endl;
  string confirm;
  cin >> confirm;
  if(confirm == "yes"){ 
    cout << "\n" << "Great! Let's choose your location." << endl;
    ChooseLocation();
  }else {
    StartOver();
  }
}

void ChooseCharacter(){
  cout << "1: A Wizard" << endl;
  cout << "2: A Warrior" << endl;
  cout << "3: An Archer" << endl;
  cout << "\n" << endl;
  int choose;
  cin >> choose;
  switch(choose){
   case 1 :
     cout << "You chose a Wizard" << endl;
     Confirm();
    break;
   case 2 :
     cout << "You chose a Warrior" << endl;
     Confirm();
    break;
   case 3 :
     cout << "You chose an Archer" << endl;
     Confirm();
    break;
   default :
    cout << "Invalid input" << endl;
    break;
  }
  cout << "\n" << endl;
}

void InputAge(){
  int age;
  cin >> age;
  if(age < 18){
    cout << "You are not of age." << endl;
    GameOver();
  }else {
    cout << "You are of age. Now let's choose your character." << "\n"<< endl;
  }
  ChooseCharacter();
}

void InputName(){

  string name = "";

  cin >> name;

  cout << "Hi " << name << ". Are you ready to start the game? How old are you?" << "\n" << endl;
   InputAge();
  return;
}

int main(){
  cout << "Hello, Welcome to the Adventure game! what is your name?" << "\n" <<  endl;
  InputName();
  return 0;

}