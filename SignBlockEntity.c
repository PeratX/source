

int __fastcall SignBlockEntity::setEditable(int result, bool a2)
{
  *(_BYTE *)(result + 116) = a2;
  return result;
}


void __fastcall SignBlockEntity::~SignBlockEntity(SignBlockEntity *this)
{
  SignBlockEntity::~SignBlockEntity(this);
}


CompoundTag *__fastcall SignBlockEntity::getUpdatePacket(SignBlockEntity *this, BlockSource *a2)
{
  SignBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


void __fastcall SignBlockEntity::load(SignBlockEntity *this, const CompoundTag *a2)
{
  SignBlockEntity::load(this, a2);
}


SignBlockEntity *__fastcall SignBlockEntity::~SignBlockEntity(SignBlockEntity *this)
{
  SignBlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_270A880;
  v2 = *((_DWORD *)this + 27);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 26);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  BlockEntity::~BlockEntity(v1);
  return v1;
}


void __fastcall SignBlockEntity::load(SignBlockEntity *this, const CompoundTag *a2)
{
  SignBlockEntity *v2; // r8@1
  int *v3; // r5@1
  const CompoundTag *v4; // r10@1
  signed int v5; // r7@1
  void *v6; // r0@1
  int *v7; // r0@3
  void *v8; // r0@3
  unsigned int v9; // r7@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r12@18
  signed int v15; // r1@20
  int *v16; // r11@25
  int v17; // r0@25
  int v18; // r9@25
  _BYTE *v19; // r0@31
  int v20; // r1@31
  int v21; // r0@36
  void *v22; // r0@36
  void *v23; // r0@40
  void *v24; // r0@41
  void *v25; // r0@42
  unsigned int *v26; // r2@52
  signed int v27; // r1@54
  unsigned int *v28; // r2@56
  signed int v29; // r1@58
  unsigned int *v30; // r2@60
  signed int v31; // r1@62
  int v32; // [sp+Ch] [bp-DCh]@18
  char v33; // [sp+10h] [bp-D8h]@34
  char v34; // [sp+20h] [bp-C8h]@34
  int v35; // [sp+A0h] [bp-48h]@5
  int v36; // [sp+A4h] [bp-44h]@5
  int v37; // [sp+A8h] [bp-40h]@5
  int v38; // [sp+ACh] [bp-3Ch]@5
  int v39; // [sp+B4h] [bp-34h]@3
  int v40; // [sp+BCh] [bp-2Ch]@1

  v2 = this;
  *((_BYTE *)this + 116) = 0;
  v3 = (int *)((char *)this + 104);
  v4 = a2;
  sub_21E7EE0((const void **)this + 26, 0, *(_BYTE **)(*((_DWORD *)this + 26) - 12), 0);
  BlockEntity::load(v2, v4);
  sub_21E94B4((void **)&v40, "Text");
  v5 = CompoundTag::contains((int)v4, (const void **)&v40);
  v6 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v40 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 1 )
    sub_21E94B4((void **)&v39, "Text");
    v7 = (int *)CompoundTag::getString((int)v4, (const void **)&v39);
    EntityInteraction::setInteractText(v3, v7);
    sub_21E7EE0((const void **)v2 + 27, 0, *(_BYTE **)(*((_DWORD *)v2 + 27) - 12), 0);
    v8 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) == &dword_28898C0 )
      return;
    v12 = (unsigned int *)(v39 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
LABEL_17:
      goto LABEL_49;
    goto LABEL_48;
  sub_21E94B4((void **)&v35, "Text1");
  sub_21E94B4((void **)&v36, "Text2");
  sub_21E94B4((void **)&v37, "Text3");
  sub_21E94B4((void **)&v38, "Text4");
  v9 = 0;
  do
    v16 = (int *)CompoundTag::getString((int)v4, (const void **)&v35 + v9);
    v17 = *v3;
    v18 = *(_DWORD *)(*v3 - 12);
    if ( v18 )
      if ( *(_DWORD *)(v17 - 4) >= 0 )
      {
        sub_21E8010((const void **)v3);
        v17 = *v3;
      }
      if ( *(_BYTE *)(v17 + v18 - 1) != 10 )
        sub_21E7408((const void **)v3, "\n", 1u);
      sub_21E72F0((const void **)v3, (const void **)&unk_280FD74);
    v19 = (_BYTE *)*v16;
    v20 = *(_DWORD *)(*v16 - 12);
    if ( v20 && *v19 == 123 && v19[v20 - 1] == 125 )
      Json::Reader::Reader((Json::Reader *)&v34);
      Json::Value::Value(&v33, 0);
      if ( Json::Reader::parse((int)&v34, v16, (int)&v33, 1) == 1 && !Json::Value::isNull((Json::Value *)&v33) )
        v21 = Json::Value::operator[]((Json::Value *)&v33, "text");
        Json::Value::asString(&v32, v21, v16);
        sub_21E72F0((const void **)v3, (const void **)&v32);
        v22 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v32 - 4);
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
            j_j_j_j__ZdlPv_9(v22);
        }
      Json::Value::~Value((Json::Value *)&v33);
      Json::Reader::~Reader((Json::Reader *)&v34);
      sub_21E72F0((const void **)v3, (const void **)v16);
    ++v9;
  while ( v9 < 4 );
  EntityInteraction::setInteractText(v3, v3);
  sub_21E7EE0((const void **)v2 + 27, 0, *(_BYTE **)(*((_DWORD *)v2 + 27) - 12), 0);
  v23 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v8 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v35 - 4);
      goto LABEL_17;
LABEL_48:
    v13 = (*v12)--;
LABEL_49:
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


char *__fastcall SignBlockEntity::setMessage(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 104), a2);
  return sub_21E7EE0((const void **)(v2 + 108), 0, *(_BYTE **)(*(_DWORD *)(v2 + 108) - 12), 0);
}


int __fastcall SignBlockEntity::getShadowRadius(SignBlockEntity *this, BlockSource *a2)
{
  Block *v2; // r0@1
  int result; // r0@3

  v2 = (Block *)BlockSource::getBlock(a2, (SignBlockEntity *)((char *)this + 32));
  Block::isType(v2, (const Block *)Block::mSign);
  __asm
  {
    VLDR            S2, =0.2
    VLDR            S0, =0.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall SignBlockEntity::~SignBlockEntity(SignBlockEntity *this)
{
  SignBlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_270A880;
  v2 = *((_DWORD *)this + 27);
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
  v4 = *((_DWORD *)v1 + 26);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  BlockEntity::~BlockEntity(v1);
  operator delete((void *)v1);
}


int *__fastcall SignBlockEntity::getMessage(SignBlockEntity *this, const UIProfanityContext *a2)
{
  int *v2; // r4@1
  void *v3; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+4h] [bp-1Ch]@2

  v2 = (int *)((char *)this + 108);
  if ( !*(_DWORD *)(*((_DWORD *)this + 27) - 12) )
  {
    UIProfanityContext::filterProfanityFromString();
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v7);
    v3 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v7 - 4);
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
  }
  return v2;
}


signed int __fastcall SignBlockEntity::save(SignBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  SignBlockEntity *v3; // r5@1
  void *v4; // r0@2
  signed int result; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v8, "Text");
    CompoundTag::putString((int)v2, (const void **)&v8, (int *)v3 + 26);
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
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall SignBlockEntity::setSelectedLine(int result, int a2)
{
  *(_DWORD *)(result + 112) = a2;
  return result;
}


int __fastcall SignBlockEntity::SignBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "Sign");
  BlockEntity::BlockEntity(v3, 4, v2);
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
  *(_DWORD *)v3 = &off_270A880;
  *(_DWORD *)(v3 + 104) = &unk_28898CC;
  *(_DWORD *)(v3 + 108) = &unk_28898CC;
  *(_DWORD *)(v3 + 112) = -1;
  *(_BYTE *)(v3 + 116) = 1;
  *(_DWORD *)(v3 + 84) = 2;
  return v3;
}


int __fastcall SignBlockEntity::onChanged(SignBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  SignBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  BlockPos *v6; // r5@2
  char v7; // [sp+8h] [bp-18h]@2
  char v8; // [sp+9h] [bp-17h]@2
  char v9; // [sp+Ch] [bp-14h]@2
  char v10; // [sp+Dh] [bp-13h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (SignBlockEntity *)((char *)v3 + 32);
    BlockSource::getBlockAndData((BlockSource *)&v9, v2, (int)v6);
    v7 = v9;
    v8 = v10;
    result = BlockSource::setBlockAndData((int)v2, v6, (int)&v7, 19, 0);
  }
  return result;
}
