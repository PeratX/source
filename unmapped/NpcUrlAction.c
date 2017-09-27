

void __fastcall NpcUrlAction::~NpcUrlAction(NpcUrlAction *this)
{
  NpcUrlAction *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F0F3C;
  v2 = *((_DWORD *)this + 3);
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
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


Json::Value *__fastcall NpcUrlAction::toJson(NpcUrlAction *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  NpcAction *v3; // r5@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  Json::Value::Value(&v5, 0);
  NpcAction::toJsonBase(v3, v2, (const Json::Value *)&v5);
  return Json::Value::~Value((Json::Value *)&v5);
}


void __fastcall NpcUrlAction::~NpcUrlAction(NpcUrlAction *this)
{
  NpcUrlAction::~NpcUrlAction(this);
}


int __fastcall NpcUrlAction::NpcUrlAction(int result)
{
  *(_BYTE *)(result + 4) = 0;
  *(_BYTE *)(result + 5) = 1;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)result = &off_26F0F54;
  return result;
}
