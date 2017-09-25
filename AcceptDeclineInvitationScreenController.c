

const void **__fastcall AcceptDeclineInvitationScreenController::getAdditionalScreenInfo(AcceptDeclineInvitationScreenController *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_119CAF8((const void **)this, *(_DWORD *)(*(_DWORD *)(a2 + 424) - 12) + 3);
  sub_119C894(v2, " - ", 3u);
  return sub_119C8A4(v2, (const void **)(v3 + 424));
}


void __fastcall AcceptDeclineInvitationScreenController::~AcceptDeclineInvitationScreenController(AcceptDeclineInvitationScreenController *this)
{
  AcceptDeclineInvitationScreenController *v1; // r0@1

  v1 = AcceptDeclineInvitationScreenController::~AcceptDeclineInvitationScreenController(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall AcceptDeclineInvitationScreenController::AcceptDeclineInvitationScreenController(int a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // r4@1
  int *v6; // r8@1
  int v7; // r0@1
  int *v8; // r7@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  double v16; // r0@21
  void (__fastcall *v17)(int, int, signed int); // r3@21
  unsigned int v18; // r0@23
  int v19; // r7@25
  void *v20; // r6@25
  int v22; // [sp+0h] [bp-30h]@1
  int v23; // [sp+4h] [bp-2Ch]@1

  v5 = a1;
  v22 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v23 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  MinecraftScreenController::MinecraftScreenController(v5, (MinecraftScreenModel **)&v22);
  v11 = v23;
  if ( v23 )
    v12 = (unsigned int *)(v23 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E0AFC;
  sub_119C854((int *)(v5 + 424), v8);
  sub_119C854((int *)(v5 + 428), v6);
  *(_DWORD *)(v5 + 440) = 0;
  v17 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v17 )
    v17(v5 + 432, a5, 2);
    *(_DWORD *)(v5 + 444) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 440) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(v5 + 456) = 0;
  *(_DWORD *)(v5 + 460) = 0;
  *(_DWORD *)(v5 + 464) = 1065353216;
  *(_DWORD *)(v5 + 468) = 0;
  LODWORD(v16) = v5 + 464;
  v18 = sub_119C844(v16);
  *(_DWORD *)(v5 + 452) = v18;
  if ( v18 == 1 )
    v20 = (void *)(v5 + 472);
    *(_DWORD *)(v5 + 472) = 0;
  else
    if ( v18 >= 0x40000000 )
      sub_119C874();
    v19 = 4 * v18;
    v20 = operator new(4 * v18);
    _aeabi_memclr4(v20, v19);
  *(_DWORD *)(v5 + 448) = v20;
  return v5;
}


char *__fastcall AcceptDeclineInvitationScreenController::getEventProperties(AcceptDeclineInvitationScreenController *this)
{
  return (char *)this + 448;
}


AcceptDeclineInvitationScreenController *__fastcall AcceptDeclineInvitationScreenController::~AcceptDeclineInvitationScreenController(AcceptDeclineInvitationScreenController *this)
{
  AcceptDeclineInvitationScreenController *v1; // r4@1
  char *v2; // r0@1
  void (*v3)(void); // r3@4
  int v4; // r1@6
  void *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  unsigned int *v9; // r12@9
  signed int v10; // r1@11
  unsigned int *v11; // r12@13
  signed int v12; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E0AFC;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 448);
  v2 = (char *)*((_DWORD *)v1 + 112);
  if ( v2 && (char *)v1 + 472 != v2 )
    operator delete(v2);
  v3 = (void (*)(void))*((_DWORD *)v1 + 110);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 107);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = *((_DWORD *)v1 + 106);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v6 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  MinecraftScreenController::~MinecraftScreenController(v1);
  return v1;
}


ModalScreenData *__fastcall AcceptDeclineInvitationScreenController::onOpen(AcceptDeclineInvitationScreenController *this)
{
  AcceptDeclineInvitationScreenController *v1; // r4@1
  __int64 v2; // kr00_8@1
  unsigned int *v3; // r0@2
  unsigned int v4; // r1@4
  _QWORD *v5; // r0@7
  __int64 v6; // r2@7 OVERLAPPED
  unsigned int *v7; // r1@8
  int (__fastcall *v8)(_DWORD *, void **, int); // r1@13
  unsigned int *v9; // r1@13
  __int64 v10; // r2@13
  unsigned int v11; // r0@18
  int v12; // r0@23
  unsigned int *v13; // r2@24
  unsigned int v14; // r1@26
  _QWORD *v16; // [sp+0h] [bp-60h]@13
  void (*v17)(void); // [sp+8h] [bp-58h]@7
  char v18; // [sp+10h] [bp-50h]@1
  int v19; // [sp+14h] [bp-4Ch]@1
  void *v20; // [sp+18h] [bp-48h]@1
  int v21; // [sp+1Ch] [bp-44h]@1
  int v22; // [sp+20h] [bp-40h]@1
  int v23; // [sp+24h] [bp-3Ch]@1
  void *v24; // [sp+28h] [bp-38h]@1
  int v25; // [sp+2Ch] [bp-34h]@1
  int v26; // [sp+30h] [bp-30h]@1
  int v27; // [sp+34h] [bp-2Ch]@1
  void *v28; // [sp+38h] [bp-28h]@1
  void *v29; // [sp+3Ch] [bp-24h]@1
  void *v30; // [sp+40h] [bp-20h]@1
  void *v31; // [sp+44h] [bp-1Ch]@1
  int v32; // [sp+48h] [bp-18h]@1
  char v33; // [sp+4Ch] [bp-14h]@1

  v1 = this;
  v20 = &unk_28898CC;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = &unk_28898CC;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = &unk_28898CC;
  v29 = &unk_28898CC;
  v30 = &unk_28898CC;
  v31 = &unk_28898CC;
  v32 = 1;
  v33 = 0;
  EntityInteraction::setInteractText((int *)&v20, (int *)this + 106);
  EntityInteraction::setInteractText((int *)&v24, (int *)v1 + 107);
  sub_119CAD8(&v29, "gui.accept", (_BYTE *)0xA);
  sub_119CAD8(&v31, "gui.decline", (_BYTE *)0xB);
  v33 = 1;
  sub_119CAD8(&v28, "modal_screen - xbox_live_game_invite", (_BYTE *)0x24);
  MinecraftScreenController::_getWeakPtrToThis<AcceptDeclineInvitationScreenController>((int)&v18, (int)v1);
  v2 = *(_QWORD *)&v18;
  if ( v19 )
  {
    v3 = (unsigned int *)(v19 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 + 1, v3) );
    }
    else
      ++*v3;
  }
  v17 = 0;
  v5 = operator new(8u);
  *v5 = v2;
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 8);
      {
        LODWORD(v6) = __ldrex(v7);
        HIDWORD(v6) = __strex(v6 + 1, v7);
      }
      while ( HIDWORD(v6) );
      ++*v7;
  v8 = sub_111FC94;
  v16 = v5;
  LODWORD(v6) = sub_111FB38;
  *(_QWORD *)&v17 = *(__int64 *)((char *)&v6 - 4);
  LODWORD(v6) = &v16;
  MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v20, v6);
  HIDWORD(v10) = v17;
  if ( v17 )
    v17();
    v9 = (unsigned int *)(HIDWORD(v2) + 8);
        v11 = __ldrex(v9);
        LODWORD(v10) = v11 - 1;
        HIDWORD(v10) = __strex(v11 - 1, v9);
      while ( HIDWORD(v10) );
      v11 = *v9;
      LODWORD(v10) = *v9 - 1;
      *v9 = v10;
    if ( v11 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  ScreenController::onOpen(v1, (int)v9, v10);
  v12 = v19;
    v13 = (unsigned int *)(v19 + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      (*(void (**)(void))(*(_DWORD *)v12 + 12))();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v20);
}


void __fastcall AcceptDeclineInvitationScreenController::~AcceptDeclineInvitationScreenController(AcceptDeclineInvitationScreenController *this)
{
  AcceptDeclineInvitationScreenController::~AcceptDeclineInvitationScreenController(this);
}
