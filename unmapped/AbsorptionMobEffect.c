

void __fastcall AbsorptionMobEffect::~AbsorptionMobEffect(AbsorptionMobEffect *this)
{
  AbsorptionMobEffect::~AbsorptionMobEffect(this);
}


int __fastcall AbsorptionMobEffect::applyEffects(AbsorptionMobEffect *this, Mob *a2, int a3, int a4)
{
  Mob *v4; // r6@1
  MobEffect *v5; // r7@1
  int v6; // r5@1
  int v7; // r4@1
  AttributeInstance *v8; // r0@1

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = a4;
  v8 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)a2 + 1000))(
                              a2,
                              &SharedAttributes::ABSORPTION);
  j_AttributeInstance::resetToDefaultValue(v8);
  return j_j_j__ZNK9MobEffect12applyEffectsEP3Mobii(v5, v4, v6, v7);
}


void __fastcall AbsorptionMobEffect::~AbsorptionMobEffect(AbsorptionMobEffect *this)
{
  MobEffect *v1; // r0@1

  v1 = j_MobEffect::~MobEffect(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall AbsorptionMobEffect::removeEffects(AbsorptionMobEffect *this, Mob *a2)
{
  AbsorptionMobEffect::removeEffects(this, a2);
}


_DWORD *__fastcall AbsorptionMobEffect::AbsorptionMobEffect(_DWORD *a1, unsigned int a2, int *a3, int *a4, int a5, unsigned int a6, int a7)
{
  unsigned int v7; // r7@1
  int *v8; // r5@1
  int *v9; // r6@1
  _DWORD *v10; // r4@1
  int *v11; // r0@1
  void *v12; // r0@1
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  int v16; // [sp+18h] [bp-20h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  v11 = (int *)sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  j_MobEffect::MobEffect(__PAIR__(v7, (unsigned int)v10), v9, v8, a5, a6, a7, v11);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  *v10 = &off_271A45C;
  return v10;
}


void __fastcall AbsorptionMobEffect::removeEffects(AbsorptionMobEffect *this, Mob *a2)
{
  Mob *v2; // r4@1
  AttributeInstance *v3; // r0@1

  v2 = a2;
  j_MobEffect::removeEffects(this, a2);
  v3 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1000))(
                              v2,
                              &SharedAttributes::ABSORPTION);
  j_j_j__ZN17AttributeInstance19resetToDefaultValueEv_0(v3);
}
