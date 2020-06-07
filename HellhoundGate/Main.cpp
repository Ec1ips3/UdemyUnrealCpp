#include <iostream>
#include <chrono>
#include <thread>

#include <stdlib.h>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

void LastStand()
{
    cout << "   \n\n\n";
    cout << "   and with great relief you see the walls grind to a halt.\n\n\n";
    cout << "   Suddenly, from out of nowhere a cheerful voice greets you...\n\n";
    cout << "   \"Hi there\" \"You must be our new Guest...\" \"Hopefully you'll do better than the last one did.\"\n";
    cout << "   \"All you need to do to open the door is get the code right...\" \"It's pretty easy really... you should have no trouble at all...\"\n\n";
    cout << "   \"What you have to do is enter three numbers between 1 and 5 and make sure there is a space between them when you enter them\n";
    cout << "   and to make it even easier you'll get 3 attempts before the gas fills the room...\n";
    cout << "   \"Don't worry about that though I am sure you will be fine...\"\n\n";
    cout << "   Before you can respond the voice continues... \"I am sure that the gas doesn't hurt too much... I mean when she died she wasn't groaning at all...\n";
    cout << "   of course that may have been because her throat had melted by then... Hmmm, I really don't understand these organic bodies... they seem very frail\"\n";
    cout << "   \"Oh well, I am certain you won't have any problems at all... oh yes I almost forgot... the three numbers you enter when summated  must add up to X\n";
    cout << "   and when multiplied must equal Y\" \"Gee whiz... I am sure there is something else that I have forgotten... mustn't be too important.\n";
    cout << "   \"Never you worry I am certain it will come back to me. I might just have a little nap and think about it...\"\n\n";
    cout << "   With these words the room pitched into full dark, the only illumination coming from the console panel and the door surrounds.\n";
    cout << "   You stand looking at the door for a moment in shock before noticing that the timer was no longer inactive... and it had started counting down...\n";
    cout << "   4:33... 4:32... 4:31...\n";
    cout << "   \"Time to get to work\"\n\n";
}

void PlayFinalLevel(int CurrentLevel, int Attempts)
{
    system("CLS");
    
    // Set GAME WIN CONDITIONS
    const int Combo1 = 3;
    const int Combo2 = 5;
    const int Combo3 = 7;

    const int ComboSum = Combo1 + Combo2 + Combo3;
    const int ComboProduct = Combo1 * Combo2 * Combo3;

    // Run Dialog
    LastStand();

    // Tell Player Game Conditions
    cout << "   Your numbers must add up to: " << ComboSum;
    cout << "\n   Your numbers must multiply to: " << ComboProduct;
    cout << "\n   After THIS attempt you have " << (Attempts - 1) << " more attempts before meeting a grisly death... Good Luck!!!\n\n";

    int i = 0;
    bool Condition = true;
    int Guesses = Attempts;

    for (; Condition;)
    {
        // Make Guess
        cout << "   ";
        int GuessA, GuessB, GuessC;
        cin >> GuessA >> GuessB >> GuessC;
        cout << endl;

        int PlayerGuessSum = GuessA + GuessB + GuessC;
        int PlayerGuessProduct = GuessA * GuessB * GuessC;

        // Attempt Loop

        if (PlayerGuessSum == ComboSum)
        {
            system("CLS");
            cout << "\n\n   Hey you made it...\n";
            cout << "\n   I'll just open the door...\n\n";
            cout << "\n   ---- TIME PASSES ---\n\n";
            cout << "\n   ---- MORE TIME PASSES ---\n\n";
            cout << "\n\n   CHAPTER TWO COMING SOON!!!\n";
            cout << "\n\n\n\n\n   P.S There is no chapter 2 really...\n\n";
            cout << "\n\n\n\n\n\n\n\n\n\n\n   Or is there?\n\n";

            Condition = false;  // END GAME
        }
        else
        {
            cout << "\n   Wrong. Guesses left are now " << --Guesses << "\n\n";
            if (Guesses == 0)
            {
                cout << "\n   Oops... looks like your time has run out friend...  Yu Ded!\n";
            }
        }
        i++;
        if (!(i < Attempts))
            Condition = false;
    }
}

void SecondLife()
{
    cout << "   \n\n\n";
    cout << "   To the side there is what looks like a timer which has frozen at 4:47 and a button over the code panel that is blinking a steady green...\n\n";
    cout << "   tentatively you press it...\n\n";
    cout << "   and with great relief you see the walls grind to a halt.\n\n\n";
    cout << "   Suddenly, from out of nowhere a cheerful voice greets you...\n\n";
    cout << "   \"Hi there\" \"You must be our new Guest...\" \"Hopefully you'll do better than the last one did.\"\n";
    cout << "   \"All you need to do to open the door is get the code right...\" \"It's pretty easy really... you should have no trouble at all...\"\n\n";
    cout << "   \"What you have to do is enter three numbers between 1 and 5 and make sure there is a space between them when you enter them\n";
    cout << "   and to make it even easier you'll get 3 attempts before the gas fills the room...\n";
    cout << "   \"Don't worry about that though I am sure you will be fine...\"\n\n";
    cout << "   Before you can respond the voice continues... \"I am sure that the gas doesn't hurt too much... I mean when she died she wasn't groaning at all...\n";
    cout << "   of course that may have been because her throat had melted by then... Hmmm, I really don't understand these organic bodies... they seem very frail\"\n";
    cout << "   \"Oh well, I am certain you won't have any problems at all... oh yes I almost forgot... the three numbers you enter when summated  must add up to X\n";
    cout << "   and when multiplied must equal Y\" \"Gee whiz... I am sure there is something else that I have forgotten... mustn't be too important.\n";
    cout << "   \"Never you worry I am certain it will come back to me. I might just have a little nap and think about it...\"\n\n";
    cout << "   With these words the room pitched into full dark, the only illumination coming from the console panel and the door surrounds.\n";
    cout << "   You stand looking at the door for a moment in shock before noticing that the timer was no longer inactive... and it had started counting down...\n";
    cout << "   4:33... 4:32... 4:31...\n";
    cout << "   \"Time to get to work\"\n\n";
}

void PlayNextLevel(int CurrentLevel, int Attempts)
{
    system("CLS");
    // Set GAME WIN CONDITIONS
    const int Combo1 = 1;
    const int Combo2 = 4;
    const int Combo3 = 8;

    const int ComboSum = Combo1 + Combo2 + Combo3;
    const int ComboProduct = Combo1 * Combo2 * Combo3;

    // Run dialog Second Life
    SecondLife();

    // Tell Player Game Conditions ??? 
    cout << "   Your numbers must add up to: " << ComboSum;
    cout << "\n   Your numbers must multiply to: " << ComboProduct;
    cout << "\n   After THIS attempt you have " << (Attempts - 1) << " more attempts before meeting a grisly death... Good Luck!!!\n\n";

    int i = 0;
    bool Condition = true;
    int Guesses = Attempts;

    for (; Condition;)
    {
        // Make Guess
        cout << "   ";
        int GuessA, GuessB, GuessC;
        cin >> GuessA >> GuessB >> GuessC;
        cout << endl;

        int PlayerGuessSum = GuessA + GuessB + GuessC;
        int PlayerGuessProduct = GuessA * GuessB * GuessC;

        // Attempt Loop

        if (PlayerGuessSum == ComboSum)
        {
            //Set Current Level ++
            CurrentLevel = 3;
            // ReSet Attempts to 5
            Attempts = 5;
            //Break Loop
            Condition = false;
            system("CLS");

            // GO TO NEXT LEVEL
            cout << "\n\n\n\n\n\n\n\n\n   You did it again!. Your a legend!!! You've reached Level " << CurrentLevel;
            cout << "\n   Guesses are now reset";
            cout << "\n\n   Heading to Next Level";

            std::chrono::seconds dura(5);
            std::this_thread::sleep_for(dura);

            PlayFinalLevel(CurrentLevel, Attempts);
        }
        else
        {
            cout << "\n   Wrong. Guesses left are now " << --Guesses << "\n\n";
            if (Guesses == 0)
            {
                cout << "\n   Oops... looks like your time has run out friend...  Yu Ded!\n";
            }
        }
        i++;
        if (!(i < Attempts))
            Condition = false;
    }
}

void Printroduction()
{
    cout << "   \n\n\n";
    cout << "                                                                 Hellhound Gate\n\n\n";
    cout << "   You wake slowly from unconsciousness and look around you. You realise you are in a small room, although you can't remember how you got there,\n";
    cout << "   or how you blacked out, or well... pretty much anything really.\n";
    cout << "   What you do know is that you want to get out of here as quickly as you can.\n";
    cout << "   You don't seem to be injured in any way and apart from a parched throat you feel none the worse for wear.\n\n";
    cout << "   Looking around you notice what looks like an exit door.\n";
    cout << "   You stand up and move towards it.\n\n";
    cout << "   All of a sudden a strange creaking sound surrounds you and you realise that the walls have started moving slowly in towards you.\n";
    cout << "   Great, you think... I'm trapped in a room... and it's shrinking!\n\n";
    cout << "   You hurry to the door but it is locked shut.\n";
    cout << "   It seems to have some sort of keypad and an LED display below with 3 digits reading 0 0 0.\n";
    cout << "   To the side there is what looks like a timer which has frozen at 4:47 and a button over the code panel that is blinking a steady green...\n\n";
    cout << "   tentatively you press it...\n\n";
    cout << "   and with great relief you see the walls grind to a halt.\n\n\n";
    cout << "   Suddenly, from out of nowhere a cheerful voice greets you...\n\n";
    cout << "   \"Hi there\" \"You must be our new Guest...\" \"Hopefully you'll do better than the last one did.\"\n";
    cout << "   \"All you need to do to open the door is get the code right...\" \"It's pretty easy really... you should have no trouble at all...\"\n\n";
    cout << "   \"What you have to do is enter three numbers between 1 and 5 and make sure there is a space between them when you enter them\n";
    cout << "   and to make it even easier you'll get 3 attempts before the gas fills the room...\n";
    cout << "   \"Don't worry about that though I am sure you will be fine...\"\n\n";
    cout << "   Before you can respond the voice continues... \"I am sure that the gas doesn't hurt too much... I mean when she died she wasn't groaning at all...\n";
    cout << "   of course that may have been because her throat had melted by then... Hmmm, I really don't understand these organic bodies... they seem very frail\"\n";
    cout << "   \"Oh well, I am certain you won't have any problems at all... oh yes I almost forgot... the three numbers you enter when summated  must add up to X\n";
    cout << "   and when multiplied must equal Y\" \"Gee whiz... I am sure there is something else that I have forgotten... mustn't be too important.\n";
    cout << "   \"Never you worry I am certain it will come back to me. I might just have a little nap and think about it...\"\n\n";
    cout << "   With these words the room pitched into full dark, the only illumination coming from the console panel and the door surrounds.\n";
    cout << "   You stand looking at the door for a moment in shock before noticing that the timer was no longer inactive... and it had started counting down...\n";
    cout << "   4:33... 4:32... 4:31...\n";
    cout << "   \"Time to get to work\"\n\n";
}

void PlayLevel(int CurrentLevel, int Attempts)
{
    Printroduction();
    // Set GAME WIN CONDITIONS
    const int Combo1 = 1;
    const int Combo2 = 3;
    const int Combo3 = 4;

    const int ComboSum = Combo1 + Combo2 + Combo3;
    const int ComboProduct = Combo1 * Combo2 * Combo3;

    // Tell Player Game Conditions
    cout << "   Your numbers must add up to: " << ComboSum;
    cout << "\n   Your numbers must multiply to: " << ComboProduct;
    cout << "\n   After THIS attempt you have " << (Attempts - 1) << " more attempts before meeting a grisly (or chokey) death... Good Luck!!!\n\n";

    int i = 0;
    bool Condition = true;
    int Guesses = Attempts;

    for (; Condition;)
    {
        // Make Guess
        cout << "   ";
        int GuessA, GuessB, GuessC;
        cin >> GuessA >> GuessB >> GuessC;
        cout << endl;

        int PlayerGuessSum = GuessA + GuessB + GuessC;
        int PlayerGuessProduct = GuessA * GuessB * GuessC;

        // Attempt Loop        
        if (PlayerGuessSum == ComboSum)
        {
            cout << "\n\n   Correct Guess Path Chosen\n";
            //Set Current Level ++
            CurrentLevel = 2;
            // ReSet Attempts to 5
            Attempts = 5;
            //Break Loop
            Condition = false;
            system("CLS");

            // GO TO NEXT LEVEL
            cout << "\n   You Got it!. You've reached Level " << CurrentLevel;
            cout << "\n   Guesses are now reset";
            cout << "\n\n   Heading to Next Level";
            
            std::chrono::seconds dura(5);
            std::this_thread::sleep_for(dura);
            
            PlayNextLevel(CurrentLevel, Attempts);
        }
        else
        {
            cout << "\n   Wrong. Guesses left are now " << --Guesses << "\n\n";
            if (Guesses == 0)
            {
                cout << "\n   Oops... looks like your time has run out friend...  Yu Ded!\n";
            }
        }
        i++;
        if (!(i < Attempts))
            Condition = false;
    }
}

void maximizeWindow() {
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);
}

int main()
{
    int CurrentLevel = 1;   // Set CurrentLevel 1
    int Attempts = 5;       // Set Attempts to 5
    
    maximizeWindow();
    PlayLevel(CurrentLevel, Attempts);

    return 0;
}