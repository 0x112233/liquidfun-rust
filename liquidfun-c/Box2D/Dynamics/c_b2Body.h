#ifndef C_BOX2D_WORLD
#define C_BOX2D_WORLD

#ifdef __cplusplus
extern "C" {
#endif

	b2Fixture* b2Body_CreateFixture_FromShape(b2Body* self, const b2Shape* shape, float32 density);
	b2Fixture* b2Body_CreateFixture(b2Body* self, const b2FixtureDef* def);
	const b2Vec2& b2Body_GetPosition(const b2Body* self);
	float32 b2Body_GetAngle(const b2Body* self);

#ifdef __cplusplus
} // extern C
#endif
#endif