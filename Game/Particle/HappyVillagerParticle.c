

int __fastcall HappyVillagerParticle::HappyVillagerParticle(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@1
  int v17; // [sp+Ch] [bp-34h]@1
  int v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+14h] [bp-2Ch]@1
  int v20; // [sp+18h] [bp-28h]@1
  int v21; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  SuspendedTownParticle::SuspendedTownParticle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D9DBC;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 82);
  v4 = v3 + 12;
  v5 = v15;
  v6 = v16;
  v7 = v17;
  v8 = v18;
  v9 = v19;
  *(_DWORD *)v4 = v14;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 36),
    &v20);
  *(_DWORD *)(v3 + 40) = v21;
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  return v3;
}


unsigned __int64 __fastcall HappyVillagerParticle::init(HappyVillagerParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  HappyVillagerParticle *v5; // r4@1
  int v6; // r12@1
  float v7; // r2@1
  unsigned __int64 result; // r0@1
  int v9; // r3@1
  __int64 v10; // kr00_8@1

  v5 = this;
  SuspendedTownParticle::init(this, a2, a3, a4, a5);
  v6 = (int)v5 + 68;
  v7 = unk_283E614;
  v10 = qword_283E618;
  result = __PAIR__(Color::WHITE, HIDWORD(qword_283E618));
  v9 = qword_283E618;
  *(_DWORD *)v6 = Color::WHITE;
  *(float *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v9;
  *((_DWORD *)v5 + 20) = HIDWORD(v10);
  return result;
}


void __fastcall HappyVillagerParticle::~HappyVillagerParticle(HappyVillagerParticle *this)
{
  HappyVillagerParticle::~HappyVillagerParticle(this);
}


void __fastcall HappyVillagerParticle::~HappyVillagerParticle(HappyVillagerParticle *this)
{
  HappyVillagerParticle *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9AEC;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  operator delete((void *)v1);
}
