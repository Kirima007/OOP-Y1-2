#include <iostream>
#include <string>

using namespace std;

class creature
{
public:
    string name;
    int x = 0;
   // virtual void move(int _x) = 0;
    void move(int _x){
            x = _x;
            cout << name << " move to position : " << x << endl;
        };
};

class plant : public creature
{
public:
    float chlorophyll_rate;

    void move(int _x)
    {
        x = _x;
        cout << name << " cannot move" << endl;
    }
};

class animal : public creature
{
public:
    int leg_count;

    virtual void move(int _x)
    {
        x = _x;
        cout << name << " using " << leg_count
             << " leg(s) move to position : " << x << endl;
    }
};

class bird : public animal
{
public:
    string origin;
    void move(int _x)
    {
        x = _x;
        cout << name << " fly to position : " << x << endl;
    }
};

class cat : public animal
{
public:
    int cuteness;
    void move(int _x)
    {
        x = _x;
        cout << name << " run to position : " << x << endl;
    }
};

int main()
{
    bird seagull;
    seagull.name = "seagull";
    seagull.leg_count = 2;
    seagull.origin = "Australia";

    cat Sphynx;
    Sphynx.name = "Sphynx";
    Sphynx.leg_count = 4;
    Sphynx.cuteness = -10;

    animal snail;
    snail.name = "snail";
    snail.leg_count = 0;

    plant palm;
    palm.name = "palm";
    palm.chlorophyll_rate = 1.6;

    cout <<endl<< "=========== move()-> Using Object ================" << endl;
    seagull.move(20);
    Sphynx.move(20);
    snail.move(20);
    palm.move(20);
    //palm.creature::move(20);
    cout << "======= move() -> Using Pointer ==================" << endl;
    creature *my_creatures[4];
    my_creatures[0] = &seagull;
    my_creatures[1] = &Sphynx;
    my_creatures[2] = &snail;
    my_creatures[3] = &palm;
    for (int i = 0; i < 4; i++)
    {
        my_creatures[i]->move(10);
    }

    return 0;
}