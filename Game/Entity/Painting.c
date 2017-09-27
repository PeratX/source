

void __fastcall Painting::addAdditionalSaveData(Painting *this, CompoundTag *a2)
{
  Painting::addAdditionalSaveData(this, a2);
}


void __fastcall Painting::~Painting(Painting *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Painting::getWidth(Painting *this)
{
  Motive *v1; // r0@1
  int result; // r0@2

  v1 = (Motive *)*((_DWORD *)this + 858);
  if ( v1 )
    result = j_j_j__ZNK6Motive8getWidthEv(v1);
  else
    result = 16;
  return result;
}


void __fastcall Painting::readAdditionalSaveData(Painting *this, const CompoundTag *a2)
{
  Painting::readAdditionalSaveData(this, a2);
}


__int64 __fastcall Painting::setPos(Painting *this, const Vec3 *_R1)
{
  char *v2; // r9@1
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  int v13; // [sp+0h] [bp-60h]@1
  float v14; // [sp+1Ch] [bp-44h]@1
  int v15; // [sp+28h] [bp-38h]@1
  int v16; // [sp+2Ch] [bp-34h]@1
  int v17; // [sp+30h] [bp-30h]@1
  int v18; // [sp+34h] [bp-2Ch]@1
  int v19; // [sp+38h] [bp-28h]@1
  int v20; // [sp+3Ch] [bp-24h]@1
  int v21; // [sp+40h] [bp-20h]@1

  v2 = (char *)this + 264;
  v3 = *((_DWORD *)this + 67);
  v4 = *((_DWORD *)this + 68);
  v15 = *((_DWORD *)this + 66);
  v16 = v3;
  v17 = v4;
  v5 = *((_DWORD *)this + 70);
  v6 = *((_DWORD *)this + 71);
  v7 = *((_DWORD *)this + 72);
  v18 = *((_DWORD *)this + 69);
  v19 = v5;
  v20 = v6;
  v21 = v7;
  __asm
  {
    VLDR            S0, [R0,#0x48]
    VLDR            S6, [R1]
    VLDR            S2, [R0,#0x4C]
    VLDR            S8, [R1,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#0x50]
    VLDR            S10, [R1,#8]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x60+var_44]
    VSTR            S2, [SP,#0x60+var_40]
    VSTR            S4, [SP,#0x60+var_3C]
  }
  Entity::setPos(this, _R1);
  AABB::cloneMove((AABB *)&v13, (const Vec3 *)&v15, (int)&v14);
  return AABB::set(__PAIR__(&v13, (unsigned int)v2));
}


int __fastcall Painting::getAddPacket(Painting *this, Entity *a2)
{
  Painting *v2; // r4@1
  Entity *v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x38u);
  result = AddPaintingPacket::AddPaintingPacket((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall Painting::addAdditionalSaveData(Painting *this, CompoundTag *a2)
{
  Painting *v2; // r5@1
  CompoundTag *v3; // r6@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@2

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 858) )
  {
    sub_21E94B4((void **)&v11, "Motive");
    Motive::getName((Motive *)&v10, *((int **)v2 + 858));
    CompoundTag::putString((int)v3, (const void **)&v11, &v10);
    v4 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v11 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
  }
  HangingEntity::addAdditionalSaveData(v2, v3);
}


int __fastcall Painting::Painting(int a1, BlockSource *a2)
{
  BlockSource *v2; // r6@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "painting");
  HangingEntity::HangingEntity(v3, v2, (int **)&v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_26FCB78;
  *(_DWORD *)(v3 + 3432) = 0;
  Painting::placeHangingEntity((Painting *)v3, v2, 0);
  *(_DWORD *)(v3 + 248) = 36;
  return v3;
}


signed int __fastcall Painting::getEntityTypeId(Painting *this)
{
  return 83;
}


void __fastcall Painting::~Painting(Painting *this)
{
  Painting::~Painting(this);
}


int __fastcall Painting::getHeight(Painting *this)
{
  Motive *v1; // r0@1
  int result; // r0@2

  v1 = (Motive *)*((_DWORD *)this + 858);
  if ( v1 )
    result = j_j_j__ZNK6Motive9getHeightEv(v1);
  else
    result = 16;
  return result;
}


int __fastcall Painting::Painting(int a1, BlockSource *a2, int a3, int a4, const void **a5)
{
  BlockSource *v5; // r7@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r4@1
  void *v9; // r0@1
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+8h] [bp-20h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E94B4((void **)&v13, "painting");
  HangingEntity::HangingEntity(v8, v5, (int **)&v13, v7);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_DWORD *)v8 = &off_26FCB78;
  *(_DWORD *)(v8 + 3432) = 0;
  *(_DWORD *)(v8 + 3432) = Motive::getMotiveByName(a5);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 768))(v8, v6);
  *(_DWORD *)(v8 + 248) = 36;
  return v8;
}


int __fastcall Painting::placeHangingEntity(Painting *this, BlockSource *a2, int a3)
{
  Painting *v3; // r6@1
  Motive **v4; // r4@2
  Motive **v5; // r9@2
  int v6; // r8@2
  char *v7; // r10@3
  Motive *v8; // r7@4
  int v9; // r5@6
  _DWORD *v10; // r5@9
  signed int v11; // r2@9
  int v12; // r10@9
  unsigned int v13; // r0@9
  unsigned int v14; // r1@11
  unsigned int v15; // r8@11
  int v16; // r5@23
  int v17; // r4@27
  char *v18; // r5@25
  int v19; // r9@32
  int v20; // r4@33
  Motive **v21; // r7@34
  int v22; // r5@35
  int v23; // r1@38
  Level *v24; // r0@42
  char *v25; // r0@42
  int v26; // r0@43
  int v28; // [sp+0h] [bp-40h]@3
  _BYTE *v29; // [sp+4h] [bp-3Ch]@3
  char *v30; // [sp+4h] [bp-3Ch]@34
  int v31; // [sp+8h] [bp-38h]@1
  BlockSource *v32; // [sp+Ch] [bp-34h]@1
  void *ptr; // [sp+10h] [bp-30h]@2
  Motive **v34; // [sp+14h] [bp-2Ch]@2

  v31 = a3;
  v32 = a2;
  v3 = this;
  if ( HangingEntity::placeHangingEntity(this, a2, a3) == 1 )
  {
    Motive::getAllMotivesAsList((Motive *)&ptr);
    v5 = v34;
    v4 = (Motive **)ptr;
    v6 = 0;
    if ( ptr == v34 )
    {
      v7 = 0;
      v18 = 0;
    }
    else
      v28 = 0;
      v29 = 0;
      do
      {
        v8 = *v4;
        if ( Motive::isPublic(*v4) )
        {
          *((_DWORD *)v3 + 858) = v8;
          (*(void (__fastcall **)(Painting *, int))(*(_DWORD *)v3 + 768))(v3, v31);
          if ( (*(int (__fastcall **)(Painting *, BlockSource *))(*(_DWORD *)v3 + 788))(v3, v32) == 1 )
          {
            v9 = Motive::getWidth(v8);
            if ( Motive::getHeight(v8) * v9 >= v6 )
            {
              if ( v7 == (char *)v28 )
              {
                v10 = 0;
                v11 = v7 - v29;
                v12 = (v7 - v29) >> 2;
                v13 = v12;
                if ( !(v11 >> 2) )
                  v13 = 1;
                v14 = v13 + (v11 >> 2);
                v15 = v13 + (v11 >> 2);
                if ( 0 != v14 >> 30 )
                  v15 = 0x3FFFFFFF;
                if ( v14 < v13 )
                if ( v15 )
                {
                  if ( v15 >= 0x40000000 )
                    sub_21E57F4();
                  v10 = operator new(4 * v15);
                }
                v10[v12] = v8;
                if ( v12 )
                  _aeabi_memmove4(v10, v29);
                v7 = (char *)&v10[v12];
                if ( v29 )
                  operator delete(v29);
                v28 = (int)&v10[v15];
                v29 = v10;
              }
              else
                *(_DWORD *)v7 = v8;
              v16 = Motive::getWidth(v8);
              v6 = Motive::getHeight(v8) * v16;
              v7 += 4;
            }
          }
        }
        ++v4;
      }
      while ( v5 != v4 );
      v4 = (Motive **)ptr;
      v18 = v29;
    if ( v4 )
      operator delete(v4);
    if ( v18 == v7 )
      v26 = Motive::mDefaultImage;
      v19 = (v7 - v18) >> 2;
      if ( v7 - v18 > 0 )
        v20 = 0;
        do
          v30 = v18;
          v21 = (Motive **)&v18[4 * v20];
          while ( 1 )
            v22 = Motive::getWidth(*v21);
            if ( Motive::getHeight(*v21) * v22 < v6 )
              break;
            ++v20;
            ++v21;
            if ( v20 >= v19 )
              v18 = v30;
              goto LABEL_42;
          v23 = (int)(v21 + 1);
          if ( (char *)(v21 + 1) != v7 && v7 != (char *)v23 )
            _aeabi_memmove4(v21, v23);
          v18 = v30;
          v7 -= 4;
          v19 = (v7 - v30) >> 2;
        while ( v20 < v19 );
LABEL_42:
      v24 = (Level *)BlockSource::getLevel(v32);
      v25 = Level::getRandom(v24);
      if ( v19 )
        v26 = *(_DWORD *)&v18[4 * (Random::_genRandInt32((Random *)v25) % v19)];
      else
        v26 = *(_DWORD *)v18;
    *((_DWORD *)v3 + 858) = v26;
    (*(void (__fastcall **)(Painting *, int))(*(_DWORD *)v3 + 768))(v3, v31);
    v17 = (*(int (__fastcall **)(Painting *, BlockSource *))(*(_DWORD *)v3 + 788))(v3, v32);
    if ( v18 )
      operator delete(v18);
  }
  else
    v17 = 0;
  return v17;
}


signed int __fastcall Painting::remove(Painting *this)
{
  Entity *v1; // r4@1
  Player *v2; // r5@1
  int v3; // r0@1
  Player *v4; // r5@1
  __int64 v5; // r2@1

  v1 = this;
  v2 = (Player *)Entity::getLevel(this);
  v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  Level::broadcastLevelEvent(v2, 1041, (unsigned int)v3, 0);
  v4 = (Player *)Entity::getLevel(v1);
  LODWORD(v5) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  HIDWORD(v5) = *(_WORD *)(Item::mPainting + 18);
  Level::broadcastLevelEvent(v4, 2001, v5, 0);
  return j_j_j__ZN6Entity6removeEv(v1);
}


signed int __fastcall Painting::isPickable(Painting *this)
{
  return 1;
}


int __fastcall Painting::getShadowRadius(Painting *this)
{
  return 0;
}


int __fastcall Painting::Painting(int a1, BlockSource *a2, int a3, int a4)
{
  BlockSource *v4; // r6@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r4@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  sub_21E94B4((void **)&v12, "painting");
  HangingEntity::HangingEntity(v7, v4, (int **)&v12, v6);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  *(_DWORD *)v7 = &off_26FCB78;
  *(_DWORD *)(v7 + 3432) = 0;
  Painting::placeHangingEntity((Painting *)v7, v4, v5);
  *(_DWORD *)(v7 + 248) = 36;
  return v7;
}


int __fastcall Painting::Painting(HangingEntity *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  int result; // r0@1

  result = HangingEntity::HangingEntity(a1, a2, a3);
  *(_DWORD *)result = &off_26FCB78;
  *(_DWORD *)(result + 3432) = 0;
  *(_DWORD *)(result + 248) = 36;
  return result;
}


void __fastcall Painting::readAdditionalSaveData(Painting *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  Painting *v3; // r4@1
  int *v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+8h] [bp-28h]@1
  int v12; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "Motive");
  v4 = (int *)CompoundTag::getString((int)v2, (const void **)&v11);
  sub_21E8AF4(&v12, v4);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  *((_DWORD *)v3 + 858) = Motive::getMotiveByName((const void **)&v12);
  HangingEntity::readAdditionalSaveData(v3, v2);
  (*(void (__fastcall **)(Painting *, _DWORD))(*(_DWORD *)v3 + 768))(v3, *((_DWORD *)v3 + 853));
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


int __fastcall Painting::dropItem(Painting *this)
{
  Painting *v1; // r4@1
  Level *v2; // r0@1
  unsigned __int64 *v3; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = (unsigned __int64 *)Level::getGameRules(v2);
  result = GameRules::getBool(v3, (int **)&GameRules::DO_ENTITY_DROPS);
  if ( result == 1 )
    result = (*(int (__fastcall **)(Painting *, _DWORD, signed int))(*(_DWORD *)v1 + 436))(
               v1,
               *(_WORD *)(Item::mPainting + 18),
               1);
  return result;
}
