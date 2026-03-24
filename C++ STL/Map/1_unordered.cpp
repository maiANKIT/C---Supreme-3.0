#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{

    // keys should be unique in map

    // creation
    unordered_map<string, string> table;

    // insertion
    table["in"] = "India";
    table.insert(make_pair("en", "England")); // pair bna diya inka

    // pair banane ka tarika
    pair<string, string> p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p); // pair p bna k table k andar store kr diya

    cout << table.size() << endl;
    // table.clear();
    // cout<<table.size()<<endl;

    // if(table.empty() == true){
    //     cout<<"map is empty"<<endl;
    // }
    // else{
    //     cout<<"map is not empty"<<endl;
    // }

    cout << table.at("in") << endl;
    table.at("in") = "india2"; // value change kr diya
    cout << table.at("in") << endl;

    table["in"] = "india3"; // value change krne ka dusra tarika kyu ki map ki key to unique hoti h na
    cout << table.at("in") << endl;

    // creating an iterator
    unordered_map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        // cout<< *it<<endl; //ye nhi chalega
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    // table.erase(table.begin(), table.end());
    // cout << table.size() << endl;

    //find krne ka tarika
    if(table.find("in") != table.end()){ //find function har ek pr jaiga bina loop k agar end tak 
        cout<<"key found"<<endl;         //nhi mila toh return ho jaiga not found yadi akhiri tk 
    }                                    //nhi mila yadi pahle milega toh retrun kr dega ki found 
    else{                                //kyu ki mil gya n pahle aur automatic break
        cout<<"key not found"<<endl;
    }

    //map bhi same h unordered map ki tarah kuchh difference bs:
    //1. include <map>;
    //2. map<string, string> m;
    //3. unordered map -> TC: O(1), map-> TC: O(logn)
    //4. unordered map -> unsorted, map -> sorted
    



    return 0;
}