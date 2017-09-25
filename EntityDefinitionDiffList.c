

int __fastcall EntityDefinitionDiffList::buildAdditiveDescriptionFrom(__int64 this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r7@1
  EntityDefinitionDescriptor *v6; // r8@1
  __int64 v7; // r0@1
  int v8; // r4@2

  v3 = a3;
  v4 = a2;
  v5 = HIDWORD(this);
  v6 = (EntityDefinitionDescriptor *)this;
  LODWORD(v7) = EntityDefinitionDescriptor::EntityDefinitionDescriptor(*(double *)&this);
  if ( v4 < v3 )
  {
    v8 = 12 * v4 + 8;
    do
    {
      v7 = *(_QWORD *)(v5 + 4);
      if ( v4 >= -1431655765 * ((HIDWORD(v7) - (signed int)v7) >> 2) )
        break;
      LODWORD(v7) = EntityDefinitionDescriptor::combine(v6, *(const EntityDefinitionDescriptor **)(v7 + v8));
      ++v4;
      v8 += 12;
    }
    while ( v4 < v3 );
  }
  return v7;
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDiffList::clearChangedDescription(EntityDefinitionDiffList *this)
{
  int v1; // r4@1
  double v2; // r0@1
  int v4; // [sp+0h] [bp-200h]@1

  v1 = *((_DWORD *)this + 4);
  _aeabi_memclr8(&v4, 492);
  LODWORD(v2) = &v4;
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(v2);
  EntityDefinitionDescriptor::operator=(v1, (int)&v4);
  return EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v4);
}


int __fastcall EntityDefinitionDiffList::hasDefinition(int a1, int **a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  int result; // r0@3
  int v5; // [sp-4h] [bp-18h]@2
  int v6; // [sp+0h] [bp-14h]@2

  v2 = *(_QWORD *)(a1 + 4);
  result = 0;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    EntityDefinitionGroup::tryGetDefinitionGroup(
      (EntityDefinitionPtr *)&v5,
      *(_DWORD *)a1,
      (int **)(*(_DWORD *)(v2 + 8) + 496),
      a2);
    v3 = v6;
    EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v5);
    if ( v3 )
      result = 1;
  }
  return result;
}


int __fastcall EntityDefinitionDiffList::_updateStack(int result)
{
  int v1; // r11@1
  int v2; // r6@1
  int v3; // r9@1
  unsigned int v4; // r10@2
  double v5; // r0@3
  int v6; // r7@4
  unsigned int v7; // r5@5
  unsigned int v8; // r6@5
  __int64 v9; // r0@6
  int v10; // r2@9
  int v11; // r0@9
  int v12; // r1@9
  int v13; // r5@11
  int v14; // r6@11
  int v15; // r9@16
  unsigned int v16; // r8@16
  signed int v17; // r7@21
  EntityDefinitionDescriptor **v18; // r5@21
  int v19; // r10@21
  int v20; // r1@24
  int v21; // r0@24
  signed int v22; // r2@25
  EntityDefinitionPtr *v23; // r5@26
  int v24; // r6@26
  int v25; // [sp+8h] [bp-218h]@5
  unsigned int v26; // [sp+Ch] [bp-214h]@5
  int i; // [sp+Ch] [bp-214h]@17
  char v28; // [sp+10h] [bp-210h]@5

  v1 = result;
  v3 = *(_QWORD *)(result + 4) >> 32;
  v2 = *(_QWORD *)(result + 4);
  if ( v2 != v3 )
  {
    result = (v3 - v2) >> 2;
    v4 = -1431655765 * result;
    if ( (unsigned int)(-1431655765 * result) >= 3 )
    {
      LODWORD(v5) = v4 - 1;
      if ( v4 - 1 >= 2 )
      {
        HIDWORD(v5) = 3 * v4;
        v6 = 12 * v4 - 4;
        do
        {
          v25 = v6;
          v26 = v4;
          v4 = LODWORD(v5);
          LODWORD(v5) = &v28;
          EntityDefinitionDescriptor::EntityDefinitionDescriptor(v5);
          v7 = v4;
          v8 = -1431655765 * ((v3 - v2) >> 2);
          if ( v4 < v8 )
          {
            do
            {
              v9 = *(_QWORD *)(v1 + 4);
              if ( v7 >= -1431655765 * ((HIDWORD(v9) - (signed int)v9) >> 2) )
                break;
              EntityDefinitionDescriptor::combine(
                (EntityDefinitionDescriptor *)&v28,
                *(const EntityDefinitionDescriptor **)(v9 + v6));
              ++v7;
              v6 += 12;
            }
            while ( v7 < v8 );
          }
          if ( EntityDefinitionDescriptor::contains(
                 (EntityDefinitionDescriptor *)&v28,
                 *(const EntityDefinitionDescriptor **)(*(_DWORD *)(v1 + 4) + 12 * v26 - 16)) == 1 )
            v10 = *(_QWORD *)(v1 + 4) >> 32;
            v11 = *(_QWORD *)(v1 + 4) + 12 * v4;
            v12 = v11;
            if ( v11 != v10 )
              v12 = *(_QWORD *)(v1 + 4) >> 32;
              if ( v10 - v11 >= 1 )
              {
                v13 = v11 - 12;
                v14 = -1431655765 * ((v10 - v11) >> 2) + 1;
                do
                {
                  *(_BYTE *)v13 = *(_BYTE *)(v13 + 12);
                  EntityDefinitionPtr::operator=((EntityDefinitionPtr *)(v13 + 4), (EntityDefinitionPtr *)(v13 + 16));
                  --v14;
                  v13 += 12;
                }
                while ( v14 > 1 );
                v12 = *(_DWORD *)(v1 + 8);
              }
            *(_DWORD *)(v1 + 8) = v12 - 12;
            EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v12 - 8));
            *(_BYTE *)(v1 + 20) = 1;
          EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v28);
          v3 = *(_QWORD *)(v1 + 4) >> 32;
          v2 = *(_QWORD *)(v1 + 4);
          LODWORD(v5) = v4 - 1;
          v6 = v25 - 12;
        }
        while ( v4 - 1 > 1 );
      }
      result = (v3 - v2) >> 2;
      v15 = -1431655765 * result;
      v16 = -1431655765 * result - 1;
      if ( v16 >= 2 )
        for ( i = 4 * result - 16; ; i -= 12 )
          result = *(_BYTE *)(v2 + 12 * v16);
          if ( !*(_BYTE *)(v2 + 12 * v16) )
            if ( v15 == 2 )
LABEL_24:
              v20 = *(_DWORD *)(v1 + 8);
              v21 = v2 + 12 * v16 + 12;
              if ( v21 != v20 )
                v22 = v20 - v21;
                v21 = *(_DWORD *)(v1 + 8);
                if ( v22 >= 1 )
                  v23 = (EntityDefinitionPtr *)(v2 + 12 * v15 + 4);
                  v24 = -1431655765 * (v22 >> 2) + 1;
                  do
                  {
                    *((_BYTE *)v23 - 16) = *((_BYTE *)v23 - 4);
                    EntityDefinitionPtr::operator=((EntityDefinitionPtr *)((char *)v23 - 12), v23);
                    --v24;
                    v23 = (EntityDefinitionPtr *)((char *)v23 + 12);
                  }
                  while ( v24 > 1 );
                  v21 = *(_DWORD *)(v1 + 8);
              *(_DWORD *)(v1 + 8) = v21 - 12;
              result = (int)EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v21 - 8));
            else
              v17 = 2;
              v18 = (EntityDefinitionDescriptor **)(v2 + 12 * v16 + 8);
              v19 = i;
              while ( 1 )
                result = EntityDefinitionDescriptor::overlaps(*v18, *(const EntityDefinitionDescriptor **)(v2 + v19));
                if ( result )
                  break;
                v2 = *(_DWORD *)(v1 + 4);
                ++v17;
                v19 -= 12;
                if ( v17 == v15 )
                  goto LABEL_24;
          if ( --v16 < 2 )
            break;
          --v15;
          v2 = *(_DWORD *)(v1 + 4);
    }
  }
  return result;
}


int __fastcall EntityDefinitionDiffList::addDefinition(int a1, int **a2)
{
  int *v2; // r4@1
  int **v3; // r3@1
  __int64 v4; // r0@1
  int v6; // [sp+0h] [bp-10h]@2
  int v7; // [sp+4h] [bp-Ch]@2

  v2 = (int *)a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    EntityDefinitionGroup::tryGetDefinitionGroup(
      (EntityDefinitionPtr *)&v6,
      *v2,
      (int **)(*(_DWORD *)(v4 + 8) + 496),
      v3);
    if ( v7 )
      EntityDefinitionDiffList::addDefinition((EntityDefinitionDiffList *)v2, (EntityDefinitionPtr *)&v6);
    LODWORD(v4) = EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v6);
  }
  return v4;
}


int __fastcall EntityDefinitionDiffList::buildDescriptionFrom(__int64 this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r7@1
  EntityDefinitionDescriptor *v6; // r8@1
  __int64 v7; // r0@1
  int v8; // r4@2
  const EntityDefinitionDescriptor *v9; // r1@4

  v3 = a3;
  v4 = a2;
  v5 = HIDWORD(this);
  v6 = (EntityDefinitionDescriptor *)this;
  LODWORD(v7) = EntityDefinitionDescriptor::EntityDefinitionDescriptor(*(double *)&this);
  if ( v4 < v3 )
  {
    v8 = 12 * v4;
    do
    {
      v7 = *(_QWORD *)(v5 + 4);
      if ( v4 >= -1431655765 * ((HIDWORD(v7) - (signed int)v7) >> 2) )
        break;
      HIDWORD(v7) = *(_DWORD *)(v7 + v8 + 8);
      LODWORD(v7) = *(_BYTE *)(v7 + v8) ? EntityDefinitionDescriptor::combine(v6, v9) : EntityDefinitionDescriptor::subtract(
                                                                                          v6,
                                                                                          v9);
      ++v4;
      v8 += 12;
    }
    while ( v4 < v3 );
  }
  return v7;
}


int __fastcall EntityDefinitionDiffList::definitionListToString(EntityDefinitionDiffList *this, int a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  unsigned int v5; // r7@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // r8@19
  int v11; // r11@19
  char *v12; // r1@19
  const void **v13; // r0@21
  char *v14; // r0@21
  char *v15; // r0@22
  char *v17; // [sp+4h] [bp-44h]@7
  char *v18; // [sp+8h] [bp-40h]@3

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  v4 = *(_QWORD *)(a2 + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      v10 = *(_BYTE *)(v4 + 12 * v5);
      v11 = *(_DWORD *)(v4 + 12 * v5 + 8);
      v17 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v17, *(_DWORD *)(*(_DWORD *)(v11 + 496) - 12) + 2);
      v12 = "<-";
      if ( v10 )
        v12 = "<+";
      sub_21E7408((const void **)&v17, v12, 2u);
      sub_21E72F0((const void **)&v17, (const void **)(v11 + 496));
      v13 = sub_21E7408((const void **)&v17, ">", 1u);
      v18 = (char *)*v13;
      *v13 = &unk_28898CC;
      sub_21E72F0(v2, (const void **)&v18);
      v14 = v18 - 12;
      if ( (int *)(v18 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v18 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      }
      v15 = v17 - 12;
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v17 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v4 = *(_QWORD *)(v3 + 4);
      ++v5;
    }
    while ( v5 < -1431655765 * ((HIDWORD(v4) - (signed int)v4) >> 2) );
  }
  return v4;
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDiffList::setDefinitionStack(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  double v3; // r0@1
  __int64 v4; // kr00_8@1
  int v5; // r8@1
  unsigned int v6; // r7@2
  signed int v7; // r6@2
  __int64 v8; // r0@3
  char v10; // [sp+4h] [bp-20Ch]@1

  v2 = a1;
  std::vector<std::pair<bool,EntityDefinitionPtr>,std::allocator<std::pair<bool,EntityDefinitionPtr>>>::operator=(
    a1 + 4,
    a2);
  *(_BYTE *)(v2 + 20) = 1;
  LODWORD(v3) = &v10;
  v4 = *(_QWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 16);
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(v3);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v6 = 0;
    v7 = 8;
    do
    {
      v8 = *(_QWORD *)(v2 + 4);
      if ( v6 >= -1431655765 * ((HIDWORD(v8) - (signed int)v8) >> 2) )
        break;
      EntityDefinitionDescriptor::combine(
        (EntityDefinitionDescriptor *)&v10,
        *(const EntityDefinitionDescriptor **)(v8 + v7));
      ++v6;
      v7 += 12;
    }
    while ( v6 < -1431655765 * ((HIDWORD(v4) - (signed int)v4) >> 2) );
  }
  EntityDefinitionDescriptor::operator=(v5, (int)&v10);
  return EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v10);
}


int __fastcall EntityDefinitionDiffList::removeDefinition(int a1, int **a2)
{
  int *v2; // r4@1
  int **v3; // r3@1
  __int64 v4; // r0@1
  int v6; // [sp+0h] [bp-10h]@2
  int v7; // [sp+4h] [bp-Ch]@2

  v2 = (int *)a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    EntityDefinitionGroup::tryGetDefinitionGroup(
      (EntityDefinitionPtr *)&v6,
      *v2,
      (int **)(*(_DWORD *)(v4 + 8) + 496),
      v3);
    if ( v7 )
      EntityDefinitionDiffList::removeDefinition((EntityDefinitionDiffList *)v2, (EntityDefinitionPtr *)&v6);
    LODWORD(v4) = EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v6);
  }
  return v4;
}


char *__fastcall EntityDefinitionDiffList::getDefinitionStack(EntityDefinitionDiffList *this)
{
  return (char *)this + 4;
}


signed int __fastcall EntityDefinitionDiffList::addDefinition(EntityDefinitionDiffList *this, EntityDefinitionPtr *a2)
{
  EntityDefinitionPtr *v2; // r6@1
  EntityDefinitionDiffList *v3; // r4@1
  __int64 v4; // r0@1
  signed int result; // r0@4
  char v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  EntityDefinitionDescriptor::combine(
    *((EntityDefinitionDescriptor **)this + 4),
    *((const EntityDefinitionDescriptor **)a2 + 1));
  v6 = 1;
  EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)&v7, v2);
  v4 = *((_QWORD *)v3 + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::pair<bool,EntityDefinitionPtr>,std::allocator<std::pair<bool,EntityDefinitionPtr>>>::_M_emplace_back_aux<std::pair<bool,EntityDefinitionPtr>>(
      (unsigned __int64 *)((char *)v3 + 4),
      (int)&v6);
  }
  else
    *(_BYTE *)v4 = v6;
    EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)(v4 + 4), (EntityDefinitionPtr *)&v7);
    *((_DWORD *)v3 + 2) += 12;
  EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v7);
  EntityDefinitionDiffList::_updateStack(v3);
  result = 1;
  *((_BYTE *)v3 + 20) = 1;
  return result;
}


int __fastcall EntityDefinitionDiffList::getDescription(__int64 this, char a2)
{
  __int64 v2; // r4@1
  __int64 v3; // r0@1

  v2 = this;
  *(_BYTE *)(HIDWORD(this) + 20) = a2;
  EntityDefinitionDiffList::_getDescriptionFrom(
    this,
    0,
    -1431655765 * ((signed int)((*(_QWORD *)(HIDWORD(this) + 4) >> 32) - *(_QWORD *)(HIDWORD(this) + 4)) >> 2));
  v3 = *(_QWORD *)(HIDWORD(v2) + 4);
  if ( (_DWORD)v3 != HIDWORD(v3) )
    LODWORD(v3) = EntityInteraction::setInteractText((int *)(*(_DWORD *)v2 + 32), (int *)(*(_DWORD *)(v3 + 8) + 496));
  return v3;
}


signed int __fastcall EntityDefinitionDiffList::removeDefinition(EntityDefinitionDiffList *this, EntityDefinitionPtr *a2)
{
  EntityDefinitionPtr *v2; // r6@1
  EntityDefinitionDiffList *v3; // r4@1
  __int64 v4; // r0@1
  signed int result; // r0@4
  char v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  EntityDefinitionDescriptor::combine(
    *((EntityDefinitionDescriptor **)this + 4),
    *((const EntityDefinitionDescriptor **)a2 + 1));
  v6 = 0;
  EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)&v7, v2);
  v4 = *((_QWORD *)v3 + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::pair<bool,EntityDefinitionPtr>,std::allocator<std::pair<bool,EntityDefinitionPtr>>>::_M_emplace_back_aux<std::pair<bool,EntityDefinitionPtr>>(
      (unsigned __int64 *)((char *)v3 + 4),
      (int)&v6);
  }
  else
    *(_BYTE *)v4 = v6;
    EntityDefinitionPtr::EntityDefinitionPtr((EntityDefinitionPtr *)(v4 + 4), (EntityDefinitionPtr *)&v7);
    *((_DWORD *)v3 + 2) += 12;
  EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)&v7);
  EntityDefinitionDiffList::_updateStack(v3);
  result = 1;
  *((_BYTE *)v3 + 20) = 1;
  return result;
}


int __fastcall EntityDefinitionDiffList::EntityDefinitionDiffList(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  void *v4; // r6@1
  double v5; // r0@1
  EntityDefinitionDescriptor *v6; // r0@1
  EntityDefinitionDescriptor *v7; // r0@2

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  v4 = operator new(0x1ECu);
  _aeabi_memclr4(v4, 492);
  LODWORD(v5) = v4;
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(v5);
  v6 = *(EntityDefinitionDescriptor **)(v2 + 16);
  *(_DWORD *)(v2 + 16) = v4;
  if ( v6 )
  {
    v7 = EntityDefinitionDescriptor::~EntityDefinitionDescriptor(v6);
    operator delete((void *)v7);
  }
  return v2;
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDiffList::_getDescriptionFrom(__int64 this, unsigned int a2, unsigned int a3)
{
  int *v3; // r8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r7@1
  int v7; // r4@2
  __int64 v8; // r0@3
  const EntityDefinitionDescriptor *v9; // r1@4
  void *v10; // r0@8
  char v12; // [sp+4h] [bp-20Ch]@1

  v3 = (int *)this;
  LODWORD(this) = &v12;
  v4 = a3;
  v5 = a2;
  v6 = HIDWORD(this);
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(*(double *)&this);
  if ( v5 < v4 )
  {
    v7 = 12 * v5;
    do
    {
      v8 = *(_QWORD *)(v6 + 4);
      if ( v5 >= -1431655765 * ((HIDWORD(v8) - (signed int)v8) >> 2) )
        break;
      HIDWORD(v8) = *(_DWORD *)(v8 + v7 + 8);
      if ( *(_BYTE *)(v8 + v7) )
        EntityDefinitionDescriptor::combine((EntityDefinitionDescriptor *)&v12, v9);
      else
        EntityDefinitionDescriptor::subtract((EntityDefinitionDescriptor *)&v12, v9);
      ++v5;
      v7 += 12;
    }
    while ( v5 < v4 );
  }
  v10 = operator new(0x1ECu);
  *v3 = EntityDefinitionDescriptor::EntityDefinitionDescriptor((int)v10, (int)&v12);
  return EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v12);
}


EntityDefinitionDescriptor *__fastcall EntityDefinitionDiffList::clearDefinitions(EntityDefinitionDiffList *this)
{
  EntityDefinitionDiffList *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r7@2
  int v5; // r4@4
  double v6; // r0@4
  int v8; // [sp+0h] [bp-200h]@4

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      EntityDefinitionPtr::~EntityDefinitionPtr((EntityDefinitionPtr *)(v4 + 4));
      v4 += 12;
    }
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 2) = v2;
  v5 = *((_DWORD *)v1 + 4);
  _aeabi_memclr8(&v8, 492);
  LODWORD(v6) = &v8;
  EntityDefinitionDescriptor::EntityDefinitionDescriptor(v6);
  EntityDefinitionDescriptor::operator=(v5, (int)&v8);
  return EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v8);
}
