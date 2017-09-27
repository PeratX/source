

void __fastcall SurvivalMode::~SurvivalMode(SurvivalMode *this)
{
  GameMode *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_27009A8;
  v2 = (void (*)(void))*((_DWORD *)this + 32);
  if ( v2 )
    v2();
  GameMode::~GameMode(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


_BOOL4 __fastcall SurvivalMode::destroyBlock(SurvivalMode *this, const BlockPos *a2, int a3)
{
  int v3; // r3@1
  bool v4; // zf@1
  _BOOL4 result; // r0@4

  v3 = *((_DWORD *)this + 28);
  v4 = (unsigned __int8)v3 == 0;
  if ( (_BYTE)v3 )
    v4 = (v3 & 0xFF0000) == 0;
  if ( v4 )
    result = GameMode::destroyBlock(this, a2, a3);
  else
    result = 0;
  return result;
}


signed int __fastcall SurvivalMode::useItemOn(SurvivalMode *this, ItemInstance *a2, const BlockPos *a3, int a4, const Vec3 *a5, ItemUseCallback *a6)
{
  int v6; // r4@1
  bool v7; // zf@1
  signed int v8; // r4@4

  v6 = *((_DWORD *)this + 28);
  v7 = (unsigned __int8)v6 == 0;
  if ( (_BYTE)v6 )
    v7 = (v6 & 0xFF0000) == 0;
  if ( v7 )
  {
    v8 = GameMode::useItemOn(this, a2, a3, a4, a5, a6);
  }
  else
    v8 = 0;
    SurvivalMode::_showTrialReminder(this, 0);
  return v8;
}


TextPacket *__fastcall SurvivalMode::_messagePlayers(int a1, int *a2)
{
  int v2; // r4@1
  char v4; // [sp+4h] [bp-3Ch]@1

  v2 = a1;
  TextPacket::createSystemMessage((int)&v4, a2);
  (*(void (**)(void))(**(_DWORD **)(v2 + 4) + 1524))();
  return TextPacket::~TextPacket((TextPacket *)&v4);
}


int __fastcall SurvivalMode::setTrialMode(int result, bool a2)
{
  *(_BYTE *)(result + 112) = a2;
  return result;
}


int __fastcall SurvivalMode::useItem(SurvivalMode *this, ItemInstance *a2)
{
  int v2; // r2@1
  bool v3; // zf@1
  int result; // r0@4

  v2 = *((_DWORD *)this + 28);
  v3 = (unsigned __int8)v2 == 0;
  if ( (_BYTE)v2 )
    v3 = (v2 & 0xFF0000) == 0;
  if ( v3 )
  {
    result = GameMode::useItem(this, a2);
  }
  else
    SurvivalMode::_showTrialReminder(this, 0);
    result = 0;
  return result;
}


signed int __fastcall SurvivalMode::startDestroyBlock(SurvivalMode *this, const BlockPos *a2, int a3, bool *a4)
{
  int v4; // r4@1
  bool v5; // zf@1
  signed int result; // r0@4

  v4 = *((_DWORD *)this + 28);
  v5 = (unsigned __int8)v4 == 0;
  if ( (_BYTE)v4 )
    v5 = (v4 & 0xFF0000) == 0;
  if ( v5 )
  {
    result = GameMode::startDestroyBlock(this, a2, a3, a4);
  }
  else
    SurvivalMode::_showTrialReminder(this, 0);
    result = 0;
  return result;
}


void __fastcall SurvivalMode::~SurvivalMode(SurvivalMode *this)
{
  SurvivalMode::~SurvivalMode(this);
}


void __fastcall SurvivalMode::_showTrialReminder(SurvivalMode *this, int a2)
{
  SurvivalMode::_showTrialReminder(this, a2);
}


void __fastcall SurvivalMode::_showTrialReminder(SurvivalMode *this, int a2)
{
  SurvivalMode *v2; // r4@1
  void *v3; // r0@3
  void *v4; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  int v9; // [sp+8h] [bp-48h]@3
  int v10; // [sp+Ch] [bp-44h]@3
  char v11; // [sp+10h] [bp-40h]@3

  v2 = this;
  if ( *((_DWORD *)this + 29) > 100 || a2 == 1 )
  {
    *((_DWORD *)this + 29) = 0;
    sub_21E94B4((void **)&v9, "demo.reminder");
    I18n::get(&v10, (int **)&v9);
    TextPacket::createSystemMessage((int)&v11, &v10);
    (*(void (**)(void))(**((_DWORD **)v2 + 1) + 1524))();
    TextPacket::~TextPacket((TextPacket *)&v11);
    v3 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v3);
    }
    v4 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v9 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall SurvivalMode::~SurvivalMode(SurvivalMode *this)
{
  GameMode *v1; // r4@1
  void (*v2)(void); // r3@1

  v1 = this;
  *(_DWORD *)this = &off_27009A8;
  v2 = (void (*)(void))*((_DWORD *)this + 32);
  if ( v2 )
    v2();
  return j_j_j__ZN8GameModeD2Ev(v1);
}


int __fastcall SurvivalMode::registerUpsellScreenCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 120;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 120);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 128);
  v10 = v13;
  *(_DWORD *)(v4 + 128) = v8;
  v14 = *(_DWORD *)(v4 + 132);
  *(_DWORD *)(v4 + 132) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


RakNet *__fastcall SurvivalMode::tick(SurvivalMode *this)
{
  SurvivalMode *v1; // r4@1
  bool v2; // zf@1
  Level *v3; // r0@4
  char *v4; // r0@4
  unsigned __int64 v5; // kr00_8@4
  signed int v6; // r2@4
  bool v7; // cf@4
  int v8; // r0@4
  bool v9; // zf@8
  Level *v10; // r0@19
  int v11; // r0@19
  bool v12; // zf@19
  char *v13; // r0@23
  void *v14; // r0@24
  void *v15; // r0@25
  RakNet *result; // r0@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  unsigned int *v21; // r2@36
  signed int v22; // r1@38
  int v23; // [sp+8h] [bp-90h]@25
  int v24; // [sp+10h] [bp-88h]@23
  char *format; // [sp+14h] [bp-84h]@23
  char v26; // [sp+1Ch] [bp-7Ch]@25
  char s; // [sp+4Ah] [bp-4Eh]@23
  RakNet *v28; // [sp+7Ch] [bp-1Ch]@1

  v1 = this;
  v28 = _stack_chk_guard;
  GameMode::tick(this);
  v2 = *((_BYTE *)v1 + 112) == 0;
  if ( *((_BYTE *)v1 + 112) )
    v2 = *((_DWORD *)v1 + 32) == 0;
  if ( !v2 )
  {
    v3 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
    v4 = Level::getCurrentTick(v3);
    v5 = *(_QWORD *)v4;
    v6 = 0;
    v7 = (unsigned int)*(_QWORD *)v4 >= 0x1A5E0;
    v8 = *((_BYTE *)v1 + 114);
    if ( !v7 )
      v6 = 1;
    if ( HIDWORD(v5) )
      v6 = 0;
    v9 = v6 == 0;
    if ( !v6 )
      v9 = v8 == 0;
    if ( v9 )
    {
      *((_BYTE *)v1 + 114) = 1;
      SurvivalMode::_showTrialReminder(v1, 1);
      if ( !*((_DWORD *)v1 + 32) )
        goto LABEL_51;
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 33))((char *)v1 + 120, 1);
      v8 = *((_BYTE *)v1 + 114);
    }
    if ( v8 )
      ++*((_DWORD *)v1 + 29);
      goto LABEL_26;
    if ( *((_BYTE *)v1 + 113) )
      goto LABEL_19;
    *((_BYTE *)v1 + 113) = 1;
    if ( *((_DWORD *)v1 + 32) )
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 33))((char *)v1 + 120, 0);
LABEL_19:
      v10 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
      v11 = Level::isClientSide(v10);
      v12 = v5 % 0x2EE0 == 0;
      if ( !(v5 % 0x2EE0) )
        v12 = (v11 ^ 1) == 1;
      if ( v12 )
      {
        sub_21E94B4((void **)&v24, "trial.survival.remainingTime");
        I18n::get((int *)&format, (int **)&v24);
        sprintf(&s, format, (108000 - v5) / 0x4B0);
        v13 = format - 12;
        if ( (int *)(format - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(format - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
        v14 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v24 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        sub_21E94B4((void **)&v23, &s);
        TextPacket::createSystemMessage((int)&v26, &v23);
        (*(void (**)(void))(**((_DWORD **)v1 + 1) + 1524))();
        TextPacket::~TextPacket((TextPacket *)&v26);
        v15 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v23 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
      }
LABEL_51:
    sub_21E5F48();
  }
LABEL_26:
  result = (RakNet *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall SurvivalMode::SurvivalMode(int a1, int a2)
{
  int result; // r0@1

  result = GameMode::GameMode(a1, a2);
  *(_DWORD *)result = &off_27009A8;
  *(_BYTE *)(result + 112) = 0;
  *(_BYTE *)(result + 113) = 0;
  *(_BYTE *)(result + 114) = 0;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 128) = 0;
  return result;
}
