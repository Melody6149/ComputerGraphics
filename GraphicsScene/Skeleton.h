#pragma once
#include "Actor.h"
#include "Bone.h"
#include <vector>
/// <summary>
/// holds all of the functions used for skeletons
/// </summary>
class Skeleton : public Actor
{
public:
	Skeleton();
	~Skeleton() {}

	bool update(double deltaTime) override;
	bool draw() override;

	void addBone(Bone* bone);

private:
	std::vector<Bone*> m_bones;
};

