#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
protected:
    std::string name;
public:
    Item(const std::string& name);
    virtual ~Item() = default;
    std::string getName() const;
};

#endif
