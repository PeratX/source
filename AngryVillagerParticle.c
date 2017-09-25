

void __fastcall AngryVillagerParticle::~AngryVillagerParticle(AngryVillagerParticle *this)
{
  AngryVillagerParticle::~AngryVillagerParticle(this);
}


void __fastcall AngryVillagerParticle::~AngryVillagerParticle(AngryVillagerParticle *this)
{
  AngryVillagerParticle *v1; // r4@1
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


int __fastcall AngryVillagerParticle::AngryVillagerParticle(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  int v11; // r12@2
  float v12; // r2@2
  int v13; // r3@2
  int v14; // kr04_4@2
  unsigned int *v16; // r2@3
  signed int v17; // r1@5
  int v18; // [sp+0h] [bp-40h]@1
  int v19; // [sp+4h] [bp-3Ch]@1
  int v20; // [sp+8h] [bp-38h]@1
  int v21; // [sp+Ch] [bp-34h]@1
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@1
  int v24; // [sp+18h] [bp-28h]@1
  int v25; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  HeartParticle::HeartParticle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D9D8C;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v18, 81);
  v4 = v3 + 12;
  v5 = v19;
  v6 = v20;
  v7 = v21;
  v8 = v22;
  v9 = v23;
  *(_DWORD *)v4 = v18;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v3 + 36),
    &v24);
  *(_DWORD *)(v3 + 40) = v25;
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = v3 + 68;
  v12 = unk_283E614;
  v14 = HIDWORD(qword_283E618);
  v13 = qword_283E618;
  *(_DWORD *)v11 = Color::WHITE;
  *(float *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v3 + 80) = v14;
  return v3;
}
