#pragma once
#include "Actor.h"
/// <summary>
/// Holds all of the functions for the ball class
/// </summary>
class Ball : public Actor
{
public:
	Ball(); ///default constructor for ball
	Ball(glm::vec4 color, float radius); ///constructor for ball
	~Ball() {}

	bool draw() override;

protected:
	glm::vec4 m_color;
	float m_radius;
};

