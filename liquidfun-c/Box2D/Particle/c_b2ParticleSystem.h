#ifndef C_B2_PARTICLE_SYSTEM
#define C_B2_PARTICLE_SYSTEM

#ifdef __cplusplus
extern "C" {
#endif

	int32 b2ParticleSystem_CreateParticle(b2ParticleSystem* self, const b2ParticleDef& def);
	void b2ParticleSystem_DestroyParticle(b2ParticleSystem* self, int32 index);
	b2ParticleSystem* b2ParticleSystem_GetNext(b2ParticleSystem* self);
	int32 b2ParticleSystem_GetParticleCount(b2ParticleSystem* self);

#ifdef __cplusplus
} // extern C
#endif
#endif