

void __fastcall Snowball::~Snowball(Snowball *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Snowball::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  Snowball::reloadHardcoded(a1, a2, a3);
}


signed int __fastcall Snowball::getEntityTypeId(Snowball *this)
{
  return 4194385;
}


void __fastcall Snowball::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  Throwable *v3; // r6@1
  bool v4; // zf@1
  unsigned __int64 *v5; // r4@1
  unsigned int v6; // r10@5
  unsigned __int64 v7; // kr00_8@5
  unsigned int v8; // r4@5
  int v9; // r7@5
  int v10; // r8@6
  _DWORD *v11; // r9@6
  int v12; // r5@6
  _DWORD *v13; // r1@8
  size_t v14; // r2@8
  int v15; // r6@10
  Mob *v16; // r4@12
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  Throwable *v19; // [sp+4h] [bp-34h]@6
  void *s1; // [sp+Ch] [bp-2Ch]@5

  v3 = (Throwable *)a1;
  v4 = a2 == 2;
  v5 = a3;
  if ( a2 == 2 )
    v4 = *(_BYTE *)(a1 + 3081) == 0;
  if ( v4 )
  {
    sub_21E94B4(&s1, "other");
    v6 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v7 = *v5;
    v8 = v6 % (*v5 >> 32);
    v9 = *(_DWORD *)(v7 + 4 * v8);
    if ( v9 )
    {
      v10 = *(_DWORD *)v9;
      v11 = s1;
      v19 = v3;
      v12 = *(_DWORD *)(*(_DWORD *)v9 + 32);
      while ( 1 )
      {
        if ( v12 == v6 )
        {
          v13 = *(_DWORD **)(v10 + 8);
          v14 = *(v11 - 3);
          if ( v14 == *(v13 - 3) && !memcmp(v11, v13, v14) )
            break;
        }
        v15 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
          v12 = *(_DWORD *)(v15 + 32);
          v9 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v15 + 32) % HIDWORD(v7) == v8 )
            continue;
        v16 = 0;
        v3 = v19;
        goto LABEL_14;
      }
      v3 = v19;
      if ( v9 )
        if ( *(_DWORD *)v9 )
          v16 = *(Mob **)(*(_DWORD *)v9 + 24);
        else
          v16 = 0;
      else
    }
    else
      v16 = 0;
LABEL_14:
    if ( v11 - 3 != &dword_28898C0 )
      v17 = v11 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v11 - 3);
    if ( v16 )
      if ( Entity::hasCategory((int)v16, 2) == 1 )
        Throwable::shoot(v3, v16);
  }
}


void __fastcall Snowball::~Snowball(Snowball *this)
{
  Snowball::~Snowball(this);
}


Entity *__fastcall Snowball::Snowball(Throwable *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  Entity *result; // r0@1

  result = Throwable::Throwable(a1, a2, a3);
  *(_DWORD *)result = &off_26FF15C;
  *((_DWORD *)result + 62) = 32;
  return result;
}
