#ifndef IRELOADABLE_HPP
# define IRELOADABLE_HPP

class IReloadable {
    public:
        virtual void reload(int bullets) = 0;
};

#endif