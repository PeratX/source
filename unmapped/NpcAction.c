

void __fastcall NpcAction::~NpcAction(NpcAction *this)
{
  NpcAction::~NpcAction(this);
}


Json::Value *__fastcall NpcAction::toJsonBase(NpcAction *this, Json::Value *a2, const Json::Value *a3)
{
  Json::Value *v3; // r5@1
  const Json::Value *v4; // r6@1
  Json::Value *v5; // r4@1
  int v6; // r7@1
  int v7; // r0@1
  int v8; // r6@1
  int v9; // r6@1
  int v10; // r6@1
  int v12; // [sp+0h] [bp-58h]@1
  char v13; // [sp+10h] [bp-48h]@1
  char v14; // [sp+20h] [bp-38h]@1
  char v15; // [sp+30h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  Json::Value::Value(this, 0);
  v6 = Json::Value::operator[](v5, (const char **)&NpcAction::TYPE_KEY);
  Json::Value::Value((Json::Value *)&v15, *((_BYTE *)v3 + 4));
  Json::Value::operator=(v6, (const Json::Value *)&v15);
  Json::Value::~Value((Json::Value *)&v15);
  v7 = Json::Value::operator[](v5, (const char **)&NpcAction::DATA_KEY);
  Json::Value::operator=(v7, v4);
  v8 = Json::Value::operator[](v5, (const char **)&NpcAction::MODE_KEY);
  Json::Value::Value((Json::Value *)&v14, *((_BYTE *)v3 + 5));
  Json::Value::operator=(v8, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v14);
  v9 = Json::Value::operator[](v5, (const char **)&NpcAction::BUTTON_NAME_KEY);
  Json::Value::Value((int)&v13, (const char **)v3 + 2);
  Json::Value::operator=(v9, (const Json::Value *)&v13);
  Json::Value::~Value((Json::Value *)&v13);
  v10 = Json::Value::operator[](v5, (const char **)&NpcAction::TEXT_KEY);
  Json::Value::Value((int)&v12, (const char **)v3 + 3);
  Json::Value::operator=(v10, (const Json::Value *)&v12);
  return Json::Value::~Value((Json::Value *)&v12);
}


int __fastcall NpcAction::NpcAction(int result, char a2)
{
  *(_DWORD *)result = &off_26F0F3C;
  *(_BYTE *)(result + 4) = a2;
  *(_BYTE *)(result + 5) = 1;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  return result;
}


NpcAction *__fastcall NpcAction::~NpcAction(NpcAction *this)
{
  NpcAction *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F0F3C;
  v2 = *((_DWORD *)this + 3);
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
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


Json::Value *__fastcall NpcAction::read(NpcAction *this, const Json::Value *a2)
{
  const char *v2; // r4@1
  NpcAction *v3; // r5@1
  Json::Value *result; // r0@1
  int v5; // r0@6
  _BYTE *v6; // r0@8
  _BYTE *v7; // r4@9
  signed int v8; // r6@10
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@19
  void *v12; // r0@20
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  unsigned int *v15; // r2@29
  signed int v16; // r1@31
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+4h] [bp-7Ch]@19
  int v22; // [sp+8h] [bp-78h]@19
  int v23; // [sp+10h] [bp-70h]@17
  int v24; // [sp+14h] [bp-6Ch]@17
  char v25; // [sp+18h] [bp-68h]@2
  char v26; // [sp+28h] [bp-58h]@2
  char v27; // [sp+38h] [bp-48h]@2
  char v28; // [sp+48h] [bp-38h]@2
  char v29; // [sp+58h] [bp-28h]@2

  v2 = (const char *)a2;
  v3 = this;
  result = (Json::Value *)Json::Value::isObject(a2);
  if ( result != (Json::Value *)1 )
  {
    v7 = 0;
LABEL_12:
    *(_DWORD *)v3 = v7;
    return result;
  }
  Json::Value::get(
    (Json::Value *)&v29,
    v2,
    (const Json::Value **)&NpcAction::TYPE_KEY,
    (const Json::Value *)&Json::Value::null);
    (Json::Value *)&v28,
    (const Json::Value **)&NpcAction::DATA_KEY,
    (Json::Value *)&v27,
    (const Json::Value **)&NpcAction::MODE_KEY,
    (Json::Value *)&v26,
    (const Json::Value **)&NpcAction::TEXT_KEY,
    (Json::Value *)&v25,
    (const Json::Value **)&NpcAction::BUTTON_NAME_KEY,
  if ( Json::Value::isInt((Json::Value *)&v29) != 1
    || Json::Value::isInt((Json::Value *)&v27) != 1
    || Json::Value::isString((Json::Value *)&v25) != 1
    || Json::Value::isString((Json::Value *)&v26) != 1 )
    goto LABEL_10;
  v5 = (unsigned __int8)Json::Value::asInt((Json::Value *)&v29, 0);
  if ( (_BYTE)v5 )
    if ( v5 == 1 )
    {
      v6 = operator new(0x1Cu);
      v6[4] = 1;
      v6[5] = 1;
      *((_DWORD *)v6 + 2) = &unk_28898CC;
      *((_DWORD *)v6 + 3) = &unk_28898CC;
      *(_DWORD *)v6 = &off_26F0F6C;
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = 0;
      *((_DWORD *)v6 + 6) = 0;
      goto LABEL_17;
    }
LABEL_10:
    v8 = 1;
    goto LABEL_11;
  v6 = operator new(0x10u);
  v6[4] = 0;
  v6[5] = 1;
  *((_DWORD *)v6 + 2) = &unk_28898CC;
  *((_DWORD *)v6 + 3) = &unk_28898CC;
  *(_DWORD *)v6 = &off_26F0F54;
LABEL_17:
  v7 = v6;
  sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
  Json::Value::asString(&v24, (int)&v25, &v23);
  EntityInteraction::setInteractText((int *)v7 + 2, &v24);
  v9 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v7[5] = Json::Value::asInt((Json::Value *)&v27, 0);
  sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
  Json::Value::asString(&v22, (int)&v26, &v21);
  EntityInteraction::setInteractText((int *)v7 + 3, &v22);
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( (*(int (__fastcall **)(_BYTE *, char *))(*(_DWORD *)v7 + 12))(v7, &v28) )
  else
    v8 = 0;
    *(_DWORD *)v3 = 0;
LABEL_11:
  Json::Value::~Value((Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v26);
  Json::Value::~Value((Json::Value *)&v27);
  Json::Value::~Value((Json::Value *)&v28);
  result = Json::Value::~Value((Json::Value *)&v29);
  if ( v8 )
    goto LABEL_12;
  if ( v7 )
    result = (Json::Value *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v7 + 4))(v7);
  return result;
}


void __fastcall NpcAction::~NpcAction(NpcAction *this)
{
  NpcAction *v1; // r5@1
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


char *__fastcall NpcAction::getButtonName(NpcAction *this)
{
  return (char *)this + 8;
}


char *__fastcall NpcAction::getText(NpcAction *this)
{
  return (char *)this + 12;
}


signed int __fastcall NpcAction::fromJson(NpcAction *this, const Json::Value *a2)
{
  return 1;
}


int __fastcall NpcAction::setMode(int result, char a2)
{
  *(_BYTE *)(result + 5) = a2;
  return result;
}
