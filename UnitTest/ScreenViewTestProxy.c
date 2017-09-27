

void __fastcall ScreenViewTestProxy::getControlProperty<std::string>(int *a1, int a2, int *a3, const char **a4)
{
  int *v4; // r4@1
  const char **v5; // r5@1
  int v6; // r6@1
  void *v7; // r0@1
  int v8; // r0@2
  const char *v9; // r5@2
  Json::Value *v10; // r6@2
  Json::Value *v11; // r5@4
  int v12; // r4@7
  unsigned int *v13; // r1@8
  unsigned int v14; // r0@10
  unsigned int *v15; // r5@14
  unsigned int v16; // r0@16
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  int v19; // [sp+4h] [bp+0h]@1
  UIControl *v20; // [sp+8h] [bp+4h]@1
  int v21; // [sp+Ch] [bp+8h]@7
  char v22; // [sp+18h] [bp+14h]@5

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(*(_DWORD *)a2 + 132);
  sub_DA73B4(&v19, a3);
  VisualTree::getControlByName((int)&v20, v6, (int)&v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v18 = __ldrex(v17);
        __strex(v18 - 1, v17);
      }
      while ( &v19 );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = UIControl::getPropertyBag(v20);
  v9 = *v5;
  v10 = (Json::Value *)(v8 + 8);
  if ( Json::Value::isNull((Json::Value *)(v8 + 8))
    || Json::Value::isObject(v10) != 1
    || (v11 = (Json::Value *)Json::Value::operator[]((int)v10, v9), Json::Value::isString(v11) != 1) )
    *v4 = (int)&unk_28898CC;
  else
    jsonValConversion<std::string>::as(v4, (int)&v22, (int)v11);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
}


signed int __fastcall ScreenViewTestProxy::getControlProperty<bool>(int a1, int *a2, const char **a3)
{
  const char **v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  int v6; // r0@2
  const char *v7; // r4@2
  Json::Value *v8; // r5@2
  signed int v9; // r4@3
  Json::Value *v10; // r4@5
  int v11; // r5@9
  unsigned int *v12; // r1@10
  unsigned int v13; // r0@12
  unsigned int *v14; // r6@16
  unsigned int v15; // r0@18
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  int v19; // [sp+4h] [bp-24h]@1
  UIControl *v20; // [sp+8h] [bp-20h]@1
  int v21; // [sp+Ch] [bp-1Ch]@9

  v3 = a3;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 132);
  sub_DA73B4(&v19, a2);
  VisualTree::getControlByName((int)&v20, v4, (int)&v19);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v19 - 4);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
  v6 = UIControl::getPropertyBag(v20);
  v7 = *v3;
  v8 = (Json::Value *)(v6 + 8);
  if ( Json::Value::isNull((Json::Value *)(v6 + 8)) )
    v9 = 0;
  else if ( Json::Value::isObject(v8) == 1 )
    v10 = (Json::Value *)Json::Value::operator[]((int)v8, v7);
    if ( Json::Value::isBool(v10) == 1 )
      v9 = Json::Value::asBool(v10, 0);
      v9 = 0;
  else
  v11 = v21;
  if ( v21 )
    v12 = (unsigned int *)(v21 + 4);
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
  return v9;
}


void __fastcall ScreenViewTestProxy::getControl(int a1, int a2, int *a3)
{
  ScreenViewTestProxy::getControl(a1, a2, a3);
}


void __fastcall ScreenViewTestProxy::getControl(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 132);
  sub_DA73B4(&v8, a3);
  VisualTree::getControlByName(v3, v4, (int)&v8);
  v5 = (void *)(v8 - 12);
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
      j_j_j_j_j__ZdlPv_9(v5);
  }
}


unsigned int __fastcall ScreenViewTestProxy::getControlProperty<glm::detail::tvec2<int>>(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // r6@1
  void *v7; // r0@1
  int v8; // r0@2
  int v9; // r3@2
  int v10; // r2@2
  unsigned int result; // r0@2
  int v12; // r4@2
  unsigned int *v13; // r1@3
  unsigned int *v14; // r5@9
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+4h] [bp-8h]@2
  int v18; // [sp+8h] [bp-4h]@2
  int v19; // [sp+Ch] [bp+0h]@1
  UIControl *v20; // [sp+10h] [bp+4h]@1
  int v21; // [sp+14h] [bp+8h]@2

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(*(_DWORD *)a2 + 132);
  sub_DA73B4(&v19, a3);
  VisualTree::getControlByName((int)&v20, v6, (int)&v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v16 = __ldrex(v15);
        __strex(v16 - 1, v15);
      }
      while ( &v19 );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v8 = UIControl::getPropertyBag(v20);
  v9 = *v5;
  v10 = *(_DWORD *)(*v5 - 12);
  v17 = 0;
  v18 = 0;
  result = PropertyBag::get<glm::detail::tvec2<int>>(v4, (Json::Value *)(v8 + 8), v10, v9, (int)&v17);
  v12 = v21;
  if ( v21 )
    v13 = (unsigned int *)(v21 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


void __fastcall ScreenViewTestProxy::getControlProperty<std::string>(int *a1, int a2, int *a3, const char **a4)
{
  ScreenViewTestProxy::getControlProperty<std::string>(a1, a2, a3, a4);
}
