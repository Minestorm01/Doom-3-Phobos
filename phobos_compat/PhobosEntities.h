#ifndef PHOBOS_ENTITIES_H
#define PHOBOS_ENTITIES_H

// Placeholder entity classes for Phobos mod compatibility.
// In a real port, these would implement the behavior originally
// provided by gamex86.dll scripts.

namespace phobos {

class BaseEntity {
public:
    virtual ~BaseEntity() = default;
    virtual void Spawn() = 0;
    virtual void Think() = 0;
};

class Weapon : public BaseEntity {
public:
    void Spawn() override;
    void Think() override;
};

class Monster : public BaseEntity {
public:
    void Spawn() override;
    void Think() override;
};

} // namespace phobos

#endif // PHOBOS_ENTITIES_H
