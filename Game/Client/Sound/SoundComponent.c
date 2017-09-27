

int __fastcall SoundComponent::setVolume(int result, float a2)
{
  *(float *)(result + 12) = a2;
  return result;
}


void __fastcall SoundComponent::~SoundComponent(SoundComponent *this)
{
  SoundComponent *v1; // r0@1

  v1 = SoundComponent::~SoundComponent(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall SoundComponent::clone(SoundComponent *this, UIControl *a2, UIControl *a3)
{
  SoundComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int v7; // r7@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x24u);
  UIComponent::UIComponent((UIComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26D6E20;
  *((_DWORD *)v6 + 2) = 0;
  *((_DWORD *)v6 + 5) = &unk_28898CC;
  *((_DWORD *)v6 + 6) = 0;
  v7 = (int)v6 + 24;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 - 12) = *((_DWORD *)v5 + 3);
  *(_DWORD *)(v7 - 8) = *((_DWORD *)v5 + 4);
  EntityInteraction::setInteractText((int *)v6 + 5, (int *)v5 + 5);
  *((_DWORD *)v6 + 2) = *((_DWORD *)v5 + 2);
  result = std::vector<SoundComponent::SoundEventInfo,std::allocator<SoundComponent::SoundEventInfo>>::operator=(
             (int)v6 + 24,
             (unsigned __int64 *)v5 + 3);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall SoundComponent::receive(UIComponent *this, int a2, int a3, __int16 a4)
{
  char v4; // r7@1
  int v5; // r8@1
  UIComponent *v6; // r11@1
  bool v7; // zf@3
  int v8; // r9@3
  UIControl *v9; // r0@7
  int v10; // r5@9 OVERLAPPED
  int v11; // r6@9 OVERLAPPED
  unsigned __int64 v12; // kr00_8@12
  signed int v13; // r1@13
  signed int v14; // r0@15
  bool v15; // zf@20
  __int64 v16; // r2@24
  unsigned int v18; // [sp+0h] [bp-30h]@9
  int v19; // [sp+4h] [bp-2Ch]@15

  v4 = a4;
  v5 = a3;
  v6 = this;
  if ( a2 == 1 && *((_DWORD *)this + 2) )
  {
    v8 = a4 & 0xFF00;
    v7 = v8 == 0;
    if ( !(a4 & 0xFF00) )
      v7 = (unsigned __int8)a4 == 1;
    if ( v7 )
    {
      v9 = (UIControl *)UIComponent::getOwner(this);
      if ( UIControl::getEnabled(v9) == 1 )
        (*(void (**)(void))(**((_DWORD **)v6 + 2) + 8))();
    }
    sub_DA7B9C(&v18);
    *(_QWORD *)&v10 = *((_QWORD *)v6 + 3);
    if ( v10 != v11 && v4 == 1 )
      do
      {
        if ( *(_DWORD *)(v10 + 32) == 1 )
        {
          v12 = __PAIR__(*(_QWORD *)(v10 + 20), (unsigned int)(1000000 * (*(_QWORD *)(v10 + 20) >> 32)))
              + __PAIR__(
                  (1000000 * (unsigned __int64)(unsigned int)(*(_QWORD *)(v10 + 20) >> 32) >> 32)
                + 1000000 * *(_DWORD *)(v10 + 28),
                  *(_DWORD *)(v10 + 16));
          if ( !v8 )
          {
            v13 = 0;
            if ( (unsigned int)v12 >= v18 )
              v13 = 1;
            v14 = 0;
            if ( SHIDWORD(v12) >= v19 )
              v14 = 1;
            if ( HIDWORD(v12) == v19 )
              v14 = v13;
            if ( !v14 )
            {
              v15 = (*(_BYTE *)(v10 + 38) & 1) == 0;
              if ( *(_BYTE *)(v10 + 38) & 1 )
                v15 = v5 == *(_WORD *)(v10 + 36);
              if ( v15 )
              {
                v16 = *(_QWORD *)(v10 + 4);
                (*(void (**)(void))(**((_DWORD **)v6 + 2) + 8))();
                *(_QWORD *)(v10 + 16) = *(_QWORD *)&v18;
              }
            }
          }
        }
        v10 += 40;
      }
      while ( v11 != v10 );
  }
  return 0;
}


int __fastcall SoundComponent::setPitch(int result, float a2)
{
  *(float *)(result + 16) = a2;
  return result;
}


signed int __fastcall SoundComponent::_checkButtonEventConditions(int a1, int a2, int a3)
{
  bool v3; // zf@1
  signed int result; // r0@4

  v3 = *(_BYTE *)(a3 + 5) == 0;
  if ( !*(_BYTE *)(a3 + 5) )
    v3 = *(_BYTE *)(a3 + 4) == 1;
  if ( v3 )
  {
    if ( *(_BYTE *)(a2 + 38) & 1 )
    {
      result = 0;
      if ( *(_WORD *)a3 == *(_WORD *)(a2 + 36) )
        result = 1;
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall SoundComponent::~SoundComponent(SoundComponent *this)
{
  SoundComponent::~SoundComponent(this);
}


int __fastcall SoundComponent::_checkIfScreenEventTypePlaysSound(int a1, int a2)
{
  if ( a2 != 1 )
    a2 = 0;
  return a2;
}


int __fastcall SoundComponent::SoundComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1
  int v3; // r12@1

  result = UIComponent::UIComponent(a1, a2);
  v3 = result + 16;
  *(_DWORD *)result = &off_26D6E20;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 1065353216;
  *(_DWORD *)v3 = 1065353216;
  *(_DWORD *)(v3 + 4) = &unk_28898CC;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall SoundComponent::setSoundPlayer(int result, const UISoundPlayer *a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


char *__fastcall SoundComponent::getSoundName(SoundComponent *this)
{
  return (char *)this + 20;
}


unsigned int __fastcall SoundComponent::addSoundEvent(int a1, int *a2, int a3, int a4, __int64 a5, int a6, _DWORD *a7)
{
  int v8; // [sp+Ch] [bp-24h]@1
  int v9; // [sp+10h] [bp-20h]@1
  int v10; // [sp+14h] [bp-1Ch]@1
  __int64 v11; // [sp+18h] [bp-18h]@1

  v10 = a3;
  v11 = a5;
  v8 = a6;
  v9 = a4;
  return std::vector<SoundComponent::SoundEventInfo,std::allocator<SoundComponent::SoundEventInfo>>::emplace_back<std::string &,float &,float &,std::chrono::duration<long long,std::ratio<1ll,1000ll>> &,ScreenEventType &,SoundEventConditions const&>(
           a1 + 24,
           a2,
           &v10,
           &v9,
           &v11,
           &v8,
           a7);
}


SoundComponent *__fastcall SoundComponent::~SoundComponent(SoundComponent *this)
{
  SoundComponent *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26D6E20;
  v3 = (void *)(*((_QWORD *)this + 3) >> 32);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 40;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 6);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 5);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  UIComponent::~UIComponent(v1);
  return v1;
}


signed int __fastcall SoundComponent::_checkEventConditions(int a1, int a2, int a3)
{
  bool v3; // zf@2
  signed int result; // r0@5

  if ( *(_DWORD *)a3 != 1 )
    goto LABEL_12;
  v3 = *(_BYTE *)(a3 + 9) == 0;
  if ( !*(_BYTE *)(a3 + 9) )
    v3 = *(_BYTE *)(a3 + 8) == 1;
  if ( v3 )
  {
    if ( *(_BYTE *)(a2 + 38) & 1 )
    {
      result = 0;
      if ( *(_WORD *)(a3 + 4) == *(_WORD *)(a2 + 36) )
        result = 1;
    }
    else
      result = 1;
  }
  else
LABEL_12:
    result = 0;
  return result;
}
