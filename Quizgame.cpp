#include<iostream>
#include<ctime>
#include<cstdlib>
#include<chrono>
#include<thread>
#include<vector>
#include<fstream>
using namespace std;
struct question
{
    string que;
    char ans;
};
void postquiz(int &score)
{
    cout<<"So Your Final Score is : "<<score<<"/5";
    cout<<endl;
    if(score==5)
    {
        cout<<"Hooray! You have got a Perfect Score!!!!"<<endl;
        cout<<"Congratulations!!"<<endl;
        cout<<endl;
    }
    else if(score==3 || score==4)
    {
        cout<<"Good! Well Played "<<endl;
    }
    else 
    {
        cout<<"Better Luck next time!!"<<endl;
    }
        cout<<endl;
        cout<<"Thankyou for trying the game ."<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Programmed By ~ ArnavBhure"<<endl;

}

void randomques(ifstream &file  , int &score) 
{
    vector<string> questions;
    vector<char> answers;
    if(!file.is_open())
    {
        cout<<"Error opening the file!!!!!"<<endl;
        cout<<endl;
    }
    else 
        {
            question q;
    while (getline(file, q.que) && file >> q.ans) {
    file.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore leftover newline
    questions.push_back(q.que);
    answers.push_back(q.ans);
}

            file.close();
            for(int i=1 ;i<=5 ;i++)
            {
                int a = rand() % questions.size();
                if(a==0) a++;
                cout<<"Your question is :"<<endl;
                cout<<endl;
                cout<<questions[a]<<endl;
                cout<<endl;
                cout<<"Enter your answer (A/B/C/D): ";
                char userans;
                cin>>userans;
                cout<<endl;
                if(userans == answers[a])
                {
                    cout<<"Congrats! Your answer is correct"<<endl;
                    score++;
                    cout<<"Your Score is : "<<score<<"/5"<<endl;
                    cout<<endl;
                    cout<<"Screen will be Cleared "<<endl;
                    cout<<"Press Enter !"<<endl;
                    cin.get();
                    system("cls");
                }
            }
        }
}

int main()
{
    int score=0;
    srand(time(NULL));
    vector<string> questions;
    cout<<"       Welcome ! To the Quiz Game ."<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Some Instructions for the game :"<<endl;
    cout<<"1. You will be given total of 5 random questions about a topic selected by you ."<<endl;
    cout<<"2. You have to select the correct option in the given time limit"<<endl;
    cout<<"3. If the selected answer is correct and if you answered in the given time limit then your score will be incremented ."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Select the intrested topic you would like to take Quiz in : (Enter the number in front of them)"<<endl;
    cout<<"1.  Sports"<<endl;
    cout<<"2.  Online Games"<<endl;
    cout<<"3.  Anime"<<endl;
    cout<<"4.  Web Series"<<endl;
    cout<<"5.  General Knowledge"<<endl;
    cout<<"6.  Bollywood"<<endl;
    cout<<"7.  Cartoons"<<endl;
    cout<<"8.  Hollywood"<<endl;
    cout<<"9.  Brain Teaser"<<endl;
    cout<<"10. Influencer Guessing "<<endl;
    cout<<endl;
    cout<<"Enter Your Choice :";
    int topicchoice;
    cin>>topicchoice;
    cout<<endl;
    cout<<"The Screen will get cleared in 3 scconds"<<endl;

    for(int i=3 ; i>0 ;i--)
    {
        cout<<"Clearing the screen in "<<i<<" seconds"<<flush<<endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");
    }

        cout<<endl;
        cout<<"You will be given a random question ."<<endl;
        cout<<"If you are failed to answer the question no credits will be given!!"<<endl;
        cout<<endl;

    switch(topicchoice)
    {
      {
        case 1 :
        cout<<"You Opted for Sports"<<endl;
        cout<<endl;
        cout<<"Enter which sports quiz you want to take"<<endl;
        cout<<"1.  Cricket "<<endl;
        cout<<"2.  Football"<<endl;
        cout<<"3.  Badminton"<<endl;
        cout<<"4.  Table Tenis"<<endl;
        cout<<"5.  Basketball"<<endl;
        cout<<"6.  Volleyball"<<endl;
        cout<<"7.  Chess"<<endl;
        cout<<"8.  About Gym"<<endl;
        cout<<"9.  Tennis"<<endl;
        cout<<"10. Kabaddi"<<endl;
        cout<<endl;
        cout<<"Enter your choice :";
        int sportchoice;
        cin>>sportchoice;
        system("cls");
        cout<<"Screen was cleared "<<endl;
        cout<<endl;

        switch(sportchoice)
        {
            case 1:
           {
            ifstream fin("cricket.txt");
            cout<<"You opted for : Cricket "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

            case 2:
           {
            ifstream fin("football.txt");
            cout<<"You opted for : Football "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 3:
           {
            ifstream fin("badminton.txt");
            cout<<"You opted for : Badminton "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 4:
           {
            ifstream fin("tabletennis.txt");
            cout<<"You opted for : Table Tennis "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 5:
           {
            ifstream fin("basketball.txt");
            cout<<"You opted for : Basketball "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 6:
           {
            ifstream fin("volleyball.txt");
            cout<<"You opted for : Volleyball "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 7:
           {
            ifstream fin("chess.txt");
            cout<<"You opted for : Chess "<<endl;
            
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 8:
           {
            ifstream fin("gym.txt");
            cout<<"You opted for : About Gym "<<endl;
           
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 9:
           {
            ifstream fin("Tennis.txt");
            cout<<"You opted for : Tennis "<<endl;
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           case 10:
           {
            ifstream fin("kabaddi.txt");
            cout<<"You opted for : Kabaddi "<<endl;
            cout<<endl;
            randomques(fin , score);
            cout<<endl;
            postquiz(score);
            break;
           }

           default :
           {
            cout<<"Invalid Choice!!"<<endl;
            cout<<endl;
            break;
           }
           
        }
        break;
      }

      
      case 2:
      {
        cout<<"You Opted for : Online Games"<<endl;
        cout<<endl;
        cout<<"This questions are of all online games available on the internet. "<<endl;
        cout<<endl;
        ifstream fin("onlinegames.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 3:
      {
        cout<<"You Opted for : Anime"<<endl;
        cout<<endl;
        cout<<"This questions are of all Animes available on the internet. "<<endl;
        cout<<endl;
        ifstream fin("anime.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 4:
      {
        cout<<"You Opted for : Web Series"<<endl;
        cout<<endl;
        cout<<"This questions are of all Web Series available on the internet . "<<endl;
        cout<<endl;
        ifstream fin("webseries.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 5:
      {
        cout<<"You Opted for : General Knowledge"<<endl;
        cout<<endl;
        ifstream fin("generalknowledge.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 6:
      {
        cout<<"You Opted for : Bollywood"<<endl;
        cout<<endl;
        ifstream fin("bollywood.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 7:
      {
        cout<<"You Opted for : Cartoons"<<endl;
        cout<<endl;
        cout<<"This questions are of all Cartoons available on the internet. "<<endl;
        cout<<endl;
        ifstream fin("cartoons.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 8:
      {
        cout<<"You Opted for : Hollywood"<<endl;
        cout<<endl;
        ifstream fin("hollywood.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 9:
      {
        cout<<"You Opted for : Brain Teaser"<<endl;
        cout<<endl;
        ifstream fin("brainteaser.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      case 10:
      {
        cout<<"You Opted for : Influencer Guessing "<<endl;
        cout<<endl;
        cout<<"This questions are of all online games available on the internet. "<<endl;
        cout<<endl;
        ifstream fin("influencer.txt");
        randomques(fin , score);
        cout<<endl;
        postquiz(score);
        break;
      }


      default :
      {
        cout<<"Invalid Choice!!"<<endl;
        cout<<endl;
        break;
      }
    } 
}

// Code not working :(
// On hold...

