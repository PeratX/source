

const char *__fastcall OnStartTakeoffDescription::getJsonName(OnStartTakeoffDescription *this)
{
  return "minecraft:on_start_takeoff";
}


void __fastcall OnStartTakeoffDescription::~OnStartTakeoffDescription(OnStartTakeoffDescription *this)
{
  OnStartTakeoffDescription::~OnStartTakeoffDescription(this);
}


void __fastcall OnStartTakeoffDescription::~OnStartTakeoffDescription(OnStartTakeoffDescription *this)
{
  OnStartTakeoffDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271F480;
  j_FilterGroup::~FilterGroup((OnStartTakeoffDescription *)((char *)this + 12));
  v2 = *((_DWORD *)v1 + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}


const char *__fastcall OnStartTakeoffDescription::getDescription(OnStartTakeoffDescription *this)
{
  return "Only usable by the Ender Dragon. Adds a trigger to call when this entity starts flying.";
}
