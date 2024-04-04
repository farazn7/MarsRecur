#include<iostream>
#include<vector>
#include<string>

using namespace std;

class mars {
private:
    string name;
    vector<mars*> members;

public:
    mars(string n) : name(n) {}

    void add_memb(mars* new_memb) {
        members.push_back(new_memb);
    }

    string getName() const {
        return name;
    }

    void communicate() const 
    {
        int exit=0;
        string comment;
        cout << name << " communicates with ";
        for (const auto& new_memb : members)
        {
            cout << new_memb->getName() << ", ";
        }
        cout << endl;
        while(!exit)
        {
            getline(cin,comment);
            cout << comment << endl;
            cout << "exit?yes:continue" << endl;
            if(comment=="yes") exit=1;
        }
        printf("exiting\n");
    }
};

int main() 
{
    mars p1("Leader");
    mars p2("Vice Leader");
    mars p3("Software lead");
    mars p4("Electrical lead");
    mars p5("Mechanical lead");
    mars p6("Managment lead");
    mars p7("soft_member1");
    mars p8("manag_member1");
    mars p9("elec_member1");
    mars p10("mech_member1");


    p1.add_memb(&p2);
    p1.add_memb(&p3);
    p1.add_memb(&p4);
    p1.add_memb(&p5);
    p1.add_memb(&p6);
    p2.add_memb(&p3);
    p2.add_memb(&p4);
    p2.add_memb(&p5);
    p2.add_memb(&p6);
    p1.add_memb(&p7);
    p2.add_memb(&p7);
    p3.add_memb(&p7);
    p1.add_memb(&p8);
    p2.add_memb(&p8);
    p6.add_memb(&p8);
    p1.add_memb(&p9);
    p2.add_memb(&p9);
    p4.add_memb(&p9);
    p1.add_memb(&p10);
    p2.add_memb(&p10);
    p5.add_memb(&p10);

    p1.communicate();
    p2.communicate();
    p3.communicate();
    p4.communicate();
    p5.communicate();
    p6.communicate();

    return 0;
}
