

int __fastcall PanicGoal::stop(PanicGoal *this)
{
  PanicGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r4@1
  int (*v6)(void); // r12@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 7));
  v1 = (PanicGoal *)((char *)v1 + 12);
  v3 = *(_DWORD *)v1;
  v4 = *((_DWORD *)v1 + 1);
  v5 = *((_DWORD *)v1 + 2);
  v6 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  v8 = v3;
  v9 = v4;
  v10 = v5;
  return v6();
}


int __fastcall PanicGoal::canContinueToUse(PanicGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 7));
  return (*(int (**)(void))(*(_DWORD *)v1 + 36))() ^ 1;
}


signed int __fastcall PanicGoal::canUse(PanicGoal *this)
{
  PanicGoal *v1; // r4@1
  int v2; // r5@2
  Vec3 *v3; // r6@6
  int v4; // r0@7
  int v6; // [sp+0h] [bp-20h]@0
  const Vec3 *v7; // [sp+4h] [bp-1Ch]@6
  int v8; // [sp+8h] [bp-18h]@6
  int v9; // [sp+Ch] [bp-14h]@6

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 7)) )
    return 0;
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 7) + 944))();
  if ( !*((_BYTE *)v1 + 24)
    && !(*(int (**)(void))(**((_DWORD **)v1 + 7) + 944))()
    && !(*(int (**)(void))(**((_DWORD **)v1 + 7) + 320))()
    && (*(int (**)(void))(**((_DWORD **)v1 + 7) + 324))() != 1 )
  {
  }
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = (Vec3 *)*((_DWORD *)v1 + 7);
  if ( v2 )
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
    if ( !j_RandomPos::getPosAvoid((RandomPos *)&v7, v3, (Mob *)5, 4, v4, v7) )
      return 0;
  else if ( j_RandomPos::getPos((RandomPos *)&v7, *((Vec3 **)v1 + 7), (Mob *)5, 4, v6) != 1 )
  *((_DWORD *)v1 + 3) = v7;
  *((_DWORD *)v1 + 4) = v8;
  *((_DWORD *)v1 + 5) = v9;
  if ( j_Entity::isSitting(*((Entity **)v1 + 7)) == 1 )
    (*(void (**)(void))(**((_DWORD **)v1 + 7) + 352))();
  return 1;
}


int __fastcall PanicGoal::start(PanicGoal *this)
{
  PanicGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r12@1
  int (*v5)(void); // lr@1
  int v6; // r2@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 7));
  v3 = *((_DWORD *)v1 + 4);
  v4 = *((_DWORD *)v1 + 5);
  v5 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  v8 = *((_DWORD *)v1 + 3);
  v9 = v3;
  v10 = v4;
  v6 = *((_DWORD *)v1 + 2);
  return v5();
}


void __fastcall PanicGoal::~PanicGoal(PanicGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


Goal *__fastcall PanicGoal::PanicGoal(Goal *a1, int a2, int a3, char a4)
{
  char v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  Goal *v7; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v7 = &off_271AA48;
  *((_DWORD *)v7 + 2) = v5;
  *((_BYTE *)v7 + 24) = v4;
  *((_DWORD *)v7 + 7) = v6;
  j_Goal::setRequiredControlFlags(v7, 1);
  return v7;
}


void __fastcall PanicGoal::~PanicGoal(PanicGoal *this)
{
  PanicGoal::~PanicGoal(this);
}
