

char *__fastcall BaseCommandBlock::getName(BaseCommandBlock *this)
{
  char *result; // r0@1
  int v2; // t1@1

  v2 = *((_DWORD *)this + 5);
  result = (char *)this + 20;
  if ( !*(_DWORD *)(v2 - 12) )
    result = (char *)&BaseCommandBlock::DefaultCommandBlockName;
  return result;
}


int __fastcall BaseCommandBlock::BaseCommandBlock(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 28) = 3LL;
  *(_BYTE *)(result + 36) = 1;
  return result;
}


int __fastcall BaseCommandBlock::compile(BaseCommandBlock *this, const CommandOrigin *a2, Level *a3)
{
  BaseCommandBlock *v3; // r11@1
  const CommandOrigin *v4; // r5@1
  int v5; // r0@1
  Level *v6; // r6@1
  MinecraftCommands *v7; // r0@3
  const CommandRegistry *v8; // r0@3
  _DWORD *v9; // r0@3
  int v10; // r1@4
  int v11; // r0@4
  int *v12; // r0@10
  __int64 v13; // kr00_8@10
  _DWORD *v14; // r5@11
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int *v17; // r0@20
  void *v18; // r5@24
  int v19; // r7@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  int *v22; // r0@34
  void *v24; // [sp+4h] [bp-94h]@10
  void *v25; // [sp+8h] [bp-90h]@10
  int v26; // [sp+Ch] [bp-8Ch]@10
  int v27; // [sp+10h] [bp-88h]@4
  char v28; // [sp+14h] [bp-84h]@3

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 6);
  v6 = a3;
  *((_DWORD *)v3 + 6) = 0;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v7 = (MinecraftCommands *)ServerLevel::getCommands(v6);
  v8 = (const CommandRegistry *)MinecraftCommands::getRegistry(v7);
  v9 = CommandRegistry::Parser::Parser((CommandRegistry::Parser *)&v28, v8, *((_DWORD *)v3 + 7));
  if ( CommandRegistry::Parser::parse((int)v9, (int *)v3 + 4) == 1 )
  {
    CommandRegistry::Parser::createCommand((CommandRegistry::Parser *)&v27, (const CommandOrigin *)&v28, (int)v4);
    v10 = v27;
    v27 = 0;
    v11 = *((_DWORD *)v3 + 6);
    *((_DWORD *)v3 + 6) = v10;
    if ( v11 )
    {
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      if ( v27 )
        (*(void (**)(void))(*(_DWORD *)v27 + 4))();
    }
  }
  if ( !*((_DWORD *)v3 + 6) )
    if ( *((_BYTE *)v3 + 36) )
      v12 = (int *)CommandRegistry::Parser::getErrorMessage((CommandRegistry::Parser *)&v28);
      EntityInteraction::setInteractText((int *)v3, v12);
      CommandRegistry::Parser::getErrorParams((CommandRegistry::Parser *)&v24, (int)&v28);
      v13 = *(_QWORD *)((char *)v3 + 4);
      *((_DWORD *)v3 + 1) = v24;
      v24 = 0;
      *((_DWORD *)v3 + 2) = v25;
      v25 = 0;
      *((_DWORD *)v3 + 3) = v26;
      v26 = 0;
      if ( (_DWORD)v13 != HIDWORD(v13) )
      {
        v14 = (_DWORD *)v13;
        do
        {
          v17 = (int *)(*v14 - 12);
          if ( v17 != &dword_28898C0 )
          {
            v15 = (unsigned int *)(*v14 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          }
          ++v14;
        }
        while ( v14 != (_DWORD *)HIDWORD(v13) );
      }
      if ( (_DWORD)v13 )
        operator delete((void *)v13);
      v19 = (int)v25;
      v18 = v24;
      if ( v24 != v25 )
          v22 = (int *)(*(_DWORD *)v18 - 12);
          if ( v22 != &dword_28898C0 )
            v20 = (unsigned int *)(*(_DWORD *)v18 - 4);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          v18 = (char *)v18 + 4;
        while ( v18 != (void *)v19 );
        v18 = v24;
      if ( v18 )
        operator delete(v18);
    *((_DWORD *)v3 + 8) = 0;
  return CommandRegistry::Parser::~Parser((CommandRegistry::Parser *)&v28);
}


void __fastcall BaseCommandBlock::load(BaseCommandBlock *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BaseCommandBlock *v3; // r10@1
  int *v4; // r0@1
  void *v5; // r0@1
  int v6; // r0@2
  signed int v7; // r6@4
  void *v8; // r0@4
  void *v9; // r0@6
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  signed int v12; // r6@11
  void *v13; // r0@11
  signed int v14; // r0@13
  void *v15; // r0@16
  signed int v16; // r6@17
  void *v17; // r0@17
  int *v18; // r0@19
  void *v19; // r0@19
  signed int v20; // r6@20
  void *v21; // r0@20
  void *v22; // r0@22
  signed int v23; // r6@24
  void *v24; // r0@28
  int *v25; // r0@30
  void *v26; // r0@30
  unsigned int *v27; // r2@31
  signed int v28; // r1@33
  ListTag *v29; // r8@36
  void *v30; // r0@36
  _DWORD *v31; // lr@38
  _DWORD *v32; // r7@38
  char *v33; // r1@39
  _DWORD *v34; // r9@39
  int (**v35)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@39
  unsigned int *v36; // r2@40
  signed int v37; // r5@42
  int (**v38)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@46
  char *v39; // r5@46
  int *v40; // r0@47
  int v41; // r7@50
  int *v42; // r1@51
  __int64 v43; // kr00_8@51
  unsigned int *v44; // r2@56
  signed int v45; // r1@58
  unsigned int *v46; // r2@60
  signed int v47; // r1@62
  unsigned int *v48; // r2@64
  signed int v49; // r1@66
  unsigned int *v50; // r2@68
  signed int v51; // r1@70
  unsigned int *v52; // r2@72
  signed int v53; // r1@74
  unsigned int *v54; // r2@76
  signed int v55; // r1@78
  unsigned int *v56; // r2@80
  signed int v57; // r1@82
  unsigned int *v58; // r2@92
  signed int v59; // r1@94
  unsigned int *v60; // r2@104
  signed int v61; // r1@106
  unsigned int *v62; // r2@112
  signed int v63; // r1@114
  int v64; // [sp+Ch] [bp-84h]@36
  int v65; // [sp+14h] [bp-7Ch]@30
  int v66; // [sp+1Ch] [bp-74h]@23
  int v67; // [sp+24h] [bp-6Ch]@22
  int v68; // [sp+2Ch] [bp-64h]@20
  int v69; // [sp+34h] [bp-5Ch]@19
  int v70; // [sp+3Ch] [bp-54h]@17
  int v71; // [sp+44h] [bp-4Ch]@16
  int v72; // [sp+4Ch] [bp-44h]@11
  int v73; // [sp+54h] [bp-3Ch]@6
  int v74; // [sp+5Ch] [bp-34h]@4
  int v75; // [sp+64h] [bp-2Ch]@1
  char v76; // [sp+68h] [bp-28h]@39

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v75, "Command");
  v4 = (int *)CompoundTag::getString((int)v2, (const void **)&v75);
  EntityInteraction::setInteractText((int *)v3 + 4, v4);
  v5 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
  {
    v44 = (unsigned int *)(v75 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
    }
    else
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *((_DWORD *)v3 + 6);
  *((_DWORD *)v3 + 6) = 0;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  sub_21E94B4((void **)&v74, "Version");
  v7 = CompoundTag::contains((int)v2, (const void **)&v74);
  v8 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v74 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v73, "Version");
    *((_DWORD *)v3 + 7) = CompoundTag::getInt((int)v2, (const void **)&v73);
    v9 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v73 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
  else
    sub_21E94B4((void **)&v72, "CommandJSON");
    v12 = CompoundTag::contains((int)v2, (const void **)&v72);
    v13 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v72 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    if ( v12 == 1 )
      v14 = 2;
      v14 = 3;
    *((_DWORD *)v3 + 7) = v14;
  sub_21E94B4((void **)&v71, "SuccessCount");
  *((_DWORD *)v3 + 8) = CompoundTag::getInt((int)v2, (const void **)&v71);
  v15 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v71 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v70, "CustomName");
  v16 = CompoundTag::contains((int)v2, (const void **)&v70, 8);
  v17 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v70 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 == 1 )
    sub_21E94B4((void **)&v69, "CustomName");
    v18 = (int *)CompoundTag::getString((int)v2, (const void **)&v69);
    EntityInteraction::setInteractText((int *)v3 + 5, v18);
    v19 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v69 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v68, "TrackOutput");
  v20 = CompoundTag::contains((int)v2, (const void **)&v68, 1);
  v21 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v68 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v20 == 1 )
    sub_21E94B4((void **)&v67, "TrackOutput");
    *((_BYTE *)v3 + 36) = CompoundTag::getBoolean((int)v2, (const void **)&v67);
    v22 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v67 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v66, "LastOutput");
  if ( CompoundTag::contains((int)v2, (const void **)&v66, 8) == 1 )
    v23 = *((_BYTE *)v3 + 36);
    if ( *((_BYTE *)v3 + 36) )
      v23 = 1;
    v23 = 0;
  v24 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v66 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( v23 == 1 )
    sub_21E94B4((void **)&v65, "LastOutput");
    v25 = (int *)CompoundTag::getString((int)v2, (const void **)&v65);
    EntityInteraction::setInteractText((int *)v3, v25);
    v26 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v65 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E7EE0((const void **)v3, 0, *(_BYTE **)(*(_DWORD *)v3 - 12), 0);
  sub_21E94B4((void **)&v64, "LastOutputParams");
  v29 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v64);
  v30 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v64 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( v29 )
    v31 = (_DWORD *)*((_DWORD *)v3 + 1);
    v32 = (_DWORD *)*((_DWORD *)v3 + 2);
    if ( v32 != v31 )
      v33 = &v76;
      v34 = (_DWORD *)*((_DWORD *)v3 + 1);
      v35 = &pthread_create;
        v40 = (int *)(*v34 - 12);
        if ( v40 != &dword_28898C0 )
        {
          v36 = (unsigned int *)(*v34 - 4);
          if ( v35 )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            v38 = v35;
            v39 = v33;
            j_j_j_j__ZdlPv_9(v40);
            v33 = v39;
            v35 = v38;
        }
        ++v34;
      while ( v34 != v32 );
    *((_DWORD *)v3 + 2) = v31;
    if ( ListTag::size(v29) >= 1 )
      v41 = 0;
        v42 = (int *)ListTag::getString(v29, v41);
        v43 = *((_QWORD *)v3 + 1);
        if ( (_DWORD)v43 == HIDWORD(v43) )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)((char *)v3 + 4),
            v42);
        else
          sub_21E8AF4((int *)v43, v42);
          *((_DWORD *)v3 + 2) += 4;
        ++v41;
      while ( v41 < ListTag::size(v29) );
}


char *__fastcall BaseCommandBlock::getRawName(BaseCommandBlock *this)
{
  return (char *)this + 20;
}


int __fastcall BaseCommandBlock::setTrackOutput(int result, int a2)
{
  int v2; // r10@1
  void *v3; // r5@2
  void *v4; // r7@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int *v7; // r0@12
  void *v8; // r0@17
  unsigned int *v9; // r2@20
  signed int v10; // r1@22
  __int64 v11; // [sp+0h] [bp-38h]@2
  int v12; // [sp+8h] [bp-30h]@2
  int v13; // [sp+10h] [bp-28h]@2

  v2 = result;
  *(_BYTE *)(result + 36) = a2;
  if ( !a2 )
  {
    sub_21E94B4((void **)&v13, (const char *)&unk_257BC67);
    v11 = 0LL;
    v12 = 0;
    EntityInteraction::setInteractText((int *)v2, &v13);
    std::vector<std::string,std::allocator<std::string>>::operator=(v2 + 4, (unsigned __int64 *)&v11);
    v4 = (void *)HIDWORD(v11);
    v3 = (void *)v11;
    if ( (_DWORD)v11 != HIDWORD(v11) )
    {
      do
      {
        v7 = (int *)(*(_DWORD *)v3 - 12);
        if ( v7 != &dword_28898C0 )
        {
          v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        }
        v3 = (char *)v3 + 4;
      }
      while ( v3 != v4 );
      v3 = (void *)v11;
    }
    if ( v3 )
      operator delete(v3);
    v8 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    result = 0;
    *(_DWORD *)(v2 + 32) = 0;
  }
  return result;
}


int __fastcall BaseCommandBlock::performCommand(BaseCommandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BaseCommandBlock *v3; // r6@1
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r5@1
  void *v6; // r4@1
  void *v8; // [sp+0h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x14u);
  BlockCommandOrigin::BlockCommandOrigin((int)v6, (int)v5, (int)v4);
  v8 = v6;
  BaseCommandBlock::_performCommand((int)v3, v5, (const CommandOrigin **)&v8);
  return (*(int (__fastcall **)(void *))(*(_DWORD *)v6 + 4))(v6);
}


BaseCommandBlock *__fastcall BaseCommandBlock::~BaseCommandBlock(BaseCommandBlock *this)
{
  BaseCommandBlock *v1; // r10@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  void *v7; // r5@5
  void *v8; // r7@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  int *v11; // r0@15
  int *v12; // r0@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  unsigned int *v16; // r2@26
  signed int v17; // r1@28
  unsigned int *v18; // r2@30
  signed int v19; // r1@32

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  v3 = *((_DWORD *)v1 + 5);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 4);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v5 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v8 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v7 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v7 != v8 )
    do
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 1);
  if ( v7 )
    operator delete(v7);
  v12 = (int *)(*(_DWORD *)v1 - 12);
  if ( v12 != &dword_28898C0 )
    v18 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v1;
}


int __fastcall BaseCommandBlock::setLastOutput(int *a1, int *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int *v4; // r5@1

  v3 = a3;
  v4 = a1;
  EntityInteraction::setInteractText(a1, a2);
  return j_j_j__ZNSt6vectorISsSaISsEEaSERKS1__3((int)(v4 + 1), v3);
}


void __fastcall BaseCommandBlock::getLastOutput(BaseCommandBlock *this, int a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  void *v4; // r4@1
  void *v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  void *v9; // [sp+4h] [bp-34h]@1
  void *v10; // [sp+8h] [bp-30h]@1

  v2 = (int *)a2;
  v3 = (int *)this;
  CommandOutputSender::translate((int)&v9, (unsigned __int64 *)(a2 + 4));
  I18n::get(v3, v2, (unsigned __int64 *)&v9);
  v5 = v10;
  v4 = v9;
  if ( v9 != v10 )
  {
    do
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 4;
    }
    while ( v4 != v5 );
    v4 = v9;
  }
  if ( v4 )
    operator delete(v4);
}


int __fastcall BaseCommandBlock::setCommand(int a1, BlockSource *a2, int a3, int *a4)
{
  int v4; // r7@1
  int *v5; // r8@1
  int v6; // r5@1
  BlockSource *v7; // r6@1
  const CommandOrigin *v8; // r4@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (const CommandOrigin *)operator new(0x14u);
  BlockCommandOrigin::BlockCommandOrigin((int)v8, (int)v7, v6);
  BaseCommandBlock::_setCommand(v4, v7, v8, v5);
  return (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v8 + 4))(v8);
}


void __fastcall BaseCommandBlock::_setCommand(int a1, BlockSource *a2, const CommandOrigin *a3, int *a4)
{
  BaseCommandBlock::_setCommand(a1, a2, a3, a4);
}


_DWORD *__fastcall BaseCommandBlock::_getTimeStamp(BaseCommandBlock *this)
{
  int *v1; // r8@1
  struct tm *v2; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r4@1
  char *v5; // r0@1
  char *v6; // r0@2
  char *v7; // r0@5
  char *v8; // r0@5
  char *v9; // r0@5
  char *v10; // r0@6
  char *v11; // r0@6
  void **v12; // r0@7
  void *v13; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  void **v17; // [sp+4h] [bp-E4h]@1
  int v18; // [sp+8h] [bp-E0h]@8
  void **v19; // [sp+Ch] [bp-DCh]@1
  void **v20; // [sp+10h] [bp-D8h]@7
  int v21; // [sp+2Ch] [bp-BCh]@8
  int v22; // [sp+34h] [bp-B4h]@7
  int v23; // [sp+38h] [bp-B0h]@8
  time_t timer; // [sp+C0h] [bp-28h]@1
  char v25; // [sp+C6h] [bp-22h]@1
  char v26; // [sp+C7h] [bp-21h]@2
  char v27; // [sp+C9h] [bp-1Fh]@5
  char v28; // [sp+CAh] [bp-1Eh]@5
  char v29; // [sp+CBh] [bp-1Dh]@6

  v1 = (int *)this;
  timer = getUnixTime();
  v2 = localtime(&timer);
  v3 = *(_QWORD *)&v2->tm_sec;
  v4 = v2->tm_hour;
  sub_21D103C((int)&v17, 24);
  sub_21CBF38((char *)&v19, (int)"[", 1);
  v5 = (char *)sub_21CC43C(&v19, v4);
  v25 = 58;
  sub_21CBF38(v5, (int)&v25, 1);
  if ( SHIDWORD(v3) > 9 )
  {
    sub_21CC43C(&v19, HIDWORD(v3));
  }
  else
    v26 = 48;
    v6 = sub_21CBF38((char *)&v19, (int)&v26, 1);
    sub_21CC43C(v6, HIDWORD(v3));
  if ( (signed int)v3 > 9 )
    v29 = 58;
    v10 = sub_21CBF38((char *)&v19, (int)&v29, 1);
    v11 = (char *)sub_21CC43C(v10, v3);
    sub_21CBF38(v11, (int)"]", 1);
    v27 = 58;
    v7 = sub_21CBF38((char *)&v19, (int)&v27, 1);
    v28 = 48;
    v8 = sub_21CBF38(v7, (int)&v28, 1);
    v9 = (char *)sub_21CC43C(v8, v3);
    sub_21CBF38(v9, (int)"]", 1);
  sub_21CFED8(v1, (int)&v20);
  v12 = off_26D3F84;
  v17 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v17) = off_26D3F80[0];
  v19 = v12;
  v20 = &off_27734E8;
  v13 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v20 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v21);
  v17 = (void **)off_26D3F68;
  *(void ***)((char *)&v17 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v18 = 0;
  return sub_21B6560(&v23);
}


void __fastcall BaseCommandBlock::getLastOutput(BaseCommandBlock *this, int a2)
{
  BaseCommandBlock::getLastOutput(this, a2);
}


int __fastcall BaseCommandBlock::_performCommand(int a1, BlockSource *a2, const CommandOrigin **a3)
{
  int v3; // r11@1
  const CommandOrigin **v4; // r8@1
  Level *v5; // r9@1
  unsigned int v6; // r2@2
  const CommandOrigin *v7; // r1@2
  int v8; // r7@4
  void *v9; // r0@4
  int v10; // r7@6
  void *v11; // r0@6
  int result; // r0@8
  int v13; // r0@9
  char *v14; // r0@10
  CommandOutputMessage *v15; // r7@11
  int *v16; // r5@11
  unsigned __int64 *v17; // r7@11
  __int64 v18; // r4@15
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  int *v21; // r0@25
  void *v22; // r0@30
  MinecraftCommands *v23; // r0@31
  void *v24; // r0@36
  __int64 v25; // kr00_8@37
  _DWORD *v26; // r6@38
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  int *v29; // r0@47
  __int64 v37; // kr08_8@51
  unsigned int v38; // r1@51
  const void **v39; // r0@53
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  void *v44; // r0@63
  void *v45; // r0@64
  char *v46; // r5@65
  int v47; // r7@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  int *v50; // r0@75
  char *v51; // r0@80
  void *v52; // r0@81
  char *v53; // r0@82
  unsigned int *v54; // r2@88
  signed int v55; // r1@90
  unsigned int *v56; // r2@96
  signed int v57; // r1@98
  unsigned int *v58; // r2@103
  signed int v59; // r1@105
  unsigned int *v60; // r2@107
  signed int v61; // r1@109
  unsigned int *v62; // r2@111
  signed int v63; // r1@113
  unsigned int *v64; // r2@115
  signed int v65; // r1@117
  unsigned int *v66; // r2@119
  signed int v67; // r1@121
  __int64 v68; // [sp+4h] [bp-8Ch]@15
  int v69; // [sp+Ch] [bp-84h]@15
  int v70; // [sp+14h] [bp-7Ch]@15
  char v71; // [sp+18h] [bp-78h]@9
  int v72; // [sp+1Ch] [bp-74h]@33
  void *ptr; // [sp+20h] [bp-70h]@31
  int v74; // [sp+24h] [bp-6Ch]@31
  char *v75; // [sp+30h] [bp-60h]@65
  char *v76; // [sp+34h] [bp-5Ch]@65
  char *v77; // [sp+38h] [bp-58h]@65
  char *v78; // [sp+3Ch] [bp-54h]@65
  int v79; // [sp+44h] [bp-4Ch]@65
  int v80; // [sp+48h] [bp-48h]@51
  unsigned int v81; // [sp+50h] [bp-40h]@51
  _DWORD *v82; // [sp+54h] [bp-3Ch]@63
  int v83; // [sp+58h] [bp-38h]@6
  int v84; // [sp+60h] [bp-30h]@36
  int v85; // [sp+64h] [bp-2Ch]@4

  v3 = a1;
  v4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v5) || (v6 = *(_DWORD *)(v3 + 16), (v7 = *(const CommandOrigin **)(v6 - 12)) == 0) )
  {
    result = 0;
    goto LABEL_13;
  }
  if ( !*(_DWORD *)(v3 + 24) )
    Util::toLower((void **)&v85, (int)v7, v6);
    v8 = sub_21E7D6C((const void **)&v85, "searge");
    v9 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
    {
      v40 = (unsigned int *)(v85 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      }
      else
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    if ( v8 )
      Util::toLower((void **)&v83, *(_DWORD *)(*(_DWORD *)(v3 + 16) - 12), *(_DWORD *)(v3 + 16));
      v10 = sub_21E7D6C((const void **)&v83, "help");
      v11 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v83 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      if ( v10 )
        BaseCommandBlock::compile((BaseCommandBlock *)v3, *v4, v5);
        result = *(_DWORD *)(v3 + 24);
        if ( !result )
          return result;
        goto LABEL_9;
      if ( *(_BYTE *)(v3 + 36) )
        sub_21E94B4((void **)&v81, "seargeSays.searge");
        _R0 = lrand48();
        _R1 = 715827883;
        __asm { SMMUL.W         R1, R0, R1 }
        Util::toString<int,(void *)0,(void *)0>((void **)&v80, _R0 - 12 * (((signed int)_R1 >> 1) + (_R1 >> 31)) + 1);
        v37 = *(_QWORD *)(v81 - 12);
        v38 = *(_DWORD *)(v80 - 12) + v37;
        if ( v38 > HIDWORD(v37) && v38 <= *(_DWORD *)(v80 - 8) )
          v39 = sub_21E82D8((const void **)&v80, 0, v81, (_BYTE *)v37);
          v39 = sub_21E72F0((const void **)&v81, (const void **)&v80);
        v82 = *v39;
        *v39 = &unk_28898CC;
        v44 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v80 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
          }
          else
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
        v45 = (void *)(v81 - 12);
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v81 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        sub_21E94B4((void **)&v79, "seargeSays.searge");
        v75 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v75, *(v82 - 3) + 1);
        sub_21E7408((const void **)&v75, "%", 1u);
        sub_21E72F0((const void **)&v75, (const void **)&v82);
        v76 = 0;
        v77 = 0;
        v78 = 0;
        v76 = (char *)operator new(4u);
        v78 = v76 + 4;
        v77 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                        (int)&v75,
                        (int)&v76,
                        (int)v76);
        EntityInteraction::setInteractText((int *)v3, &v79);
        std::vector<std::string,std::allocator<std::string>>::operator=(v3 + 4, (unsigned __int64 *)&v76);
        v47 = (int)v77;
        v46 = v76;
        if ( v76 != v77 )
            v50 = (int *)(*(_DWORD *)v46 - 12);
            if ( v50 != &dword_28898C0 )
            {
              v48 = (unsigned int *)(*(_DWORD *)v46 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v49 = __ldrex(v48);
                while ( __strex(v49 - 1, v48) );
              }
              else
                v49 = (*v48)--;
              if ( v49 <= 0 )
                j_j_j_j__ZdlPv_9(v50);
            }
            v46 += 4;
          while ( v46 != (char *)v47 );
          v46 = v76;
        if ( v46 )
          operator delete(v46);
        v51 = v75 - 12;
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v75 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        v52 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v79 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        v53 = (char *)(v82 - 3);
        if ( v82 - 3 != &dword_28898C0 )
          v66 = v82 - 1;
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
    else if ( *(_BYTE *)(v3 + 36) )
      sub_21E94B4((void **)&v84, "#itzlipofutzli");
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3,
        &v84);
      v24 = (void *)(v84 - 12);
      if ( (int *)(v84 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v84 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = *(_QWORD *)(v3 + 4);
      if ( HIDWORD(v25) != (_DWORD)v25 )
        v26 = (_DWORD *)v25;
          v29 = (int *)(*v26 - 12);
          if ( v29 != &dword_28898C0 )
            v27 = (unsigned int *)(*v26 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          ++v26;
        while ( v26 != (_DWORD *)HIDWORD(v25) );
      *(_DWORD *)(v3 + 8) = v25;
    result = 1;
LABEL_13:
    *(_DWORD *)(v3 + 32) = result;
    return result;
LABEL_9:
  v13 = MinecraftCommands::getOutputType(*v4, v7);
  CommandOutput::CommandOutput((int)&v71, v13);
  Command::run(*(Command **)(v3 + 24), *v4, (CommandOutput *)&v71);
  *(_DWORD *)(v3 + 32) = CommandOutput::getSuccessCount((CommandOutput *)&v71);
  if ( *(_BYTE *)(v3 + 36) )
    v14 = CommandOutput::getMessages((CommandOutput *)&v71);
    if ( (unsigned int)*(_QWORD *)v14 == *(_QWORD *)v14 >> 32 )
      sub_21E94B4((void **)&v70, (const char *)&unk_257BC67);
      v68 = 0LL;
      v69 = 0;
      EntityInteraction::setInteractText((int *)v3, &v70);
      std::vector<std::string,std::allocator<std::string>>::operator=(v3 + 4, (unsigned __int64 *)&v68);
      v18 = v68;
      if ( (_DWORD)v68 != HIDWORD(v68) )
          v21 = (int *)(*(_DWORD *)v18 - 12);
          if ( v21 != &dword_28898C0 )
            v19 = (unsigned int *)(*(_DWORD *)v18 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          LODWORD(v18) = v18 + 4;
        while ( (_DWORD)v18 != HIDWORD(v18) );
        LODWORD(v18) = v68;
      if ( (_DWORD)v18 )
        operator delete((void *)v18);
      v22 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v70 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
    else
      v15 = (CommandOutputMessage *)(*((_DWORD *)CommandOutput::getMessages((CommandOutput *)&v71) + 1) - 20);
      v16 = (int *)CommandOutputMessage::getMessageId(v15);
      v17 = (unsigned __int64 *)CommandOutputMessage::getParams(v15);
      EntityInteraction::setInteractText((int *)v3, v16);
      std::vector<std::string,std::allocator<std::string>>::operator=(v3 + 4, v17);
  v23 = (MinecraftCommands *)ServerLevel::getCommands(v5);
  MinecraftCommands::handleOutput(v23, *v4, (const CommandOutput *)&v71);
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v74);
  if ( ptr )
    operator delete(ptr);
  result = v72;
  if ( v72 )
    result = (*(int (**)(void))(*(_DWORD *)v72 + 4))();
  return result;
}


int __fastcall BaseCommandBlock::setCommand(int a1, BlockSource *a2, _QWORD *a3, int *a4)
{
  int v4; // r7@1
  int *v5; // r8@1
  _QWORD *v6; // r5@1
  BlockSource *v7; // r6@1
  const CommandOrigin *v8; // r4@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (const CommandOrigin *)operator new(0x20u);
  MinecartBlockCommandOrigin::MinecartBlockCommandOrigin((int)v8, (int)v7, v6);
  BaseCommandBlock::_setCommand(v4, v7, v8, v5);
  return (*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v8 + 4))(v8);
}


signed int __fastcall BaseCommandBlock::save(BaseCommandBlock *this, CompoundTag *a2)
{
  CompoundTag *v2; // r5@1
  BaseCommandBlock *v3; // r9@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r6@6
  int *v10; // r5@6
  int *i; // r7@6
  int v12; // r0@7
  void *v13; // r0@12
  void *v14; // r0@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  int v30; // [sp+0h] [bp-70h]@6
  int v31; // [sp+8h] [bp-68h]@13
  void *v32; // [sp+Ch] [bp-64h]@10
  int v33; // [sp+14h] [bp-5Ch]@10
  int v34; // [sp+18h] [bp-58h]@7
  int v35; // [sp+1Ch] [bp-54h]@7
  int v36; // [sp+24h] [bp-4Ch]@5
  int v37; // [sp+2Ch] [bp-44h]@4
  int v38; // [sp+34h] [bp-3Ch]@3
  int v39; // [sp+3Ch] [bp-34h]@2
  int v40; // [sp+44h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v40, "Command");
  CompoundTag::putString((int)v2, (const void **)&v40, (int *)v3 + 4);
  v4 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v39, "Version");
  CompoundTag::putInt((int)v2, (const void **)&v39, *((_DWORD *)v3 + 7));
  v5 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v39 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v38, "SuccessCount");
  CompoundTag::putInt((int)v2, (const void **)&v38, *((_DWORD *)v3 + 8));
  v6 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v38 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v37, "CustomName");
  CompoundTag::putString((int)v2, (const void **)&v37, (int *)v3 + 5);
  v7 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v37 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v36, "LastOutput");
  CompoundTag::putString((int)v2, (const void **)&v36, (int *)v3);
  v8 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v30 = (int)v2;
  v9 = operator new(0x14u);
  ListTag::ListTag((int)v9);
  v10 = (int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
  for ( i = (int *)*(_QWORD *)((char *)v3 + 4); v10 != i; v35 = 0 )
    std::make_unique<StringTag,char const(&)[1],std::string const&>(&v34, (const char *)&unk_257BC67, i);
    v12 = v34;
    v34 = 0;
    v35 = v12;
    ListTag::add((int)v9, &v35);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    ++i;
  sub_21E94B4((void **)&v33, "LastOutputParams");
  v32 = v9;
  CompoundTag::put(v30, (const void **)&v33, (int *)&v32);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  v32 = 0;
  v13 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v31, "TrackOutput");
  CompoundTag::putBoolean(v30, (const void **)&v31, *((_BYTE *)v3 + 36));
  v14 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v31 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return 1;
}


char *__fastcall BaseCommandBlock::getCommand(BaseCommandBlock *this)
{
  return (char *)this + 16;
}


void __fastcall BaseCommandBlock::load(BaseCommandBlock *this, const CompoundTag *a2)
{
  BaseCommandBlock::load(this, a2);
}


int __fastcall BaseCommandBlock::setSuccessCount(int result, int a2)
{
  *(_DWORD *)(result + 32) = a2;
  return result;
}


int __fastcall BaseCommandBlock::performCommand(int a1, BlockSource *a2, _QWORD *a3)
{
  int v3; // r6@1
  _QWORD *v4; // r7@1
  BlockSource *v5; // r5@1
  void *v6; // r4@1
  void *v8; // [sp+0h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x20u);
  MinecartBlockCommandOrigin::MinecartBlockCommandOrigin((int)v6, (int)v5, v4);
  v8 = v6;
  BaseCommandBlock::_performCommand(v3, v5, (const CommandOrigin **)&v8);
  return (*(int (__fastcall **)(void *))(*(_DWORD *)v6 + 4))(v6);
}


void __fastcall BaseCommandBlock::_setCommand(int a1, BlockSource *a2, const CommandOrigin *a3, int *a4)
{
  BlockSource *v4; // r6@1
  int v5; // r5@1
  const CommandOrigin *v6; // r4@1
  _DWORD *v7; // r0@1
  size_t v8; // r2@1
  int v9; // r0@2
  Level *v10; // r6@5
  char *v11; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  void *s2; // [sp+0h] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  v6 = a3;
  Util::stringTrim((int *)&s2, a4);
  v7 = *(_DWORD **)(v5 + 16);
  v8 = *(v7 - 3);
  if ( v8 == *((_DWORD *)s2 - 3) )
  {
    v9 = memcmp(v7, s2, v8);
    *(_DWORD *)(v5 + 32) = 0;
    if ( !v9 )
      goto LABEL_7;
  }
  else
  EntityInteraction::setInteractText((int *)(v5 + 16), (int *)&s2);
  *(_DWORD *)(v5 + 28) = 3;
  v10 = (Level *)BlockSource::getLevel(v4);
  if ( !Level::isClientSide(v10) )
    BaseCommandBlock::compile((BaseCommandBlock *)v5, v6, v10);
LABEL_7:
  v11 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall BaseCommandBlock::setOutput(int a1, const void **a2, unsigned __int64 *a3)
{
  int *v3; // r4@1
  unsigned __int64 *v4; // r5@1
  const void **v5; // r6@1
  const void **v6; // r0@3
  const void **v7; // r0@3
  char *v8; // r0@3
  char *v9; // r0@4
  void *v10; // r0@5
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  void *v13; // r4@10
  void *v14; // r6@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int *v17; // r0@20
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  __int64 v22; // [sp+4h] [bp-44h]@10
  int v23; // [sp+Ch] [bp-3Ch]@10
  int v24; // [sp+14h] [bp-34h]@10
  int v25; // [sp+18h] [bp-30h]@3
  char *v26; // [sp+1Ch] [bp-2Ch]@3
  char *v27; // [sp+20h] [bp-28h]@3

  v3 = (int *)a1;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(a1 + 36) )
  {
    if ( *((_DWORD *)*a2 - 3) )
    {
      BaseCommandBlock::_getTimeStamp((BaseCommandBlock *)&v25);
      v6 = sub_21E7408((const void **)&v25, " ", 1u);
      v26 = (char *)*v6;
      *v6 = &unk_28898CC;
      v7 = sub_21E72F0((const void **)&v26, v5);
      v27 = (char *)*v7;
      *v7 = &unk_28898CC;
      EntityInteraction::setInteractText(v3, (int *)&v27);
      std::vector<std::string,std::allocator<std::string>>::operator=((int)(v3 + 1), v4);
      v8 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v18 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = v26 - 12;
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v26 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v25 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          goto LABEL_40;
LABEL_39:
        v12 = (*v11)--;
LABEL_40:
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
        return;
    }
    else
      sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
      v22 = 0LL;
      v23 = 0;
      EntityInteraction::setInteractText(v3, &v24);
      std::vector<std::string,std::allocator<std::string>>::operator=((int)(v3 + 1), (unsigned __int64 *)&v22);
      v14 = (void *)HIDWORD(v22);
      v13 = (void *)v22;
      if ( (_DWORD)v22 != HIDWORD(v22) )
        do
          v17 = (int *)(*(_DWORD *)v13 - 12);
          if ( v17 != &dword_28898C0 )
          {
            v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          }
          v13 = (char *)v13 + 4;
        while ( v13 != v14 );
        v13 = (void *)v22;
      if ( v13 )
        operator delete(v13);
      v10 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v24 - 4);
        goto LABEL_39;
  }
}
