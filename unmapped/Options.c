

int __fastcall Options::_shouldLoadGamepadMapping(int a1, int a2)
{
  int v2; // r0@1
  int v3; // r8@1
  int v4; // r6@1
  int v5; // r9@2
  const void *v6; // r4@2
  size_t v7; // r7@2
  _DWORD *v8; // r0@4
  size_t v9; // r5@4
  size_t v10; // r2@4
  int v11; // r0@6
  _DWORD *v12; // r1@13
  unsigned int v13; // r5@13
  unsigned int v14; // r4@13
  size_t v15; // r2@13
  int v16; // r0@15
  int *v17; // r0@20
  signed int v18; // r5@20
  int v19; // r4@20
  int *v20; // r0@20
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+4h] [bp-2Ch]@20
  int v25; // [sp+8h] [bp-28h]@20

  v2 = *(_DWORD *)(a2 + 8);
  v3 = a2 + 4;
  v4 = a2 + 4;
  if ( v2 )
  {
    v5 = a2 + 4;
    v6 = (const void *)dword_27CB7E0;
    v7 = *(_DWORD *)(dword_27CB7E0 - 12);
    do
    {
      v4 = v2;
      while ( 1 )
      {
        v8 = *(_DWORD **)(v4 + 16);
        v9 = *(v8 - 3);
        v10 = *(v8 - 3);
        if ( v9 > v7 )
          v10 = v7;
        v11 = memcmp(v8, v6, v10);
        if ( !v11 )
          v11 = v9 - v7;
        if ( v11 >= 0 )
          break;
        v4 = *(_DWORD *)(v4 + 12);
        if ( !v4 )
        {
          v4 = v5;
          goto LABEL_12;
        }
      }
      v2 = *(_DWORD *)(v4 + 8);
      v5 = v4;
    }
    while ( v2 );
  }
LABEL_12:
  if ( v4 == v3 )
    goto LABEL_38;
  v12 = *(_DWORD **)(v4 + 16);
  v13 = *(v12 - 3);
  v14 = *(_DWORD *)(dword_27CB7E0 - 12);
  v15 = *(_DWORD *)(dword_27CB7E0 - 12);
  if ( v14 > v13 )
    v15 = *(v12 - 3);
  v16 = memcmp((const void *)dword_27CB7E0, v12, v15);
  if ( !v16 )
    v16 = v14 - v13;
  if ( v16 < 0 )
    v4 = v3;
LABEL_38:
    v19 = 0;
  else
    v17 = sub_119C854(&v25, (int *)(v4 + 20));
    v18 = Util::toInt<int,(void *)0>((unsigned int *)v17, &v24);
    v19 = v24;
    v20 = (int *)(v25 - 12);
    if ( v24 != 1 )
      v19 = 0;
    if ( v20 != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    if ( v18 )
  return v19;
}


void __fastcall Options::_registerOptions(Options *this)
{
  Options::_registerOptions(this);
}


int __fastcall Options::getSensitivity(int a1, unsigned int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r2@2
  int v5; // r6@2
  int v6; // r1@3
  int v7; // r0@4
  Option *v8; // r0@16
  int v9; // r2@21
  int v10; // r1@22
  int v11; // r0@23
  int v12; // r2@29
  int v13; // r1@30
  int v14; // r0@31
  int v15; // r0@42
  int result; // r0@46

  v2 = a1;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 37) )
  {
    v5 = a1 + 4;
LABEL_21:
    v9 = *(_DWORD *)(v2 + 8);
    if ( v9 )
    {
      v10 = v5;
      do
      {
        v11 = v9;
        while ( *(_DWORD *)(v11 + 16) < 132 )
        {
          v11 = *(_DWORD *)(v11 + 12);
          if ( !v11 )
          {
            v11 = v10;
            goto LABEL_38;
          }
        }
        v9 = *(_DWORD *)(v11 + 8);
        v10 = v11;
      }
      while ( v9 );
    }
    else
      v11 = v5;
LABEL_38:
    if ( v11 == v5 )
      v15 = 0;
      if ( *(_DWORD *)(v11 + 16) > 132 )
        v11 = v5;
      if ( v11 == v5 )
        v15 = 0;
      else
        v15 = *(_DWORD *)(v11 + 20);
    return j_j_j__ZNK6Option8getFloatE9InputMode(v15, v3);
  }
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a1 + 4;
  if ( v4 )
    v6 = a1 + 4;
    do
      v7 = v4;
      while ( *(_DWORD *)(v7 + 16) < 84 )
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
          v7 = v6;
          goto LABEL_12;
      v4 = *(_DWORD *)(v7 + 8);
      v6 = v7;
    while ( v4 );
  else
    v7 = a1 + 4;
LABEL_12:
  if ( v7 == v5 )
    v8 = 0;
    if ( *(_DWORD *)(v7 + 16) > 84 )
      v7 = v2 + 4;
    if ( v7 == v5 )
      v8 = 0;
      v8 = *(Option **)(v7 + 20);
  if ( Option::getBool(v8) )
    goto LABEL_21;
  v12 = *(_DWORD *)(v2 + 8);
  if ( v12 )
    v13 = v2 + 4;
      v14 = v12;
      while ( *(_DWORD *)(v14 + 16) < 44 )
        v14 = *(_DWORD *)(v14 + 12);
        if ( !v14 )
          v14 = v13;
          goto LABEL_48;
      v12 = *(_DWORD *)(v14 + 8);
      v13 = v14;
    while ( v12 );
    v14 = v2 + 4;
LABEL_48:
  if ( v14 == v5 )
    goto LABEL_56;
  if ( *(_DWORD *)(v14 + 16) > 44 )
LABEL_56:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*(Option **)(v14 + 20));
  return result;
}


int __fastcall Options::getDevLogPriorityFilter(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 116 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 116 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getInterfaceOpacity(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 156 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 156 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getRequireWebsocketEncryption(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 130 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 130 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevBenchmarkModeTime(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 94 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 94 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setDevShowDevConsoleButton(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 143 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 143 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRMirrorTexture(Options *this)
{
  Options *v1; // r4@1
  int result; // r0@2
  int v3; // r3@3
  int v4; // r0@3
  int v5; // r2@4
  int v6; // r1@5

  v1 = this;
  if ( mce::RenderDevice::checkFeatureSupport() == 1 )
  {
    v3 = *((_DWORD *)v1 + 2);
    v4 = (int)v1 + 4;
    if ( v3 )
    {
      v5 = (int)v1 + 4;
      do
      {
        v6 = v3;
        while ( *(_DWORD *)(v6 + 16) < 77 )
        {
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v5;
            goto LABEL_12;
          }
        }
        v3 = *(_DWORD *)(v6 + 8);
        v5 = v6;
      }
      while ( v3 );
    }
    else
      v6 = (int)v1 + 4;
LABEL_12:
    if ( v6 == v4 )
      goto LABEL_20;
    if ( *(_DWORD *)(v6 + 16) > 77 )
LABEL_20:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v6 + 20));
  }
  else
    result = 0;
  return result;
}


int __fastcall Options::setDevRenderCoordinateSystems(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 99 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 99 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setDevFindMobs(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 163 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 163 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setOverrideUsername(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r3@1
  int v4; // r0@1
  int v5; // r2@2
  int v6; // r1@3
  int result; // r0@14

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 28), a2);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = v2 + 4;
  if ( v3 )
  {
    v5 = v2 + 4;
    do
    {
      v6 = v3;
      while ( *(_DWORD *)(v6 + 16) < 0 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v3 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v3 );
  }
  else
    v6 = v2 + 4;
LABEL_10:
  if ( v6 == v4 )
    goto LABEL_18;
  if ( *(_DWORD *)(v6 + 16) > 0 )
LABEL_18:
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv(0);
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv(*(Option **)(v6 + 20));
  return result;
}


int __fastcall Options::getRenderDebug(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 118 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 118 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setDevRenderGoalState(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 98 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 98 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setInterfaceOpacity(Options *this, float a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  float v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 156 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 156 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN11FloatOption3setEf(v7, v4);
  return result;
}


int __fastcall Options::getResetPlayerAlignment(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 46 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 46 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRStickyMining(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 67 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 67 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setNumberOfOwnedRealms(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 125 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 125 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::_loadSpecialOptions(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r11@1
  int v4; // r0@1
  int v5; // r10@1
  int v6; // r7@1
  void *v7; // r6@2
  int v8; // r8@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r5@4
  size_t v12; // r2@4
  int v13; // r0@6
  char *v14; // r4@13
  _DWORD *v15; // r1@13
  unsigned int v16; // r5@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int v19; // r0@15
  int v20; // r0@24
  int v21; // r7@24
  void *v22; // r6@25
  int v23; // r8@25
  size_t v24; // r4@25
  _DWORD *v25; // r0@27
  size_t v26; // r5@27
  size_t v27; // r2@27
  int v28; // r0@29
  char *v29; // r4@36
  _DWORD *v30; // r1@36
  unsigned int v31; // r5@36
  unsigned int v32; // r6@36
  size_t v33; // r2@36
  int v34; // r0@38
  int v35; // r2@46
  int v36; // r3@48
  int *v37; // r5@48
  int v38; // r4@48
  int v39; // r1@49
  int v40; // r0@50
  Option *v41; // r0@62
  int v42; // r2@67
  int v43; // r0@67
  int v44; // r1@68
  Option *v45; // r0@78
  const void **v46; // r6@80
  int v47; // r0@80
  int v48; // r11@80
  int v49; // r7@80
  const void *v50; // r4@81
  int v51; // r9@81
  size_t v52; // r8@81
  _DWORD *v53; // r0@83
  size_t v54; // r5@83
  size_t v55; // r2@83
  int v56; // r0@85
  _DWORD *v57; // r1@92
  unsigned int v58; // r4@92
  unsigned int v59; // r5@92
  size_t v60; // r2@92
  AppPlatform *v61; // r0@94
  int v62; // r2@102
  int v63; // r0@102
  int v64; // r1@103
  BoolOption *v65; // r4@113
  int v66; // r0@120
  int v67; // r7@120
  void *v68; // r4@121
  int v69; // r8@121
  size_t v70; // r6@121
  _DWORD *v71; // r0@123
  size_t v72; // r5@123
  size_t v73; // r2@123
  int v74; // r0@125
  char *v75; // r4@132
  _DWORD *v76; // r1@132
  unsigned int v77; // r5@132
  unsigned int v78; // r6@132
  size_t v79; // r2@132
  int v80; // r0@134
  int v81; // r6@142
  int v82; // r2@146
  int v83; // r0@146
  int v84; // r1@147
  Option *v85; // r4@157
  int v86; // r2@164
  int v87; // r0@164
  int v88; // r1@165
  Option *v89; // r0@175
  const void **v90; // r8@179
  int v91; // r0@179
  int v92; // r7@179
  const void *v93; // r4@180
  int v94; // r9@180
  size_t v95; // r6@180
  _DWORD *v96; // r0@182
  size_t v97; // r5@182
  size_t v98; // r2@182
  int v99; // r0@184
  int v100; // r6@190
  _DWORD *v101; // r1@191
  unsigned int v102; // r4@191
  unsigned int v103; // r5@191
  size_t v104; // r2@191
  int v105; // r0@193
  int v106; // r3@198
  int v107; // r0@198
  int v108; // r2@199
  int v109; // r6@205
  Option *v110; // r4@209
  int v111; // r1@213
  int v112; // r2@218
  int v113; // r0@218
  int v114; // r1@219
  Option *v115; // r0@229
  const void **v116; // r8@233
  int result; // r0@233
  const void *v118; // r4@234
  int v119; // r6@234
  size_t v120; // r7@234
  _DWORD *v121; // r0@236
  size_t v122; // r5@236
  size_t v123; // r2@236
  _DWORD *v124; // r1@245
  unsigned int v125; // r4@245
  unsigned int v126; // r5@245
  size_t v127; // r2@245
  int v128; // r3@252
  int v129; // r2@253
  int v130; // r0@254
  int v131; // r6@261
  Option *v132; // r4@265
  int v133; // r1@269
  unsigned int *v134; // r2@275
  signed int v135; // r1@277
  unsigned int *v136; // r2@279
  signed int v137; // r1@281
  unsigned int *v138; // r2@283
  signed int v139; // r1@285
  int v140; // [sp+0h] [bp-90h]@233
  int v141; // [sp+4h] [bp-8Ch]@78
  int v142; // [sp+8h] [bp-88h]@78
  int *v143; // [sp+Ch] [bp-84h]@78
  int v144; // [sp+10h] [bp-80h]@1
  void *v145; // [sp+14h] [bp-7Ch]@269
  int v146; // [sp+20h] [bp-70h]@252
  void *v147; // [sp+24h] [bp-6Ch]@213
  int v148; // [sp+30h] [bp-60h]@198
  void *ptr; // [sp+34h] [bp-5Ch]@161
  void *v150; // [sp+40h] [bp-50h]@142
  int v151; // [sp+44h] [bp-4Ch]@142
  int v152; // [sp+4Ch] [bp-44h]@142
  void *v153; // [sp+54h] [bp-3Ch]@120
  bool v154[4]; // [sp+58h] [bp-38h]@46
  void *s1; // [sp+60h] [bp-30h]@24
  void *s2; // [sp+68h] [bp-28h]@1

  v2 = a2;
  v144 = a1;
  sub_119C884(&s2, "gfx_pixeldensity");
  v3 = v2 + 4;
  v4 = *(_DWORD *)(v2 + 8);
  v5 = v2 + 4;
  v6 = v2 + 4;
  if ( v4 )
  {
    v7 = s2;
    v8 = v2 + 4;
    v9 = *((_DWORD *)s2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    v14 = (char *)s2;
    v6 = v2 + 4;
  else
    v15 = *(_DWORD **)(v6 + 16);
    v16 = *((_DWORD *)s2 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)s2 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(s2, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 < 0 )
      v6 = v2 + 4;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
    else
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14 - 12);
  if ( v6 != v3 )
    Option::read((const void **)(v6 + 20), (signed int *)(v144 + 64));
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::erase(
      v2,
      v6);
  sub_119C884(&s1, "game_difficulty");
  v20 = *(_DWORD *)(v2 + 8);
  v21 = v2 + 4;
  if ( v20 )
    v22 = s1;
    v23 = v2 + 4;
    v24 = *((_DWORD *)s1 - 3);
      v21 = v20;
        v25 = *(_DWORD **)(v21 + 16);
        v26 = *(v25 - 3);
        v27 = *(v25 - 3);
        if ( v26 > v24 )
          v27 = v24;
        v28 = memcmp(v25, v22, v27);
        if ( !v28 )
          v28 = v26 - v24;
        if ( v28 >= 0 )
        v21 = *(_DWORD *)(v21 + 12);
        if ( !v21 )
          v21 = v23;
          goto LABEL_35;
      v20 = *(_DWORD *)(v21 + 8);
      v23 = v21;
    while ( v20 );
LABEL_35:
  if ( v21 == v3 )
    v29 = (char *)s1;
    v21 = v2 + 4;
    v30 = *(_DWORD **)(v21 + 16);
    v31 = *((_DWORD *)s1 - 3);
    v32 = *(v30 - 3);
    v33 = *((_DWORD *)s1 - 3);
    if ( v31 > v32 )
      v33 = *(v30 - 3);
    v34 = memcmp(s1, v30, v33);
    if ( !v34 )
      v34 = v31 - v32;
    if ( v34 < 0 )
      v21 = v2 + 4;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v29 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29 - 12);
    v38 = v144 + 4;
    v37 = (int *)(v144 + 8);
    *(_DWORD *)v154 = -1;
    Option::read((const void **)(v21 + 20), (_DWORD *)v154);
    v35 = *(_DWORD *)v154;
    if ( *(_DWORD *)v154 == 2 )
      v35 = 1;
      *(_DWORD *)v154 = 1;
    v36 = *(_DWORD *)(v144 + 8);
    if ( v36 )
      v39 = v144 + 4;
        v40 = v36;
        while ( *(_DWORD *)(v40 + 16) < 1 )
          v40 = *(_DWORD *)(v40 + 12);
          if ( !v40 )
          {
            v40 = v39;
            goto LABEL_58;
          }
        v36 = *(_DWORD *)(v40 + 8);
        v39 = v40;
      while ( v36 );
      v40 = v144 + 4;
LABEL_58:
    if ( v40 == v38 )
      v41 = 0;
      if ( *(_DWORD *)(v40 + 16) > 1 )
        v40 = v144 + 4;
      if ( v40 == v38 )
        v41 = 0;
      else
        v41 = *(Option **)(v40 + 20);
    Option::set(v41, v35);
      v21);
  v42 = *v37;
  v43 = v38;
  if ( *v37 )
    v44 = v38;
      v43 = v42;
      while ( *(_DWORD *)(v43 + 16) < 6 )
        v43 = *(_DWORD *)(v43 + 12);
        if ( !v43 )
          v43 = v44;
          goto LABEL_74;
      v42 = *(_DWORD *)(v43 + 8);
      v44 = v43;
    while ( v42 );
LABEL_74:
  if ( v43 == v38 )
    goto LABEL_301;
  if ( *(_DWORD *)(v43 + 16) > 6 )
    v43 = v38;
LABEL_301:
    v143 = v37;
    v45 = 0;
    v141 = v2 + 4;
    v142 = v38;
    v45 = *(Option **)(v43 + 20);
  v46 = (const void **)Option::getSaveTag(v45);
  v47 = *(_DWORD *)(v2 + 8);
  v48 = v2;
  v49 = v2 + 4;
  if ( v47 )
    v50 = *v46;
    v51 = v2 + 4;
    v52 = *((_DWORD *)*v46 - 3);
      v49 = v47;
        v53 = *(_DWORD **)(v49 + 16);
        v54 = *(v53 - 3);
        v55 = *(v53 - 3);
        if ( v54 > v52 )
          v55 = v52;
        v56 = memcmp(v53, v50, v55);
        if ( !v56 )
          v56 = v54 - v52;
        if ( v56 >= 0 )
        v49 = *(_DWORD *)(v49 + 12);
        if ( !v49 )
          v49 = v51;
          goto LABEL_91;
      v47 = *(_DWORD *)(v49 + 8);
      v51 = v49;
    while ( v47 );
LABEL_91:
  if ( v49 != v141 )
    v57 = *(_DWORD **)(v49 + 16);
    v58 = *((_DWORD *)*v46 - 3);
    v59 = *(v57 - 3);
    v60 = *((_DWORD *)*v46 - 3);
    if ( v58 > v59 )
      v60 = *(v57 - 3);
    v61 = (AppPlatform *)memcmp(*v46, v57, v60);
    if ( !v61 )
      v61 = (AppPlatform *)(v58 - v59);
    if ( (signed int)v61 < 0 )
      v49 = v141;
    if ( v49 != v141 )
      if ( (unsigned int)AppPlatform::getAvailableHWThreadCount(v61) < 2 )
        Option::read((int *)(v49 + 20), v154);
        v154[0] = 0;
      v62 = *v143;
      v63 = v142;
      if ( *v143 )
        v64 = v142;
        do
          v63 = v62;
          while ( *(_DWORD *)(v63 + 16) < 6 )
            v63 = *(_DWORD *)(v63 + 12);
            if ( !v63 )
            {
              v63 = v64;
              goto LABEL_109;
            }
          v62 = *(_DWORD *)(v63 + 8);
          v64 = v63;
        while ( v62 );
LABEL_109:
      if ( v63 == v142 )
        v65 = 0;
        if ( *(_DWORD *)(v63 + 16) > 6 )
          v63 = v142;
        if ( v63 == v142 )
          v65 = 0;
        else
          v65 = *(BoolOption **)(v63 + 20);
      if ( !Option::hasOverrideSource(v65) )
        BoolOption::set(v65, v154[0]);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::erase(
        v48,
        v49);
  sub_119C884(&v153, "gfx_renderdistance");
  v66 = *(_DWORD *)(v48 + 8);
  v67 = v5;
  if ( v66 )
    v68 = v153;
    v69 = v5;
    v70 = *((_DWORD *)v153 - 3);
      v67 = v66;
        v71 = *(_DWORD **)(v67 + 16);
        v72 = *(v71 - 3);
        v73 = *(v71 - 3);
        if ( v72 > v70 )
          v73 = v70;
        v74 = memcmp(v71, v68, v73);
        if ( !v74 )
          v74 = v72 - v70;
        if ( v74 >= 0 )
        v67 = *(_DWORD *)(v67 + 12);
        if ( !v67 )
          v67 = v69;
          goto LABEL_131;
      v66 = *(_DWORD *)(v67 + 8);
      v69 = v67;
    while ( v66 );
LABEL_131:
  if ( v67 == v141 )
    v75 = (char *)v153;
    v67 = v5;
    v76 = *(_DWORD **)(v67 + 16);
    v77 = *((_DWORD *)v153 - 3);
    v78 = *(v76 - 3);
    v79 = *((_DWORD *)v153 - 3);
    if ( v77 > v78 )
      v79 = *(v76 - 3);
    v80 = memcmp(v153, v76, v79);
    if ( !v80 )
      v80 = v77 - v78;
    if ( v80 < 0 )
      v67 = v141;
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v75 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75 - 12);
  if ( v67 != v141 )
    Option::read((const void **)(v67 + 20), &v152);
    (*(void (__fastcall **)(void **))(**(_DWORD **)(v144 + 40) + 8))(&v150);
    v81 = ((v151 - (signed int)v150) >> 2) - 1;
    if ( 3 - v152 < v81 )
      v81 = 3 - v152;
    if ( v150 )
      operator delete(v150);
    v82 = *v143;
    v83 = v142;
    if ( *v143 )
      v84 = v142;
        v83 = v82;
        while ( *(_DWORD *)(v83 + 16) < 19 )
          v83 = *(_DWORD *)(v83 + 12);
          if ( !v83 )
            v83 = v84;
            goto LABEL_153;
        v82 = *(_DWORD *)(v83 + 8);
        v84 = v83;
      while ( v82 );
LABEL_153:
    if ( v83 == v142 )
      v85 = 0;
      if ( *(_DWORD *)(v83 + 16) > 19 )
        v83 = v142;
      if ( v83 == v142 )
        v85 = 0;
        v85 = *(Option **)(v83 + 20);
    (*(void (__fastcall **)(void **))(**(_DWORD **)(v144 + 40) + 8))(&ptr);
    Option::set(v85, *((_DWORD *)ptr + v81));
    if ( ptr )
      operator delete(ptr);
      v48,
      v67);
  v86 = *v143;
  v87 = v142;
  if ( *v143 )
    v88 = v142;
      v87 = v86;
      while ( *(_DWORD *)(v87 + 16) < 19 )
        v87 = *(_DWORD *)(v87 + 12);
        if ( !v87 )
          v87 = v88;
          goto LABEL_171;
      v86 = *(_DWORD *)(v87 + 8);
      v88 = v87;
    while ( v86 );
LABEL_171:
  if ( v87 == v142 )
    v89 = 0;
    if ( *(_DWORD *)(v87 + 16) > 19 )
      v87 = v142;
    if ( v87 == v142 )
      v89 = 0;
      v89 = *(Option **)(v87 + 20);
  v90 = (const void **)Option::getSaveTag(v89);
  v91 = *(_DWORD *)(v48 + 8);
  v92 = v5;
  if ( v91 )
    v93 = *v90;
    v94 = v5;
    v95 = *((_DWORD *)*v90 - 3);
      v92 = v91;
        v96 = *(_DWORD **)(v92 + 16);
        v97 = *(v96 - 3);
        v98 = *(v96 - 3);
        if ( v97 > v95 )
          v98 = v95;
        v99 = memcmp(v96, v93, v98);
        if ( !v99 )
          v99 = v97 - v95;
        if ( v99 >= 0 )
        v92 = *(_DWORD *)(v92 + 12);
        if ( !v92 )
          v92 = v94;
          goto LABEL_190;
      v91 = *(_DWORD *)(v92 + 8);
      v94 = v92;
    while ( v91 );
LABEL_190:
  v100 = v48;
  if ( v92 != v141 )
    v101 = *(_DWORD **)(v92 + 16);
    v102 = *((_DWORD *)*v90 - 3);
    v103 = *(v101 - 3);
    v104 = *((_DWORD *)*v90 - 3);
    if ( v102 > v103 )
      v104 = *(v101 - 3);
    v105 = memcmp(*v90, v101, v104);
    if ( !v105 )
      v105 = v102 - v103;
    if ( v105 < 0 )
      v92 = v141;
    if ( v92 != v141 )
      v148 = 0;
      Option::read((const void **)(v92 + 20), &v148);
      v106 = *v143;
      v107 = v142;
        v108 = v142;
          v107 = v106;
          while ( *(_DWORD *)(v107 + 16) < 19 )
            v107 = *(_DWORD *)(v107 + 12);
            if ( !v107 )
              v107 = v108;
              goto LABEL_205;
          v106 = *(_DWORD *)(v107 + 8);
          v108 = v107;
        while ( v106 );
LABEL_205:
      v109 = v148 / 16;
      if ( v107 == v142 )
        v110 = 0;
        if ( *(_DWORD *)(v107 + 16) > 19 )
          v107 = v142;
        if ( v107 == v142 )
          v110 = 0;
          v110 = *(Option **)(v107 + 20);
      (*(void (__fastcall **)(void **))(**(_DWORD **)(v144 + 40) + 8))(&v147);
      v111 = *(_DWORD *)v147;
      if ( *(_DWORD *)v147 < v109 )
        v111 = v109;
      Option::set(v110, v111);
      v100 = v48;
      if ( v147 )
        operator delete(v147);
        v92);
  v112 = *v143;
  v113 = v142;
    v114 = v142;
      v113 = v112;
      while ( *(_DWORD *)(v113 + 16) < 51 )
        v113 = *(_DWORD *)(v113 + 12);
        if ( !v113 )
          v113 = v114;
          goto LABEL_225;
      v112 = *(_DWORD *)(v113 + 8);
      v114 = v113;
    while ( v112 );
LABEL_225:
  if ( v113 == v142 )
    v115 = 0;
    if ( *(_DWORD *)(v113 + 16) > 51 )
      v113 = v142;
    if ( v113 == v142 )
      v115 = 0;
      v115 = *(Option **)(v113 + 20);
  v116 = (const void **)Option::getSaveTag(v115);
  result = *(_DWORD *)(v100 + 8);
  v140 = v100;
  if ( result )
    v118 = *v116;
    v119 = v5;
    v120 = *((_DWORD *)*v116 - 3);
      v5 = result;
        v121 = *(_DWORD **)(v5 + 16);
        v122 = *(v121 - 3);
        v123 = *(v121 - 3);
        if ( v122 > v120 )
          v123 = v120;
        result = memcmp(v121, v118, v123);
        if ( !result )
          result = v122 - v120;
        if ( result >= 0 )
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
          v5 = v119;
          goto LABEL_244;
      result = *(_DWORD *)(v5 + 8);
      v119 = v5;
    while ( result );
LABEL_244:
  if ( v5 != v141 )
    v124 = *(_DWORD **)(v5 + 16);
    v125 = *((_DWORD *)*v116 - 3);
    v126 = *(v124 - 3);
    v127 = *((_DWORD *)*v116 - 3);
    if ( v125 > v126 )
      v127 = *(v124 - 3);
    result = memcmp(*v116, v124, v127);
    if ( !result )
      result = v125 - v126;
    if ( result < 0 )
      v5 = v141;
    if ( v5 != v141 )
      v146 = 0;
      Option::read((const void **)(v5 + 20), &v146);
      v128 = *v143;
        v129 = v142;
          v130 = v128;
          while ( *(_DWORD *)(v130 + 16) < 51 )
            v130 = *(_DWORD *)(v130 + 12);
            if ( !v130 )
              v130 = v129;
              goto LABEL_261;
          v128 = *(_DWORD *)(v130 + 8);
          v129 = v130;
        while ( v128 );
        v130 = v142;
LABEL_261:
      v131 = v146 / 16;
      if ( v130 == v142 )
        v132 = 0;
        if ( *(_DWORD *)(v130 + 16) > 51 )
          v130 = v142;
        if ( v130 == v142 )
          v132 = 0;
          v132 = *(Option **)(v130 + 20);
      (*(void (__fastcall **)(void **))(**(_DWORD **)(v144 + 40) + 12))(&v145);
      v133 = *(_DWORD *)v145;
      if ( *(_DWORD *)v145 < v131 )
        v133 = v131;
      Option::set(v132, v133);
      if ( v145 )
        operator delete(v145);
      result = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::erase(
                 v140,
                 v5);
  return result;
}


int __fastcall Options::setRealmsEnvironment(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < 105 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > 105 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*(Option **)(v5 + 20), a2);
  return result;
}


char *__fastcall Options::getRecentSkinIds(Options *this)
{
  Options *v1; // r8@1
  int v2; // r0@1
  char *v3; // r11@1
  _DWORD *v4; // r7@1
  unsigned int v5; // r1@1
  int v6; // r9@4
  int *v7; // r1@5
  _DWORD *v8; // r4@5
  int (**v9)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@5
  unsigned int *v10; // r2@6
  signed int v11; // r6@8
  int *v12; // r5@12
  int (**v13)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@12
  int *v14; // r0@13
  int v15; // r2@16
  int v16; // r7@16
  int *v17; // r6@16
  int v18; // r1@17
  int v19; // r0@18
  Option *v20; // r0@29
  int *v21; // r0@33
  int v22; // r2@33
  int *v23; // r6@33
  int v24; // r1@34
  int v25; // r0@35
  Option *v26; // r0@46
  int *v27; // r0@50
  int v28; // r2@50
  int *v29; // r5@50
  int v30; // r1@51
  int v31; // r0@52
  Option *v32; // r0@63
  int *v33; // r0@67
  int v35; // [sp+0h] [bp-28h]@5

  v1 = this;
  v3 = (char *)this + 68;
  v2 = *((_DWORD *)this + 17);
  v4 = (_DWORD *)*((_DWORD *)v3 + 1);
  v5 = ((signed int)v4 - v2) >> 2;
  if ( v5 > 2 )
  {
    if ( v5 >= 4 )
    {
      v6 = v2 + 12;
      if ( v4 != (_DWORD *)(v2 + 12) )
      {
        v7 = &v35;
        v8 = (_DWORD *)(v2 + 12);
        v9 = &pthread_create;
        do
        {
          v14 = (int *)(*v8 - 12);
          if ( v14 != &dword_28898C0 )
          {
            v10 = (unsigned int *)(*v8 - 4);
            if ( v9 )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 <= 0 )
              v12 = v7;
              v13 = v9;
              j_j_j_j_j__ZdlPv_9_1(v14);
              v9 = v13;
              v7 = v12;
          }
          ++v8;
        }
        while ( v8 != v4 );
      }
      *((_DWORD *)v1 + 18) = v6;
    }
  }
  else
    std::vector<std::string,std::allocator<std::string>>::_M_default_append((int)v3, 3 - v5);
  v15 = *((_DWORD *)v1 + 2);
  v16 = (int)v1 + 4;
  v17 = (int *)*((_DWORD *)v1 + 17);
  if ( v15 )
    v18 = (int)v1 + 4;
    do
      v19 = v15;
      while ( *(_DWORD *)(v19 + 16) < 10 )
        v19 = *(_DWORD *)(v19 + 12);
        if ( !v19 )
          v19 = v18;
          goto LABEL_25;
      v15 = *(_DWORD *)(v19 + 8);
      v18 = v19;
    while ( v15 );
    v19 = (int)v1 + 4;
LABEL_25:
  if ( v19 == v16 )
    v20 = 0;
    if ( *(_DWORD *)(v19 + 16) > 10 )
      v19 = (int)v1 + 4;
    if ( v19 == v16 )
      v20 = 0;
    else
      v20 = *(Option **)(v19 + 20);
  v21 = (int *)Option::getString(v20);
  EntityInteraction::setInteractText(v17, v21);
  v22 = *((_DWORD *)v1 + 2);
  v23 = (int *)(*((_DWORD *)v1 + 17) + 4);
  if ( v22 )
    v24 = (int)v1 + 4;
      v25 = v22;
      while ( *(_DWORD *)(v25 + 16) < 11 )
        v25 = *(_DWORD *)(v25 + 12);
        if ( !v25 )
          v25 = v24;
          goto LABEL_42;
      v22 = *(_DWORD *)(v25 + 8);
      v24 = v25;
    while ( v22 );
    v25 = (int)v1 + 4;
LABEL_42:
  if ( v25 == v16 )
    v26 = 0;
    if ( *(_DWORD *)(v25 + 16) > 11 )
      v25 = (int)v1 + 4;
    if ( v25 == v16 )
      v26 = 0;
      v26 = *(Option **)(v25 + 20);
  v27 = (int *)Option::getString(v26);
  EntityInteraction::setInteractText(v23, v27);
  v28 = *((_DWORD *)v1 + 2);
  v29 = (int *)(*((_DWORD *)v1 + 17) + 8);
  if ( v28 )
    v30 = (int)v1 + 4;
      v31 = v28;
      while ( *(_DWORD *)(v31 + 16) < 12 )
        v31 = *(_DWORD *)(v31 + 12);
        if ( !v31 )
          v31 = v30;
          goto LABEL_59;
      v28 = *(_DWORD *)(v31 + 8);
      v30 = v31;
    while ( v28 );
    v31 = (int)v1 + 4;
LABEL_59:
  if ( v31 == v16 )
    v32 = 0;
    if ( *(_DWORD *)(v31 + 16) > 12 )
      v31 = (int)v1 + 4;
    if ( v31 == v16 )
      v32 = 0;
      v32 = *(Option **)(v31 + 20);
  v33 = (int *)Option::getString(v32);
  EntityInteraction::setInteractText(v29, v33);
  return v3;
}


int __fastcall Options::getMultiPlayerGame(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 140 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 140 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setLastCustomSkinId(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 9 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 9 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::getDevConnectionQuality(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 95 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 95 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setIngamePlayerNames(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 154 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 154 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


void *__fastcall Options::getRealmsRelyingParty(Options *this)
{
  return &unk_27CB7D4;
}


int __fastcall Options::getGameSensitivity(int a1, unsigned int a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r0@1
  int v5; // r3@3
  int v6; // r1@4
  int v7; // r12@11
  int v8; // r3@12
  int result; // r0@23

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 37);
  v4 = a1 + 4;
  if ( v3 )
  {
    if ( v2 )
    {
      v5 = v4;
      do
      {
        v6 = v2;
        while ( *(_DWORD *)(v6 + 16) < 139 )
        {
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v5;
            goto LABEL_19;
          }
        }
        v2 = *(_DWORD *)(v6 + 8);
        v5 = v6;
      }
      while ( v2 );
    }
    else
      v6 = v4;
LABEL_19:
    if ( v6 == v4 )
      goto LABEL_34;
    if ( *(_DWORD *)(v6 + 16) > 139 )
LABEL_34:
      result = j_j_j__ZNK6Option8getFloatEv(0);
      result = j_j_j__ZNK6Option8getFloatEv(*(Option **)(v6 + 20));
  }
  else
      v7 = v4;
        v8 = v2;
        while ( *(_DWORD *)(v8 + 16) < 138 )
          v8 = *(_DWORD *)(v8 + 12);
          if ( !v8 )
            v8 = v7;
            goto LABEL_26;
        v2 = *(_DWORD *)(v8 + 8);
        v7 = v8;
      v8 = v4;
LABEL_26:
    if ( v8 == v4 )
      goto LABEL_35;
    if ( *(_DWORD *)(v8 + 16) > 138 )
LABEL_35:
      result = j_j_j__ZNK6Option8getFloatE9InputMode(0, a2);
      result = j_j_j__ZNK6Option8getFloatE9InputMode(*(_DWORD *)(v8 + 20), a2);
  return result;
}


int __fastcall Options::getVRHandControlsItem(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 78 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 78 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevShowChunkMap(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 90 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 90 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRTapTurn(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 69 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 69 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getHasEverLoggedIntoXbl(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 13 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 13 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getUIProfile(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 41 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 41 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


signed int __fastcall Options::checkVersionUpdate(Options *this)
{
  char *v1; // r1@1
  char *v2; // r0@1
  char *v3; // r7@2
  char *v4; // r3@2
  char *v5; // r2@3
  Option *v6; // r8@14
  char *v7; // r7@19
  char *v8; // r3@19
  char *v9; // r2@20
  Option *v10; // r9@31
  char *v11; // r7@36
  char *v12; // r3@36
  char *v13; // r2@37
  Option *v14; // r10@48
  char *v15; // r3@53
  char *v16; // r2@54
  Option *v17; // r7@65
  int v18; // r6@70

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v1;
    v4 = v2;
    do
    {
      v5 = v3;
      while ( *((_DWORD *)v5 + 4) < 120 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v3 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v3 );
  }
  else
    v5 = v2;
LABEL_10:
  if ( v5 == v2 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 120 )
      v5 = v2;
    if ( v5 == v2 )
      v6 = 0;
    else
      v6 = (Option *)*((_DWORD *)v5 + 5);
    v7 = v1;
    v8 = v2;
      v9 = v7;
      while ( *((_DWORD *)v9 + 4) < 121 )
        v9 = (char *)*((_DWORD *)v9 + 3);
        if ( !v9 )
          v9 = v8;
          goto LABEL_27;
      v7 = (char *)*((_DWORD *)v9 + 2);
      v8 = v9;
    while ( v7 );
    v9 = v2;
LABEL_27:
  if ( v9 == v2 )
    v10 = 0;
    if ( *((_DWORD *)v9 + 4) > 121 )
      v9 = v2;
    if ( v9 == v2 )
      v10 = 0;
      v10 = (Option *)*((_DWORD *)v9 + 5);
    v11 = v1;
    v12 = v2;
      v13 = v11;
      while ( *((_DWORD *)v13 + 4) < 122 )
        v13 = (char *)*((_DWORD *)v13 + 3);
        if ( !v13 )
          v13 = v12;
          goto LABEL_44;
      v11 = (char *)*((_DWORD *)v13 + 2);
      v12 = v13;
    while ( v11 );
    v13 = v2;
LABEL_44:
  if ( v13 == v2 )
    v14 = 0;
    if ( *((_DWORD *)v13 + 4) > 122 )
      v13 = v2;
    if ( v13 == v2 )
      v14 = 0;
      v14 = (Option *)*((_DWORD *)v13 + 5);
    v15 = v2;
      v16 = v1;
      while ( *((_DWORD *)v16 + 4) < 123 )
        v16 = (char *)*((_DWORD *)v16 + 3);
        if ( !v16 )
          v16 = v15;
          goto LABEL_61;
      v1 = (char *)*((_DWORD *)v16 + 2);
      v15 = v16;
    while ( v1 );
    v16 = v2;
LABEL_61:
  if ( v16 == v2 )
    v17 = 0;
    if ( *((_DWORD *)v16 + 4) > 123 )
      v16 = v2;
    if ( v16 == v2 )
      v17 = 0;
      v17 = (Option *)*((_DWORD *)v16 + 5);
  if ( Option::getInt(v6) == 1 )
    v18 = 2;
    if ( Option::getInt(v10) == 2 )
      if ( Option::getInt(v14) )
        v18 = 2;
      else
        if ( Option::getInt(v17) == 81 )
          return 0;
  Option::set(v6, 1);
  Option::set(v10, v18);
  Option::set(v14, 0);
  Option::set(v17, 81);
  return 1;
}


int __fastcall Options::getDevRenderCoordinateSystems(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 99 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 99 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRGazePitchBoost(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 62 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 62 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::getVRRightStickPitchAssistSteppings(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 88 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 88 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


  if ( Options::getLimitWorldSize(v2) == 1 )
{
    if ( *(_DWORD *)(v1 + 516) )
    {
      v4 = LevelData::getGenerator((LevelData *)(v1 + 592));
    }
    else if ( MinecraftScreenModel::isPreGame(*(MinecraftScreenModel **)(v1 + 424)) )
      v4 = 5;
    else
      v5 = MinecraftScreenModel::getClientModel(*(MinecraftScreenModel **)(v1 + 424));
      v4 = (*(int (**)(void))(*(_DWORD *)v5 + 40))();
    result = v4 != 0;
  }
  else
  {
    result = 1;
  return result;
}


int __fastcall Options::getDevRenderBoundingBoxes(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 96 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 96 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::get(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < a2 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > a2 )
    v5 = v3;
LABEL_18:
    result = 0;
    result = *(_DWORD *)(v5 + 20);
  return result;
}


int __fastcall Options::getDevLogFlushImmediate(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 112 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 112 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRecentSkinIds(int a1, unsigned __int64 *a2)
{
  int v2; // r9@1
  const void ***v3; // r8@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r1@1
  int *v6; // r1@5
  _DWORD *v7; // r7@5
  int (**v8)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@5
  unsigned int *v9; // r2@6
  signed int v10; // r6@8
  int *v11; // r5@12
  int (**v12)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r6@12
  int *v13; // r0@13
  int v14; // r2@16
  int v15; // r4@16
  int v16; // r1@17
  int v17; // r0@18
  Option *v18; // r6@29
  const void **v19; // r7@33
  int v20; // r2@35
  int v21; // r1@36
  int v22; // r0@37
  Option *v23; // r6@48
  const void **v24; // r7@52
  int v25; // r2@54
  int v26; // r1@55
  int v27; // r0@56
  Option *v28; // r5@67
  const void **v29; // r4@71
  int result; // r0@71
  int v31; // [sp+0h] [bp-28h]@5

  v2 = a1;
  v3 = (const void ***)(a1 + 68);
  std::vector<std::string,std::allocator<std::string>>::operator=(a1 + 68, a2);
  v4 = *(_QWORD *)(v2 + 68);
  v5 = (HIDWORD(v4) - (signed int)v4) >> 2;
  if ( v5 > 2 )
  {
    if ( v5 >= 4 )
    {
      if ( HIDWORD(v4) != (_DWORD)v4 + 12 )
      {
        v6 = &v31;
        v7 = (_DWORD *)(v4 + 12);
        v8 = &pthread_create;
        do
        {
          v13 = (int *)(*v7 - 12);
          if ( v13 != &dword_28898C0 )
          {
            v9 = (unsigned int *)(*v7 - 4);
            if ( v8 )
            {
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
            }
            else
              v10 = (*v9)--;
            if ( v10 <= 0 )
              v11 = v6;
              v12 = v8;
              j_j_j_j_j__ZdlPv_9_1(v13);
              v8 = v12;
              v6 = v11;
          }
          ++v7;
        }
        while ( v7 != (_DWORD *)HIDWORD(v4) );
      }
      *(_DWORD *)(v2 + 72) = v4 + 12;
    }
  }
  else
    std::vector<std::string,std::allocator<std::string>>::_M_default_append((int)v3, 3 - v5);
  v14 = *(_DWORD *)(v2 + 8);
  v15 = v2 + 4;
  if ( v14 )
    v16 = v2 + 4;
    do
      v17 = v14;
      while ( *(_DWORD *)(v17 + 16) < 10 )
        v17 = *(_DWORD *)(v17 + 12);
        if ( !v17 )
          v17 = v16;
          goto LABEL_25;
      v14 = *(_DWORD *)(v17 + 8);
      v16 = v17;
    while ( v14 );
    v17 = v2 + 4;
LABEL_25:
  if ( v17 == v15 )
    v18 = 0;
    if ( *(_DWORD *)(v17 + 16) > 10 )
      v17 = v2 + 4;
    if ( v17 == v15 )
      v18 = 0;
    else
      v18 = *(Option **)(v17 + 20);
  v19 = *v3;
  if ( !Option::hasOverrideSource(v18) )
    StringOption::set((int)v18, v19);
  v20 = *(_DWORD *)(v2 + 8);
  if ( v20 )
    v21 = v2 + 4;
      v22 = v20;
      while ( *(_DWORD *)(v22 + 16) < 11 )
        v22 = *(_DWORD *)(v22 + 12);
        if ( !v22 )
          v22 = v21;
          goto LABEL_44;
      v20 = *(_DWORD *)(v22 + 8);
      v21 = v22;
    while ( v20 );
    v22 = v2 + 4;
LABEL_44:
  if ( v22 == v15 )
    v23 = 0;
    if ( *(_DWORD *)(v22 + 16) > 11 )
      v22 = v2 + 4;
    if ( v22 == v15 )
      v23 = 0;
      v23 = *(Option **)(v22 + 20);
  v24 = *v3;
  if ( !Option::hasOverrideSource(v23) )
    StringOption::set((int)v23, v24 + 1);
  v25 = *(_DWORD *)(v2 + 8);
  if ( v25 )
    v26 = v2 + 4;
      v27 = v25;
      while ( *(_DWORD *)(v27 + 16) < 12 )
        v27 = *(_DWORD *)(v27 + 12);
        if ( !v27 )
          v27 = v26;
          goto LABEL_63;
      v25 = *(_DWORD *)(v27 + 8);
      v26 = v27;
    while ( v25 );
    v27 = v2 + 4;
LABEL_63:
  if ( v27 == v15 )
    v28 = 0;
    if ( *(_DWORD *)(v27 + 16) > 12 )
      v27 = v2 + 4;
    if ( v27 == v15 )
      v28 = 0;
      v28 = *(Option **)(v27 + 20);
  v29 = *v3;
  result = Option::hasOverrideSource(v28);
  if ( !result )
    result = StringOption::set((int)v28, v29 + 2);
  return result;
}


void *__fastcall Options::getRealmsRelyingPartyPayment(Options *this)
{
  return &unk_27CB7D8;
}


int __fastcall Options::getInvertYMouse(int a1, unsigned int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < 133 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > 133 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolE9InputMode(0, a2);
    result = j_j_j__ZNK6Option7getBoolE9InputMode(*(_DWORD *)(v5 + 20), a2);
  return result;
}


int __fastcall Options::setHasChosenNotToSignInToXbl(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 14 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 14 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getFileStorageLocation(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 15 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 15 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getShowRealmsTrialButtonFromPlayScreen(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 128 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 128 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRRightStickDeadBand(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 60 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 60 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevEnableProfilerOutput(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 93 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 93 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setStoreHasPurchasedCoins(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 89 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 89 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


  if ( Options::getMultiPlayerGame((Options *)HIDWORD(v1)) == 1 )
{
    Social::UserManager::getPrimaryUser((Social::UserManager *)&v13, *(_DWORD *)(v1 + 344));
    v2 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v13);
    if ( Social::XboxLiveUserManager::checkPrivilegeSilently(v2, 254) == 1 )
    {
      v3 = *(_DWORD *)(v1 + 220);
      v4 = v1 + 216;
      for ( i = v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
        i = v3;
      if ( i != v4 && !*(_BYTE *)(i + 16) )
        v4 = i;
      v6 = 0;
      if ( !ClientInstance::getLevel(*(ClientInstance **)(v4 + 20)) )
        v6 = 1;
    }
    else
    v7 = v14;
    if ( v14 )
      v8 = (unsigned int *)(v14 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        v10 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  }
  else
  {
    v6 = 0;
  return v6;
}


int __fastcall Options::setAcknowledgedAutoSave(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 160 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 160 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


void __fastcall Options::_load(Options *this)
{
  Options::_load(this);
}


int __fastcall Options::getSplitControls(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 17 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 17 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


void __fastcall Options::_readGamepadMapping(int a1, unsigned int *a2, unsigned int *a3)
{
  int v3; // r7@1
  unsigned int *v4; // r4@1
  _DWORD *v5; // r5@1
  _DWORD *v6; // r6@1
  const void **v7; // r5@2
  const void **v8; // r11@2
  int v9; // r0@3
  void *v10; // r4@5
  char *v11; // r7@5 OVERLAPPED
  unsigned int v12; // r2@5
  unsigned int v13; // r1@7
  unsigned int v14; // r6@7
  int v15; // r8@14
  int v16; // r8@16 OVERLAPPED
  int *v17; // r1@22
  int v18; // r1@22
  void *v19; // r0@22
  void *v20; // r0@25
  void *v21; // r0@26
  void *v22; // r4@27
  void *v23; // r6@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  int *v26; // r0@37
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  int *v29; // r0@55
  unsigned int *v30; // r2@61
  signed int v31; // r1@63
  unsigned int *v32; // r2@65
  signed int v33; // r1@67
  unsigned int *v34; // r2@69
  signed int v35; // r1@71
  int v36; // [sp+0h] [bp-60h]@2
  int v37; // [sp+4h] [bp-5Ch]@23
  int v38; // [sp+8h] [bp-58h]@23
  int v39; // [sp+Ch] [bp-54h]@22
  int v40; // [sp+10h] [bp-50h]@3
  __int64 v41; // [sp+14h] [bp-4Ch]@2
  int v42; // [sp+1Ch] [bp-44h]@2
  void *ptr; // [sp+20h] [bp-40h]@2
  char *v44; // [sp+24h] [bp-3Ch]@2
  char *v45; // [sp+28h] [bp-38h]@2
  __int64 v46; // [sp+2Ch] [bp-34h]@1
  int v47; // [sp+34h] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v46 = 0LL;
  v47 = 0;
  Util::splitString(a2, 95, (int)&v46);
  v5 = (_DWORD *)HIDWORD(v46);
  v6 = (_DWORD *)v46;
  if ( HIDWORD(v46) - (_DWORD)v46 == 16 )
  {
    v44 = 0;
    v45 = 0;
    v41 = 0LL;
    v42 = 0;
    ptr = 0;
    Util::splitString(v4, 44, (int)&v41);
    std::vector<std::string,std::allocator<std::string>>::reserve((int)&v41, (HIDWORD(v41) - (signed int)v41) >> 2);
    v36 = v3;
    v8 = (const void **)HIDWORD(v41);
    v7 = (const void **)v41;
    if ( (_DWORD)v41 != HIDWORD(v41) )
    {
      do
      {
        v40 = 0;
        Option::read(v7, &v40);
        v9 = (int)v44;
        if ( v44 == v45 )
        {
          v10 = ptr;
          v11 = 0;
          v12 = (v44 - (_BYTE *)ptr) >> 2;
          if ( !v12 )
            v12 = 1;
          v13 = v12 + ((v44 - (_BYTE *)ptr) >> 2);
          v14 = v12 + ((v44 - (_BYTE *)ptr) >> 2);
          if ( 0 != v13 >> 30 )
            v14 = 0x3FFFFFFF;
          if ( v13 < v12 )
          if ( v14 )
          {
            if ( v14 >= 0x40000000 )
              sub_119C874();
            v11 = (char *)operator new(4 * v14);
            v9 = (int)v44;
            v10 = ptr;
          }
          v15 = (int)&v11[v9 - (_DWORD)v10];
          *(_DWORD *)&v11[v9 - (_DWORD)v10] = v40;
          if ( 0 != (v9 - (signed int)v10) >> 2 )
            _aeabi_memmove4(v11, v10);
          v16 = v15 + 4;
          if ( v10 )
            operator delete(v10);
          *(_QWORD *)&ptr = *(_QWORD *)&v11;
          v45 = &v11[4 * v14];
        }
        else
          *(_DWORD *)v44 = v40;
          v44 = (char *)(v9 + 4);
        ++v7;
      }
      while ( v8 != v7 );
    }
    sub_119C854(&v39, (int *)(HIDWORD(v46) - 4));
    v17 = (int *)(HIDWORD(v46) - 4);
    HIDWORD(v46) = v17;
    v18 = *v17;
    v19 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    sub_119C854(&v38, (int *)(HIDWORD(v46) - 4));
    v37 = 0;
    if ( !Util::toInt((unsigned int *)&v38, &v37, 0, 2) )
      RemappingLayout::setMapping(*(_DWORD *)(v36 + 4 * v37 + 80), (const void **)&v39, (unsigned int)&ptr);
    v20 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v39 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v23 = (void *)HIDWORD(v41);
    v22 = (void *)v41;
        v26 = (int *)(*(_DWORD *)v22 - 12);
        if ( v26 != &dword_28898C0 )
          v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v26);
        v22 = (char *)v22 + 4;
      while ( v22 != v23 );
      v22 = (void *)v41;
    if ( v22 )
      operator delete(v22);
    if ( ptr )
      operator delete(ptr);
    v5 = (_DWORD *)HIDWORD(v46);
    v6 = (_DWORD *)v46;
  }
  if ( v6 != v5 )
    do
      v29 = (int *)(*v6 - 12);
      if ( v29 != &dword_28898C0 )
        v27 = (unsigned int *)(*v6 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      ++v6;
    while ( v6 != v5 );
    v5 = (_DWORD *)v46;
  if ( v5 )
    operator delete(v5);
}


char *__fastcall Options::getLanguage(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  Option *v5; // r0@14
  char *result; // r0@18
  void *v7; // r0@20

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 7 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    v5 = 0;
    if ( *((_DWORD *)v4 + 4) > 7 )
      v4 = v2;
    if ( v4 == v2 )
      v5 = 0;
    else
      v5 = (Option *)*((_DWORD *)v4 + 5);
  result = Option::getString(v5);
  if ( !*(_DWORD *)(*(_DWORD *)result - 12) )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v7 = &ServiceLocator<AppPlatform>::mDefaultService;
    result = (char *)(*(int (**)(void))(**(_DWORD **)v7 + 136))();
  return result;
}


void __fastcall Options::_registerLocks(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r6@1
  char *v3; // r2@1
  char *v4; // r1@2
  char *v5; // r0@3
  int v6; // r5@14
  _DWORD *v7; // r0@18
  __int64 v8; // r1@18
  char *v9; // r2@20
  char *v10; // r1@21
  char *v11; // r0@22
  int v12; // r5@33
  _DWORD *v13; // r0@37
  __int64 v14; // r1@37
  char *v15; // r2@39
  char *v16; // r1@40
  char *v17; // r0@41
  int v18; // r5@52
  _DWORD *v19; // r0@56
  __int64 v20; // r1@56
  char *v21; // r2@58
  char *v22; // r1@59
  char *v23; // r0@60
  int v24; // r5@71
  _DWORD *v25; // r0@75
  __int64 v26; // r1@75
  char *v27; // r2@77
  char *v28; // r1@78
  char *v29; // r0@79
  int v30; // r5@90
  _DWORD *v31; // r0@94
  __int64 v32; // r1@94
  char *v33; // r2@96
  char *v34; // r1@97
  char *v35; // r0@98
  int v36; // r5@109
  _DWORD *v37; // r0@113
  __int64 v38; // r1@113
  char *v39; // r2@115
  char *v40; // r1@116
  char *v41; // r0@117
  int v42; // r5@128
  _DWORD *v43; // r0@132
  __int64 v44; // r1@132
  char *v45; // r2@134
  char *v46; // r1@135
  char *v47; // r0@136
  int v48; // r5@147
  _DWORD *v49; // r0@151
  __int64 v50; // r1@151
  _DWORD *v51; // [sp+0h] [bp-90h]@151
  __int64 v52; // [sp+8h] [bp-88h]@151
  _DWORD *v53; // [sp+10h] [bp-80h]@132
  __int64 v54; // [sp+18h] [bp-78h]@132
  _DWORD *v55; // [sp+20h] [bp-70h]@113
  __int64 v56; // [sp+28h] [bp-68h]@113
  _DWORD *v57; // [sp+30h] [bp-60h]@94
  __int64 v58; // [sp+38h] [bp-58h]@94
  _DWORD *v59; // [sp+40h] [bp-50h]@75
  __int64 v60; // [sp+48h] [bp-48h]@75
  _DWORD *v61; // [sp+50h] [bp-40h]@56
  __int64 v62; // [sp+58h] [bp-38h]@56
  _DWORD *v63; // [sp+60h] [bp-30h]@37
  __int64 v64; // [sp+68h] [bp-28h]@37
  _DWORD *v65; // [sp+70h] [bp-20h]@18
  __int64 v66; // [sp+78h] [bp-18h]@18

  v1 = this;
  v2 = (char *)this + 4;
  v3 = (char *)*((_DWORD *)this + 2);
  if ( v3 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v3;
      while ( *((_DWORD *)v5 + 4) < 52 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v3 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v3 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v2 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 52 )
      v5 = v2;
    if ( v5 == v2 )
      v6 = 0;
    else
      v6 = *((_DWORD *)v5 + 5);
  v7 = operator new(4u);
  LODWORD(v8) = sub_E5E3CA;
  *v7 = v1;
  HIDWORD(v8) = sub_E5E36E;
  v65 = v7;
  v66 = v8;
  Option::registerLock(v6, (int)v1, (int)&v65);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v9 = (char *)*((_DWORD *)v1 + 2);
  if ( v9 )
    v10 = v2;
      v11 = v9;
      while ( *((_DWORD *)v11 + 4) < 36 )
        v11 = (char *)*((_DWORD *)v11 + 3);
        if ( !v11 )
          v11 = v10;
          goto LABEL_29;
      v9 = (char *)*((_DWORD *)v11 + 2);
      v10 = v11;
    while ( v9 );
    v11 = v2;
LABEL_29:
  if ( v11 == v2 )
    v12 = 0;
    if ( *((_DWORD *)v11 + 4) > 36 )
      v11 = v2;
    if ( v11 == v2 )
      v12 = 0;
      v12 = *((_DWORD *)v11 + 5);
  v13 = operator new(4u);
  LODWORD(v14) = sub_E5E412;
  *v13 = v1;
  HIDWORD(v14) = sub_E5E400;
  v63 = v13;
  v64 = v14;
  Option::registerLock(v12, (int)v1, (int)&v63);
  if ( (_DWORD)v64 )
    ((void (*)(void))v64)();
  v15 = (char *)*((_DWORD *)v1 + 2);
  if ( v15 )
    v16 = v2;
      v17 = v15;
      while ( *((_DWORD *)v17 + 4) < 65 )
        v17 = (char *)*((_DWORD *)v17 + 3);
        if ( !v17 )
          v17 = v16;
          goto LABEL_48;
      v15 = (char *)*((_DWORD *)v17 + 2);
      v16 = v17;
    while ( v15 );
    v17 = v2;
LABEL_48:
  if ( v17 == v2 )
    v18 = 0;
    if ( *((_DWORD *)v17 + 4) > 65 )
      v17 = v2;
    if ( v17 == v2 )
      v18 = 0;
      v18 = *((_DWORD *)v17 + 5);
  v19 = operator new(4u);
  LODWORD(v20) = sub_E5E4A0;
  *v19 = v1;
  HIDWORD(v20) = sub_E5E448;
  v61 = v19;
  v62 = v20;
  Option::registerLock(v18, (int)v1, (int)&v61);
  if ( (_DWORD)v62 )
    ((void (*)(void))v62)();
  v21 = (char *)*((_DWORD *)v1 + 2);
  if ( v21 )
    v22 = v2;
      v23 = v21;
      while ( *((_DWORD *)v23 + 4) < 66 )
        v23 = (char *)*((_DWORD *)v23 + 3);
        if ( !v23 )
          v23 = v22;
          goto LABEL_67;
      v21 = (char *)*((_DWORD *)v23 + 2);
      v22 = v23;
    while ( v21 );
    v23 = v2;
LABEL_67:
  if ( v23 == v2 )
    v24 = 0;
    if ( *((_DWORD *)v23 + 4) > 66 )
      v23 = v2;
    if ( v23 == v2 )
      v24 = 0;
      v24 = *((_DWORD *)v23 + 5);
  v25 = operator new(4u);
  LODWORD(v26) = sub_E5E52E;
  *v25 = v1;
  HIDWORD(v26) = sub_E5E4D6;
  v59 = v25;
  v60 = v26;
  Option::registerLock(v24, (int)v1, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (*)(void))v60)();
  v27 = (char *)*((_DWORD *)v1 + 2);
  if ( v27 )
    v28 = v2;
      v29 = v27;
      while ( *((_DWORD *)v29 + 4) < 53 )
        v29 = (char *)*((_DWORD *)v29 + 3);
        if ( !v29 )
          v29 = v28;
          goto LABEL_86;
      v27 = (char *)*((_DWORD *)v29 + 2);
      v28 = v29;
    while ( v27 );
    v29 = v2;
LABEL_86:
  if ( v29 == v2 )
    v30 = 0;
    if ( *((_DWORD *)v29 + 4) > 53 )
      v29 = v2;
    if ( v29 == v2 )
      v30 = 0;
      v30 = *((_DWORD *)v29 + 5);
  v31 = operator new(4u);
  LODWORD(v32) = sub_E5E5BC;
  *v31 = v1;
  HIDWORD(v32) = sub_E5E564;
  v57 = v31;
  v58 = v32;
  Option::registerLock(v30, (int)v1, (int)&v57);
  if ( (_DWORD)v58 )
    ((void (*)(void))v58)();
  v33 = (char *)*((_DWORD *)v1 + 2);
  if ( v33 )
    v34 = v2;
      v35 = v33;
      while ( *((_DWORD *)v35 + 4) < 48 )
        v35 = (char *)*((_DWORD *)v35 + 3);
        if ( !v35 )
          v35 = v34;
          goto LABEL_105;
      v33 = (char *)*((_DWORD *)v35 + 2);
      v34 = v35;
    while ( v33 );
    v35 = v2;
LABEL_105:
  if ( v35 == v2 )
    v36 = 0;
    if ( *((_DWORD *)v35 + 4) > 48 )
      v35 = v2;
    if ( v35 == v2 )
      v36 = 0;
      v36 = *((_DWORD *)v35 + 5);
  v37 = operator new(4u);
  LODWORD(v38) = sub_E5E64A;
  *v37 = v1;
  HIDWORD(v38) = sub_E5E5F2;
  v55 = v37;
  v56 = v38;
  Option::registerLock(v36, (int)v1, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  v39 = (char *)*((_DWORD *)v1 + 2);
  if ( v39 )
    v40 = v2;
      v41 = v39;
      while ( *((_DWORD *)v41 + 4) < 49 )
        v41 = (char *)*((_DWORD *)v41 + 3);
        if ( !v41 )
          v41 = v40;
          goto LABEL_124;
      v39 = (char *)*((_DWORD *)v41 + 2);
      v40 = v41;
    while ( v39 );
    v41 = v2;
LABEL_124:
  if ( v41 == v2 )
    v42 = 0;
    if ( *((_DWORD *)v41 + 4) > 49 )
      v41 = v2;
    if ( v41 == v2 )
      v42 = 0;
      v42 = *((_DWORD *)v41 + 5);
  v43 = operator new(4u);
  LODWORD(v44) = sub_E5E6D8;
  *v43 = v1;
  HIDWORD(v44) = sub_E5E680;
  v53 = v43;
  v54 = v44;
  Option::registerLock(v42, (int)v1, (int)&v53);
  if ( (_DWORD)v54 )
    ((void (*)(void))v54)();
  v45 = (char *)*((_DWORD *)v1 + 2);
  if ( v45 )
    v46 = v2;
      v47 = v45;
      while ( *((_DWORD *)v47 + 4) < 54 )
        v47 = (char *)*((_DWORD *)v47 + 3);
        if ( !v47 )
          v47 = v46;
          goto LABEL_143;
      v45 = (char *)*((_DWORD *)v47 + 2);
      v46 = v47;
    while ( v45 );
    v47 = v2;
LABEL_143:
  if ( v47 == v2 )
    v48 = 0;
    if ( *((_DWORD *)v47 + 4) > 54 )
      v47 = v2;
    if ( v47 == v2 )
      v48 = 0;
      v48 = *((_DWORD *)v47 + 5);
  v49 = operator new(4u);
  LODWORD(v50) = sub_E5E766;
  *v49 = v1;
  HIDWORD(v50) = sub_E5E70E;
  v51 = v49;
  v52 = v50;
  Option::registerLock(v48, (int)v1, (int)&v51);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
}


int __fastcall Options::setDevShowMinecraftTCUIReplacement(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 148 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 148 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::_loadInputMapping(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1
  int v4; // r5@1
  int v5; // r8@1
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  signed int v8; // r4@12
  void *v9; // r0@12
  __int64 v10; // r0@14
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  signed int v15; // r4@33
  void *v16; // r0@33
  signed int v17; // r4@36
  void *v18; // r0@36
  __int64 v19; // r0@38
  int v20; // [sp+8h] [bp-48h]@1
  int v21; // [sp+10h] [bp-40h]@4
  int v22; // [sp+18h] [bp-38h]@17

  v2 = a2;
  v20 = a1;
  result = Options::_shouldLoadGamepadMapping(a1, a2);
  v4 = *(_DWORD *)(v2 + 12);
  v5 = v2 + 4;
  if ( v4 != v2 + 4 )
  {
    if ( result == 1 )
    {
      do
      {
        sub_119C884((void **)&v22, "ctrl_type");
        v15 = Util::startsWith((_DWORD *)(v4 + 16), &v22);
        v16 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v16);
        }
        if ( v15 )
          Options::_readGamepadMapping(v20, (unsigned int *)(v4 + 16), (unsigned int *)(v4 + 20));
        else
          sub_119C884((void **)&v21, "key_");
          v17 = Util::startsWith((_DWORD *)(v4 + 16), &v21);
          v18 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v21 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
            }
            else
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v18);
          if ( v17 == 1 )
            LODWORD(v19) = v20;
            HIDWORD(v19) = v4 + 16;
            Options::_readKeyboardMapping(v19, (unsigned int *)(v4 + 20));
        result = sub_119CAC8(v4);
        v4 = result;
      }
      while ( result != v5 );
    }
    else
        sub_119C884((void **)&v21, "key_");
        v8 = Util::startsWith((_DWORD *)(v4 + 16), &v21);
        v9 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v6 = (unsigned int *)(v21 - 4);
              v7 = __ldrex(v6);
            while ( __strex(v7 - 1, v6) );
            v7 = (*v6)--;
          if ( v7 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v9);
        if ( v8 == 1 )
          LODWORD(v10) = v20;
          HIDWORD(v10) = v4 + 16;
          Options::_readKeyboardMapping(v10, (unsigned int *)(v4 + 20));
  }
  return result;
}


int __fastcall Options::getSplitscreenDirection(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 149 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 149 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


  if ( Options::getFixedCamera(v5) != 1 || (result = (char *)(*(int (**)(void))(**(_DWORD **)v3 + 168))()) == 0 )
{
    v7 = (Options *)ClientInstance::getOptions(*v2);
    if ( Options::getHideScreens(v7) != 1
      || (result = (char *)(*(int (**)(void))(**(_DWORD **)v3 + 188))(), result == (char *)1) )
    {
      result = j_j_j__ZN3mce11RenderGraph22addScreenToRenderGraphERSt10shared_ptrI13AbstractSceneE(
                 (unsigned __int64 *)(HIDWORD(v4) + 140),
                 v3);
    }
  }
  return result;
}


int __fastcall Options::getVRLinearMotion(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 66 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 66 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::setSplitControls(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 17 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 17 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getStutterTurn(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 48 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 48 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::setVRHeadSteering(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 53 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 53 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::reset(int result, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r5@1
  IntOption *v7; // r7@4

  v3 = *(_DWORD *)(result + 12);
  v4 = result + 4;
  v5 = a3;
  v6 = a2;
  while ( v3 != v4 )
  {
    v7 = *(IntOption **)(v3 + 20);
    if ( Option::getOptionResetType(*(Option **)(v3 + 20)) == v6 )
      Option::reset(v7, v5);
    result = sub_119CAC8(v3);
    v3 = result;
  }
  return result;
}


int __fastcall Options::setVRMSAA(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 83 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 83 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getViewDistanceChunks(Options *this)
{
  char *v1; // r1@1
  int v2; // r2@1
  char *v3; // r0@1
  char *v4; // r3@3
  char *v5; // r2@4
  char *v6; // r3@11
  char *v7; // r2@12

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = *((_BYTE *)this + 37);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = v3;
      do
      {
        v5 = v1;
        while ( *((_DWORD *)v5 + 4) < 51 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_19;
          }
        }
        v1 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v1 );
    }
    else
      v5 = v3;
LABEL_19:
    if ( v5 != v3 )
      if ( *((_DWORD *)v5 + 4) > 51 )
        v5 = v3;
      if ( v5 != v3 )
        return j_j_j__ZNK6Option6getIntEv(*((Option **)v5 + 5));
  }
  else
      v6 = v3;
        v7 = v1;
        while ( *((_DWORD *)v7 + 4) < 19 )
          v7 = (char *)*((_DWORD *)v7 + 3);
          if ( !v7 )
            v7 = v6;
            goto LABEL_26;
        v1 = (char *)*((_DWORD *)v7 + 2);
        v6 = v7;
      v7 = v3;
LABEL_26:
    if ( v7 != v3 )
      if ( *((_DWORD *)v7 + 4) > 19 )
        v7 = v3;
      if ( v7 != v3 )
        return j_j_j__ZNK6Option6getIntEv(*((Option **)v7 + 5));
  return j_j_j__ZNK6Option6getIntEv(0);
}


int __fastcall Options::setHidePaperDoll(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 142 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 142 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setPlayerViewPerspective(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 2 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 2 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getVRRollTurning(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 72 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 72 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setShowRealmsTrialButtonFromPlayScreen(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 128 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 128 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getDevShowDevConsoleButton(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 143 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 143 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getHideToolTips(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 145 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 145 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setHideItemInHand(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 30 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 30 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getChatTextToSpeechEnabled(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 131 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 131 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getNumberOfOwnedRealms(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 125 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 125 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


void __fastcall Options::_load(Options *this)
{
  Options *v1; // r4@1
  void *v2; // r0@1
  int i; // r5@2
  unsigned int *v4; // r2@5
  signed int v5; // r1@7
  int v6; // [sp+4h] [bp-34h]@1
  char v7; // [sp+8h] [bp-30h]@1
  int v8; // [sp+10h] [bp-28h]@4

  v1 = this;
  *((_BYTE *)this + 36) = 1;
  sub_119C884((void **)&v6, *((const char **)this + 8));
  PropertyFile::readPropertyMapFromFile((int)&v7, &v6);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v2);
  }
  Options::_loadSpecialOptions((int)v1, (int)&v7);
  for ( i = *((_DWORD *)v1 + 3); (Options *)i != (Options *)((char *)v1 + 4); i = sub_119CAC8(i) )
    (*(void (**)(void))(**(_DWORD **)(i + 20) + 16))();
  Options::_loadInputMapping((int)v1, (int)&v7);
  *((_BYTE *)v1 + 36) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)&v7,
    v8);
}


int __fastcall Options::setXboxLiveVisible(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 5 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 5 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setLanguage(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 7 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 7 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::isLeftHanded(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 16 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 16 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getMusic(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 43 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 43 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRMouseUISensitivity(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 82 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 82 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevCreateRealmWithoutPurchase(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 102 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 102 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getGuiScale(Options *this)
{
  int result; // r0@2
  char *v2; // r3@3
  char *v3; // r0@3
  char *v4; // r2@4
  char *v5; // r1@5

  if ( *((_BYTE *)this + 37) )
  {
    result = 0;
  }
  else
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = v3;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 39 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = v3;
LABEL_12:
    if ( v5 == v3 )
      goto LABEL_20;
    if ( *((_DWORD *)v5 + 4) > 39 )
LABEL_20:
      result = j_j_j__ZNK6Option6getIntEv(0);
      result = j_j_j__ZNK6Option6getIntEv(*((Option **)v5 + 5));
  return result;
}


int __fastcall Options::getDevRenderGoalState(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 98 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 98 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevLogAreaFilter(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 117 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 117 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setMultiPlayerGame(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 140 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 140 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getGamma(Options *this)
{
  char *v1; // r1@1
  int v2; // r2@1
  char *v3; // r0@1
  char *v4; // r3@3
  char *v5; // r2@4
  char *v6; // r3@11
  char *v7; // r2@12

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = *((_BYTE *)this + 37);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = v3;
      do
      {
        v5 = v1;
        while ( *((_DWORD *)v5 + 4) < 45 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_19;
          }
        }
        v1 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v1 );
    }
    else
      v5 = v3;
LABEL_19:
    if ( v5 != v3 )
      if ( *((_DWORD *)v5 + 4) > 45 )
        v5 = v3;
      if ( v5 != v3 )
        return j_j_j__ZNK6Option8getFloatEv(*((Option **)v5 + 5));
  }
  else
      v6 = v3;
        v7 = v1;
        while ( *((_DWORD *)v7 + 4) < 34 )
          v7 = (char *)*((_DWORD *)v7 + 3);
          if ( !v7 )
            v7 = v6;
            goto LABEL_26;
        v1 = (char *)*((_DWORD *)v7 + 2);
        v6 = v7;
      v7 = v3;
LABEL_26:
    if ( v7 != v3 )
      if ( *((_DWORD *)v7 + 4) > 34 )
        v7 = v3;
      if ( v7 != v3 )
        return j_j_j__ZNK6Option8getFloatEv(*((Option **)v7 + 5));
  return j_j_j__ZNK6Option8getFloatEv(0);
}


int __fastcall Options::setVRLivingRoomHintTime(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 76 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 76 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getStoreHasPurchasedCoins(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 89 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 89 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getForceUseUnsortedPolys(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 26 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 26 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setSound(Options *this, float a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  float v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 42 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 42 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN11FloatOption3setEf(v7, v4);
  return result;
}


int __fastcall Options::getHideHand(Options *this)
{
  char *v1; // r1@1
  int v2; // r2@1
  char *v3; // r0@1
  char *v4; // r3@3
  char *v5; // r2@4
  char *v6; // r3@11

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = *((_BYTE *)this + 37);
  v3 = (char *)this + 4;
  if ( !v2 )
  {
    if ( v1 )
    {
      v6 = v3;
      do
      {
        v5 = v1;
        while ( *((_DWORD *)v5 + 4) < 151 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v6;
            goto LABEL_25;
          }
        }
        v1 = (char *)*((_DWORD *)v5 + 2);
        v6 = v5;
      }
      while ( v1 );
    }
    else
      v5 = v3;
LABEL_25:
    if ( v5 == v3 )
      return Option::getBool(0);
    if ( *((_DWORD *)v5 + 4) > 151 )
    return Option::getBool(*((Option **)v5 + 5));
  }
  if ( v1 )
    v4 = v3;
    do
      v5 = v1;
      while ( *((_DWORD *)v5 + 4) < 153 )
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
          v5 = v4;
          goto LABEL_19;
      v1 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    while ( v1 );
  else
    v5 = v3;
LABEL_19:
  if ( v5 != v3 )
    if ( *((_DWORD *)v5 + 4) > 153 )
    if ( v5 != v3 )
      return Option::getBool(*((Option **)v5 + 5));
  return Option::getBool(0);
}


int __fastcall Options::getDevResetClientId(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 111 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 111 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


void __fastcall Options::_registerLocks(Options *this)
{
  Options::_registerLocks(this);
}


int __fastcall Options::setHideGUI(Options *this, int a2)
{
  Options *v2; // r5@1
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r7@1
  int v6; // r2@3
  int v7; // r1@4
  int v8; // r2@11
  int v9; // r1@12
  BoolOption *v10; // r6@23
  int v11; // r2@29
  int v12; // r1@30
  int v13; // r0@31
  Option *v14; // r5@42
  BoolOption *v15; // r6@49
  int v16; // r2@55
  int v17; // r1@56
  int result; // r0@71

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 2);
  v5 = (int)v2 + 4;
  if ( *((_BYTE *)v2 + 37) )
  {
    if ( v4 )
    {
      v6 = (int)v2 + 4;
      do
      {
        v7 = v4;
        while ( *(_DWORD *)(v7 + 16) < 152 )
        {
          v7 = *(_DWORD *)(v7 + 12);
          if ( !v7 )
          {
            v7 = v6;
            goto LABEL_19;
          }
        }
        v4 = *(_DWORD *)(v7 + 8);
        v6 = v7;
      }
      while ( v4 );
    }
    else
      v7 = (int)v2 + 4;
LABEL_19:
    if ( v7 == v5 )
      v10 = 0;
      if ( *(_DWORD *)(v7 + 16) > 152 )
        v7 = (int)v2 + 4;
      if ( v7 == v5 )
        v10 = 0;
      else
        v10 = *(BoolOption **)(v7 + 20);
    if ( !Option::hasOverrideSource(v10) )
      BoolOption::set(v10, v3);
    v11 = *((_DWORD *)v2 + 2);
    if ( v11 )
      v12 = (int)v2 + 4;
        v13 = v11;
        while ( *(_DWORD *)(v13 + 16) < 153 )
          v13 = *(_DWORD *)(v13 + 12);
          if ( !v13 )
            v13 = v12;
            goto LABEL_38;
        v11 = *(_DWORD *)(v13 + 8);
        v12 = v13;
      while ( v11 );
      v13 = (int)v2 + 4;
LABEL_38:
    if ( v13 == v5 )
      v14 = 0;
      goto LABEL_71;
    if ( *(_DWORD *)(v13 + 16) > 153 )
    goto LABEL_68;
  }
  if ( v4 )
    v8 = (int)v2 + 4;
    do
      v9 = v4;
      while ( *(_DWORD *)(v9 + 16) < 150 )
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
          v9 = v8;
          goto LABEL_45;
      v4 = *(_DWORD *)(v9 + 8);
      v8 = v9;
    while ( v4 );
  else
    v9 = (int)v2 + 4;
LABEL_45:
  if ( v9 == v5 )
    v15 = 0;
    if ( *(_DWORD *)(v9 + 16) > 150 )
      v9 = (int)v2 + 4;
    if ( v9 == v5 )
      v15 = 0;
      v15 = *(BoolOption **)(v9 + 20);
  if ( !Option::hasOverrideSource(v15) )
    BoolOption::set(v15, v3);
  v16 = *((_DWORD *)v2 + 2);
  if ( v16 )
    v17 = (int)v2 + 4;
      v13 = v16;
      while ( *(_DWORD *)(v13 + 16) < 151 )
        v13 = *(_DWORD *)(v13 + 12);
        if ( !v13 )
          v13 = v17;
          goto LABEL_64;
      v16 = *(_DWORD *)(v13 + 8);
      v17 = v13;
    while ( v16 );
    v13 = (int)v2 + 4;
LABEL_64:
  if ( v13 == v5 )
    v14 = 0;
    if ( *(_DWORD *)(v13 + 16) > 151 )
    if ( v13 != v5 )
LABEL_68:
      v14 = *(Option **)(v13 + 20);
LABEL_71:
  result = Option::hasOverrideSource(v14);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v14, v3);
  return result;
}


int __fastcall Options::get(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < a2 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > a2 )
    v5 = v3;
LABEL_18:
    result = 0;
    result = *(_DWORD *)(v5 + 20);
  return result;
}


void __fastcall Options::_readKeyboardMapping(__int64 a1, unsigned int *a2)
{
  const void **v2; // r6@1
  const void **v3; // r10@1
  int v4; // r0@2
  void *v5; // r5@4
  char *v6; // r4@4
  unsigned int v7; // r2@4
  unsigned int v8; // r1@6
  unsigned int v9; // r8@6
  char *v10; // r9@13
  void *v11; // r4@21
  void *v12; // r6@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  int *v15; // r0@31
  void *v16; // r4@36
  void *v17; // r6@36
  unsigned int *v18; // r2@38
  signed int v19; // r1@40
  int *v20; // r0@46
  __int64 v21; // [sp+0h] [bp-58h]@1
  __int64 v22; // [sp+8h] [bp-50h]@21
  int v23; // [sp+10h] [bp-48h]@21
  int v24; // [sp+14h] [bp-44h]@2
  __int64 v25; // [sp+18h] [bp-40h]@1
  int v26; // [sp+20h] [bp-38h]@1
  void *ptr; // [sp+24h] [bp-34h]@1
  char *v28; // [sp+28h] [bp-30h]@1
  char *v29; // [sp+2Ch] [bp-2Ch]@1

  v21 = a1;
  v28 = 0;
  v29 = 0;
  v25 = 0LL;
  v26 = 0;
  ptr = 0;
  Util::splitString(a2, 44, (int)&v25);
  std::vector<std::string,std::allocator<std::string>>::reserve((int)&v25, (HIDWORD(v25) - (signed int)v25) >> 2);
  v3 = (const void **)HIDWORD(v25);
  v2 = (const void **)v25;
  if ( (_DWORD)v25 != HIDWORD(v25) )
  {
    do
    {
      v24 = 0;
      Option::read(v2, &v24);
      v4 = (int)v28;
      if ( v28 == v29 )
      {
        v5 = ptr;
        v6 = 0;
        v7 = (v28 - (_BYTE *)ptr) >> 2;
        if ( !v7 )
          v7 = 1;
        v8 = v7 + ((v28 - (_BYTE *)ptr) >> 2);
        v9 = v7 + ((v28 - (_BYTE *)ptr) >> 2);
        if ( 0 != v8 >> 30 )
          v9 = 0x3FFFFFFF;
        if ( v8 < v7 )
        if ( v9 )
        {
          if ( v9 >= 0x40000000 )
            sub_119C874();
          v6 = (char *)operator new(4 * v9);
          v4 = (int)v28;
          v5 = ptr;
        }
        v10 = &v6[v4 - (_DWORD)v5];
        *(_DWORD *)v10 = v24;
        if ( (v4 - (signed int)v5) >> 2 )
          _aeabi_memmove4(v6, v5);
        if ( v5 )
          operator delete(v5);
        ptr = v6;
        v28 = v10 + 4;
        v29 = &v6[4 * v9];
      }
      else
        *(_DWORD *)v28 = v24;
        v28 = (char *)(v4 + 4);
      ++v2;
    }
    while ( v3 != v2 );
  }
  v22 = 0LL;
  v23 = 0;
  Util::splitString((unsigned int *)HIDWORD(v21), 95, (int)&v22);
  RemappingLayout::setMapping(*(_DWORD *)(v21 + 100), (const void **)(HIDWORD(v22) - 4), (unsigned int)&ptr);
  v12 = (void *)HIDWORD(v22);
  v11 = (void *)v22;
  if ( (_DWORD)v22 != HIDWORD(v22) )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v11 = (char *)v11 + 4;
    while ( v11 != v12 );
    v11 = (void *)v22;
  if ( v11 )
    operator delete(v11);
  v17 = (void *)HIDWORD(v25);
  v16 = (void *)v25;
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v16 = (char *)v16 + 4;
    while ( v16 != v17 );
    v16 = (void *)v25;
  if ( v16 )
    operator delete(v16);
  if ( ptr )
    operator delete(ptr);
}


int __fastcall Options::getLimitWorldSize(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 6 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 6 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getFancySkies(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 27 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 27 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRShowComfortSelectScreen(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 75 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 75 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getSmoothLighting(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 24 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 24 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setTexelAA(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 33 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 33 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


unsigned int __fastcall Options::_saveInputMapping(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 v4; // r0@1
  int v5; // r1@2
  void *v6; // r0@4
  char *v7; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-20h]@6
  char *v14; // [sp+Ch] [bp-1Ch]@1
  void *v15; // [sp+10h] [bp-18h]@1
  void *v16; // [sp+14h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  sub_119C854((int *)&v14, &dword_27CB7E0);
  v16 = &unk_28898CC;
  sub_119CB38((const void **)&v16, 0, 0, (_BYTE *)1, 0x31u);
  v15 = v16;
  v4 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property>(
      (unsigned __int64 *)v3,
      (int)&v14);
    v5 = (int)v15;
  }
  else
    *(_DWORD *)v4 = v14;
    HIDWORD(v4) = &unk_28898CC;
    v14 = (char *)&unk_28898CC;
    *(_DWORD *)(v4 + 4) = v15;
    v15 = &unk_28898CC;
    *(_DWORD *)(v3 + 4) = v4 + 8;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v13 = v3;
  sub_E4C96C(&v13, *(RemappingLayout **)(v2 + 80));
  sub_E4C96C(&v13, *(RemappingLayout **)(v2 + 84));
  sub_E4C96C(&v13, *(RemappingLayout **)(v2 + 88));
  sub_E4C96C(&v13, *(RemappingLayout **)(v2 + 92));
  return sub_E4C96C(&v13, *(RemappingLayout **)(v2 + 100));
}


int __fastcall Options::getFullscreen(Options *this)
{
  int result; // r0@2
  char *v2; // r3@3
  char *v3; // r0@3
  char *v4; // r2@4
  char *v5; // r1@5
  Option *v6; // r0@16

  if ( *((_BYTE *)this + 37) )
  {
    result = 0;
  }
  else
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = v3;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 36 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = v3;
LABEL_12:
    if ( v5 == v3 )
      v6 = 0;
      if ( *((_DWORD *)v5 + 4) > 36 )
        v5 = v3;
      if ( v5 == v3 )
        v6 = 0;
      else
        v6 = (Option *)*((_DWORD *)v5 + 5);
    result = Option::getBool(v6);
  return result;
}


int __fastcall Options::unregisterObserver(int result, void *a2)
{
  void *v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1

  v2 = a2;
  v3 = *(_DWORD *)(result + 12);
  v4 = result + 4;
  while ( v3 != v4 )
  {
    Option::unregisterObserver(*(Option **)(v3 + 20), v2);
    result = sub_119CAC8(v3);
    v3 = result;
  }
  return result;
}


int __fastcall Options::getDevAchievmentsAlwaysEnabled(Options *this)
{
  return 0;
}


int __fastcall Options::getNumberOfFriendsRealms(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 126 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 126 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setChatTextToSpeechEnabled(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 131 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 131 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


Options *__fastcall Options::~Options(Options *this)
{
  Options *v1; // r11@1
  char *v2; // r6@1
  int i; // r5@1
  char *v4; // r5@4 OVERLAPPED
  char *v5; // r6@4 OVERLAPPED
  int v6; // r0@9
  int v7; // r0@11
  int v8; // r0@13
  int v9; // r0@15
  int v10; // r0@17
  int v11; // r0@19
  void *v12; // r5@21
  void *v13; // r7@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25
  int *v16; // r0@31
  void *v17; // r0@36
  int v18; // r0@38
  int v19; // r1@40
  void *v20; // r0@40
  int v21; // r1@41
  void *v22; // r0@41
  unsigned int *v24; // r2@43
  signed int v25; // r1@45
  unsigned int *v26; // r2@47
  signed int v27; // r1@49

  v1 = this;
  v2 = (char *)this + 4;
  for ( i = *((_DWORD *)this + 3); (char *)i != v2; i = sub_119CAC8(i) )
    Option::unregisterObserver(*(Option **)(i + 20), (void *)v1);
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 108);
  if ( v4 != v5 )
  {
    do
    {
      *(_DWORD *)(*(_DWORD *)v4 + 4) = 0;
      (*(void (**)(void))(**(_DWORD **)v4 + 8))();
      v4 += 4;
    }
    while ( v5 != v4 );
    v4 = (char *)*((_DWORD *)v1 + 27);
  }
  if ( v4 )
    operator delete(v4);
  v6 = *((_DWORD *)v1 + 25);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 25) = 0;
  v7 = *((_DWORD *)v1 + 24);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 24) = 0;
  v8 = *((_DWORD *)v1 + 23);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 23) = 0;
  v9 = *((_DWORD *)v1 + 22);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 22) = 0;
  v10 = *((_DWORD *)v1 + 21);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v11 = *((_DWORD *)v1 + 20);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  v13 = (void *)(*(_QWORD *)((char *)v1 + 68) >> 32);
  v12 = (void *)*(_QWORD *)((char *)v1 + 68);
  if ( v12 != v13 )
      v16 = (int *)(*(_DWORD *)v12 - 12);
      if ( v16 != &dword_28898C0 )
      {
        v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v16);
      }
      v12 = (char *)v12 + 4;
    while ( v12 != v13 );
    v12 = (void *)*((_DWORD *)v1 + 17);
  if ( v12 )
    operator delete(v12);
  v17 = (void *)*((_DWORD *)v1 + 13);
  if ( v17 )
    operator delete(v17);
  v18 = *((_DWORD *)v1 + 10);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v19 = *((_DWORD *)v1 + 8);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = *((_DWORD *)v1 + 7);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v21 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  std::_Rb_tree<OptionID,std::pair<OptionID const,std::shared_ptr<Option>>,std::_Select1st<std::pair<OptionID const,std::shared_ptr<Option>>>,std::less<OptionID>,std::allocator<std::pair<OptionID const,std::shared_ptr<Option>>>>::_M_erase(
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


int __fastcall Options::getVRUsesRedFlashForHitEffect(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 58 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 58 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::toggleDevLogAreaFilter(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  int v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int v8; // r0@18
  int v9; // r1@19

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 117 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 117 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  v8 = Option::getInt(v7);
  if ( v8 & v4 )
    v9 = v8 & ~v4;
    v9 = v8 | v4;
  return j_j_j__ZN6Option3setEi(v7, v9);
}


int __fastcall Options::getDevLogAppend(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 114 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 114 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::unregisterLocks(int result, void *a2)
{
  void *v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1

  v2 = a2;
  v3 = *(_DWORD *)(result + 12);
  v4 = result + 4;
  while ( v3 != v4 )
  {
    Option::unregisterLock(*(Option **)(v3 + 20), v2);
    result = sub_119CAC8(v3);
    v3 = result;
  }
  return result;
}


int __fastcall Options::getVRRollTurningSensitivity(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  Option *v5; // r0@14
  int result; // r0@18

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 71 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    v5 = 0;
    if ( *((_DWORD *)v4 + 4) > 71 )
      v4 = v2;
    if ( v4 == v2 )
      v5 = 0;
    else
      v5 = (Option *)*((_DWORD *)v4 + 5);
  _R0 = Option::getFloat(v5);
  __asm
    VLDR            S0, =50.0
    VMOV            S2, R0
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall Options::onScreenSizeChanged(int result, int a2, int _R2)
{
  int v8; // r0@2
  int v9; // r3@2
  int v10; // r2@3
  int v11; // r1@4
  FloatOption *v12; // r5@15

  _R4 = result;
  __asm
  {
    VLDR            S16, [R4,#0x40]
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    __asm { VMOV            S0, R2 }
    v8 = result + 4;
    __asm { VCVT.F32.S32    S18, S0 }
    v9 = *(_DWORD *)(_R4 + 8);
    if ( v9 )
    {
      v10 = _R4 + 4;
      do
      {
        v11 = v9;
        while ( *(_DWORD *)(v11 + 16) < 3 )
        {
          v11 = *(_DWORD *)(v11 + 12);
          if ( !v11 )
          {
            v11 = v10;
            goto LABEL_11;
          }
        }
        v9 = *(_DWORD *)(v11 + 8);
        v10 = v11;
      }
      while ( v9 );
    }
    else
      v11 = _R4 + 4;
LABEL_11:
    if ( v11 == v8 )
      v12 = 0;
      if ( *(_DWORD *)(v11 + 16) > 3 )
        v11 = _R4 + 4;
      if ( v11 == v8 )
        v12 = 0;
      else
        v12 = *(FloatOption **)(v11 + 20);
    if ( !Option::hasOverrideSource(v12) )
      __asm
        VLDR            S0, =0.010417
        VMOV.F32        S2, #-3.0
        VMUL.F32        S0, S18, S0
        VADD.F32        S4, S16, S2
        VADD.F32        S0, S0, S2
        VDIV.F32        S0, S4, S0
        VMOV            R1, S0
      FloatOption::set(v12, _R1);
    result = 0;
    *(_DWORD *)(_R4 + 64) = 0;
  return result;
}


int __fastcall Options::getSwapJumpAndSneak(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 18 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 18 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRealmsRelyingParty(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 108 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 108 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::getIngamePlayerNames(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 154 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 154 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


  if ( Options::getStutterConstantTimeMode(v17) == 1 )
{
    v18 = (Entity *)ClientInstance::getCameraTargetEntity(v5);
    v19 = !Entity::isRiding(v18);
  }
  else
  {
    v19 = 0;
  v20 = (Options *)ClientInstance::getOptions(v5);
  _R0 = Options::getVRTapTurningSensitivity(v20);
  __asm
    VLDR            S0, =60.0
    VMOV            S4, R0
    VABS.F32        S2, S16
    VMUL.F32        S0, S4, S0
  if ( !_ZF && v19 == 1 )
    __asm
    {
      VLDR            S6, =0.0001
      VCMPE.F32       S2, S6
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      _R0 = &unk_27DF3A0;
      __asm
      {
        VLDR            S4, [R0,#8]
        VABS.F32        S8, S4
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) && !a5 && !byte_27DF3A1 )
        __asm
        {
          VMOV.F32        S16, S0
          VLDR            S2, =0.1
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
          {
            VLDR            S2, =-0.1
            VCMPE.F32       S4, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            __asm { VNEGLT.F32      S16, S0 }
          else
            __asm { VLDRGE          S16, =0.0 }
        v23 = 0;
        dword_27DF3A4 = 0;
        dword_27DF3A8 = 0;
LABEL_34:
        __asm { VLDR            S2, =-1.1921e-7 }
        _R0 = 0;
        __asm { VLDR            S4, =1.1921e-7 }
        v26 = 0;
          VCMPE.F32       S16, S2
          VCMPE.F32       S16, S4
        if ( _NF ^ _VF )
          _R0 = -1;
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          _R0 = 1;
        v27 = _R0 - v23;
        dword_27DF3A4 = _R0;
        byte_27DF3A1 = 0;
        if ( v27 < 0 )
          v27 = -v27;
        v28 = v27 - 1;
        if ( v8 != 1 )
          v26 = 1;
        if ( v28 > 1 || v26 != 1 )
          _R0 = &unk_27DF3A0;
            VLDR            S2, [R0,#8]
            VADD.F32        S2, S2, S16
            VABS.F32        S4, S2
            VSTR            S2, [R0,#8]
            VCMPE.F32       S4, S0
            __asm { VLDR            S0, =0.0 }
            goto LABEL_55;
            VCMPE.F32       S2, #0.0
            VMOV.F32        S6, #-1.0
            VMOV.F32        S4, #1.0
          v29 = &unk_27DF3A0;
            __asm { VMOVLT.F32      S4, S6 }
            VMUL.F32        S0, S4, S0
            VSUB.F32        S2, S2, S0
        else
            VMOV            S2, R0
            VCVT.F32.S32    S2, S2
          dword_27DF3A8 = 0;
          __asm { VMUL.F32        S0, S2, S0 }
        v29[3] = 0;
        goto LABEL_55;
  if ( !(v19 | a5) )
    v23 = dword_27DF3A4;
    goto LABEL_34;
  if ( v8 == 1 )
    goto LABEL_58;
    VLDR            S0, =0.0001
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) || a5 )
LABEL_58:
    __asm { VSUB.F64        D0, D10, D11 }
    _R0 = &unk_27DF3A0;
      VLDR            S2, [R0,#8]
      VCVT.F32.F64    S0, D0
      VADD.F32        S2, S2, S16
      VSTR            S2, [R0,#8]
      VLDR            S4, [R0,#0xC]
      VADD.F32        S0, S4, S0
      VCMPE.F32       S0, S18
      VSTR            S0, [R0,#0xC]
      __asm { VLDR            S0, =0.0 }
    else
        VMOV.F32        S6, #0.25
        VDIV.F32        S4, S18, S0
        VSUB.F32        S8, S0, S18
        VMUL.F32        S6, S18, S6
        VMUL.F32        S0, S2, S4
        VSUB.F32        S2, S2, S0
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S6, S8 }
      byte_27DF3A1 = 1;
        VSTR            S2, [R0,#8]
        VSTR            S6, [R0,#0xC]
    __asm { VLDR            S0, =0.0 }
    dword_27DF3A8 = 0;
    *(_DWORD *)algn_27DF3AC = 0;
    byte_27DF3A1 = 0;
LABEL_55:
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Options::setMusic(Options *this, float a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  float v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 43 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 43 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN11FloatOption3setEf(v7, v4);
  return result;
}


int __fastcall Options::getHideScreens(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 29 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 29 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevRenderPaths(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 97 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 97 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setDevLogFlushImmediate(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 112 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 112 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRHudDrifts(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 63 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 63 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::Options(int a1, char a2, int *a3, int a4, char a5, int a6)
{
  int v6; // r8@1
  int v7; // r6@1
  int v8; // r4@1
  int v9; // r0@1
  void *v10; // r7@1
  int v11; // r0@1
  void *v12; // r7@3
  int v13; // r0@3
  void *v14; // r7@5
  int v15; // r0@5
  void *v16; // r7@7
  int v17; // r0@7
  KeyboardRemappingLayout *v18; // r7@9
  int v19; // r0@9
  void *v20; // r6@11
  int v21; // r0@11
  int v22; // r0@13
  __int64 v23; // r0@16
  int v24; // r1@18
  void *v25; // r0@18
  bool v26; // zf@18
  int v27; // r1@20
  void *v28; // r0@20
  int v29; // r6@22
  int v30; // r0@22
  void (__fastcall *v31)(int, int); // r7@22
  int v32; // r0@23
  int v33; // r0@24
  void *v34; // r0@27
  int v35; // r6@29
  void (__fastcall *v36)(int, _DWORD **); // r7@29
  _DWORD *v37; // r0@29
  __int64 v38; // r1@29
  _DWORD *v40; // [sp+4h] [bp-5Ch]@29
  __int64 v41; // [sp+Ch] [bp-54h]@29
  void *v42; // [sp+14h] [bp-4Ch]@20
  void *v43; // [sp+20h] [bp-40h]@18
  void *ptr; // [sp+2Ch] [bp-34h]@14

  v6 = a1;
  v7 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = a1 + 4;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 0;
  *(_DWORD *)(v8 + 8) = v8;
  *(_DWORD *)(v8 + 12) = v8;
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = a6;
  *(_DWORD *)(v8 + 24) = &unk_28898CC;
  *(_DWORD *)(v8 + 28) = &unk_28898CC;
  *(_BYTE *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 33) = a2;
  *(_BYTE *)(v8 + 34) = a5;
  v9 = *a3;
  *a3 = 0;
  *(_DWORD *)(v8 + 36) = v9;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 112) = 0;
  _aeabi_memclr4(v6 + 52, 52);
  v10 = operator new(0x28u);
  GamePadRemappingLayout::GamePadRemappingLayout((int)v10, 0, 0);
  v11 = *(_DWORD *)(v6 + 80);
  *(_DWORD *)(v6 + 80) = v10;
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v12 = operator new(0x28u);
  GamePadRemappingLayout::GamePadRemappingLayout((int)v12, 1, 0);
  v13 = *(_DWORD *)(v6 + 84);
  *(_DWORD *)(v6 + 84) = v12;
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v14 = operator new(0x28u);
  GamePadRemappingLayout::GamePadRemappingLayout((int)v14, 2, 0);
  v15 = *(_DWORD *)(v6 + 88);
  *(_DWORD *)(v6 + 88) = v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v16 = operator new(0x28u);
  GamePadRemappingLayout::GamePadRemappingLayout((int)v16, 3, 1);
  v17 = *(_DWORD *)(v6 + 92);
  *(_DWORD *)(v6 + 92) = v16;
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v18 = (KeyboardRemappingLayout *)operator new(0x1Cu);
  KeyboardRemappingLayout::KeyboardRemappingLayout(v18, *(_BYTE *)(v6 + 37), v7);
  v19 = *(_DWORD *)(v6 + 100);
  *(_DWORD *)(v6 + 100) = v18;
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v20 = operator new(0x28u);
  GamePadRemappingLayout::GamePadRemappingLayout((int)v20, 3, 1);
  v21 = *(_DWORD *)(v6 + 96);
  *(_DWORD *)(v6 + 96) = v20;
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v22 = **(_DWORD **)(v6 + 40);
  if ( *(_BYTE *)(v6 + 37) )
    (*(void (__fastcall **)(void **))(v22 + 12))(&ptr);
  else
    (*(void (__fastcall **)(void **))(v22 + 8))(&ptr);
  HIDWORD(v23) = &ptr;
  LODWORD(v23) = v6 + 52;
  std::vector<int,std::allocator<int>>::operator=(v23);
  if ( ptr )
    operator delete(ptr);
  (*(void (__fastcall **)(void **))(**(_DWORD **)(v6 + 40) + 8))(&v43);
  v24 = (*(int (**)(void))(**(_DWORD **)(v6 + 40) + 16))();
  v25 = v43;
  v26 = v43 == 0;
  *(_DWORD *)(v6 + 44) = *((_DWORD *)v43 + v24);
  if ( !v26 )
    operator delete(v25);
  (*(void (__fastcall **)(void **))(**(_DWORD **)(v6 + 40) + 12))(&v42);
  v27 = (*(int (**)(void))(**(_DWORD **)(v6 + 40) + 20))();
  v28 = v42;
  v26 = v42 == 0;
  *(_DWORD *)(v6 + 48) = *((_DWORD *)v42 + v27);
    operator delete(v28);
  v29 = *(_DWORD *)(v6 + 40);
  v30 = *(_DWORD *)v29;
  v31 = *(void (__fastcall **)(int, int))(*(_DWORD *)v29 + 44);
  {
    v32 = (*(int (__fastcall **)(_DWORD))(v30 + 36))(*(_DWORD *)(v6 + 40));
    v31(v29, v32);
  }
    v33 = (*(int (__fastcall **)(_DWORD))(v30 + 32))(*(_DWORD *)(v6 + 40));
    v31(v29, v33);
  if ( *(_BYTE *)(v6 + 38) )
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v34 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v34 = &ServiceLocator<AppPlatform>::mDefaultService;
    v35 = *(_DWORD *)v34;
    v36 = *(void (__fastcall **)(int, _DWORD **))(**(_DWORD **)v34 + 224);
    v37 = operator new(4u);
    LODWORD(v38) = sub_E52216;
    *v37 = v6;
    HIDWORD(v38) = sub_E521CC;
    v40 = v37;
    v41 = v38;
    v36(v35, &v40);
    if ( (_DWORD)v41 )
      ((void (*)(void))v41)();
  Options::_registerOptions((Options *)v6);
  Options::_setOptionCallbacks((Options *)v6);
  Options::_registerObservers((Options *)v6);
  Options::_registerLocks((Options *)v6);
  return v6;
}


int __fastcall Options::toggleDevLogPriorityFilter(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  int v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int v8; // r0@18
  int v9; // r1@19

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 116 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 116 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  v8 = Option::getInt(v7);
  if ( v8 & v4 )
    v9 = v8 & ~v4;
    v9 = v8 | v4;
  return j_j_j__ZN6Option3setEi(v7, v9);
}


int __fastcall Options::getHMDPositionDisplacement(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 50 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 50 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::setSkinId(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 8 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 8 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::updateInputMode(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r2@1
  int v5; // r4@1
  int v6; // r1@2
  int v7; // r0@3
  int v8; // r0@14
  int v9; // r2@18
  int v10; // r1@19
  int v11; // r0@20
  int v12; // r0@31
  int v13; // r2@35
  int v14; // r1@36
  int v15; // r0@37
  int v16; // r0@48
  int v17; // r2@52
  int v18; // r1@53
  int v19; // r0@54
  int v20; // r0@65
  int v21; // r2@69
  int v22; // r1@70
  int v23; // r0@71
  int v24; // r0@82

  v2 = a1;
  v3 = a1 + 4;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a2;
  if ( v4 )
  {
    v6 = a1 + 4;
    do
    {
      v7 = v4;
      while ( *(_DWORD *)(v7 + 16) < 132 )
      {
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v6;
          goto LABEL_10;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v6 = v7;
    }
    while ( v4 );
  }
  else
    v7 = a1 + 4;
LABEL_10:
  if ( v7 == v3 )
    v8 = 0;
    if ( *(_DWORD *)(v7 + 16) > 132 )
      v7 = v3;
    if ( v7 == v3 )
      v8 = 0;
    else
      v8 = *(_DWORD *)(v7 + 20);
  Option::notifyOptionValueChanged(v8, v5);
  v9 = *(_DWORD *)(v2 + 8);
  if ( v9 )
    v10 = v3;
      v11 = v9;
      while ( *(_DWORD *)(v11 + 16) < 133 )
        v11 = *(_DWORD *)(v11 + 12);
        if ( !v11 )
          v11 = v10;
          goto LABEL_27;
      v9 = *(_DWORD *)(v11 + 8);
      v10 = v11;
    while ( v9 );
    v11 = v3;
LABEL_27:
  if ( v11 == v3 )
    v12 = 0;
    if ( *(_DWORD *)(v11 + 16) > 133 )
      v11 = v3;
    if ( v11 == v3 )
      v12 = 0;
      v12 = *(_DWORD *)(v11 + 20);
  Option::notifyOptionValueChanged(v12, v5);
  v13 = *(_DWORD *)(v2 + 8);
  if ( v13 )
    v14 = v3;
      v15 = v13;
      while ( *(_DWORD *)(v15 + 16) < 134 )
        v15 = *(_DWORD *)(v15 + 12);
        if ( !v15 )
          v15 = v14;
          goto LABEL_44;
      v13 = *(_DWORD *)(v15 + 8);
      v14 = v15;
    while ( v13 );
    v15 = v3;
LABEL_44:
  if ( v15 == v3 )
    v16 = 0;
    if ( *(_DWORD *)(v15 + 16) > 134 )
      v15 = v3;
    if ( v15 == v3 )
      v16 = 0;
      v16 = *(_DWORD *)(v15 + 20);
  Option::notifyOptionValueChanged(v16, v5);
  v17 = *(_DWORD *)(v2 + 8);
  if ( v17 )
    v18 = v3;
      v19 = v17;
      while ( *(_DWORD *)(v19 + 16) < 135 )
        v19 = *(_DWORD *)(v19 + 12);
        if ( !v19 )
          v19 = v18;
          goto LABEL_61;
      v17 = *(_DWORD *)(v19 + 8);
      v18 = v19;
    while ( v17 );
    v19 = v3;
LABEL_61:
  if ( v19 == v3 )
    v20 = 0;
    if ( *(_DWORD *)(v19 + 16) > 135 )
      v19 = v3;
    if ( v19 == v3 )
      v20 = 0;
      v20 = *(_DWORD *)(v19 + 20);
  Option::notifyOptionValueChanged(v20, v5);
  v21 = *(_DWORD *)(v2 + 8);
  if ( v21 )
    v22 = v3;
      v23 = v21;
      while ( *(_DWORD *)(v23 + 16) < 137 )
        v23 = *(_DWORD *)(v23 + 12);
        if ( !v23 )
          v23 = v22;
          goto LABEL_78;
      v21 = *(_DWORD *)(v23 + 8);
      v22 = v23;
    while ( v21 );
    v23 = v3;
LABEL_78:
  if ( v23 == v3 )
    v24 = 0;
    if ( *(_DWORD *)(v23 + 16) > 137 )
      v23 = v3;
    if ( v23 == v3 )
      v24 = 0;
      v24 = *(_DWORD *)(v23 + 20);
  return j_j_j__ZN6Option24notifyOptionValueChangedE9InputMode(v24, v5);
}


int __fastcall Options::getDevLogTrace(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 114 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 114 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


  if ( Options::getVRRollTurning(v2) == 1 )
{
    if ( MinecraftScreenModel::isHolographic(*(MinecraftScreenModel **)(v1 + 424)) )
      result = 1;
    else
      result = MinecraftScreenModel::isVRMode(*(MinecraftScreenModel **)(v1 + 424));
  }
  else
  {
    result = 0;
  return result;
}


int __fastcall Options::setRealmsInviteShowFriendsOption(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 124 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 124 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getSplitscreenIngamePlayerNames(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 155 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 155 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


void __fastcall Options::save(Options *this, int a2)
{
  Options *v2; // r4@1
  int v3; // r8@1
  int v4; // r6@2
  _DWORD *v5; // r0@3
  size_t v6; // r2@3
  void *v7; // r0@7
  int (__fastcall *v8)(void **, void **, int); // r3@9
  int *v9; // r5@9 OVERLAPPED
  int *v10; // r6@9 OVERLAPPED
  int v11; // r4@17
  int v12; // r6@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  int v17; // r1@35
  void *v18; // r0@35
  int *v19; // r0@36
  unsigned int *v20; // r2@42
  signed int v21; // r1@44
  void *v22; // [sp+0h] [bp-48h]@9
  int (__fastcall *v23)(void **, void **, int); // [sp+8h] [bp-40h]@9
  int (__fastcall *v24)(int, int); // [sp+Ch] [bp-3Ch]@9
  int v25; // [sp+10h] [bp-38h]@7
  unsigned __int64 v26; // [sp+14h] [bp-34h]@2
  int v27; // [sp+1Ch] [bp-2Ch]@2

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 36) )
  {
    v26 = 0LL;
    v27 = 0;
    v4 = *((_DWORD *)this + 3);
    if ( (Options *)v4 != (Options *)((char *)this + 4) )
    {
      do
      {
        v5 = *(_DWORD **)Option::getSaveTag(*(Option **)(v4 + 20));
        v6 = *(v5 - 3);
        if ( v6 != *(_DWORD *)(Options::do_not_save - 12) || memcmp(v5, (const void *)Options::do_not_save, v6) )
          (*(void (**)(void))(**(_DWORD **)(v4 + 20) + 8))();
        v4 = sub_119CAC8(v4);
      }
      while ( (Options *)v4 != (Options *)((char *)v2 + 4) );
    }
    Options::_saveInputMapping((int)v2, (int)&v26);
    sub_119C884((void **)&v25, *((const char **)v2 + 8));
    PropertyFile::savePropertiesToFile(&v25, &v26);
    v7 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    if ( v3 == 1 )
      v22 = operator new(1u);
      v8 = sub_E5E7A4;
      v23 = sub_E5E7A4;
      v24 = sub_E5E79C;
      *(_QWORD *)&v9 = *(_QWORD *)((char *)v2 + 108);
      if ( v9 == v10 )
        goto LABEL_52;
        if ( !v8 )
          sub_119C8E4();
        v24((int)&v22, *v9);
        v8 = v23;
        ++v9;
      while ( v10 != v9 );
      if ( v23 )
LABEL_52:
        ((void (__cdecl *)(void **))v8)(&v22);
    v12 = HIDWORD(v26);
    v11 = v26;
    if ( (_DWORD)v26 != HIDWORD(v26) )
        v17 = *(_DWORD *)(v11 + 4);
        v18 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
        {
          v13 = (unsigned int *)(v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        }
        v19 = (int *)(*(_DWORD *)v11 - 12);
        if ( v19 != &dword_28898C0 )
          v15 = (unsigned int *)(*(_DWORD *)v11 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
        v11 += 8;
      while ( v11 != v12 );
      v11 = v26;
    if ( v11 )
      operator delete((void *)v11);
  }
}


int __fastcall Options::getDevLogTimestamp(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 113 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 113 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setHideScreens(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 29 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 29 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::_setOptionCallbacks(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r6@1
  char *v3; // r2@1
  char *v4; // r1@2
  char *v5; // r0@3
  int v6; // r5@14
  char *v7; // r2@20
  char *v8; // r1@21
  char *v9; // r0@22
  int v10; // r5@33
  char *v11; // r2@39
  char *v12; // r1@40
  char *v13; // r0@41
  int v14; // r4@52
  int result; // r0@56
  void *v16; // [sp+0h] [bp-40h]@56
  int (__fastcall *v17)(void **, void **, int); // [sp+8h] [bp-38h]@56
  int (__fastcall *v18)(int, int); // [sp+Ch] [bp-34h]@56
  void *v19; // [sp+10h] [bp-30h]@37
  void (*v20)(void); // [sp+18h] [bp-28h]@37
  int (__fastcall *v21)(int, int); // [sp+1Ch] [bp-24h]@37
  void *v22; // [sp+20h] [bp-20h]@18
  void (*v23)(void); // [sp+28h] [bp-18h]@18
  int (*v24)(); // [sp+2Ch] [bp-14h]@18

  v1 = this;
  v2 = (char *)this + 4;
  v3 = (char *)*((_DWORD *)this + 2);
  if ( v3 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v3;
      while ( *((_DWORD *)v5 + 4) < 101 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v3 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v3 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v2 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 101 )
      v5 = v2;
    if ( v5 == v2 )
      v6 = 0;
    else
      v6 = *((_DWORD *)v5 + 5);
  v22 = operator new(1u);
  v23 = (void (*)(void))sub_E5DFB6;
  v24 = sub_E5DFB2;
  Option::setCoerceValueCallback(v6, (int)&v22);
  if ( v23 )
    v23();
  v7 = (char *)*((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = v2;
      v9 = v7;
      while ( *((_DWORD *)v9 + 4) < 19 )
        v9 = (char *)*((_DWORD *)v9 + 3);
        if ( !v9 )
          v9 = v8;
          goto LABEL_29;
      v7 = (char *)*((_DWORD *)v9 + 2);
      v8 = v9;
    while ( v7 );
    v9 = v2;
LABEL_29:
  if ( v9 == v2 )
    v10 = 0;
    if ( *((_DWORD *)v9 + 4) > 19 )
      v9 = v2;
    if ( v9 == v2 )
      v10 = 0;
      v10 = *((_DWORD *)v9 + 5);
  v19 = operator new(1u);
  v20 = (void (*)(void))sub_E5DFE8;
  v21 = sub_E5DFE4;
  Option::setCoerceSaveValueCallback(v10, (int)&v19);
  if ( v20 )
    v20();
  v11 = (char *)*((_DWORD *)v1 + 2);
  if ( v11 )
    v12 = v2;
      v13 = v11;
      while ( *((_DWORD *)v13 + 4) < 51 )
        v13 = (char *)*((_DWORD *)v13 + 3);
        if ( !v13 )
          v13 = v12;
          goto LABEL_48;
      v11 = (char *)*((_DWORD *)v13 + 2);
      v12 = v13;
    while ( v11 );
    v13 = v2;
LABEL_48:
  if ( v13 == v2 )
    v14 = 0;
    if ( *((_DWORD *)v13 + 4) > 51 )
      v13 = v2;
    if ( v13 == v2 )
      v14 = 0;
      v14 = *((_DWORD *)v13 + 5);
  v16 = operator new(1u);
  v17 = sub_E5DFE8;
  v18 = sub_E5DFE4;
  result = Option::setCoerceSaveValueCallback(v14, (int)&v16);
  if ( v17 )
    result = ((int (__cdecl *)(void **))v17)(&v16);
  return result;
}


int __fastcall Options::getVRHandPointer(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 80 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 80 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getUseMouseForDigging(Options *this)
{
  return 0;
}


int __fastcall Options::setSplitscreenIngamePlayerNames(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 155 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 155 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRLinearJump(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 65 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 65 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::setNumberOfFriendsRealms(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 126 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 126 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getAcknowledgedAutoSave(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 160 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 160 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setHasEverLoggedIntoXbl(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 13 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 13 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setVRLivingRoomMode(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 84 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 84 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setHideToolTips(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 145 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 145 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getPlayerViewPerspective(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 2 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 2 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRLivingRoomMode(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 84 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 84 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setServerVisible(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 4 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 4 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setDevLogTimestamp(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 113 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 113 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRTapTurningSensitivity(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 70 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 70 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setFancyGraphics(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 22 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 22 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getCanUseCellularData(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 129 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 129 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setSplitscreenInterfaceOpacity(Options *this, float a2)
{
  char *v2; // r3@1
  char *v3; // r0@1
  float v4; // r4@1
  char *v5; // r2@2
  char *v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 157 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 157 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN11FloatOption3setEf(v7, v4);
  return result;
}


int __fastcall Options::setDevLogTrace(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 114 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 114 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


char *__fastcall Options::getSkinId(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  Option *v5; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 8 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    v5 = 0;
    if ( *((_DWORD *)v4 + 4) > 8 )
      v4 = v2;
    if ( v4 == v2 )
      v5 = 0;
    else
      v5 = (Option *)*((_DWORD *)v4 + 5);
  return Option::getString(v5);
}


void __fastcall Options::load(int a1, int *a2)
{
  Options *v2; // r4@1
  int *v3; // r0@1

  v2 = (Options *)a1;
  v3 = (int *)(a1 + 32);
  if ( v3 != a2 )
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, a2);
  j_j_j__ZN7Options5_loadEv(v2);
}


int __fastcall Options::getServerVisible(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 4 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 4 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


char *__fastcall Options::_registerObservers(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r6@1
  char *v3; // r2@1
  char *v4; // r1@2
  char *v5; // r0@3
  int v6; // r5@14
  _DWORD *v7; // r0@18
  __int64 v8; // r1@18
  char *v9; // r2@20
  char *v10; // r1@21
  char *v11; // r0@22
  int v12; // r5@33
  _DWORD *v13; // r0@37
  __int64 v14; // r1@37
  char *v15; // r2@39
  char *v16; // r1@40
  char *v17; // r0@41
  int v18; // r5@52
  _DWORD *v19; // r0@56
  __int64 v20; // r1@56
  char *v21; // r2@58
  char *v22; // r1@59
  char *v23; // r0@60
  int v24; // r5@71
  _DWORD *v25; // r0@75
  __int64 v26; // r1@75
  char *v27; // r2@77
  char *v28; // r1@78
  char *v29; // r0@79
  int v30; // r5@90
  _DWORD *v31; // r0@94
  __int64 v32; // r1@94
  char *v33; // r2@96
  char *v34; // r1@97
  char *v35; // r0@98
  int v36; // r5@109
  _DWORD *v37; // r0@113
  __int64 v38; // r1@113
  char *result; // r0@113
  _DWORD *v40; // [sp+0h] [bp-70h]@113
  __int64 v41; // [sp+8h] [bp-68h]@113
  _DWORD *v42; // [sp+10h] [bp-60h]@94
  __int64 v43; // [sp+18h] [bp-58h]@94
  _DWORD *v44; // [sp+20h] [bp-50h]@75
  __int64 v45; // [sp+28h] [bp-48h]@75
  _DWORD *v46; // [sp+30h] [bp-40h]@56
  __int64 v47; // [sp+38h] [bp-38h]@56
  _DWORD *v48; // [sp+40h] [bp-30h]@37
  __int64 v49; // [sp+48h] [bp-28h]@37
  _DWORD *v50; // [sp+50h] [bp-20h]@18
  __int64 v51; // [sp+58h] [bp-18h]@18

  v1 = this;
  v2 = (char *)this + 4;
  v3 = (char *)*((_DWORD *)this + 2);
  if ( v3 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v3;
      while ( *((_DWORD *)v5 + 4) < 132 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v3 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v3 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v2 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 132 )
      v5 = v2;
    if ( v5 == v2 )
      v6 = 0;
    else
      v6 = *((_DWORD *)v5 + 5);
  v7 = operator new(4u);
  LODWORD(v8) = sub_E5E0B4;
  *v7 = v1;
  HIDWORD(v8) = sub_E5E018;
  v50 = v7;
  v51 = v8;
  Option::registerObserver(v6, (int)v1, (int)&v50);
  if ( (_DWORD)v51 )
    ((void (*)(void))v51)();
  v9 = (char *)*((_DWORD *)v1 + 2);
  if ( v9 )
    v10 = v2;
      v11 = v9;
      while ( *((_DWORD *)v11 + 4) < 44 )
        v11 = (char *)*((_DWORD *)v11 + 3);
        if ( !v11 )
          v11 = v10;
          goto LABEL_29;
      v9 = (char *)*((_DWORD *)v11 + 2);
      v10 = v11;
    while ( v9 );
    v11 = v2;
LABEL_29:
  if ( v11 == v2 )
    v12 = 0;
    if ( *((_DWORD *)v11 + 4) > 44 )
      v11 = v2;
    if ( v11 == v2 )
      v12 = 0;
      v12 = *((_DWORD *)v11 + 5);
  v13 = operator new(4u);
  LODWORD(v14) = sub_E5E190;
  *v13 = v1;
  HIDWORD(v14) = sub_E5E0EC;
  v48 = v13;
  v49 = v14;
  Option::registerObserver(v12, (int)v1, (int)&v48);
  if ( (_DWORD)v49 )
    ((void (*)(void))v49)();
  v15 = (char *)*((_DWORD *)v1 + 2);
  if ( v15 )
    v16 = v2;
      v17 = v15;
      while ( *((_DWORD *)v17 + 4) < 32 )
        v17 = (char *)*((_DWORD *)v17 + 3);
        if ( !v17 )
          v17 = v16;
          goto LABEL_48;
      v15 = (char *)*((_DWORD *)v17 + 2);
      v16 = v17;
    while ( v15 );
    v17 = v2;
LABEL_48:
  if ( v17 == v2 )
    v18 = 0;
    if ( *((_DWORD *)v17 + 4) > 32 )
      v17 = v2;
    if ( v17 == v2 )
      v18 = 0;
      v18 = *((_DWORD *)v17 + 5);
  v19 = operator new(4u);
  LODWORD(v20) = sub_E5E1EE;
  *v19 = v1;
  HIDWORD(v20) = sub_E5E1C6;
  v46 = v19;
  v47 = v20;
  Option::registerObserver(v18, (int)v1, (int)&v46);
  if ( (_DWORD)v47 )
    ((void (*)(void))v47)();
  v21 = (char *)*((_DWORD *)v1 + 2);
  if ( v21 )
    v22 = v2;
      v23 = v21;
      while ( *((_DWORD *)v23 + 4) < 83 )
        v23 = (char *)*((_DWORD *)v23 + 3);
        if ( !v23 )
          v23 = v22;
          goto LABEL_67;
      v21 = (char *)*((_DWORD *)v23 + 2);
      v22 = v23;
    while ( v21 );
    v23 = v2;
LABEL_67:
  if ( v23 == v2 )
    v24 = 0;
    if ( *((_DWORD *)v23 + 4) > 83 )
      v23 = v2;
    if ( v23 == v2 )
      v24 = 0;
      v24 = *((_DWORD *)v23 + 5);
  v25 = operator new(4u);
  LODWORD(v26) = sub_E5E24C;
  *v25 = v1;
  HIDWORD(v26) = sub_E5E224;
  v44 = v25;
  v45 = v26;
  Option::registerObserver(v24, (int)v1, (int)&v44);
  if ( (_DWORD)v45 )
    ((void (*)(void))v45)();
  v27 = (char *)*((_DWORD *)v1 + 2);
  if ( v27 )
    v28 = v2;
      v29 = v27;
      while ( *((_DWORD *)v29 + 4) < 33 )
        v29 = (char *)*((_DWORD *)v29 + 3);
        if ( !v29 )
          v29 = v28;
          goto LABEL_86;
      v27 = (char *)*((_DWORD *)v29 + 2);
      v28 = v29;
    while ( v27 );
    v29 = v2;
LABEL_86:
  if ( v29 == v2 )
    v30 = 0;
    if ( *((_DWORD *)v29 + 4) > 33 )
      v29 = v2;
    if ( v29 == v2 )
      v30 = 0;
      v30 = *((_DWORD *)v29 + 5);
  v31 = operator new(4u);
  LODWORD(v32) = sub_E5E2A0;
  *v31 = v1;
  HIDWORD(v32) = sub_E5E282;
  v42 = v31;
  v43 = v32;
  Option::registerObserver(v30, (int)v1, (int)&v42);
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v33 = (char *)*((_DWORD *)v1 + 2);
  if ( v33 )
    v34 = v2;
      v35 = v33;
      while ( *((_DWORD *)v35 + 4) < 15 )
        v35 = (char *)*((_DWORD *)v35 + 3);
        if ( !v35 )
          v35 = v34;
          goto LABEL_105;
      v33 = (char *)*((_DWORD *)v35 + 2);
      v34 = v35;
    while ( v33 );
    v35 = v2;
LABEL_105:
  if ( v35 == v2 )
    v36 = 0;
    if ( *((_DWORD *)v35 + 4) > 15 )
      v35 = v2;
    if ( v35 == v2 )
      v36 = 0;
      v36 = *((_DWORD *)v35 + 5);
  v37 = operator new(4u);
  LODWORD(v38) = sub_E5E338;
  *v37 = v1;
  HIDWORD(v38) = sub_E5E2D8;
  v40 = v37;
  v41 = v38;
  result = Option::registerObserver(v36, (int)v1, (int)&v40);
  if ( (_DWORD)v41 )
    result = (char *)((int (__cdecl *)(_DWORD **))v41)(&v40);
  return result;
}


int __fastcall Options::getSplitscreenInterfaceOpacity(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 157 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 157 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setResetPlayerAlignment(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 46 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 46 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


  if ( Options::getMultiPlayerGame((Options *)HIDWORD(v1)) == 1 )
{
    v3 = *(_DWORD *)(v1 + 220);
    v4 = v1 + 216;
    for ( i = v1 + 216; v3; v3 = *(_DWORD *)(v3 + 8) )
      i = v3;
    if ( i != v4 && !*(_BYTE *)(i + 16) )
      v4 = i;
    v6 = ClientInstance::getLevel(*(ClientInstance **)(v4 + 20));
    result = 0;
    if ( !v6 )
      result = 1;
  }
  else
  {
  return result;
}


int __fastcall Options::getDevFindMobs(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 163 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 163 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRStickyMiningHandPointer(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 68 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 68 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setCreateRealmUpsellCount(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 127 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 127 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getVR180Turning(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 73 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 73 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setDevRenderBoundingBoxes(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 96 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 96 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


char *__fastcall Options::getLastCustomSkinId(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  Option *v5; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 9 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    v5 = 0;
    if ( *((_DWORD *)v4 + 4) > 9 )
      v4 = v2;
    if ( v4 == v2 )
      v5 = 0;
    else
      v5 = (Option *)*((_DWORD *)v4 + 5);
  return Option::getString(v5);
}


void *__fastcall Options::getXboxLiveSandbox(Options *this)
{
  return &unk_27CB7DC;
}


char *__fastcall Options::getDisplayedUsername(Options *this)
{
  char *result; // r0@2
  char *v2; // r3@3
  char *v3; // r0@3
  char *v4; // r2@4
  char *v5; // r1@5

  if ( *(_DWORD *)(*((_DWORD *)this + 7) - 12) )
  {
    result = (char *)this + 28;
  }
  else
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = v3;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 0 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = v3;
LABEL_12:
    if ( v5 == v3 )
      goto LABEL_20;
    if ( *((_DWORD *)v5 + 4) > 0 )
LABEL_20:
      result = j_j_j__ZNK6Option9getStringEv(0);
      result = j_j_j__ZNK6Option9getStringEv(*((Option **)v5 + 5));
  return result;
}


void __fastcall Options::load(int a1, int *a2)
{
  Options::load(a1, a2);
}


_BOOL4 __fastcall Options::hasOverrideUsername(Options *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 7) - 12) != 0;
}


int __fastcall Options::getRealmsInviteShowFriendsOption(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 124 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 124 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRealmsRelyingPartyPayment(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 109 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 109 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::getSound(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 42 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 42 )
LABEL_18:
    result = j_j_j__ZNK6Option8getFloatEv(0);
    result = j_j_j__ZNK6Option8getFloatEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getHideItemInHand(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 30 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 30 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getHideHud(Options *this)
{
  char *v1; // r1@1
  int v2; // r2@1
  char *v3; // r0@1
  char *v4; // r3@3
  char *v5; // r2@4
  char *v6; // r3@11

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = *((_BYTE *)this + 37);
  v3 = (char *)this + 4;
  if ( !v2 )
  {
    if ( v1 )
    {
      v6 = v3;
      do
      {
        v5 = v1;
        while ( *((_DWORD *)v5 + 4) < 150 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v6;
            goto LABEL_25;
          }
        }
        v1 = (char *)*((_DWORD *)v5 + 2);
        v6 = v5;
      }
      while ( v1 );
    }
    else
      v5 = v3;
LABEL_25:
    if ( v5 == v3 )
      return Option::getBool(0);
    if ( *((_DWORD *)v5 + 4) > 150 )
    return Option::getBool(*((Option **)v5 + 5));
  }
  if ( v1 )
    v4 = v3;
    do
      v5 = v1;
      while ( *((_DWORD *)v5 + 4) < 152 )
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
          v5 = v4;
          goto LABEL_19;
      v1 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    while ( v1 );
  else
    v5 = v3;
LABEL_19:
  if ( v5 != v3 )
    if ( *((_DWORD *)v5 + 4) > 152 )
    if ( v5 != v3 )
      return Option::getBool(*((Option **)v5 + 5));
  return Option::getBool(0);
}


void *__fastcall Options::getRealmsEndpoint(Options *this)
{
  return &unk_27CB7D4;
}


int __fastcall Options::getHasChosenNotToSignInToXbl(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 14 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 14 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getCreateRealmUpsellCount(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 127 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 127 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getFixedCamera(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 28 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 28 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setForceUseUnsortedPolys(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 26 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 26 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setDevRenderPaths(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 97 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 97 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setShowAutoSaveIcon(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 161 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 161 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getAutoJump(int a1, unsigned int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1
  int v4; // r2@2
  int v5; // r6@2
  int v6; // r1@3
  int v7; // r0@4
  Option *v8; // r0@16
  int v9; // r2@21
  int v10; // r1@22
  int v11; // r0@23
  int v12; // r2@29
  int v13; // r1@30
  int v14; // r0@31
  int v15; // r0@42
  int result; // r0@46

  v2 = a1;
  v3 = a2;
  if ( !*(_BYTE *)(a1 + 37) )
  {
    v5 = a1 + 4;
LABEL_21:
    v9 = *(_DWORD *)(v2 + 8);
    if ( v9 )
    {
      v10 = v5;
      do
      {
        v11 = v9;
        while ( *(_DWORD *)(v11 + 16) < 134 )
        {
          v11 = *(_DWORD *)(v11 + 12);
          if ( !v11 )
          {
            v11 = v10;
            goto LABEL_38;
          }
        }
        v9 = *(_DWORD *)(v11 + 8);
        v10 = v11;
      }
      while ( v9 );
    }
    else
      v11 = v5;
LABEL_38:
    if ( v11 == v5 )
      v15 = 0;
      if ( *(_DWORD *)(v11 + 16) > 134 )
        v11 = v5;
      if ( v11 == v5 )
        v15 = 0;
      else
        v15 = *(_DWORD *)(v11 + 20);
    return Option::getBool(v15, v3);
  }
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a1 + 4;
  if ( v4 )
    v6 = a1 + 4;
    do
      v7 = v4;
      while ( *(_DWORD *)(v7 + 16) < 84 )
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
          v7 = v6;
          goto LABEL_12;
      v4 = *(_DWORD *)(v7 + 8);
      v6 = v7;
    while ( v4 );
  else
    v7 = a1 + 4;
LABEL_12:
  if ( v7 == v5 )
    v8 = 0;
    if ( *(_DWORD *)(v7 + 16) > 84 )
      v7 = v2 + 4;
    if ( v7 == v5 )
      v8 = 0;
      v8 = *(Option **)(v7 + 20);
  if ( Option::getBool(v8) )
    goto LABEL_21;
  v12 = *(_DWORD *)(v2 + 8);
  if ( v12 )
    v13 = v2 + 4;
      v14 = v12;
      while ( *(_DWORD *)(v14 + 16) < 52 )
        v14 = *(_DWORD *)(v14 + 12);
        if ( !v14 )
          v14 = v13;
          goto LABEL_48;
      v12 = *(_DWORD *)(v14 + 8);
      v13 = v14;
    while ( v12 );
    v14 = v2 + 4;
LABEL_48:
  if ( v14 == v5 )
    goto LABEL_56;
  if ( *(_DWORD *)(v14 + 16) > 52 )
LABEL_56:
    result = Option::getBool(0);
    result = Option::getBool(*(Option **)(v14 + 20));
  return result;
}


void *__fastcall Options::getRealmsEndpointPayment(Options *this)
{
  return &unk_27CB7D8;
}


int __fastcall Options::getStutterConstantTimeMode(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 54 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 54 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 1;
  return result;
}


int __fastcall Options::setFullscreen(int result, int a2)
{
  int v2; // r4@1
  int v3; // r3@2
  int v4; // r0@2
  int v5; // r2@3
  int v6; // r1@4
  Option *v7; // r5@15

  v2 = a2;
  if ( !*(_BYTE *)(result + 37) )
  {
    v3 = *(_DWORD *)(result + 8);
    v4 = result + 4;
    if ( v3 )
    {
      v5 = v4;
      do
      {
        v6 = v3;
        while ( *(_DWORD *)(v6 + 16) < 36 )
        {
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v5;
            goto LABEL_11;
          }
        }
        v3 = *(_DWORD *)(v6 + 8);
        v5 = v6;
      }
      while ( v3 );
    }
    else
      v6 = v4;
LABEL_11:
    if ( v6 == v4 )
      v7 = 0;
      if ( *(_DWORD *)(v6 + 16) > 36 )
        v6 = v4;
      if ( v6 == v4 )
        v7 = 0;
      else
        v7 = *(Option **)(v6 + 20);
    result = Option::hasOverrideSource(v7);
    if ( !result )
      result = j_j_j__ZN10BoolOption3setEb_0(v7, v2);
  }
  return result;
}


int __fastcall Options::setDifficulty(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 1 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 1 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getVRRightStickPitchMaxAngle(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 87 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 87 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getRealmsEnvironment(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 105 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 105 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDestroyVibration(int a1, unsigned int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < 135 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > 135 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolE9InputMode(0, a2);
    result = j_j_j__ZNK6Option7getBoolE9InputMode(*(_DWORD *)(v5 + 20), a2);
  return result;
}


int __fastcall Options::getTransparentLeaves(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 22 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 22 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setUseIPv6Only(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 103 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 103 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setMSAA(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 32 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 32 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


int __fastcall Options::getParticleViewDistance(Options *this)
{
  char *v1; // r1@1
  int v2; // r2@1
  char *v3; // r0@1
  char *v4; // r3@3
  char *v5; // r2@4
  char *v6; // r3@11
  char *v7; // r2@12

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = *((_BYTE *)this + 37);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = v3;
      do
      {
        v5 = v1;
        while ( *((_DWORD *)v5 + 4) < 47 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_19;
          }
        }
        v1 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v1 );
    }
    else
      v5 = v3;
LABEL_19:
    if ( v5 != v3 )
      if ( *((_DWORD *)v5 + 4) > 47 )
        v5 = v3;
      if ( v5 != v3 )
        return j_j_j__ZNK6Option8getFloatEv(*((Option **)v5 + 5));
  }
  else
      v6 = v3;
        v7 = v1;
        while ( *((_DWORD *)v7 + 4) < 20 )
          v7 = (char *)*((_DWORD *)v7 + 3);
          if ( !v7 )
            v7 = v6;
            goto LABEL_26;
        v1 = (char *)*((_DWORD *)v7 + 2);
        v6 = v7;
      v7 = v3;
LABEL_26:
    if ( v7 != v3 )
      if ( *((_DWORD *)v7 + 4) > 20 )
        v7 = v3;
      if ( v7 != v3 )
        return j_j_j__ZNK6Option8getFloatEv(*((Option **)v7 + 5));
  return j_j_j__ZNK6Option8getFloatEv(0);
}


int __fastcall Options::setRenderClouds(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 136 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 136 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getStereoRendering(Options *this)
{
  int result; // r0@2
  char *v2; // r3@3
  char *v3; // r0@3
  char *v4; // r2@4
  char *v5; // r1@5
  Option *v6; // r0@16

  if ( *((_BYTE *)this + 37) )
  {
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = v3;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 55 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = v3;
LABEL_12:
    if ( v5 == v3 )
      v6 = 0;
      if ( *((_DWORD *)v5 + 4) > 55 )
        v5 = v3;
      if ( v5 == v3 )
        v6 = 0;
      else
        v6 = (Option *)*((_DWORD *)v5 + 5);
    result = Option::getBool(v6);
  }
  else
    result = 0;
  return result;
}


void __fastcall Options::save(Options *this, int a2)
{
  Options::save(this, a2);
}


int __fastcall Options::getRenderClouds(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 136 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 136 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getDevAutoLoadLevel(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 100 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 100 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setCanUseCellularData(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 129 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 129 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRHandControlsHUD(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 79 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 79 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getPreferPolyTessellation(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 25 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 25 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVRLivingRoomCursorCentered(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 64 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 64 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getStutterTurnSound(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 49 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 49 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::getVRLivingRoomHintTime(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 76 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 76 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setDevLogAppend(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 115 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 115 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


        || (v16 = (Options *)ClientInstance::getOptions(v3), Options::getVRLivingRoomMode(v16)) )
{
        v17 = (DefaultUIScreenSetupCleanupStrategy *)operator new(8u);
        result = (_DWORD *)DefaultUIScreenSetupCleanupStrategy::DefaultUIScreenSetupCleanupStrategy(v17, v3);
        *v4 = v17;
      }
      else
      {
        v18 = (HoloHUDScreenSetupCleanupStrategy *)operator new(0x48u);
        result = HoloHUDScreenSetupCleanupStrategy::HoloHUDScreenSetupCleanupStrategy(v18, v3);
        *v4 = v18;
      break;
    default:
      result = 0;
      *v4 = 0;
  }
  return result;
}


int __fastcall Options::setVROptionsComfortControls(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 74 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 74 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::getVRUsesNormalHitEffect(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 57 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 57 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 1;
  return result;
}


int __fastcall Options::getVRHandsVisible(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 81 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 81 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRealmsEndpoint(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 106 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 106 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::getFancyGraphics(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 22 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 22 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getTelemetryOptions(int result, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r4@1
  __int64 v5; // r0@3
  void *v6; // r10@5
  char *v7; // r6@5
  signed int v8; // r1@5
  unsigned int v9; // r2@5
  unsigned int v10; // r1@7
  unsigned int v11; // r7@7
  char *v12; // r11@14
  int v13; // r11@16

  v2 = *(_DWORD *)(result + 12);
  v3 = result + 4;
  v4 = a2;
  if ( v2 != result + 4 )
  {
    do
    {
      if ( *(_DWORD *)(*(_DWORD *)Option::getTelemetryProperty(*(Option **)(v2 + 20)) - 12) )
      {
        v5 = *(_QWORD *)(v4 + 4);
        if ( (_DWORD)v5 == HIDWORD(v5) )
        {
          v6 = *(void **)v4;
          v7 = 0;
          v8 = v5 - *(_DWORD *)v4;
          v9 = v8 >> 2;
          if ( !(v8 >> 2) )
            v9 = 1;
          v10 = v9 + (v8 >> 2);
          v11 = v10;
          if ( 0 != v10 >> 30 )
            v11 = 0x3FFFFFFF;
          if ( v10 < v9 )
          if ( v11 )
          {
            if ( v11 >= 0x40000000 )
              sub_119C874();
            v7 = (char *)operator new(4 * v11);
            LODWORD(v5) = *(_QWORD *)v4 >> 32;
            v6 = (void *)*(_QWORD *)v4;
          }
          v12 = &v7[v5 - (_DWORD)v6];
          *(_DWORD *)&v7[v5 - (_DWORD)v6] = *(_DWORD *)(v2 + 16);
          if ( 0 != ((signed int)v5 - (signed int)v6) >> 2 )
            _aeabi_memmove4(v7, v6);
          v13 = (int)(v12 + 4);
          if ( v6 )
            operator delete(v6);
          *(_DWORD *)v4 = v7;
          *(_DWORD *)(v4 + 4) = v13;
          *(_DWORD *)(v4 + 8) = &v7[4 * v11];
        }
        else
          *(_DWORD *)v5 = *(_DWORD *)(v2 + 16);
          *(_DWORD *)(v4 + 4) = v5 + 4;
      }
      result = sub_119CAC8(v2);
      v2 = result;
    }
    while ( result != v3 );
  }
  return result;
}


int __fastcall Options::getDevMemoryCheckTimer(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 144 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 144 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getHidePaperDoll(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 142 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 142 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::getVROptionsComfortControls(Options *this)
{
  int result; // r0@2
  char *v2; // r3@3
  char *v3; // r0@3
  char *v4; // r2@4
  char *v5; // r1@5
  Option *v6; // r0@16

  if ( *((_BYTE *)this + 37) )
  {
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = v3;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 74 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = v3;
LABEL_12:
    if ( v5 == v3 )
      v6 = 0;
      if ( *((_DWORD *)v5 + 4) > 74 )
        v5 = v3;
      if ( v5 == v3 )
        v6 = 0;
      else
        v6 = (Option *)*((_DWORD *)v5 + 5);
    result = Option::getBool(v6);
  }
  else
    result = 0;
  return result;
}


int __fastcall Options::getUseIPv6Only(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 103 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 103 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setFileStorageLocation(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < 15 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > 15 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*(Option **)(v5 + 20), a2);
  return result;
}


int __fastcall Options::setSplitscreenDirection(Options *this, int a2)
{
  char *v2; // r3@1
  char *v3; // r12@1
  char *v4; // r0@2
  char *v5; // r2@3
  int result; // r0@14

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 149 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *((_DWORD *)v5 + 4) > 149 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*((Option **)v5 + 5), a2);
  return result;
}


char *__fastcall Options::addObserver(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r8@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11
  char *v11; // r5@13
  int v12; // r5@15

  v2 = a2;
  v3 = a1;
  *(_DWORD *)(a2 + 4) = a1 + 104;
  v4 = *(_QWORD *)(a1 + 112);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v3 + 108);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_119C874();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v3 + 108) >> 32;
      v6 = (void *)*(_QWORD *)(v3 + 108);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v2;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_DWORD *)(v3 + 108) = v10;
    *(_DWORD *)(v3 + 112) = v12;
    *(_DWORD *)(v3 + 116) = result;
  }
  else
    *(_DWORD *)v4 = v2;
    result = (char *)(*(_DWORD *)(v3 + 112) + 4);
    *(_DWORD *)(v3 + 112) = result;
  return result;
}


int __fastcall Options::getVRHeadSteering(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 53 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 53 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::setSensitivity(int a1, int a2, unsigned int a3)
{
  int v3; // r6@1
  unsigned int v4; // r5@1
  int v5; // r4@1
  int v6; // r2@2
  int v7; // r7@2
  int v8; // r1@3
  int v9; // r0@4
  Option *v10; // r0@16
  int v11; // r2@21
  int v12; // r1@22
  int v13; // r0@23
  int v14; // r2@29
  int v15; // r1@30
  int v16; // r0@31
  int v17; // r0@42
  int result; // r0@46
  Option *v19; // r5@52

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(a1 + 37) )
  {
    v7 = a1 + 4;
LABEL_21:
    v11 = *(_DWORD *)(v3 + 8);
    if ( v11 )
    {
      v12 = v7;
      do
      {
        v13 = v11;
        while ( *(_DWORD *)(v13 + 16) < 132 )
        {
          v13 = *(_DWORD *)(v13 + 12);
          if ( !v13 )
          {
            v13 = v12;
            goto LABEL_38;
          }
        }
        v11 = *(_DWORD *)(v13 + 8);
        v12 = v13;
      }
      while ( v11 );
    }
    else
      v13 = v7;
LABEL_38:
    if ( v13 == v7 )
      v17 = 0;
      if ( *(_DWORD *)(v13 + 16) > 132 )
        v13 = v7;
      if ( v13 == v7 )
        v17 = 0;
      else
        v17 = *(_DWORD *)(v13 + 20);
    return j_j_j__ZN6Option3setE9InputModef(v17, v4, v5);
  }
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a1 + 4;
  if ( v6 )
    v8 = a1 + 4;
    do
      v9 = v6;
      while ( *(_DWORD *)(v9 + 16) < 84 )
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
          v9 = v8;
          goto LABEL_12;
      v6 = *(_DWORD *)(v9 + 8);
      v8 = v9;
    while ( v6 );
  else
    v9 = a1 + 4;
LABEL_12:
  if ( v9 == v7 )
    v10 = 0;
    if ( *(_DWORD *)(v9 + 16) > 84 )
      v9 = v3 + 4;
    if ( v9 == v7 )
      v10 = 0;
      v10 = *(Option **)(v9 + 20);
  if ( Option::getBool(v10) )
    goto LABEL_21;
  v14 = *(_DWORD *)(v3 + 8);
  if ( v14 )
    v15 = v3 + 4;
      v16 = v14;
      while ( *(_DWORD *)(v16 + 16) < 44 )
        v16 = *(_DWORD *)(v16 + 12);
        if ( !v16 )
          v16 = v15;
          goto LABEL_48;
      v14 = *(_DWORD *)(v16 + 8);
      v15 = v16;
    while ( v14 );
    v16 = v3 + 4;
LABEL_48:
  if ( v16 == v7 )
    v19 = 0;
    if ( *(_DWORD *)(v16 + 16) > 44 )
      v16 = v3 + 4;
    if ( v16 == v7 )
      v19 = 0;
      v19 = *(Option **)(v16 + 20);
  result = Option::hasOverrideSource(v19);
  if ( !result )
    result = j_j_j__ZN11FloatOption3setEf(v19, *(float *)&v5);
  return result;
}


int __fastcall Options::setFixedCamera(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 28 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 28 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


int __fastcall Options::setRealmsEndpointPayment(int a1, const void **a2)
{
  int v2; // r3@1
  int v3; // r0@1
  const void **v4; // r4@1
  int v5; // r2@2
  int v6; // r1@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  v4 = a2;
  if ( v2 )
  {
    v5 = v3;
    do
    {
      v6 = v2;
      while ( *(_DWORD *)(v6 + 16) < 107 )
      {
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = v3;
LABEL_10:
  if ( v6 == v3 )
    v7 = 0;
    if ( *(_DWORD *)(v6 + 16) > 107 )
      v6 = v3;
    if ( v6 == v3 )
      v7 = 0;
    else
      v7 = *(Option **)(v6 + 20);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN12StringOption3setERKSs((int)v7, v4);
  return result;
}


int __fastcall Options::getVRRightStickPitchAssist(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 59 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 59 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


void __fastcall Options::_registerOptions(Options *this)
{
  Options *v1; // r9@1
  void *v2; // r0@2
  char v4; // r0@4
  Option *v5; // r5@6
  void *v6; // r0@6
  Option *v7; // r5@7
  void *v8; // r0@7
  Option *v9; // r5@8
  void *v10; // r0@8
  Option *v11; // r5@9
  void *v12; // r0@9
  unsigned __int32 v13; // r0@10
  char v14; // r3@10
  Option *v15; // r5@12
  void *v16; // r0@12
  Option *v17; // r6@13
  void *v18; // r0@13
  void *v19; // r0@15
  Option *v20; // r5@17
  void *v21; // r0@17
  Option *v22; // r5@18
  void *v23; // r0@18
  Option *v24; // r5@19
  void *v25; // r0@19
  Option *v26; // r5@20
  void *v27; // r0@20
  Option *v28; // r5@21
  void *v29; // r0@21
  Option *v30; // r5@22
  void *v31; // r0@22
  Option *v32; // r5@23
  void *v33; // r0@23
  Option *v34; // r5@24
  void *v35; // r0@24
  Option *v36; // r5@25
  void *v37; // r0@25
  Option *v38; // r5@26
  void *v39; // r0@26
  Option *v40; // r5@27
  void *v41; // r0@27
  Option *v42; // r5@28
  void *v43; // r0@28
  Option *v44; // r5@29
  void *v45; // r0@29
  Option *v46; // r5@30
  void *v47; // r0@30
  Option *v48; // r5@31
  void *v49; // r0@31
  Option *v50; // r5@32
  void *v51; // r0@32
  Option *v52; // r5@33
  void *v53; // r0@33
  __int64 v54; // ST08_8@34
  __int64 v55; // ST08_8@34
  Option *v56; // r5@34
  void *v57; // r0@34
  void *v58; // r0@36
  char v59; // r0@38
  __int64 v60; // ST08_8@40
  Option *v61; // r5@40
  void *v62; // r0@40
  Option *v63; // r5@41
  void *v64; // r0@41
  int v65; // r1@44
  int (*v66)(void); // r1@45
  Option *v67; // r5@47
  void *v68; // r0@47
  Option *v69; // r5@48
  void *v70; // r0@48
  Option *v71; // r5@49
  void *v72; // r0@49
  Option *v73; // r5@50
  void *v74; // r0@50
  void *v75; // r0@52
  __int64 v76; // ST08_8@54
  AppPlatform **v77; // r0@55
  Option *v78; // r5@57
  void *v79; // r0@57
  Option *v80; // r5@58
  void *v81; // r0@58
  Option *v82; // r5@59
  void *v83; // r0@59
  Option *v84; // r5@60
  void *v85; // r0@60
  Option *v86; // r5@61
  void *v87; // r0@61
  Option *v88; // r5@62
  void *v89; // r0@62
  Option *v90; // r5@63
  void *v91; // r0@63
  Option *v92; // r5@64
  void *v93; // r0@64
  Option *v94; // r5@65
  void *v95; // r0@65
  Option *v96; // r5@66
  void *v97; // r0@66
  Option *v98; // r5@67
  void *v99; // r0@67
  Option *v100; // r5@68
  void *v101; // r0@68
  Option *v102; // r5@69
  void *v103; // r0@69
  Option *v104; // r5@70
  void *v105; // r0@70
  Option *v106; // r5@71
  void *v107; // r0@71
  Option *v108; // r5@72
  void *v109; // r0@72
  Option *v110; // r5@73
  void *v111; // r0@73
  Option *v112; // r5@74
  void *v113; // r0@74
  Option *v114; // r5@75
  void *v115; // r0@75
  __int64 v116; // ST08_8@76
  Option *v117; // r5@76
  void *v118; // r0@76
  __int64 v119; // ST08_8@77
  Option *v120; // r5@77
  void *v121; // r0@77
  Option *v122; // r5@78
  void *v123; // r0@78
  Option *v124; // r5@79
  void *v125; // r0@79
  Option *v126; // r5@80
  void *v127; // r0@80
  Option *v128; // r5@81
  void *v129; // r0@81
  Option *v130; // r5@82
  void *v131; // r0@82
  Option *v132; // r5@83
  void *v133; // r0@83
  Option *v134; // r5@84
  void *v135; // r0@84
  Option *v136; // r5@85
  void *v137; // r0@85
  __int64 v138; // ST08_8@86
  Option *v139; // r5@86
  void *v140; // r0@86
  int *v141; // r0@89
  void *v142; // r0@89
  void *v143; // r0@90
  int *v144; // r0@91
  void *v145; // r0@91
  void *v146; // r0@92
  void *v147; // r0@94
  void *v148; // r0@96
  void *v149; // r0@97
  int *v150; // r0@98
  void *v151; // r0@98
  void *v152; // r0@99
  int *v153; // r0@100
  void *v154; // r0@100
  void *v155; // r0@101
  int *v156; // r0@102
  void *v157; // r0@102
  void *v158; // r0@103
  int *v159; // r0@104
  void *v160; // r0@104
  void *v161; // r0@105
  int *v162; // r0@106
  void *v163; // r0@106
  void *v164; // r0@107
  void *v165; // r0@109
  void *v170; // r0@111
  void *v171; // r0@112
  int *v172; // r0@113
  void *v173; // r0@113
  void *v174; // r0@114
  int *v175; // r0@115
  void *v176; // r0@115
  void *v177; // r0@116
  int *v178; // r0@117
  void *v179; // r0@117
  void *v180; // r0@118
  int *v181; // r0@119
  void *v182; // r0@119
  void *v183; // r0@120
  int *v184; // r0@121
  void *v185; // r0@121
  void *v186; // r0@122
  int *v187; // r0@123
  void *v188; // r0@123
  void *v189; // r0@124
  int *v190; // r0@125
  void *v191; // r0@125
  void *v192; // r0@126
  int *v193; // r0@127
  void *v194; // r0@127
  void *v195; // r0@128
  int *v196; // r0@129
  void *v197; // r0@129
  void *v198; // r0@130
  int *v199; // r0@131
  void *v200; // r0@131
  void *v201; // r0@132
  int *v202; // r0@133
  void *v203; // r0@133
  void *v204; // r0@134
  int *v205; // r0@135
  void *v206; // r0@135
  void *v207; // r0@136
  int *v208; // r0@137
  void *v209; // r0@137
  void *v210; // r0@138
  int *v211; // r0@139
  void *v212; // r0@139
  void *v213; // r0@140
  void *v214; // r0@142
  void *v215; // r0@144
  void *v216; // r0@145
  void *v217; // r0@147
  void *v218; // r0@149
  void *v219; // r0@150
  Option *v220; // r5@151
  void *v221; // r0@151
  __int64 v222; // ST00_8@152
  int v223; // r4@153
  void *v224; // r0@153
  unsigned int *v225; // r2@154
  signed int v226; // r1@156
  int v227; // r4@158
  unsigned int *v228; // r2@160
  signed int v229; // r1@162
  unsigned int *v230; // r2@164
  signed int v231; // r1@166
  unsigned int *v232; // r2@168
  signed int v233; // r1@170
  unsigned int *v234; // r2@172
  signed int v235; // r1@174
  unsigned int *v236; // r2@176
  signed int v237; // r1@178
  unsigned int *v238; // r2@180
  signed int v239; // r1@182
  unsigned int *v240; // r2@184
  signed int v241; // r1@186
  unsigned int *v242; // r2@188
  signed int v243; // r1@190
  unsigned int *v244; // r2@192
  signed int v245; // r1@194
  unsigned int *v246; // r2@196
  signed int v247; // r1@198
  unsigned int *v248; // r2@200
  signed int v249; // r1@202
  unsigned int *v250; // r2@204
  signed int v251; // r1@206
  unsigned int *v252; // r2@208
  signed int v253; // r1@210
  unsigned int *v254; // r2@212
  signed int v255; // r1@214
  unsigned int *v256; // r2@216
  signed int v257; // r1@218
  unsigned int *v258; // r2@220
  signed int v259; // r1@222
  unsigned int *v260; // r2@224
  signed int v261; // r1@226
  unsigned int *v262; // r2@228
  signed int v263; // r1@230
  unsigned int *v264; // r2@232
  signed int v265; // r1@234
  unsigned int *v266; // r2@236
  signed int v267; // r1@238
  unsigned int *v268; // r2@240
  signed int v269; // r1@242
  unsigned int *v270; // r2@244
  signed int v271; // r1@246
  unsigned int *v272; // r2@248
  signed int v273; // r1@250
  unsigned int *v274; // r2@252
  signed int v275; // r1@254
  unsigned int *v276; // r2@256
  signed int v277; // r1@258
  unsigned int *v278; // r2@260
  signed int v279; // r1@262
  unsigned int *v280; // r2@264
  signed int v281; // r1@266
  unsigned int *v282; // r2@268
  signed int v283; // r1@270
  unsigned int *v284; // r2@272
  signed int v285; // r1@274
  unsigned int *v286; // r2@276
  signed int v287; // r1@278
  unsigned int *v288; // r2@280
  signed int v289; // r1@282
  unsigned int *v290; // r2@284
  signed int v291; // r1@286
  unsigned int *v292; // r2@288
  signed int v293; // r1@290
  unsigned int *v294; // r2@292
  signed int v295; // r1@294
  unsigned int *v296; // r2@296
  signed int v297; // r1@298
  unsigned int *v298; // r2@300
  signed int v299; // r1@302
  unsigned int *v300; // r2@304
  signed int v301; // r1@306
  unsigned int *v302; // r2@308
  signed int v303; // r1@310
  unsigned int *v304; // r2@312
  signed int v305; // r1@314
  unsigned int *v306; // r2@316
  signed int v307; // r1@318
  unsigned int *v308; // r2@320
  signed int v309; // r1@322
  unsigned int *v310; // r2@324
  signed int v311; // r1@326
  unsigned int *v312; // r2@328
  signed int v313; // r1@330
  unsigned int *v314; // r2@332
  signed int v315; // r1@334
  unsigned int *v316; // r2@336
  signed int v317; // r1@338
  unsigned int *v318; // r2@340
  signed int v319; // r1@342
  unsigned int *v320; // r2@344
  signed int v321; // r1@346
  unsigned int *v322; // r2@348
  signed int v323; // r1@350
  unsigned int *v324; // r2@352
  signed int v325; // r1@354
  unsigned int *v326; // r2@356
  signed int v327; // r1@358
  unsigned int *v328; // r2@360
  signed int v329; // r1@362
  unsigned int *v330; // r2@364
  signed int v331; // r1@366
  unsigned int *v332; // r2@368
  signed int v333; // r1@370
  unsigned int *v334; // r2@372
  signed int v335; // r1@374
  unsigned int *v336; // r2@376
  signed int v337; // r1@378
  unsigned int *v338; // r2@380
  signed int v339; // r1@382
  unsigned int *v340; // r2@384
  signed int v341; // r1@386
  unsigned int *v342; // r2@388
  signed int v343; // r1@390
  unsigned int *v344; // r2@392
  signed int v345; // r1@394
  unsigned int *v346; // r2@396
  signed int v347; // r1@398
  unsigned int *v348; // r2@400
  signed int v349; // r1@402
  unsigned int *v350; // r2@404
  signed int v351; // r1@406
  unsigned int *v352; // r2@408
  signed int v353; // r1@410
  unsigned int *v354; // r2@412
  signed int v355; // r1@414
  unsigned int *v356; // r2@416
  signed int v357; // r1@418
  unsigned int *v358; // r2@420
  signed int v359; // r1@422
  unsigned int *v360; // r2@424
  signed int v361; // r1@426
  unsigned int *v362; // r2@428
  signed int v363; // r1@430
  unsigned int *v364; // r2@432
  signed int v365; // r1@434
  unsigned int *v366; // r2@436
  signed int v367; // r1@438
  unsigned int *v368; // r2@440
  signed int v369; // r1@442
  unsigned int *v370; // r2@444
  signed int v371; // r1@446
  unsigned int *v372; // r2@448
  signed int v373; // r1@450
  unsigned int *v374; // r2@452
  signed int v375; // r1@454
  unsigned int *v376; // r2@456
  signed int v377; // r1@458
  unsigned int *v378; // r2@460
  signed int v379; // r1@462
  unsigned int *v380; // r2@464
  signed int v381; // r1@466
  unsigned int *v382; // r2@468
  signed int v383; // r1@470
  unsigned int *v384; // r2@472
  signed int v385; // r1@474
  unsigned int *v386; // r2@476
  signed int v387; // r1@478
  unsigned int *v388; // r2@480
  signed int v389; // r1@482
  unsigned int *v390; // r2@484
  signed int v391; // r1@486
  unsigned int *v392; // r2@488
  signed int v393; // r1@490
  unsigned int *v394; // r2@492
  signed int v395; // r1@494
  unsigned int *v396; // r2@496
  signed int v397; // r1@498
  unsigned int *v398; // r2@500
  signed int v399; // r1@502
  unsigned int *v400; // r2@504
  signed int v401; // r1@506
  unsigned int *v402; // r2@508
  signed int v403; // r1@510
  unsigned int *v404; // r2@512
  signed int v405; // r1@514
  unsigned int *v406; // r2@516
  signed int v407; // r1@518
  unsigned int *v408; // r2@520
  signed int v409; // r1@522
  unsigned int *v410; // r2@524
  signed int v411; // r1@526
  unsigned int *v412; // r2@528
  signed int v413; // r1@530
  unsigned int *v414; // r2@532
  signed int v415; // r1@534
  unsigned int *v416; // r2@536
  signed int v417; // r1@538
  unsigned int *v418; // r2@540
  signed int v419; // r1@542
  unsigned int *v420; // r2@544
  signed int v421; // r1@546
  unsigned int *v422; // r2@548
  signed int v423; // r1@550
  unsigned int *v424; // r2@552
  signed int v425; // r1@554
  unsigned int *v426; // r2@556
  signed int v427; // r1@558
  unsigned int *v428; // r2@560
  signed int v429; // r1@562
  unsigned int *v430; // r2@564
  signed int v431; // r1@566
  unsigned int *v432; // r2@568
  signed int v433; // r1@570
  unsigned int *v434; // r2@572
  signed int v435; // r1@574
  unsigned int *v436; // r2@576
  signed int v437; // r1@578
  unsigned int *v438; // r2@580
  signed int v439; // r1@582
  unsigned int *v440; // r2@584
  signed int v441; // r1@586
  unsigned int *v442; // r2@588
  signed int v443; // r1@590
  unsigned int *v444; // r2@592
  signed int v445; // r1@594
  unsigned int *v446; // r2@596
  signed int v447; // r1@598
  unsigned int *v448; // r2@600
  signed int v449; // r1@602
  int v450; // [sp+24h] [bp-D24h]@158
  int v451; // [sp+28h] [bp-D20h]@158
  int v452; // [sp+30h] [bp-D18h]@153
  int v453; // [sp+34h] [bp-D14h]@153
  int v454; // [sp+38h] [bp-D10h]@152
  int v455; // [sp+3Ch] [bp-D0Ch]@152
  int v456; // [sp+40h] [bp-D08h]@152
  int v457; // [sp+44h] [bp-D04h]@152
  int v458; // [sp+48h] [bp-D00h]@152
  int v459; // [sp+4Ch] [bp-CFCh]@152
  int v460; // [sp+50h] [bp-CF8h]@152
  int v461; // [sp+54h] [bp-CF4h]@152
  int v462; // [sp+5Ch] [bp-CECh]@151
  char v463; // [sp+63h] [bp-CE5h]@151
  int v464; // [sp+64h] [bp-CE4h]@151
  int v465; // [sp+68h] [bp-CE0h]@151
  int v466; // [sp+6Ch] [bp-CDCh]@151
  char v467; // [sp+73h] [bp-CD5h]@151
  int v468; // [sp+74h] [bp-CD4h]@151
  int v469; // [sp+78h] [bp-CD0h]@151
  int v470; // [sp+7Ch] [bp-CCCh]@151
  int v471; // [sp+80h] [bp-CC8h]@151
  int v472; // [sp+84h] [bp-CC4h]@151
  int v473; // [sp+88h] [bp-CC0h]@151
  char v474; // [sp+8Fh] [bp-CB9h]@151
  int v475; // [sp+90h] [bp-CB8h]@151
  int v476; // [sp+94h] [bp-CB4h]@151
  int v477; // [sp+98h] [bp-CB0h]@151
  char v478; // [sp+9Fh] [bp-CA9h]@151
  __int64 v479; // [sp+A0h] [bp-CA8h]@151
  int v480; // [sp+A8h] [bp-CA0h]@151
  int v481; // [sp+ACh] [bp-C9Ch]@151
  __int64 v482; // [sp+B0h] [bp-C98h]@151
  int v483; // [sp+B8h] [bp-C90h]@151
  int v484; // [sp+BCh] [bp-C8Ch]@151
  __int64 v485; // [sp+C0h] [bp-C88h]@151
  int v486; // [sp+C8h] [bp-C80h]@151
  int v487; // [sp+CCh] [bp-C7Ch]@151
  __int64 v488; // [sp+D0h] [bp-C78h]@151
  int v489; // [sp+D8h] [bp-C70h]@151
  char v490; // [sp+DFh] [bp-C69h]@151
  __int64 v491; // [sp+E0h] [bp-C68h]@151
  int v492; // [sp+E8h] [bp-C60h]@151
  int v493; // [sp+ECh] [bp-C5Ch]@151
  __int64 v494; // [sp+F0h] [bp-C58h]@151
  int v495; // [sp+F8h] [bp-C50h]@151
  int v496; // [sp+FCh] [bp-C4Ch]@151
  __int64 v497; // [sp+100h] [bp-C48h]@151
  int v498; // [sp+108h] [bp-C40h]@151
  int v499; // [sp+10Ch] [bp-C3Ch]@151
  __int64 v500; // [sp+110h] [bp-C38h]@151
  int v501; // [sp+118h] [bp-C30h]@151
  int v502; // [sp+11Ch] [bp-C2Ch]@151
  int v503; // [sp+120h] [bp-C28h]@151
  int v504; // [sp+124h] [bp-C24h]@151
  int v505; // [sp+128h] [bp-C20h]@151
  char v506; // [sp+12Fh] [bp-C19h]@149
  int v507; // [sp+134h] [bp-C14h]@146
  int v508; // [sp+138h] [bp-C10h]@146
  int v509; // [sp+13Ch] [bp-C0Ch]@146
  int v510; // [sp+140h] [bp-C08h]@146
  int v511; // [sp+144h] [bp-C04h]@146
  char v512; // [sp+14Bh] [bp-BFDh]@144
  int v513; // [sp+150h] [bp-BF8h]@141
  int v514; // [sp+154h] [bp-BF4h]@141
  int v515; // [sp+158h] [bp-BF0h]@141
  int v516; // [sp+15Ch] [bp-BECh]@141
  int v517; // [sp+160h] [bp-BE8h]@141
  int v518; // [sp+164h] [bp-BE4h]@141
  int v519; // [sp+168h] [bp-BE0h]@141
  int v520; // [sp+16Ch] [bp-BDCh]@141
  int v521; // [sp+170h] [bp-BD8h]@141
  int v522; // [sp+174h] [bp-BD4h]@139
  int v523; // [sp+17Ch] [bp-BCCh]@139
  int v524; // [sp+180h] [bp-BC8h]@139
  int v525; // [sp+184h] [bp-BC4h]@139
  int v526; // [sp+188h] [bp-BC0h]@139
  int v527; // [sp+18Ch] [bp-BBCh]@139
  int v528; // [sp+190h] [bp-BB8h]@137
  int v529; // [sp+198h] [bp-BB0h]@137
  int v530; // [sp+19Ch] [bp-BACh]@137
  int v531; // [sp+1A0h] [bp-BA8h]@137
  int v532; // [sp+1A4h] [bp-BA4h]@137
  int v533; // [sp+1A8h] [bp-BA0h]@137
  char v534; // [sp+1AFh] [bp-B99h]@135
  int v535; // [sp+1B4h] [bp-B94h]@135
  int v536; // [sp+1B8h] [bp-B90h]@135
  int v537; // [sp+1BCh] [bp-B8Ch]@135
  int v538; // [sp+1C0h] [bp-B88h]@135
  int v539; // [sp+1C4h] [bp-B84h]@135
  char v540; // [sp+1CBh] [bp-B7Dh]@133
  int v541; // [sp+1D0h] [bp-B78h]@133
  int v542; // [sp+1D4h] [bp-B74h]@133
  int v543; // [sp+1D8h] [bp-B70h]@133
  int v544; // [sp+1DCh] [bp-B6Ch]@133
  int v545; // [sp+1E0h] [bp-B68h]@133
  char v546; // [sp+1E7h] [bp-B61h]@131
  int v547; // [sp+1ECh] [bp-B5Ch]@131
  int v548; // [sp+1F0h] [bp-B58h]@131
  int v549; // [sp+1F4h] [bp-B54h]@131
  int v550; // [sp+1F8h] [bp-B50h]@131
  int v551; // [sp+1FCh] [bp-B4Ch]@131
  char v552; // [sp+203h] [bp-B45h]@129
  int v553; // [sp+208h] [bp-B40h]@129
  int v554; // [sp+20Ch] [bp-B3Ch]@129
  int v555; // [sp+210h] [bp-B38h]@129
  int v556; // [sp+214h] [bp-B34h]@129
  int v557; // [sp+218h] [bp-B30h]@129
  char v558; // [sp+21Fh] [bp-B29h]@127
  int v559; // [sp+224h] [bp-B24h]@127
  int v560; // [sp+228h] [bp-B20h]@127
  int v561; // [sp+22Ch] [bp-B1Ch]@127
  int v562; // [sp+230h] [bp-B18h]@127
  int v563; // [sp+234h] [bp-B14h]@127
  char v564; // [sp+23Bh] [bp-B0Dh]@125
  int v565; // [sp+240h] [bp-B08h]@125
  int v566; // [sp+244h] [bp-B04h]@125
  int v567; // [sp+248h] [bp-B00h]@125
  int v568; // [sp+24Ch] [bp-AFCh]@125
  int v569; // [sp+250h] [bp-AF8h]@125
  int v570; // [sp+258h] [bp-AF0h]@123
  int v571; // [sp+25Ch] [bp-AECh]@123
  int v572; // [sp+260h] [bp-AE8h]@123
  int v573; // [sp+264h] [bp-AE4h]@123
  int v574; // [sp+268h] [bp-AE0h]@123
  char v575; // [sp+26Fh] [bp-AD9h]@121
  int v576; // [sp+274h] [bp-AD4h]@121
  int v577; // [sp+278h] [bp-AD0h]@121
  int v578; // [sp+27Ch] [bp-ACCh]@121
  int v579; // [sp+280h] [bp-AC8h]@121
  int v580; // [sp+284h] [bp-AC4h]@121
  char v581; // [sp+28Bh] [bp-ABDh]@119
  int v582; // [sp+290h] [bp-AB8h]@119
  int v583; // [sp+294h] [bp-AB4h]@119
  int v584; // [sp+298h] [bp-AB0h]@119
  int v585; // [sp+29Ch] [bp-AACh]@119
  int v586; // [sp+2A0h] [bp-AA8h]@119
  char v587; // [sp+2A7h] [bp-AA1h]@117
  int v588; // [sp+2ACh] [bp-A9Ch]@117
  int v589; // [sp+2B0h] [bp-A98h]@117
  int v590; // [sp+2B4h] [bp-A94h]@117
  int v591; // [sp+2B8h] [bp-A90h]@117
  int v592; // [sp+2BCh] [bp-A8Ch]@117
  char v593; // [sp+2C3h] [bp-A85h]@115
  int v594; // [sp+2C8h] [bp-A80h]@115
  int v595; // [sp+2CCh] [bp-A7Ch]@115
  int v596; // [sp+2D0h] [bp-A78h]@115
  int v597; // [sp+2D4h] [bp-A74h]@115
  int v598; // [sp+2D8h] [bp-A70h]@115
  char v599; // [sp+2DFh] [bp-A69h]@113
  int v600; // [sp+2E4h] [bp-A64h]@113
  int v601; // [sp+2E8h] [bp-A60h]@113
  int v602; // [sp+2ECh] [bp-A5Ch]@113
  int v603; // [sp+2F0h] [bp-A58h]@113
  int v604; // [sp+2F4h] [bp-A54h]@113
  char v605; // [sp+2FBh] [bp-A4Dh]@113
  int v606; // [sp+2FCh] [bp-A4Ch]@113
  int v607; // [sp+300h] [bp-A48h]@113
  int v608; // [sp+304h] [bp-A44h]@113
  char v609; // [sp+30Bh] [bp-A3Dh]@113
  int v610; // [sp+30Ch] [bp-A3Ch]@113
  int v611; // [sp+310h] [bp-A38h]@113
  int v612; // [sp+314h] [bp-A34h]@113
  char v613; // [sp+31Bh] [bp-A2Dh]@113
  int v614; // [sp+31Ch] [bp-A2Ch]@113
  int v615; // [sp+320h] [bp-A28h]@113
  int v616; // [sp+324h] [bp-A24h]@113
  char v617; // [sp+32Bh] [bp-A1Dh]@113
  int v618; // [sp+32Ch] [bp-A1Ch]@113
  int v619; // [sp+330h] [bp-A18h]@113
  int v620; // [sp+334h] [bp-A14h]@113
  char v621; // [sp+33Bh] [bp-A0Dh]@113
  int v622; // [sp+33Ch] [bp-A0Ch]@113
  int v623; // [sp+340h] [bp-A08h]@113
  int v624; // [sp+344h] [bp-A04h]@113
  double v625; // [sp+348h] [bp-A00h]@111
  int v626; // [sp+354h] [bp-9F4h]@108
  int v627; // [sp+358h] [bp-9F0h]@108
  int v628; // [sp+35Ch] [bp-9ECh]@108
  int v629; // [sp+360h] [bp-9E8h]@108
  int v630; // [sp+364h] [bp-9E4h]@108
  int v631; // [sp+368h] [bp-9E0h]@106
  int v632; // [sp+370h] [bp-9D8h]@106
  int v633; // [sp+374h] [bp-9D4h]@106
  int v634; // [sp+378h] [bp-9D0h]@106
  int v635; // [sp+37Ch] [bp-9CCh]@106
  int v636; // [sp+380h] [bp-9C8h]@106
  int v637; // [sp+384h] [bp-9C4h]@104
  int v638; // [sp+38Ch] [bp-9BCh]@104
  int v639; // [sp+390h] [bp-9B8h]@104
  int v640; // [sp+394h] [bp-9B4h]@104
  int v641; // [sp+398h] [bp-9B0h]@104
  int v642; // [sp+39Ch] [bp-9ACh]@104
  int v643; // [sp+3A0h] [bp-9A8h]@102
  int v644; // [sp+3A8h] [bp-9A0h]@102
  int v645; // [sp+3ACh] [bp-99Ch]@102
  int v646; // [sp+3B0h] [bp-998h]@102
  int v647; // [sp+3B4h] [bp-994h]@102
  int v648; // [sp+3B8h] [bp-990h]@102
  char v649; // [sp+3BFh] [bp-989h]@100
  int v650; // [sp+3C4h] [bp-984h]@100
  int v651; // [sp+3C8h] [bp-980h]@100
  int v652; // [sp+3CCh] [bp-97Ch]@100
  int v653; // [sp+3D0h] [bp-978h]@100
  int v654; // [sp+3D4h] [bp-974h]@100
  int v655; // [sp+3DCh] [bp-96Ch]@98
  int v656; // [sp+3E0h] [bp-968h]@98
  int v657; // [sp+3E4h] [bp-964h]@98
  int v658; // [sp+3E8h] [bp-960h]@98
  int v659; // [sp+3ECh] [bp-95Ch]@98
  char v660; // [sp+3F3h] [bp-955h]@96
  int v661; // [sp+3F8h] [bp-950h]@93
  int v662; // [sp+3FCh] [bp-94Ch]@93
  int v663; // [sp+400h] [bp-948h]@93
  int v664; // [sp+404h] [bp-944h]@93
  int v665; // [sp+408h] [bp-940h]@93
  char v666; // [sp+40Fh] [bp-939h]@91
  int v667; // [sp+414h] [bp-934h]@91
  int v668; // [sp+418h] [bp-930h]@91
  int v669; // [sp+41Ch] [bp-92Ch]@91
  int v670; // [sp+420h] [bp-928h]@91
  int v671; // [sp+424h] [bp-924h]@91
  char v672; // [sp+42Bh] [bp-91Dh]@89
  int v673; // [sp+430h] [bp-918h]@89
  int v674; // [sp+434h] [bp-914h]@89
  int v675; // [sp+438h] [bp-910h]@89
  int v676; // [sp+43Ch] [bp-90Ch]@89
  int v677; // [sp+440h] [bp-908h]@89
  char v678; // [sp+447h] [bp-901h]@89
  int v679; // [sp+448h] [bp-900h]@89
  int v680; // [sp+44Ch] [bp-8FCh]@89
  int v681; // [sp+450h] [bp-8F8h]@89
  int v682; // [sp+454h] [bp-8F4h]@89
  int v683; // [sp+458h] [bp-8F0h]@89
  int v684; // [sp+45Ch] [bp-8ECh]@89
  int v685; // [sp+460h] [bp-8E8h]@89
  int v686; // [sp+464h] [bp-8E4h]@89
  int v687; // [sp+468h] [bp-8E0h]@89
  int v688; // [sp+46Ch] [bp-8DCh]@89
  int v689; // [sp+470h] [bp-8D8h]@89
  int v690; // [sp+474h] [bp-8D4h]@89
  int v691; // [sp+478h] [bp-8D0h]@89
  int v692; // [sp+47Ch] [bp-8CCh]@89
  int v693; // [sp+480h] [bp-8C8h]@89
  char v694; // [sp+487h] [bp-8C1h]@89
  int v695; // [sp+488h] [bp-8C0h]@89
  int v696; // [sp+48Ch] [bp-8BCh]@89
  int v697; // [sp+490h] [bp-8B8h]@89
  char v698; // [sp+497h] [bp-8B1h]@89
  int v699; // [sp+498h] [bp-8B0h]@89
  int v700; // [sp+49Ch] [bp-8ACh]@89
  int v701; // [sp+4A0h] [bp-8A8h]@89
  int v702; // [sp+4A8h] [bp-8A0h]@86
  void *v703; // [sp+4ACh] [bp-89Ch]@86
  int v704; // [sp+4B8h] [bp-890h]@86
  int v705; // [sp+4BCh] [bp-88Ch]@86
  int v706; // [sp+4C0h] [bp-888h]@86
  int v707; // [sp+4C4h] [bp-884h]@86
  int v708; // [sp+4C8h] [bp-880h]@86
  int v709; // [sp+4CCh] [bp-87Ch]@86
  int v710; // [sp+4D0h] [bp-878h]@86
  int v711; // [sp+4D4h] [bp-874h]@86
  int v712; // [sp+4D8h] [bp-870h]@86
  int v713; // [sp+4DCh] [bp-86Ch]@86
  int v714; // [sp+4E4h] [bp-864h]@85
  char v715; // [sp+4EBh] [bp-85Dh]@85
  int v716; // [sp+4ECh] [bp-85Ch]@85
  int v717; // [sp+4F0h] [bp-858h]@85
  int v718; // [sp+4F4h] [bp-854h]@85
  int v719; // [sp+4FCh] [bp-84Ch]@84
  char v720; // [sp+503h] [bp-845h]@84
  int v721; // [sp+504h] [bp-844h]@84
  int v722; // [sp+508h] [bp-840h]@84
  int v723; // [sp+50Ch] [bp-83Ch]@84
  int v724; // [sp+514h] [bp-834h]@83
  char v725; // [sp+51Bh] [bp-82Dh]@83
  int v726; // [sp+51Ch] [bp-82Ch]@83
  int v727; // [sp+520h] [bp-828h]@83
  int v728; // [sp+524h] [bp-824h]@83
  int v729; // [sp+52Ch] [bp-81Ch]@82
  char v730; // [sp+533h] [bp-815h]@82
  int v731; // [sp+534h] [bp-814h]@82
  int v732; // [sp+538h] [bp-810h]@82
  int v733; // [sp+53Ch] [bp-80Ch]@82
  int v734; // [sp+544h] [bp-804h]@81
  char v735; // [sp+54Bh] [bp-7FDh]@81
  int v736; // [sp+54Ch] [bp-7FCh]@81
  int v737; // [sp+550h] [bp-7F8h]@81
  int v738; // [sp+554h] [bp-7F4h]@81
  int v739; // [sp+558h] [bp-7F0h]@81
  int v740; // [sp+55Ch] [bp-7ECh]@81
  int v741; // [sp+560h] [bp-7E8h]@81
  int v742; // [sp+564h] [bp-7E4h]@81
  int v743; // [sp+56Ch] [bp-7DCh]@80
  char v744; // [sp+573h] [bp-7D5h]@80
  int v745; // [sp+574h] [bp-7D4h]@80
  int v746; // [sp+578h] [bp-7D0h]@80
  int v747; // [sp+57Ch] [bp-7CCh]@80
  int v748; // [sp+584h] [bp-7C4h]@79
  char v749; // [sp+58Bh] [bp-7BDh]@79
  int v750; // [sp+58Ch] [bp-7BCh]@79
  int v751; // [sp+590h] [bp-7B8h]@79
  int v752; // [sp+594h] [bp-7B4h]@79
  char v753; // [sp+59Bh] [bp-7ADh]@79
  int v754; // [sp+59Ch] [bp-7ACh]@79
  int v755; // [sp+5A0h] [bp-7A8h]@79
  int v756; // [sp+5A4h] [bp-7A4h]@79
  int v757; // [sp+5ACh] [bp-79Ch]@78
  char v758; // [sp+5B3h] [bp-795h]@78
  int v759; // [sp+5B4h] [bp-794h]@78
  int v760; // [sp+5B8h] [bp-790h]@78
  int v761; // [sp+5BCh] [bp-78Ch]@78
  int v762; // [sp+5C4h] [bp-784h]@77
  int v763; // [sp+5C8h] [bp-780h]@77
  int v764; // [sp+5CCh] [bp-77Ch]@77
  int v765; // [sp+5D0h] [bp-778h]@77
  int v766; // [sp+5D4h] [bp-774h]@77
  int v767; // [sp+5D8h] [bp-770h]@77
  int v768; // [sp+5E0h] [bp-768h]@76
  int v769; // [sp+5E4h] [bp-764h]@76
  int v770; // [sp+5E8h] [bp-760h]@76
  int v771; // [sp+5ECh] [bp-75Ch]@76
  int v772; // [sp+5F0h] [bp-758h]@76
  int v773; // [sp+5F4h] [bp-754h]@76
  int v774; // [sp+5F8h] [bp-750h]@76
  int v775; // [sp+600h] [bp-748h]@75
  char v776; // [sp+607h] [bp-741h]@75
  int v777; // [sp+608h] [bp-740h]@75
  int v778; // [sp+60Ch] [bp-73Ch]@75
  int v779; // [sp+610h] [bp-738h]@75
  char v780; // [sp+617h] [bp-731h]@75
  int v781; // [sp+618h] [bp-730h]@75
  int v782; // [sp+61Ch] [bp-72Ch]@75
  int v783; // [sp+620h] [bp-728h]@75
  int v784; // [sp+628h] [bp-720h]@74
  char v785; // [sp+62Fh] [bp-719h]@74
  int v786; // [sp+630h] [bp-718h]@74
  int v787; // [sp+634h] [bp-714h]@74
  int v788; // [sp+638h] [bp-710h]@74
  int v789; // [sp+640h] [bp-708h]@73
  char v790; // [sp+647h] [bp-701h]@73
  int v791; // [sp+648h] [bp-700h]@73
  int v792; // [sp+64Ch] [bp-6FCh]@73
  int v793; // [sp+650h] [bp-6F8h]@73
  int v794; // [sp+658h] [bp-6F0h]@72
  char v795; // [sp+65Fh] [bp-6E9h]@72
  int v796; // [sp+660h] [bp-6E8h]@72
  int v797; // [sp+664h] [bp-6E4h]@72
  int v798; // [sp+668h] [bp-6E0h]@72
  int v799; // [sp+670h] [bp-6D8h]@71
  int v800; // [sp+674h] [bp-6D4h]@71
  int v801; // [sp+678h] [bp-6D0h]@71
  int v802; // [sp+67Ch] [bp-6CCh]@71
  int v803; // [sp+684h] [bp-6C4h]@70
  char v804; // [sp+68Bh] [bp-6BDh]@70
  int v805; // [sp+68Ch] [bp-6BCh]@70
  int v806; // [sp+690h] [bp-6B8h]@70
  int v807; // [sp+694h] [bp-6B4h]@70
  int v808; // [sp+69Ch] [bp-6ACh]@69
  char v809; // [sp+6A3h] [bp-6A5h]@69
  int v810; // [sp+6A4h] [bp-6A4h]@69
  int v811; // [sp+6A8h] [bp-6A0h]@69
  int v812; // [sp+6ACh] [bp-69Ch]@69
  char v813; // [sp+6B3h] [bp-695h]@69
  int v814; // [sp+6B4h] [bp-694h]@69
  int v815; // [sp+6B8h] [bp-690h]@69
  int v816; // [sp+6BCh] [bp-68Ch]@69
  char v817; // [sp+6C3h] [bp-685h]@69
  int v818; // [sp+6C4h] [bp-684h]@69
  int v819; // [sp+6C8h] [bp-680h]@69
  int v820; // [sp+6CCh] [bp-67Ch]@69
  char v821; // [sp+6D3h] [bp-675h]@69
  int v822; // [sp+6D4h] [bp-674h]@69
  int v823; // [sp+6D8h] [bp-670h]@69
  int v824; // [sp+6DCh] [bp-66Ch]@69
  char v825; // [sp+6E3h] [bp-665h]@69
  int v826; // [sp+6E4h] [bp-664h]@69
  int v827; // [sp+6E8h] [bp-660h]@69
  int v828; // [sp+6ECh] [bp-65Ch]@69
  char v829; // [sp+6F3h] [bp-655h]@69
  int v830; // [sp+6F4h] [bp-654h]@69
  int v831; // [sp+6F8h] [bp-650h]@69
  int v832; // [sp+6FCh] [bp-64Ch]@69
  int v833; // [sp+704h] [bp-644h]@68
  int v834; // [sp+708h] [bp-640h]@68
  int v835; // [sp+70Ch] [bp-63Ch]@68
  int v836; // [sp+710h] [bp-638h]@68
  int v837; // [sp+718h] [bp-630h]@67
  char v838; // [sp+71Fh] [bp-629h]@67
  int v839; // [sp+720h] [bp-628h]@67
  int v840; // [sp+724h] [bp-624h]@67
  int v841; // [sp+728h] [bp-620h]@67
  int v842; // [sp+730h] [bp-618h]@66
  char v843; // [sp+737h] [bp-611h]@66
  int v844; // [sp+738h] [bp-610h]@66
  int v845; // [sp+73Ch] [bp-60Ch]@66
  int v846; // [sp+740h] [bp-608h]@66
  int v847; // [sp+748h] [bp-600h]@65
  int v848; // [sp+74Ch] [bp-5FCh]@65
  int v849; // [sp+750h] [bp-5F8h]@65
  int v850; // [sp+754h] [bp-5F4h]@65
  int v851; // [sp+75Ch] [bp-5ECh]@64
  char v852; // [sp+763h] [bp-5E5h]@64
  int v853; // [sp+764h] [bp-5E4h]@64
  int v854; // [sp+768h] [bp-5E0h]@64
  int v855; // [sp+76Ch] [bp-5DCh]@64
  char v856; // [sp+773h] [bp-5D5h]@64
  int v857; // [sp+774h] [bp-5D4h]@64
  int v858; // [sp+778h] [bp-5D0h]@64
  int v859; // [sp+77Ch] [bp-5CCh]@64
  int v860; // [sp+784h] [bp-5C4h]@63
  char v861; // [sp+78Bh] [bp-5BDh]@63
  int v862; // [sp+78Ch] [bp-5BCh]@63
  int v863; // [sp+790h] [bp-5B8h]@63
  int v864; // [sp+794h] [bp-5B4h]@63
  int v865; // [sp+79Ch] [bp-5ACh]@62
  char v866; // [sp+7A3h] [bp-5A5h]@62
  int v867; // [sp+7A4h] [bp-5A4h]@62
  int v868; // [sp+7A8h] [bp-5A0h]@62
  int v869; // [sp+7ACh] [bp-59Ch]@62
  int v870; // [sp+7B4h] [bp-594h]@61
  char v871; // [sp+7BBh] [bp-58Dh]@61
  int v872; // [sp+7BCh] [bp-58Ch]@61
  int v873; // [sp+7C0h] [bp-588h]@61
  int v874; // [sp+7C4h] [bp-584h]@61
  int v875; // [sp+7CCh] [bp-57Ch]@60
  char v876; // [sp+7D3h] [bp-575h]@60
  int v877; // [sp+7D4h] [bp-574h]@60
  int v878; // [sp+7D8h] [bp-570h]@60
  int v879; // [sp+7DCh] [bp-56Ch]@60
  int v880; // [sp+7E0h] [bp-568h]@60
  int v881; // [sp+7E4h] [bp-564h]@60
  int v882; // [sp+7E8h] [bp-560h]@60
  char v883; // [sp+7EFh] [bp-559h]@60
  int v884; // [sp+7F0h] [bp-558h]@60
  int v885; // [sp+7F4h] [bp-554h]@60
  int v886; // [sp+7F8h] [bp-550h]@60
  int v887; // [sp+800h] [bp-548h]@59
  int v888; // [sp+804h] [bp-544h]@59
  int v889; // [sp+808h] [bp-540h]@59
  int v890; // [sp+80Ch] [bp-53Ch]@59
  int v891; // [sp+810h] [bp-538h]@59
  int v892; // [sp+814h] [bp-534h]@59
  int v893; // [sp+818h] [bp-530h]@59
  int v894; // [sp+81Ch] [bp-52Ch]@59
  int v895; // [sp+820h] [bp-528h]@59
  int v896; // [sp+828h] [bp-520h]@58
  int v897; // [sp+82Ch] [bp-51Ch]@58
  int v898; // [sp+830h] [bp-518h]@58
  int v899; // [sp+834h] [bp-514h]@58
  int v900; // [sp+838h] [bp-510h]@58
  int v901; // [sp+840h] [bp-508h]@57
  int v902; // [sp+844h] [bp-504h]@57
  int v903; // [sp+848h] [bp-500h]@57
  int v904; // [sp+84Ch] [bp-4FCh]@57
  int v905; // [sp+850h] [bp-4F8h]@57
  char v906; // [sp+857h] [bp-4F1h]@57
  int v907; // [sp+858h] [bp-4F0h]@57
  int v908; // [sp+85Ch] [bp-4ECh]@57
  int v909; // [sp+860h] [bp-4E8h]@57
  int v910; // [sp+864h] [bp-4E4h]@57
  int v911; // [sp+868h] [bp-4E0h]@54
  int v912; // [sp+86Ch] [bp-4DCh]@54
  int v913; // [sp+870h] [bp-4D8h]@54
  int v914; // [sp+874h] [bp-4D4h]@54
  int v915; // [sp+878h] [bp-4D0h]@54
  int v916; // [sp+87Ch] [bp-4CCh]@54
  int v917; // [sp+880h] [bp-4C8h]@51
  int v918; // [sp+884h] [bp-4C4h]@51
  int v919; // [sp+888h] [bp-4C0h]@51
  int v920; // [sp+890h] [bp-4B8h]@50
  int v921; // [sp+894h] [bp-4B4h]@50
  int v922; // [sp+898h] [bp-4B0h]@50
  int v923; // [sp+89Ch] [bp-4ACh]@50
  int v924; // [sp+8A0h] [bp-4A8h]@50
  char v925; // [sp+8A7h] [bp-4A1h]@50
  int v926; // [sp+8A8h] [bp-4A0h]@50
  int v927; // [sp+8ACh] [bp-49Ch]@50
  int v928; // [sp+8B0h] [bp-498h]@50
  int v929; // [sp+8B8h] [bp-490h]@49
  char v930; // [sp+8BFh] [bp-489h]@49
  int v931; // [sp+8C0h] [bp-488h]@49
  int v932; // [sp+8C4h] [bp-484h]@49
  int v933; // [sp+8C8h] [bp-480h]@49
  int v934; // [sp+8CCh] [bp-47Ch]@49
  int v935; // [sp+8D0h] [bp-478h]@49
  int v936; // [sp+8D4h] [bp-474h]@49
  int v937; // [sp+8D8h] [bp-470h]@49
  int v938; // [sp+8E0h] [bp-468h]@48
  int v939; // [sp+8E4h] [bp-464h]@48
  int v940; // [sp+8E8h] [bp-460h]@48
  int v941; // [sp+8ECh] [bp-45Ch]@48
  int v942; // [sp+8F0h] [bp-458h]@48
  int v943; // [sp+8F8h] [bp-450h]@47
  char v944; // [sp+8FFh] [bp-449h]@47
  int v945; // [sp+900h] [bp-448h]@44
  int v946; // [sp+904h] [bp-444h]@44
  int v947; // [sp+908h] [bp-440h]@44
  int v948; // [sp+910h] [bp-438h]@41
  void *ptr; // [sp+914h] [bp-434h]@41
  int v950; // [sp+920h] [bp-428h]@41
  int v951; // [sp+924h] [bp-424h]@41
  int v952; // [sp+928h] [bp-420h]@41
  int v953; // [sp+92Ch] [bp-41Ch]@41
  int v954; // [sp+934h] [bp-414h]@40
  int v955; // [sp+938h] [bp-410h]@40
  int v956; // [sp+93Ch] [bp-40Ch]@40
  int v957; // [sp+940h] [bp-408h]@40
  int v958; // [sp+944h] [bp-404h]@40
  int v959; // [sp+948h] [bp-400h]@40
  int v960; // [sp+94Ch] [bp-3FCh]@40
  char v961; // [sp+953h] [bp-3F5h]@40
  int v962; // [sp+954h] [bp-3F4h]@40
  int v963; // [sp+958h] [bp-3F0h]@40
  int v964; // [sp+95Ch] [bp-3ECh]@40
  char v965; // [sp+963h] [bp-3E5h]@40
  int v966; // [sp+964h] [bp-3E4h]@40
  int v967; // [sp+968h] [bp-3E0h]@40
  int v968; // [sp+96Ch] [bp-3DCh]@40
  int v969; // [sp+970h] [bp-3D8h]@40
  int v970; // [sp+974h] [bp-3D4h]@40
  int v971; // [sp+978h] [bp-3D0h]@40
  int v972; // [sp+97Ch] [bp-3CCh]@40
  char v973; // [sp+983h] [bp-3C5h]@40
  int v974; // [sp+984h] [bp-3C4h]@35
  int v975; // [sp+988h] [bp-3C0h]@35
  int v976; // [sp+98Ch] [bp-3BCh]@35
  int v977; // [sp+994h] [bp-3B4h]@34
  int v978; // [sp+998h] [bp-3B0h]@34
  int v979; // [sp+99Ch] [bp-3ACh]@34
  int v980; // [sp+9A0h] [bp-3A8h]@34
  int v981; // [sp+9A4h] [bp-3A4h]@34
  int v982; // [sp+9A8h] [bp-3A0h]@34
  int v983; // [sp+9ACh] [bp-39Ch]@34
  int v984; // [sp+9B0h] [bp-398h]@34
  int v985; // [sp+9B4h] [bp-394h]@34
  int v986; // [sp+9B8h] [bp-390h]@34
  int v987; // [sp+9BCh] [bp-38Ch]@34
  int v988; // [sp+9C0h] [bp-388h]@34
  int v989; // [sp+9C4h] [bp-384h]@34
  int v990; // [sp+9C8h] [bp-380h]@34
  int v991; // [sp+9CCh] [bp-37Ch]@34
  int v992; // [sp+9D0h] [bp-378h]@34
  char v993; // [sp+9D7h] [bp-371h]@34
  int v994; // [sp+9D8h] [bp-370h]@34
  int v995; // [sp+9DCh] [bp-36Ch]@34
  int v996; // [sp+9E0h] [bp-368h]@34
  char v997; // [sp+9E7h] [bp-361h]@34
  int v998; // [sp+9E8h] [bp-360h]@34
  int v999; // [sp+9ECh] [bp-35Ch]@34
  int v1000; // [sp+9F0h] [bp-358h]@34
  int v1001; // [sp+9F8h] [bp-350h]@33
  int v1002; // [sp+9FCh] [bp-34Ch]@33
  int v1003; // [sp+A00h] [bp-348h]@33
  int v1004; // [sp+A04h] [bp-344h]@33
  int v1005; // [sp+A0Ch] [bp-33Ch]@32
  char v1006; // [sp+A13h] [bp-335h]@32
  int v1007; // [sp+A14h] [bp-334h]@32
  int v1008; // [sp+A18h] [bp-330h]@32
  int v1009; // [sp+A1Ch] [bp-32Ch]@32
  int v1010; // [sp+A24h] [bp-324h]@31
  char v1011; // [sp+A2Bh] [bp-31Dh]@31
  int v1012; // [sp+A2Ch] [bp-31Ch]@31
  int v1013; // [sp+A30h] [bp-318h]@31
  int v1014; // [sp+A34h] [bp-314h]@31
  char v1015; // [sp+A3Bh] [bp-30Dh]@31
  int v1016; // [sp+A3Ch] [bp-30Ch]@31
  int v1017; // [sp+A40h] [bp-308h]@31
  int v1018; // [sp+A44h] [bp-304h]@31
  int v1019; // [sp+A4Ch] [bp-2FCh]@30
  char v1020; // [sp+A53h] [bp-2F5h]@30
  int v1021; // [sp+A54h] [bp-2F4h]@30
  int v1022; // [sp+A58h] [bp-2F0h]@30
  int v1023; // [sp+A5Ch] [bp-2ECh]@30
  int v1024; // [sp+A64h] [bp-2E4h]@29
  char v1025; // [sp+A6Bh] [bp-2DDh]@29
  int v1026; // [sp+A6Ch] [bp-2DCh]@29
  int v1027; // [sp+A70h] [bp-2D8h]@29
  int v1028; // [sp+A74h] [bp-2D4h]@29
  char v1029; // [sp+A7Bh] [bp-2CDh]@29
  int v1030; // [sp+A7Ch] [bp-2CCh]@29
  int v1031; // [sp+A80h] [bp-2C8h]@29
  int v1032; // [sp+A84h] [bp-2C4h]@29
  char v1033; // [sp+A8Bh] [bp-2BDh]@29
  int v1034; // [sp+A8Ch] [bp-2BCh]@29
  int v1035; // [sp+A90h] [bp-2B8h]@29
  int v1036; // [sp+A94h] [bp-2B4h]@29
  char v1037; // [sp+A9Bh] [bp-2ADh]@29
  int v1038; // [sp+A9Ch] [bp-2ACh]@29
  int v1039; // [sp+AA0h] [bp-2A8h]@29
  int v1040; // [sp+AA4h] [bp-2A4h]@29
  int v1041; // [sp+AACh] [bp-29Ch]@28
  int v1042; // [sp+AB0h] [bp-298h]@28
  int v1043; // [sp+AB4h] [bp-294h]@28
  int v1044; // [sp+AB8h] [bp-290h]@28
  int v1045; // [sp+AC0h] [bp-288h]@27
  char v1046; // [sp+AC7h] [bp-281h]@27
  int v1047; // [sp+AC8h] [bp-280h]@27
  int v1048; // [sp+ACCh] [bp-27Ch]@27
  int v1049; // [sp+AD0h] [bp-278h]@27
  int v1050; // [sp+AD8h] [bp-270h]@26
  char v1051; // [sp+ADFh] [bp-269h]@26
  int v1052; // [sp+AE0h] [bp-268h]@26
  int v1053; // [sp+AE4h] [bp-264h]@26
  int v1054; // [sp+AE8h] [bp-260h]@26
  int v1055; // [sp+AF0h] [bp-258h]@25
  int v1056; // [sp+AF4h] [bp-254h]@25
  int v1057; // [sp+AF8h] [bp-250h]@25
  int v1058; // [sp+AFCh] [bp-24Ch]@25
  int v1059; // [sp+B04h] [bp-244h]@24
  char v1060; // [sp+B0Bh] [bp-23Dh]@24
  int v1061; // [sp+B0Ch] [bp-23Ch]@24
  int v1062; // [sp+B10h] [bp-238h]@24
  int v1063; // [sp+B14h] [bp-234h]@24
  int v1064; // [sp+B1Ch] [bp-22Ch]@23
  char v1065; // [sp+B23h] [bp-225h]@23
  int v1066; // [sp+B24h] [bp-224h]@23
  int v1067; // [sp+B28h] [bp-220h]@23
  int v1068; // [sp+B2Ch] [bp-21Ch]@23
  int v1069; // [sp+B34h] [bp-214h]@22
  int v1070; // [sp+B38h] [bp-210h]@22
  int v1071; // [sp+B3Ch] [bp-20Ch]@22
  int v1072; // [sp+B40h] [bp-208h]@22
  char v1073; // [sp+B44h] [bp-204h]@22
  char v1074; // [sp+B45h] [bp-203h]@22
  char v1075; // [sp+B46h] [bp-202h]@22
  char v1076; // [sp+B47h] [bp-201h]@22
  int v1077; // [sp+B48h] [bp-200h]@22
  int v1078; // [sp+B4Ch] [bp-1FCh]@22
  int v1079; // [sp+B50h] [bp-1F8h]@22
  int v1080; // [sp+B58h] [bp-1F0h]@21
  char v1081; // [sp+B5Fh] [bp-1E9h]@21
  int v1082; // [sp+B60h] [bp-1E8h]@21
  int v1083; // [sp+B64h] [bp-1E4h]@21
  int v1084; // [sp+B68h] [bp-1E0h]@21
  int v1085; // [sp+B70h] [bp-1D8h]@20
  char v1086; // [sp+B77h] [bp-1D1h]@20
  int v1087; // [sp+B78h] [bp-1D0h]@20
  int v1088; // [sp+B7Ch] [bp-1CCh]@20
  int v1089; // [sp+B80h] [bp-1C8h]@20
  int v1090; // [sp+B88h] [bp-1C0h]@19
  char v1091; // [sp+B8Fh] [bp-1B9h]@19
  int v1092; // [sp+B90h] [bp-1B8h]@19
  int v1093; // [sp+B94h] [bp-1B4h]@19
  int v1094; // [sp+B98h] [bp-1B0h]@19
  char v1095; // [sp+B9Fh] [bp-1A9h]@19
  int v1096; // [sp+BA0h] [bp-1A8h]@19
  int v1097; // [sp+BA4h] [bp-1A4h]@19
  int v1098; // [sp+BA8h] [bp-1A0h]@19
  int v1099; // [sp+BB0h] [bp-198h]@18
  char v1100; // [sp+BB7h] [bp-191h]@18
  int v1101; // [sp+BB8h] [bp-190h]@18
  int v1102; // [sp+BBCh] [bp-18Ch]@18
  int v1103; // [sp+BC0h] [bp-188h]@18
  int v1104; // [sp+BC8h] [bp-180h]@17
  int v1105; // [sp+BCCh] [bp-17Ch]@17
  int v1106; // [sp+BD0h] [bp-178h]@17
  int v1107; // [sp+BD4h] [bp-174h]@17
  int v1108; // [sp+BD8h] [bp-170h]@17
  int v1109; // [sp+BDCh] [bp-16Ch]@17
  int v1110; // [sp+BE0h] [bp-168h]@14
  int v1111; // [sp+BE4h] [bp-164h]@14
  int v1112; // [sp+BE8h] [bp-160h]@14
  int v1113; // [sp+BECh] [bp-15Ch]@14
  int v1114; // [sp+BF0h] [bp-158h]@14
  int v1115; // [sp+BF4h] [bp-154h]@14
  char v1116; // [sp+BFBh] [bp-14Dh]@14
  int v1117; // [sp+BFCh] [bp-14Ch]@14
  int v1118; // [sp+C00h] [bp-148h]@14
  int v1119; // [sp+C04h] [bp-144h]@14
  char v1120; // [sp+C0Bh] [bp-13Dh]@14
  int v1121; // [sp+C0Ch] [bp-13Ch]@14
  int v1122; // [sp+C10h] [bp-138h]@14
  int v1123; // [sp+C14h] [bp-134h]@14
  char v1124; // [sp+C1Bh] [bp-12Dh]@14
  int v1125; // [sp+C1Ch] [bp-12Ch]@14
  int v1126; // [sp+C20h] [bp-128h]@14
  int v1127; // [sp+C24h] [bp-124h]@14
  int v1128; // [sp+C28h] [bp-120h]@14
  int v1129; // [sp+C2Ch] [bp-11Ch]@14
  int v1130; // [sp+C30h] [bp-118h]@14
  int v1131; // [sp+C34h] [bp-114h]@14
  int v1132; // [sp+C38h] [bp-110h]@14
  int v1133; // [sp+C3Ch] [bp-10Ch]@14
  int v1134; // [sp+C40h] [bp-108h]@14
  int v1135; // [sp+C44h] [bp-104h]@14
  int v1136; // [sp+C48h] [bp-100h]@14
  int v1137; // [sp+C4Ch] [bp-FCh]@14
  int v1138; // [sp+C50h] [bp-F8h]@14
  int v1139; // [sp+C54h] [bp-F4h]@14
  int v1140; // [sp+C58h] [bp-F0h]@14
  int v1141; // [sp+C5Ch] [bp-ECh]@14
  int v1142; // [sp+C60h] [bp-E8h]@14
  int v1143; // [sp+C68h] [bp-E0h]@13
  int v1144; // [sp+C6Ch] [bp-DCh]@13
  int v1145; // [sp+C70h] [bp-D8h]@13
  int v1146; // [sp+C74h] [bp-D4h]@13
  int v1147; // [sp+C7Ch] [bp-CCh]@12
  char v1148; // [sp+C83h] [bp-C5h]@12
  int v1149; // [sp+C84h] [bp-C4h]@10
  int v1150; // [sp+C88h] [bp-C0h]@10
  int v1151; // [sp+C8Ch] [bp-BCh]@10
  int v1152; // [sp+C94h] [bp-B4h]@9
  char v1153; // [sp+C9Bh] [bp-ADh]@9
  int v1154; // [sp+C9Ch] [bp-ACh]@9
  int v1155; // [sp+CA0h] [bp-A8h]@9
  int v1156; // [sp+CA4h] [bp-A4h]@9
  char v1157; // [sp+CABh] [bp-9Dh]@9
  int v1158; // [sp+CACh] [bp-9Ch]@9
  int v1159; // [sp+CB0h] [bp-98h]@9
  int v1160; // [sp+CB4h] [bp-94h]@9
  int v1161; // [sp+CBCh] [bp-8Ch]@8
  int v1162; // [sp+CC0h] [bp-88h]@8
  int v1163; // [sp+CC4h] [bp-84h]@8
  int v1164; // [sp+CC8h] [bp-80h]@8
  int v1165; // [sp+CCCh] [bp-7Ch]@8
  int v1166; // [sp+CD4h] [bp-74h]@7
  int v1167; // [sp+CD8h] [bp-70h]@7
  int v1168; // [sp+CDCh] [bp-6Ch]@7
  int v1169; // [sp+CE0h] [bp-68h]@7
  int v1170; // [sp+CE4h] [bp-64h]@7
  int v1171; // [sp+CECh] [bp-5Ch]@6
  int v1172; // [sp+CF0h] [bp-58h]@6
  int v1173; // [sp+CF4h] [bp-54h]@6
  int v1174; // [sp+CF8h] [bp-50h]@6
  int v1175; // [sp+CFCh] [bp-4Ch]@6
  int v1176; // [sp+D00h] [bp-48h]@6
  int v1177; // [sp+D04h] [bp-44h]@6
  int v1178; // [sp+D08h] [bp-40h]@6
  char v1179; // [sp+D0Eh] [bp-3Ah]@6
  char v1180; // [sp+D0Fh] [bp-39h]@1
  char v1181; // [sp+D10h] [bp-38h]@1
  char v1182; // [sp+D11h] [bp-37h]@1
  char v1183; // [sp+D12h] [bp-36h]@1
  char v1184; // [sp+D13h] [bp-35h]@1
  int v1185; // [sp+D14h] [bp-34h]@1
  int v1186; // [sp+D18h] [bp-30h]@1
  char v1187; // [sp+D1Dh] [bp-2Bh]@1
  char v1188; // [sp+D1Eh] [bp-2Ah]@1
  char v1189; // [sp+D1Fh] [bp-29h]@1
  int v1190; // [sp+D20h] [bp-28h]@1

  v1 = this;
  v1190 = 0;
  v1189 = 1;
  v1188 = 1;
  v1187 = 1;
  v1186 = 0;
  v1185 = 1048576000;
  v1184 = 1;
  v1183 = 1;
  v1182 = 1;
  v1181 = 0;
  v1180 = 1;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  _ZF = (*(int (**)(void))(**(_DWORD **)v2 + 436))() == 1;
  v4 = 0;
  if ( !_ZF )
    v4 = 1;
  v1178 = 0;
  v1177 = 0;
  v1179 = v4;
  v1176 = 4;
  Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[13],char const(&)[12],char const(&)[6]>(
    (int)v1,
    (unsigned int *)&v1178,
    (unsigned int *)&v1177,
    &v1176,
    "options.name",
    "mp_username",
    "Steve");
  v1175 = 1;
  v1174 = 1;
  v1173 = 4;
  v1172 = 1;
  v5 = Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[20],int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
         (int)v1,
         (unsigned int *)&v1175,
         (unsigned int *)&v1174,
         &v1173,
         "options.difficulty",
         "game_difficulty_new",
         &v1172,
         (__int64 *)&dword_27CB814,
         (int)&difficultyLabels);
  sub_119C884((void **)&v1171, "difficulty");
  Option::registerTelemetryProperty((int)v5, &v1171);
  v6 = (void *)(v1171 - 12);
  if ( (int *)(v1171 - 12) != &dword_28898C0 )
  {
    v228 = (unsigned int *)(v1171 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v229 = __ldrex(v228);
      while ( __strex(v229 - 1, v228) );
    }
    else
      v229 = (*v228)--;
    if ( v229 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v1170 = 2;
  v1168 = 2;
  v1169 = 0;
  v1167 = 0;
  v7 = Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[17],int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
         (unsigned int *)&v1170,
         (unsigned int *)&v1169,
         &v1168,
         "options.thirdperson",
         "game_thirdperson",
         &v1167,
         (__int64 *)&dword_27CB7FC,
         (int)&thirdPersonLabels);
  sub_119C884((void **)&v1166, "playerViewPerspective");
  Option::registerTelemetryProperty((int)v7, &v1166);
  v8 = (void *)(v1166 - 12);
  if ( (int *)(v1166 - 12) != &dword_28898C0 )
    v230 = (unsigned int *)(v1166 - 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v1165 = 3;
  v1164 = 1;
  v1163 = 1;
  v1162 = 1056964608;
  v9 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[14],float>(
         &v1165,
         (float *)&v1164,
         (float *)&v1163,
         "options.buttonSize",
         "gfx_dpadscale",
         (int)&v1162);
  sub_119C884((void **)&v1161, "dpadScale");
  Option::registerTelemetryProperty((int)v9, &v1161);
  v10 = (void *)(v1161 - 12);
  if ( (int *)(v1161 - 12) != &dword_28898C0 )
    v232 = (unsigned int *)(v1161 - 4);
        v233 = __ldrex(v232);
      while ( __strex(v233 - 1, v232) );
      v233 = (*v232)--;
    if ( v233 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v1160 = 4;
  v1159 = 1;
  v1158 = 4;
  v1157 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],char const(&)[18],bool>(
    (unsigned int *)&v1160,
    (unsigned int *)&v1159,
    &v1158,
    "options.servervisible",
    "mp_server_visible",
    &v1157);
  v1156 = 5;
  v1155 = 1;
  v1154 = 4;
  v1153 = 1;
  v11 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],char const(&)[20],bool>(
          (int)v1,
          (unsigned int *)&v1156,
          (unsigned int *)&v1155,
          &v1154,
          "options.xboxlivevisible",
          "mp_xboxlive_visible",
          &v1153);
  sub_119C884((void **)&v1152, "xboxLiveVisible");
  Option::registerTelemetryProperty((int)v11, &v1152);
  v12 = (void *)(v1152 - 12);
  if ( (int *)(v1152 - 12) != &dword_28898C0 )
    v234 = (unsigned int *)(v1152 - 4);
        v235 = __ldrex(v234);
      while ( __strex(v235 - 1, v234) );
      v235 = (*v234)--;
    if ( v235 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v1151 = 6;
  v1150 = 1;
  v1149 = 4;
  v13 = AppPlatform::getAvailableHWThreadCount((AppPlatform *)4);
  v14 = 0;
  if ( v13 < 2 )
    v14 = 1;
  v1148 = v14;
  v15 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[20],bool>(
          (unsigned int *)&v1151,
          (unsigned int *)&v1150,
          &v1149,
          "options.worldsizelimit",
          "game_limitworldsize",
          &v1148);
  sub_119C884((void **)&v1147, "limitWorldSize");
  Option::registerTelemetryProperty((int)v15, &v1147);
  v16 = (void *)(v1147 - 12);
  if ( (int *)(v1147 - 12) != &dword_28898C0 )
    v236 = (unsigned int *)(v1147 - 4);
        v237 = __ldrex(v236);
      while ( __strex(v237 - 1, v236) );
      v237 = (*v236)--;
    if ( v237 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v1146 = 7;
  v1145 = 1;
  v1144 = 4;
  v17 = Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[14],char const(&)[1]>(
          (unsigned int *)&v1146,
          (unsigned int *)&v1145,
          &v1144,
          (int *)&Options::not_available,
          "game_language",
          (const char *)&unk_257BC67);
  sub_119C884((void **)&v1143, (const char *)&unk_257BC67);
  Option::registerTelemetryProperty((int)v17, &v1143);
  v18 = (void *)(v1143 - 12);
  if ( (int *)(v1143 - 12) != &dword_28898C0 )
    v238 = (unsigned int *)(v1143 - 4);
        v239 = __ldrex(v238);
      while ( __strex(v239 - 1, v238) );
      v239 = (*v238)--;
    if ( v239 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v1142 = 8;
  v1141 = 0;
  v1140 = 4;
  Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[13],char const(&)[18],char const(&)[1]>(
    (unsigned int *)&v1142,
    (unsigned int *)&v1141,
    &v1140,
    "options.skin",
    "game_skintypefull",
    (const char *)&unk_257BC67);
  v1139 = 9;
  v1138 = 0;
  v1137 = 4;
  Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[23],char const(&)[1]>(
    (unsigned int *)&v1139,
    (unsigned int *)&v1138,
    &v1137,
    (int *)&Options::not_available,
    "game_lastcustomskinnew",
  v1136 = 10;
  v1135 = 0;
  v1134 = 4;
  Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[17],char const(&)[1]>(
    (unsigned int *)&v1136,
    (unsigned int *)&v1135,
    &v1134,
    "game_recentskin1",
  v1133 = 11;
  v1132 = 0;
  v1131 = 4;
    (unsigned int *)&v1133,
    (unsigned int *)&v1132,
    &v1131,
    "game_recentskin2",
  v1130 = 12;
  v1129 = 0;
  v1128 = 4;
    (unsigned int *)&v1130,
    (unsigned int *)&v1129,
    &v1128,
    "game_recentskin3",
  v1127 = 13;
  v1126 = 0;
  v1125 = 4;
  v1124 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[26],bool>(
    (unsigned int *)&v1127,
    (unsigned int *)&v1126,
    &v1125,
    "game_haseverloggedintoxbl",
    &v1124);
  v1123 = 14;
  v1122 = 0;
  v1121 = 4;
  v1120 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[31],bool>(
    (unsigned int *)&v1123,
    (unsigned int *)&v1122,
    &v1121,
    "game_haschosennottosignintoxbl",
    &v1120);
  v1119 = 160;
  v1118 = 1;
  v1117 = 4;
  v1116 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[17],bool>(
    (unsigned int *)&v1119,
    (unsigned int *)&v1118,
    &v1117,
    "game_ackautosave",
    &v1116);
  v1115 = 141;
  v1114 = 0;
  v1113 = 4;
  Options::registerOption<StringOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[10],char const(&)[1]>(
    (unsigned int *)&v1115,
    (unsigned int *)&v1114,
    &v1113,
    "last_xuid",
  v1112 = 15;
  v1111 = 1;
  v1110 = 4;
    v19 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v19 = &ServiceLocator<AppPlatform>::mDefaultService;
  v1109 = (*(int (**)(void))(**(_DWORD **)v19 + 220))();
  Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[27],char const(&)[25],int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
    (unsigned int *)&v1112,
    (unsigned int *)&v1111,
    &v1110,
    "options.filelocation.title",
    "dvce_filestoragelocation",
    &v1109,
    (__int64 *)&dword_27CB7F0,
    (int)&storageLocationLabels);
  v1108 = 132;
  v1105 = 1058642330;
  v1107 = 0;
  v1106 = 1;
  v20 = Options::registerOption<InputModeFloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[18],float>(
          &v1108,
          (float *)&v1107,
          (float *)&v1106,
          "options.sensitivity",
          "ctrl_sensitivity2",
          (int)&v1105);
  sub_119C884((void **)&v1104, "sensitivity");
  Option::registerTelemetryProperty((int)v20, &v1104);
  v21 = (void *)(v1104 - 12);
  if ( (int *)(v1104 - 12) != &dword_28898C0 )
    v240 = (unsigned int *)(v1104 - 4);
        v241 = __ldrex(v240);
      while ( __strex(v241 - 1, v240) );
      v241 = (*v240)--;
    if ( v241 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v1103 = 133;
  v1102 = 0;
  v1100 = 0;
  v1101 = 1;
  v22 = Options::registerOption<InputModeBoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[17],bool>(
          (unsigned int *)&v1103,
          (unsigned int *)&v1102,
          &v1101,
          "options.invertYAxis",
          "ctrl_invertmouse",
          &v1100);
  sub_119C884((void **)&v1099, "invertYMouse");
  Option::registerTelemetryProperty((int)v22, &v1099);
  v23 = (void *)(v1099 - 12);
  if ( (int *)(v1099 - 12) != &dword_28898C0 )
    v242 = (unsigned int *)(v1099 - 4);
        v243 = __ldrex(v242);
      while ( __strex(v243 - 1, v242) );
      v243 = (*v242)--;
    if ( v243 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v1098 = 16;
  v1097 = 0;
  v1096 = 1;
  v1095 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[18],bool>(
    (unsigned int *)&v1098,
    (unsigned int *)&v1097,
    &v1096,
    "options.lefthanded",
    "ctrl_islefthanded",
    &v1095);
  v1094 = 17;
  v1093 = 0;
  v1092 = 1;
  v1091 = 0;
  v24 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[20],bool>(
          (unsigned int *)&v1094,
          (unsigned int *)&v1093,
          &v1092,
          "options.usetouchpad",
          "ctrl_usetouchjoypad",
          &v1091);
  sub_119C884((void **)&v1090, "splitControls");
  Option::registerTelemetryProperty((int)v24, &v1090);
  v25 = (void *)(v1090 - 12);
  if ( (int *)(v1090 - 12) != &dword_28898C0 )
    v244 = (unsigned int *)(v1090 - 4);
        v245 = __ldrex(v244);
      while ( __strex(v245 - 1, v244) );
      v245 = (*v244)--;
    if ( v245 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v1089 = 18;
  v1088 = 0;
  v1086 = 0;
  v1087 = 1;
  v26 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[22],bool>(
          (unsigned int *)&v1089,
          (unsigned int *)&v1088,
          &v1087,
          "options.swapJumpAndSneak",
          "ctrl_swapjumpandsneak",
          &v1086);
  sub_119C884((void **)&v1085, "swapJumpSneak");
  Option::registerTelemetryProperty((int)v26, &v1085);
  v27 = (void *)(v1085 - 12);
  if ( (int *)(v1085 - 12) != &dword_28898C0 )
    v246 = (unsigned int *)(v1085 - 4);
        v247 = __ldrex(v246);
      while ( __strex(v247 - 1, v246) );
      v247 = (*v246)--;
    if ( v247 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v1084 = 135;
  v1083 = 0;
  v1082 = 1;
  v1081 = 1;
  v28 = Options::registerOption<InputModeBoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[19],bool>(
          (unsigned int *)&v1084,
          (unsigned int *)&v1083,
          &v1082,
          "options.destroyvibration",
          "feedback_vibration",
          &v1081);
  sub_119C884((void **)&v1080, "destroyVibration");
  Option::registerTelemetryProperty((int)v28, &v1080);
  v29 = (void *)(v1080 - 12);
  if ( (int *)(v1080 - 12) != &dword_28898C0 )
    v248 = (unsigned int *)(v1080 - 4);
        v249 = __ldrex(v248);
      while ( __strex(v249 - 1, v248) );
      v249 = (*v248)--;
    if ( v249 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v1079 = 137;
  v1078 = 0;
  v1077 = 1;
  v1076 = 0;
  v1075 = 1;
  v1074 = 0;
  v1073 = 0;
  Options::registerOption<InputModeBoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[18],bool,bool,bool,bool>(
    (unsigned int *)&v1079,
    (unsigned int *)&v1078,
    &v1077,
    "options.toggleCrouch",
    "ctrl_togglecrouch",
    &v1076,
    &v1075,
    &v1074,
    &v1073);
  v1072 = 134;
  v1071 = 0;
  v1070 = 1;
  v30 = Options::registerOption<InputModeBoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[17],char const(&)[14],bool &>(
          (unsigned int *)&v1072,
          (unsigned int *)&v1071,
          &v1070,
          "options.autojump",
          "ctrl_autojump",
          &v1189);
  sub_119C884((void **)&v1069, "autoJump");
  Option::registerTelemetryProperty((int)v30, &v1069);
  v31 = (void *)(v1069 - 12);
  if ( (int *)(v1069 - 12) != &dword_28898C0 )
    v250 = (unsigned int *)(v1069 - 4);
        v251 = __ldrex(v250);
      while ( __strex(v251 - 1, v250) );
      v251 = (*v250)--;
    if ( v251 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v1068 = 145;
  v1067 = 0;
  v1065 = 0;
  v1066 = 4;
  v32 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[13],bool>(
          (unsigned int *)&v1068,
          (unsigned int *)&v1067,
          &v1066,
          "options.hidetooltips",
          "gfx_tooltips",
          &v1065);
  sub_119C884((void **)&v1064, "hideToolTips");
  Option::registerTelemetryProperty((int)v32, &v1064);
  v33 = (void *)(v1064 - 12);
  if ( (int *)(v1064 - 12) != &dword_28898C0 )
    v252 = (unsigned int *)(v1064 - 4);
        v253 = __ldrex(v252);
      while ( __strex(v253 - 1, v252) );
      v253 = (*v252)--;
    if ( v253 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v1063 = 19;
  v1062 = 1;
  v1061 = 2;
  v1060 = 0;
  v34 = Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[17],int &,std::vector<int,std::allocator<int>> &,bool>(
          (unsigned int *)&v1063,
          (unsigned int *)&v1062,
          &v1061,
          "options.renderDistance",
          "gfx_viewdistance",
          (int *)v1 + 11,
          (__int64 *)((char *)v1 + 52),
          &v1060);
  sub_119C884((void **)&v1059, "viewDistanceChunks");
  Option::registerTelemetryProperty((int)v34, &v1059);
  v35 = (void *)(v1059 - 12);
  if ( (int *)(v1059 - 12) != &dword_28898C0 )
    v254 = (unsigned int *)(v1059 - 4);
        v255 = __ldrex(v254);
      while ( __strex(v255 - 1, v254) );
      v255 = (*v254)--;
    if ( v255 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  v1058 = 20;
  v1057 = 1;
  v1056 = 2;
  v36 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[31],char const(&)[25],float &>(
          &v1058,
          (float *)&v1057,
          (float *)&v1056,
          "options.particleRenderDistance",
          "gfx_particleviewdistance",
          (int)&v1186);
  sub_119C884((void **)&v1055, "particleViewDistance");
  Option::registerTelemetryProperty((int)v36, &v1055);
  v37 = (void *)(v1055 - 12);
  if ( (int *)(v1055 - 12) != &dword_28898C0 )
    v256 = (unsigned int *)(v1055 - 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v1054 = 21;
  v1053 = 0;
  v1052 = 2;
  v1051 = 1;
  v38 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[16],bool>(
          (unsigned int *)&v1054,
          (unsigned int *)&v1053,
          &v1052,
          "options.viewBobbing",
          "gfx_viewbobbing",
          &v1051);
  sub_119C884((void **)&v1050, "bobView");
  Option::registerTelemetryProperty((int)v38, &v1050);
  v39 = (void *)(v1050 - 12);
  if ( (int *)(v1050 - 12) != &dword_28898C0 )
    v258 = (unsigned int *)(v1050 - 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  v1049 = 22;
  v1048 = 1;
  v1046 = 1;
  v1047 = 2;
  v40 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[17],char const(&)[18],bool>(
          (unsigned int *)&v1049,
          (unsigned int *)&v1048,
          &v1047,
          "options.graphics",
          "gfx_fancygraphics",
          &v1046);
  sub_119C884((void **)&v1045, "fancyGraphics");
  Option::registerTelemetryProperty((int)v40, &v1045);
  v41 = (void *)(v1045 - 12);
  if ( (int *)(v1045 - 12) != &dword_28898C0 )
    v260 = (unsigned int *)(v1045 - 4);
        v261 = __ldrex(v260);
      while ( __strex(v261 - 1, v260) );
      v261 = (*v260)--;
    if ( v261 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  v1044 = 23;
  v1043 = 1;
  v1042 = 2;
  v42 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],char const(&)[22],bool &>(
          (unsigned int *)&v1044,
          (unsigned int *)&v1043,
          &v1042,
          "options.transparentleaves",
          "gfx_transparentleaves",
          &v1184);
  sub_119C884((void **)&v1041, "transparentLeaves");
  Option::registerTelemetryProperty((int)v42, &v1041);
  v43 = (void *)(v1041 - 12);
  if ( (int *)(v1041 - 12) != &dword_28898C0 )
    v262 = (unsigned int *)(v1041 - 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 - 1, v262) );
      v263 = (*v262)--;
    if ( v263 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  v1040 = 24;
  v1039 = 1;
  v1038 = 2;
  v1037 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[19],bool>(
    (unsigned int *)&v1040,
    (unsigned int *)&v1039,
    &v1038,
    "options.smoothlighting",
    "gfx_smoothlighting",
    &v1037);
  v1036 = 25;
  v1035 = 1;
  v1034 = 2;
  v1033 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,std::string const&,bool>(
    (unsigned int *)&v1036,
    (unsigned int *)&v1035,
    &v1034,
    &Options::do_not_save,
    &v1033);
  v1032 = 26;
  v1031 = 1;
  v1030 = 2;
  v1029 = 0;
    (unsigned int *)&v1032,
    (unsigned int *)&v1031,
    &v1030,
    &v1029);
  v1028 = 27;
  v1027 = 1;
  v1026 = 2;
  v1025 = 1;
  v44 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[15],bool>(
          (unsigned int *)&v1028,
          (unsigned int *)&v1027,
          &v1026,
          "options.fancyskies",
          "gfx_fancyskies",
          &v1025);
  sub_119C884((void **)&v1024, "fancySkies");
  Option::registerTelemetryProperty((int)v44, &v1024);
  v45 = (void *)(v1024 - 12);
  if ( (int *)(v1024 - 12) != &dword_28898C0 )
    v264 = (unsigned int *)(v1024 - 4);
        v265 = __ldrex(v264);
      while ( __strex(v265 - 1, v264) );
      v265 = (*v264)--;
    if ( v265 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  v1023 = 136;
  v1022 = 1;
  v1020 = 1;
  v1021 = 2;
  v46 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[17],bool>(
          (unsigned int *)&v1023,
          (unsigned int *)&v1022,
          &v1021,
          "options.toggleclouds",
          "gfx_toggleclouds",
          &v1020);
  sub_119C884((void **)&v1019, "toggleClouds");
  Option::registerTelemetryProperty((int)v46, &v1019);
  v47 = (void *)(v1019 - 12);
  if ( (int *)(v1019 - 12) != &dword_28898C0 )
    v266 = (unsigned int *)(v1019 - 4);
        v267 = __ldrex(v266);
      while ( __strex(v267 - 1, v266) );
      v267 = (*v266)--;
    if ( v267 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  v1018 = 28;
  v1017 = 0;
  v1016 = 2;
  v1015 = 0;
    (unsigned int *)&v1018,
    (unsigned int *)&v1017,
    &v1016,
    &v1015);
  v1014 = 150;
  v1013 = 0;
  v1012 = 2;
  v1011 = 0;
  v48 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[16],char const(&)[12],bool>(
          (unsigned int *)&v1014,
          (unsigned int *)&v1013,
          &v1012,
          "options.hidehud",
          "gfx_hidehud",
          &v1011);
  sub_119C884((void **)&v1010, "hideHUD");
  Option::registerTelemetryProperty((int)v48, &v1010);
  v49 = (void *)(v1010 - 12);
  if ( (int *)(v1010 - 12) != &dword_28898C0 )
    v268 = (unsigned int *)(v1010 - 4);
        v269 = __ldrex(v268);
      while ( __strex(v269 - 1, v268) );
      v269 = (*v268)--;
    if ( v269 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  v1009 = 151;
  v1008 = 0;
  v1006 = 0;
  v1007 = 2;
  v50 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[17],char const(&)[13],bool>(
          (unsigned int *)&v1009,
          (unsigned int *)&v1008,
          &v1007,
          "options.hidehand",
          "gfx_hidehand",
          &v1006);
  sub_119C884((void **)&v1005, "hideHand");
  Option::registerTelemetryProperty((int)v50, &v1005);
  v51 = (void *)(v1005 - 12);
  if ( (int *)(v1005 - 12) != &dword_28898C0 )
    v270 = (unsigned int *)(v1005 - 4);
        v271 = __ldrex(v270);
      while ( __strex(v271 - 1, v270) );
      v271 = (*v270)--;
    if ( v271 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  v1004 = 146;
  v1003 = 0;
  v1002 = 2;
  v52 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[30],char const(&)[26],bool &>(
          (unsigned int *)&v1004,
          (unsigned int *)&v1003,
          &v1002,
          "options.classic_box_selection",
          "gfx_classic_box_selection",
          &v1179);
  sub_119C884((void **)&v1001, "classic_box_selection");
  Option::registerTelemetryProperty((int)v52, &v1001);
  v53 = (void *)(v1001 - 12);
  if ( (int *)(v1001 - 12) != &dword_28898C0 )
    v272 = (unsigned int *)(v1001 - 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v53);
  v1000 = 154;
  v999 = 0;
  v998 = 2;
  v997 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],char const(&)[24],bool>(
    (unsigned int *)&v1000,
    (unsigned int *)&v999,
    &v998,
    "options.ingamePlayerNames",
    "gfx_ingame_player_names",
    &v997);
  v996 = 155;
  v995 = 0;
  v994 = 2;
  v993 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[37],char const(&)[36],bool>(
    (unsigned int *)&v996,
    (unsigned int *)&v995,
    &v994,
    "options.splitscreenIngamePlayerNames",
    "gfx_splitscreen_ingame_player_names",
    &v993);
  v992 = 156;
  v991 = 0;
  v990 = 2;
  v989 = 1065353216;
  v988 = 1008981770;
  v987 = 1065353216;
  LODWORD(v54) = &v989;
  HIDWORD(v54) = &v988;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[22],float,float,float>(
    &v992,
    (float *)&v991,
    (float *)&v990,
    "options.interfaceOpacity",
    "gfx_interface_opacity",
    v54,
    (int)&v987);
  v986 = 157;
  v983 = 1065353216;
  v981 = 1065353216;
  v985 = 0;
  v984 = 2;
  v982 = 1008981770;
  LODWORD(v55) = &v983;
  HIDWORD(v55) = &v982;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[36],char const(&)[34],float,float,float>(
    &v986,
    (float *)&v985,
    (float *)&v984,
    "options.splitscreenInterfaceOpacity",
    "gfx_splitscreen_interface_opacity",
    v55,
    (int)&v981);
  v980 = 142;
  v979 = 0;
  v978 = 2;
  v56 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],char const(&)[18],bool &>(
          (unsigned int *)&v980,
          (unsigned int *)&v979,
          &v978,
          "options.hidepaperdoll",
          "gfx_hidepaperdoll",
          &v1187);
  sub_119C884((void **)&v977, "hidePaperDoll");
  Option::registerTelemetryProperty((int)v56, &v977);
  v57 = (void *)(v977 - 12);
  if ( (int *)(v977 - 12) != &dword_28898C0 )
    v274 = (unsigned int *)(v977 - 4);
        v275 = __ldrex(v274);
      while ( __strex(v275 - 1, v274) );
      v275 = (*v274)--;
    if ( v275 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v976 = 161;
  v975 = 1;
  v974 = 2;
    v58 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v58 = &ServiceLocator<AppPlatform>::mDefaultService;
  _ZF = (*(int (**)(void))(**(_DWORD **)v58 + 436))() == 2;
  v59 = 0;
  if ( _ZF )
    v59 = 1;
  v973 = v59;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[21],bool>(
    (unsigned int *)&v976,
    (unsigned int *)&v975,
    &v974,
    "options.showautosaveicon",
    "gfx_showautosaveicon",
    &v973);
  v971 = 1;
  v972 = 149;
  v970 = 2;
  v969 = 0;
  Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[16],int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
    (unsigned int *)&v972,
    (unsigned int *)&v971,
    &v970,
    "options.splitscreen",
    "gfx_splitscreen",
    &v969,
    (__int64 *)&dword_27CB808,
    (int)&splitScreenLabels);
  v968 = 29;
  v967 = 0;
  v966 = 2;
  v965 = 0;
    (unsigned int *)&v968,
    (unsigned int *)&v967,
    &v966,
    &v965);
  v964 = 30;
  v963 = 0;
  v962 = 2;
  v961 = 0;
    (unsigned int *)&v964,
    (unsigned int *)&v963,
    &v962,
    &v961);
  v960 = 31;
  v957 = 1116471296;
  v956 = 1106247680;
  v955 = 1121714176;
  v959 = 0;
  v958 = 2;
  LODWORD(v60) = &v957;
  HIDWORD(v60) = &v956;
  v61 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[12],char const(&)[18],float,float,float>(
          &v960,
          (float *)&v959,
          (float *)&v958,
          "options.fov",
          "gfx_field_of_view",
          v60,
          (int)&v955);
  sub_119C884((void **)&v954, "fieldOfView");
  Option::registerTelemetryProperty((int)v61, &v954);
  v62 = (void *)(v954 - 12);
  if ( (int *)(v954 - 12) != &dword_28898C0 )
    v276 = (unsigned int *)(v954 - 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 - 1, v276) );
      v277 = (*v276)--;
    if ( v277 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  v953 = 32;
  v952 = 1;
  v951 = 2;
  v950 = (*(int (**)(void))(**((_DWORD **)v1 + 10) + 32))();
  (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 10) + 40))(&ptr);
  v63 = Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[13],char const(&)[9],int,std::vector<int,std::allocator<int>> const>(
          (unsigned int *)&v953,
          (unsigned int *)&v952,
          &v951,
          "options.msaa",
          "gfx_msaa",
          &v950,
          (__int64 *)&ptr);
  sub_119C884((void **)&v948, "msaa");
  Option::registerTelemetryProperty((int)v63, &v948);
  v64 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v278 = (unsigned int *)(v948 - 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  if ( ptr )
    operator delete(ptr);
  v947 = 33;
  v946 = 1;
  v945 = 2;
  v65 = **((_DWORD **)v1 + 10);
  if ( *((_BYTE *)v1 + 37) )
    v66 = *(int (**)(void))(v65 + 28);
    v66 = *(int (**)(void))(v65 + 24);
  v944 = v66();
  v67 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[16],char const(&)[15],bool>(
          (unsigned int *)&v947,
          (unsigned int *)&v946,
          &v945,
          "options.texelAA",
          "gfx_texel_aa_2",
          &v944);
  sub_119C884((void **)&v943, "texelAA");
  Option::registerTelemetryProperty((int)v67, &v943);
  v68 = (void *)(v943 - 12);
  if ( (int *)(v943 - 12) != &dword_28898C0 )
    v280 = (unsigned int *)(v943 - 4);
        v281 = __ldrex(v280);
      while ( __strex(v281 - 1, v280) );
      v281 = (*v280)--;
    if ( v281 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  v942 = 34;
  v941 = 1;
  v940 = 2;
  v939 = 1056964608;
  v69 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[14],char const(&)[10],float>(
          &v942,
          (float *)&v941,
          (float *)&v940,
          "options.gamma",
          "gfx_gamma",
          (int)&v939);
  sub_119C884((void **)&v938, "gamma");
  Option::registerTelemetryProperty((int)v69, &v938);
  v70 = (void *)(v938 - 12);
  if ( (int *)(v938 - 12) != &dword_28898C0 )
    v282 = (unsigned int *)(v938 - 4);
        v283 = __ldrex(v282);
      while ( __strex(v283 - 1, v282) );
      v283 = (*v282)--;
    if ( v283 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v70);
  v937 = 35;
  v936 = 1;
  v935 = 2;
  v934 = 0;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[18],int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v937,
    (unsigned int *)&v936,
    &v935,
    "options.maxFramerate",
    "gfx_max_framerate",
    &v934,
    (__int64 *)&dword_27CB850);
  v933 = 36;
  v932 = 1;
  v931 = 2;
  v930 = 0;
  v71 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[15],bool>(
          (unsigned int *)&v933,
          (unsigned int *)&v932,
          &v931,
          "options.fullscreen",
          "gfx_fullscreen",
          &v930);
  sub_119C884((void **)&v929, "fullscreen");
  Option::registerTelemetryProperty((int)v71, &v929);
  v72 = (void *)(v929 - 12);
  if ( (int *)(v929 - 12) != &dword_28898C0 )
    v284 = (unsigned int *)(v929 - 4);
        v285 = __ldrex(v284);
      while ( __strex(v285 - 1, v284) );
      v285 = (*v284)--;
    if ( v285 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  v928 = 37;
  v927 = 0;
  v926 = 2;
  v925 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[34],char const(&)[29],bool>(
    (unsigned int *)&v928,
    (unsigned int *)&v927,
    &v926,
    "options.showAdvancedVideoSettings",
    "show_advanced_video_settings",
    &v925);
  v924 = 39;
  v923 = 1;
  v922 = 2;
  v921 = 0;
  v73 = Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[28],char const(&)[20],int,std::vector<int,std::allocator<int>> const&>(
          (unsigned int *)&v924,
          (unsigned int *)&v923,
          &v922,
          "options.guiScale.optionName",
          "gfx_guiscale_offset",
          &v921,
          (__int64 *)&dword_27CB844);
  sub_119C884((void **)&v920, "guiScale");
  Option::registerTelemetryProperty((int)v73, &v920);
  v74 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v286 = (unsigned int *)(v920 - 4);
        v287 = __ldrex(v286);
      while ( __strex(v287 - 1, v286) );
      v287 = (*v286)--;
    if ( v287 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v74);
  v919 = 40;
  v918 = 1;
  v917 = 2;
    v75 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v75 = &ServiceLocator<AppPlatform>::mDefaultService;
  v916 = (*(int (**)(void))(**(_DWORD **)v75 + 576))();
  v915 = 1063675494;
  v914 = 1065353216;
  LODWORD(v76) = &v916;
  HIDWORD(v76) = &v915;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[17],char const(&)[14],float,float,float>(
    &v919,
    (float *)&v918,
    (float *)&v917,
    "options.safeZone",
    "gfx_safe_zone",
    v76,
    (int)&v914);
  v913 = 41;
  v912 = 1;
  v911 = 2;
    v77 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v77 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v910 = AppPlatform::getDefaultUIProfile(*v77);
  Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[18],char const(&)[15],int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
    (unsigned int *)&v913,
    (unsigned int *)&v912,
    &v911,
    "options.uiprofile",
    "gfx_ui_profile",
    &v910,
    (__int64 *)&dword_27CB7E4,
    (int)&uiProfileLabels);
  v909 = 162;
  v907 = 4;
  v906 = 0;
  v908 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[22],bool>(
    (unsigned int *)&v909,
    (unsigned int *)&v908,
    &v907,
    "gfx_has_set_safe_zone",
    &v906);
  v905 = 42;
  v903 = 3;
  v904 = 1;
  v902 = 1065353216;
  v78 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[14],char const(&)[12],float>(
          &v905,
          (float *)&v904,
          (float *)&v903,
          "options.sound",
          "audio_sound",
          (int)&v902);
  sub_119C884((void **)&v901, "soundVolume");
  Option::registerTelemetryProperty((int)v78, &v901);
  v79 = (void *)(v901 - 12);
  if ( (int *)(v901 - 12) != &dword_28898C0 )
    v288 = (unsigned int *)(v901 - 4);
        v289 = __ldrex(v288);
      while ( __strex(v289 - 1, v288) );
      v289 = (*v288)--;
    if ( v289 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  v900 = 43;
  v899 = 1;
  v898 = 3;
  v897 = 1065353216;
  v80 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[14],char const(&)[12],float>(
          &v900,
          (float *)&v899,
          (float *)&v898,
          "options.music",
          "audio_music",
          (int)&v897);
  sub_119C884((void **)&v896, "musicVolume");
  Option::registerTelemetryProperty((int)v80, &v896);
  v81 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v290 = (unsigned int *)(v896 - 4);
        v291 = __ldrex(v290);
      while ( __strex(v291 - 1, v290) );
      v291 = (*v290)--;
    if ( v291 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  v895 = 44;
  v892 = 1056964608;
  v894 = 0;
  v893 = 4;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],char const(&)[15],float>(
    &v895,
    (float *)&v894,
    (float *)&v893,
    "options.vrSensitivity",
    "vr_sensitivity",
    (int)&v892);
  v891 = 45;
  v890 = 0;
  v889 = 4;
  v888 = 0;
  v82 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[16],char const(&)[9],float>(
          &v891,
          (float *)&v890,
          (float *)&v889,
          "options.vrGamma",
          "vr_gamma",
          (int)&v888);
  sub_119C884((void **)&v887, "gamma");
  Option::registerTelemetryProperty((int)v82, &v887);
  v83 = (void *)(v887 - 12);
  if ( (int *)(v887 - 12) != &dword_28898C0 )
    v292 = (unsigned int *)(v887 - 4);
        v293 = __ldrex(v292);
      while ( __strex(v293 - 1, v292) );
      v293 = (*v292)--;
    if ( v293 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
  v886 = 46;
  v885 = 0;
  v884 = 4;
  v883 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[31],std::string const&,bool>(
    (unsigned int *)&v886,
    (unsigned int *)&v885,
    &v884,
    "options.vrResetPlayerAlignment",
    &v883);
  v882 = 47;
  v881 = 0;
  v880 = 4;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[33],char const(&)[22],float &>(
    &v882,
    (float *)&v881,
    (float *)&v880,
    "options.vrParticleRenderDistance",
    "vr_particle_view_dist",
    (int)&v1185);
  v879 = 48;
  v876 = 1;
  v878 = 0;
  v877 = 4;
  v84 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[16],bool>(
          (unsigned int *)&v879,
          (unsigned int *)&v878,
          &v877,
          "options.StutterTurn",
          "vr_stutter_turn",
          &v876);
  sub_119C884((void **)&v875, "stutterTurn");
  Option::registerTelemetryProperty((int)v84, &v875);
  v85 = (void *)(v875 - 12);
  if ( (int *)(v875 - 12) != &dword_28898C0 )
    v294 = (unsigned int *)(v875 - 4);
        v295 = __ldrex(v294);
      while ( __strex(v295 - 1, v294) );
      v295 = (*v294)--;
    if ( v295 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v85);
  v874 = 152;
  v873 = 0;
  v871 = 0;
  v872 = 4;
  v86 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[18],char const(&)[12],bool>(
          (unsigned int *)&v874,
          (unsigned int *)&v873,
          &v872,
          "options.vrHideHud",
          "vr_hide_hud",
          &v871);
  sub_119C884((void **)&v870, "hideHUD");
  Option::registerTelemetryProperty((int)v86, &v870);
  v87 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v296 = (unsigned int *)(v870 - 4);
        v297 = __ldrex(v296);
      while ( __strex(v297 - 1, v296) );
      v297 = (*v296)--;
    if ( v297 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v87);
  v869 = 153;
  v868 = 0;
  v866 = 0;
  v867 = 4;
  v88 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[13],bool>(
          (unsigned int *)&v869,
          (unsigned int *)&v868,
          &v867,
          "options.vrHideHand",
          "vr_hide_hand",
          &v866);
  sub_119C884((void **)&v865, "hideHand");
  Option::registerTelemetryProperty((int)v88, &v865);
  v89 = (void *)(v865 - 12);
  if ( (int *)(v865 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v865 - 4);
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
      v299 = (*v298)--;
    if ( v299 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v89);
  v864 = 49;
  v863 = 0;
  v862 = 4;
  v861 = 1;
  v90 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[22],bool>(
          (unsigned int *)&v864,
          (unsigned int *)&v863,
          &v862,
          "options.StutterTurnSound",
          "vr_stutter_turn_sound",
          &v861);
  sub_119C884((void **)&v860, "vrStutterTurnSound");
  Option::registerTelemetryProperty((int)v90, &v860);
  v91 = (void *)(v860 - 12);
  if ( (int *)(v860 - 12) != &dword_28898C0 )
    v300 = (unsigned int *)(v860 - 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  v859 = 50;
  v858 = 0;
  v857 = 4;
  v856 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],char const(&)[20],bool>(
    (unsigned int *)&v859,
    (unsigned int *)&v858,
    &v857,
    "options.vrHMDdisplacement",
    "vr_hmd_displacement",
    &v856);
  v855 = 51;
  v854 = 0;
  v853 = 4;
  v852 = 0;
  v92 = Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[18],int &,std::vector<int,std::allocator<int>> &,bool>(
          (unsigned int *)&v855,
          (unsigned int *)&v854,
          &v853,
          "options.vrRenderDistance",
          "vr_renderdistance",
          (int *)v1 + 12,
          &v852);
  sub_119C884((void **)&v851, "viewDistanceChunks");
  Option::registerTelemetryProperty((int)v92, &v851);
  v93 = (void *)(v851 - 12);
  if ( (int *)(v851 - 12) != &dword_28898C0 )
    v302 = (unsigned int *)(v851 - 4);
        v303 = __ldrex(v302);
      while ( __strex(v303 - 1, v302) );
      v303 = (*v302)--;
    if ( v303 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v93);
  v850 = 52;
  v849 = 0;
  v848 = 4;
  v94 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[19],char const(&)[12],bool &>(
          (unsigned int *)&v850,
          (unsigned int *)&v849,
          &v848,
          "options.vrAutojump",
          "vr_autojump",
          &v1188);
  sub_119C884((void **)&v847, "autoJump");
  Option::registerTelemetryProperty((int)v94, &v847);
  v95 = (void *)(v847 - 12);
  if ( (int *)(v847 - 12) != &dword_28898C0 )
    v304 = (unsigned int *)(v847 - 4);
        v305 = __ldrex(v304);
      while ( __strex(v305 - 1, v304) );
      v305 = (*v304)--;
    if ( v305 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v95);
  v846 = 53;
  v845 = 0;
  v844 = 4;
  v843 = 1;
  v96 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[17],bool>(
          (unsigned int *)&v846,
          (unsigned int *)&v845,
          &v844,
          "options.vrLinearMotion",
          "vr_head_steering",
          &v843);
  sub_119C884((void **)&v842, "headSteering");
  Option::registerTelemetryProperty((int)v96, &v842);
  v97 = (void *)(v842 - 12);
  if ( (int *)(v842 - 12) != &dword_28898C0 )
    v306 = (unsigned int *)(v842 - 4);
        v307 = __ldrex(v306);
      while ( __strex(v307 - 1, v306) );
      v307 = (*v306)--;
    if ( v307 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v97);
  v841 = 54;
  v840 = 0;
  v839 = 4;
  v838 = 1;
  v98 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[35],char const(&)[30],bool>(
          (unsigned int *)&v841,
          (unsigned int *)&v840,
          &v839,
          "options.StutterConstantAngleOrTime",
          "vr_stutter_turn_constant_time",
          &v838);
  sub_119C884((void **)&v837, "vrStutterTurnByTime");
  Option::registerTelemetryProperty((int)v98, &v837);
  v99 = (void *)(v837 - 12);
  if ( (int *)(v837 - 12) != &dword_28898C0 )
    v308 = (unsigned int *)(v837 - 4);
        v309 = __ldrex(v308);
      while ( __strex(v309 - 1, v308) );
      v309 = (*v308)--;
    if ( v309 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v99);
  v836 = 55;
  v835 = 0;
  v834 = 4;
  v100 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[19],bool &>(
           (int)v1,
           (unsigned int *)&v836,
           (unsigned int *)&v835,
           &v834,
           "options.3DRendering",
           "vr_stereorendering",
           &v1182);
  sub_119C884((void **)&v833, "stereoRendering");
  Option::registerTelemetryProperty((int)v100, &v833);
  v101 = (void *)(v833 - 12);
  if ( (int *)(v833 - 12) != &dword_28898C0 )
    v310 = (unsigned int *)(v833 - 4);
        v311 = __ldrex(v310);
      while ( __strex(v311 - 1, v310) );
      v311 = (*v310)--;
    if ( v311 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v101);
  v832 = 57;
  v831 = 0;
  v830 = 4;
  v829 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[18],bool>(
    (unsigned int *)&v832,
    (unsigned int *)&v831,
    &v830,
    "options.HitReactions",
    "vr_use_normal_hit",
    &v829);
  v828 = 58;
  v827 = 0;
  v826 = 4;
  v825 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],char const(&)[17],bool>(
    (unsigned int *)&v828,
    (unsigned int *)&v827,
    &v826,
    "options.vrUsesRedFlashForHit",
    "vr_use_red_flash",
    &v825);
  v824 = 59;
  v823 = 0;
  v822 = 4;
  v821 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[32],char const(&)[23],bool>(
    (unsigned int *)&v824,
    (unsigned int *)&v823,
    &v822,
    "options.vrRightStickPitchAssist",
    "vr_rstick_pitch_assist",
    &v821);
  v820 = 60;
  v819 = 0;
  v818 = 4;
  v817 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],std::string const&,bool>(
    (unsigned int *)&v820,
    (unsigned int *)&v819,
    &v818,
    "options.vrRightStickDeadband",
    &v817);
  v816 = 61;
  v815 = 0;
  v814 = 4;
  v813 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[31],char const(&)[21],bool>(
    (unsigned int *)&v816,
    (unsigned int *)&v815,
    &v814,
    "options.vrRightStickGazeAdjust",
    "vr_rstick_gazeadjust",
    &v813);
  v812 = 62;
  v811 = 0;
  v810 = 4;
  v809 = 1;
  v102 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[20],bool>(
           (unsigned int *)&v812,
           (unsigned int *)&v811,
           &v810,
           "options.vrGazePitchBoost",
           "vr_gaze_pitch_boost",
           &v809);
  sub_119C884((void **)&v808, "vrGazePitchBoost");
  Option::registerTelemetryProperty((int)v102, &v808);
  v103 = (void *)(v808 - 12);
  if ( (int *)(v808 - 12) != &dword_28898C0 )
    v312 = (unsigned int *)(v808 - 4);
        v313 = __ldrex(v312);
      while ( __strex(v313 - 1, v312) );
      v313 = (*v312)--;
    if ( v313 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v103);
  v807 = 63;
  v806 = 0;
  v805 = 4;
  v804 = 1;
  v104 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[20],char const(&)[13],bool>(
           (unsigned int *)&v807,
           (unsigned int *)&v806,
           &v805,
           "options.vrHudDrifts",
           "vr_hud_drift",
           &v804);
  sub_119C884((void **)&v803, "vrHUDdrifts");
  Option::registerTelemetryProperty((int)v104, &v803);
  v105 = (void *)(v803 - 12);
  if ( (int *)(v803 - 12) != &dword_28898C0 )
    v314 = (unsigned int *)(v803 - 4);
        v315 = __ldrex(v314);
      while ( __strex(v315 - 1, v314) );
      v315 = (*v314)--;
    if ( v315 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v105);
  v802 = 64;
  v801 = 0;
  v800 = 4;
  v106 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[35],char const(&)[31],bool &>(
           (unsigned int *)&v802,
           (unsigned int *)&v801,
           &v800,
           "options.vrLivingRoomCursorCentered",
           "vr_living_room_cursor_centered",
           &v1183);
  sub_119C884((void **)&v799, "vrLivingRoomCursorCentered");
  Option::registerTelemetryProperty((int)v106, &v799);
  v107 = (void *)(v799 - 12);
  if ( (int *)(v799 - 12) != &dword_28898C0 )
    v316 = (unsigned int *)(v799 - 4);
        v317 = __ldrex(v316);
      while ( __strex(v317 - 1, v316) );
      v317 = (*v316)--;
    if ( v317 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v107);
  v798 = 65;
  v797 = 0;
  v796 = 4;
  v795 = 1;
  v108 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[15],bool>(
           (unsigned int *)&v798,
           (unsigned int *)&v797,
           &v796,
           "options.vrLinearJump",
           "vr_linear_jump",
           &v795);
  sub_119C884((void **)&v794, "vrLinearJump");
  Option::registerTelemetryProperty((int)v108, &v794);
  v109 = (void *)(v794 - 12);
  if ( (int *)(v794 - 12) != &dword_28898C0 )
    v318 = (unsigned int *)(v794 - 4);
        v319 = __ldrex(v318);
      while ( __strex(v319 - 1, v318) );
      v319 = (*v318)--;
    if ( v319 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v109);
  v793 = 66;
  v792 = 0;
  v791 = 4;
  v790 = 1;
  v110 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[17],bool>(
           (unsigned int *)&v793,
           (unsigned int *)&v792,
           &v791,
           "options.vrLinearMotion",
           "vr_linear_motion",
           &v790);
  sub_119C884((void **)&v789, "vrLinearMotion");
  Option::registerTelemetryProperty((int)v110, &v789);
  v111 = (void *)(v789 - 12);
  if ( (int *)(v789 - 12) != &dword_28898C0 )
    v320 = (unsigned int *)(v789 - 4);
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
      v321 = (*v320)--;
    if ( v321 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v111);
  v788 = 67;
  v787 = 0;
  v786 = 4;
  v785 = 1;
  v112 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[17],bool>(
           (unsigned int *)&v788,
           (unsigned int *)&v787,
           &v786,
           "options.stickyMining",
           "vr_sticky_mining",
           &v785);
  sub_119C884((void **)&v784, "vrStickyMining");
  Option::registerTelemetryProperty((int)v112, &v784);
  v113 = (void *)(v784 - 12);
  if ( (int *)(v784 - 12) != &dword_28898C0 )
    v322 = (unsigned int *)(v784 - 4);
        v323 = __ldrex(v322);
      while ( __strex(v323 - 1, v322) );
      v323 = (*v322)--;
    if ( v323 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v113);
  v783 = 68;
  v782 = 0;
  v781 = 4;
  v780 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],char const(&)[22],bool>(
    (unsigned int *)&v783,
    (unsigned int *)&v782,
    &v781,
    "options.stickyMiningHand",
    "vr_sticky_mining_hand",
    &v780);
  v779 = 69;
  v778 = 0;
  v777 = 4;
  v776 = 0;
  v114 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[18],char const(&)[12],bool>(
           (unsigned int *)&v779,
           (unsigned int *)&v778,
           &v777,
           "options.vrTapTurn",
           "vr_tap_turn",
           &v776);
  sub_119C884((void **)&v775, "vrTapTurning");
  Option::registerTelemetryProperty((int)v114, &v775);
  v115 = (void *)(v775 - 12);
  if ( (int *)(v775 - 12) != &dword_28898C0 )
    v324 = (unsigned int *)(v775 - 4);
        v325 = __ldrex(v324);
      while ( __strex(v325 - 1, v324) );
      v325 = (*v324)--;
    if ( v325 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v115);
  v774 = 70;
  v773 = 0;
  v772 = 4;
  v771 = 1052770304;
  v770 = 1044381696;
  v769 = 1065353216;
  LODWORD(v116) = &v771;
  HIDWORD(v116) = &v770;
  v117 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],char const(&)[23],float,float,float>(
           &v774,
           (float *)&v773,
           (float *)&v772,
           "options.vrTapTurnSensitivity",
           "vr_tapturn_sensitivity",
           v116,
           (int)&v769);
  sub_119C884((void **)&v768, "vrTapTurningSensitivity");
  Option::registerTelemetryProperty((int)v117, &v768);
  v118 = (void *)(v768 - 12);
  if ( (int *)(v768 - 12) != &dword_28898C0 )
    v326 = (unsigned int *)(v768 - 4);
        v327 = __ldrex(v326);
      while ( __strex(v327 - 1, v326) );
      v327 = (*v326)--;
    if ( v327 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v118);
  v767 = 71;
  v765 = 4;
  v766 = 0;
  v763 = 0;
  v764 = 1112014848;
  LODWORD(v119) = &v764;
  HIDWORD(v119) = &v763;
  v120 = Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[30],char const(&)[25],float,float,float const&>(
           &v767,
           (float *)&v766,
           (float *)&v765,
           "options.vrRollTurnSensitivity",
           "vr_wheelturn_sensitivity",
           v119,
           (int)&unk_262C974);
  sub_119C884((void **)&v762, "vrRollTurningSensitivity");
  Option::registerTelemetryProperty((int)v120, &v762);
  v121 = (void *)(v762 - 12);
  if ( (int *)(v762 - 12) != &dword_28898C0 )
    v328 = (unsigned int *)(v762 - 4);
        v329 = __ldrex(v328);
      while ( __strex(v329 - 1, v328) );
      v329 = (*v328)--;
    if ( v329 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v121);
  v761 = 72;
  v760 = 0;
  v758 = 0;
  v759 = 4;
  v122 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],char const(&)[43],bool>(
           (unsigned int *)&v761,
           (unsigned int *)&v760,
           &v759,
           "options.vrRollTurning",
           "vr_wheelturning_withLowDeadzone_controller",
           &v758);
  sub_119C884((void **)&v757, "vrRollTurning");
  Option::registerTelemetryProperty((int)v122, &v757);
  v123 = (void *)(v757 - 12);
  if ( (int *)(v757 - 12) != &dword_28898C0 )
    v330 = (unsigned int *)(v757 - 4);
        v331 = __ldrex(v330);
      while ( __strex(v331 - 1, v330) );
      v331 = (*v330)--;
    if ( v331 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v123);
  v756 = 73;
  v755 = 0;
  v754 = 4;
  v753 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],char const(&)[13],bool>(
    (unsigned int *)&v756,
    (unsigned int *)&v755,
    &v754,
    "options.vr180Turning",
    "vr_180_turns",
    &v753);
  v752 = 74;
  v749 = 1;
  v751 = 0;
  v750 = 4;
  v124 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],char const(&)[26],bool>(
           (unsigned int *)&v752,
           (unsigned int *)&v751,
           &v750,
           "options.comfortControls",
           "vr_use_comfort_controls_2",
           &v749);
  sub_119C884((void **)&v748, "vrUseComfortControls");
  Option::registerTelemetryProperty((int)v124, &v748);
  v125 = (void *)(v748 - 12);
  if ( (int *)(v748 - 12) != &dword_28898C0 )
    v332 = (unsigned int *)(v748 - 4);
        v333 = __ldrex(v332);
      while ( __strex(v333 - 1, v332) );
      v333 = (*v332)--;
    if ( v333 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v125);
  v747 = 75;
  v746 = 0;
  v745 = 4;
  v744 = 1;
  v126 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[32],char const(&)[30],bool>(
           (unsigned int *)&v747,
           (unsigned int *)&v746,
           &v745,
           "options.ShowComfortSelectScreen",
           "vr_show_comfort_select_screen",
           &v744);
  sub_119C884((void **)&v743, "vrShowComfortSelector");
  Option::registerTelemetryProperty((int)v126, &v743);
  v127 = (void *)(v743 - 12);
  if ( (int *)(v743 - 12) != &dword_28898C0 )
    v334 = (unsigned int *)(v743 - 4);
        v335 = __ldrex(v334);
      while ( __strex(v335 - 1, v334) );
      v335 = (*v334)--;
    if ( v335 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v127);
  v742 = 76;
  v739 = 32000;
  v741 = 0;
  v740 = 4;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],char const(&)[24],int>(
    (unsigned int *)&v742,
    (unsigned int *)&v741,
    &v740,
    "options.vrLivingRoomHintTime",
    "vr_livingroom_hint_time",
    &v739);
  v738 = 77;
  v735 = 1;
  v737 = 0;
  v736 = 4;
  v128 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],char const(&)[18],bool>(
           (unsigned int *)&v738,
           (unsigned int *)&v737,
           &v736,
           "options.vrMirrorTexture",
           "vr_mirror_texture",
           &v735);
  sub_119C884((void **)&v734, "vrMirrorTexture");
  Option::registerTelemetryProperty((int)v128, &v734);
  v129 = (void *)(v734 - 12);
  if ( (int *)(v734 - 12) != &dword_28898C0 )
    v336 = (unsigned int *)(v734 - 4);
        v337 = __ldrex(v336);
      while ( __strex(v337 - 1, v336) );
      v337 = (*v336)--;
    if ( v337 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v129);
  v733 = 78;
  v732 = 0;
  v731 = 4;
  v730 = 1;
  v130 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[27],char const(&)[22],bool>(
           (unsigned int *)&v733,
           (unsigned int *)&v732,
           &v731,
           "options.vrHandControlsItem",
           "vr_hand_controls_item",
           &v730);
  sub_119C884((void **)&v729, "vrHandControlsItem");
  Option::registerTelemetryProperty((int)v130, &v729);
  v131 = (void *)(v729 - 12);
  if ( (int *)(v729 - 12) != &dword_28898C0 )
    v338 = (unsigned int *)(v729 - 4);
        v339 = __ldrex(v338);
      while ( __strex(v339 - 1, v338) );
      v339 = (*v338)--;
    if ( v339 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v131);
  v728 = 79;
  v727 = 0;
  v726 = 4;
  v725 = 1;
  v132 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],char const(&)[21],bool>(
           (unsigned int *)&v728,
           (unsigned int *)&v727,
           &v726,
           "options.vrHandControlsHUD",
           "vr_hand_controls_hud",
           &v725);
  sub_119C884((void **)&v724, "vrHandControlsHUD");
  Option::registerTelemetryProperty((int)v132, &v724);
  v133 = (void *)(v724 - 12);
  if ( (int *)(v724 - 12) != &dword_28898C0 )
    v340 = (unsigned int *)(v724 - 4);
        v341 = __ldrex(v340);
      while ( __strex(v341 - 1, v340) );
      v341 = (*v340)--;
    if ( v341 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v133);
  v723 = 80;
  v722 = 0;
  v721 = 4;
  v720 = 1;
  v134 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],char const(&)[16],bool>(
           (unsigned int *)&v723,
           (unsigned int *)&v722,
           &v721,
           "options.vrHandPointer",
           "vr_hand_pointer",
           &v720);
  sub_119C884((void **)&v719, "vrHandPointer");
  Option::registerTelemetryProperty((int)v134, &v719);
  v135 = (void *)(v719 - 12);
  if ( (int *)(v719 - 12) != &dword_28898C0 )
    v342 = (unsigned int *)(v719 - 4);
        v343 = __ldrex(v342);
      while ( __strex(v343 - 1, v342) );
      v343 = (*v342)--;
    if ( v343 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v135);
  v718 = 81;
  v717 = 0;
  v716 = 4;
  v715 = 1;
  v136 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[23],char const(&)[17],bool>(
           (unsigned int *)&v718,
           (unsigned int *)&v717,
           &v716,
           "options.vrHandsVisible",
           "vr_hands_visible",
           &v715);
  sub_119C884((void **)&v714, "vrHandsVisible");
  Option::registerTelemetryProperty((int)v136, &v714);
  v137 = (void *)(v714 - 12);
  if ( (int *)(v714 - 12) != &dword_28898C0 )
    v344 = (unsigned int *)(v714 - 4);
        v345 = __ldrex(v344);
      while ( __strex(v345 - 1, v344) );
      v345 = (*v344)--;
    if ( v345 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v137);
  v713 = 82;
  v710 = 1065353216;
  v709 = 1048576000;
  v708 = 1082130432;
  v712 = 0;
  v711 = 4;
  LODWORD(v138) = &v710;
  HIDWORD(v138) = &v709;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],char const(&)[24],float,float,float>(
    &v713,
    (float *)&v712,
    (float *)&v711,
    "options.vrUIMouseSensitivity",
    "vr_ui_mouse_sensitivity",
    v138,
    (int)&v708);
  v706 = 0;
  v707 = 83;
  v705 = 4;
  v704 = (*(int (**)(void))(**((_DWORD **)v1 + 10) + 36))();
  (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 10) + 40))(&v703);
  v139 = Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[15],char const(&)[8],int,std::vector<int,std::allocator<int>> const>(
           (unsigned int *)&v707,
           (unsigned int *)&v706,
           &v705,
           "options.vrMsaa",
           "vr_msaa",
           &v704,
           (__int64 *)&v703);
  sub_119C884((void **)&v702, "vrMsaa");
  Option::registerTelemetryProperty((int)v139, &v702);
  v140 = (void *)(v702 - 12);
  if ( (int *)(v702 - 12) != &dword_28898C0 )
    v346 = (unsigned int *)(v702 - 4);
        v347 = __ldrex(v346);
      while ( __strex(v347 - 1, v346) );
      v347 = (*v346)--;
    if ( v347 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v140);
  if ( v703 )
    operator delete(v703);
  v701 = 84;
  v700 = 0;
  v699 = 4;
  v698 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[21],std::string const&,bool>(
    (unsigned int *)&v701,
    (unsigned int *)&v700,
    &v699,
    "options.vrLivingRoom",
    &v698);
  v697 = 85;
  v696 = 0;
  v695 = 4;
  v694 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],std::string const&,bool>(
    (unsigned int *)&v697,
    (unsigned int *)&v696,
    &v695,
    "options.RightStickAim",
    &v694);
  v693 = 86;
  v692 = 0;
  v691 = 4;
  v690 = 4;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[33],std::string const&,int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v693,
    (unsigned int *)&v692,
    &v691,
    "options.RightStickAimSensitivity",
    &v690,
    (__int64 *)&dword_27CB838);
  v689 = 87;
  v686 = 45;
  v688 = 0;
  v687 = 4;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[40],std::string const&,int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v689,
    (unsigned int *)&v688,
    &v687,
    "options.vrRightStickPitchAssistMaxAngle",
    &v686,
    (__int64 *)&dword_27CB82C);
  v685 = 88;
  v684 = 0;
  v683 = 4;
  v682 = 4;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[41],std::string const&,int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v685,
    (unsigned int *)&v684,
    &v683,
    "options.vrRightStickPitchAssistSteppings",
    &v682,
    (__int64 *)&dword_27CB820);
  v681 = 89;
  v680 = 0;
  v679 = 4;
  v678 = 0;
    (unsigned int *)&v681,
    (unsigned int *)&v680,
    &v679,
    "store_has_purchased_coins",
    &v678);
  v677 = 90;
  v676 = 1;
  v675 = 4;
  sub_119C884((void **)&v673, "dev_showchunkmap");
  v141 = sub_119C854(&v674, &Options::do_not_save);
  v672 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[25],std::string,bool>(
    (unsigned int *)&v677,
    (unsigned int *)&v676,
    &v675,
    "options.dev_showChunkMap",
    v141,
    &v672);
  v142 = (void *)(v674 - 12);
  if ( (int *)(v674 - 12) != &dword_28898C0 )
    v348 = (unsigned int *)(v674 - 4);
        v349 = __ldrex(v348);
      while ( __strex(v349 - 1, v348) );
      v349 = (*v348)--;
    if ( v349 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v142);
  v143 = (void *)(v673 - 12);
  if ( (int *)(v673 - 12) != &dword_28898C0 )
    v350 = (unsigned int *)(v673 - 4);
        v351 = __ldrex(v350);
      while ( __strex(v351 - 1, v350) );
      v351 = (*v350)--;
    if ( v351 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v143);
  v671 = 91;
  v670 = 1;
  v669 = 4;
  sub_119C884((void **)&v667, "dev_newCuller");
  v144 = sub_119C854(&v668, &Options::do_not_save);
  v666 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],std::string,bool>(
    (unsigned int *)&v671,
    (unsigned int *)&v670,
    &v669,
    "options.dev_newCuller",
    v144,
    &v666);
  v145 = (void *)(v668 - 12);
  if ( (int *)(v668 - 12) != &dword_28898C0 )
    v352 = (unsigned int *)(v668 - 4);
        v353 = __ldrex(v352);
      while ( __strex(v353 - 1, v352) );
      v353 = (*v352)--;
    if ( v353 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v145);
  v146 = (void *)(v667 - 12);
  if ( (int *)(v667 - 12) != &dword_28898C0 )
    v354 = (unsigned int *)(v667 - 4);
        v355 = __ldrex(v354);
      while ( __strex(v355 - 1, v354) );
      v355 = (*v354)--;
    if ( v355 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146);
  v665 = 92;
  v664 = 1;
  v663 = 4;
  sub_119C884((void **)&v661, "dev_serverInstanceThread");
  sub_119C854(&v662, &Options::do_not_save);
    v147 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v147 = &ServiceLocator<AppPlatform>::mDefaultService;
  v660 = (*(int (**)(void))(**(_DWORD **)v147 + 584))();
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[33],std::string,bool>(
    (unsigned int *)&v665,
    (unsigned int *)&v664,
    &v663,
    "options.dev_serverInstanceThread",
    &v662,
    &v660);
  v148 = (void *)(v662 - 12);
  if ( (int *)(v662 - 12) != &dword_28898C0 )
    v356 = (unsigned int *)(v662 - 4);
        v357 = __ldrex(v356);
      while ( __strex(v357 - 1, v356) );
      v357 = (*v356)--;
    if ( v357 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v148);
  v149 = (void *)(v661 - 12);
  if ( (int *)(v661 - 12) != &dword_28898C0 )
    v358 = (unsigned int *)(v661 - 4);
        v359 = __ldrex(v358);
      while ( __strex(v359 - 1, v358) );
      v359 = (*v358)--;
    if ( v359 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
  v659 = 119;
  v658 = 1;
  v657 = 4;
  sub_119C884((void **)&v655, "dev_showbuildinfo");
  v150 = sub_119C854(&v656, &Options::do_not_save);
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],std::string,bool &>(
    (unsigned int *)&v659,
    (unsigned int *)&v658,
    &v657,
    "options.dev_showBuildInfo",
    v150,
    &v1180);
  v151 = (void *)(v656 - 12);
  if ( (int *)(v656 - 12) != &dword_28898C0 )
    v360 = (unsigned int *)(v656 - 4);
        v361 = __ldrex(v360);
      while ( __strex(v361 - 1, v360) );
      v361 = (*v360)--;
    if ( v361 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v151);
  v152 = (void *)(v655 - 12);
  if ( (int *)(v655 - 12) != &dword_28898C0 )
    v362 = (unsigned int *)(v655 - 4);
        v363 = __ldrex(v362);
      while ( __strex(v363 - 1, v362) );
      v363 = (*v362)--;
    if ( v363 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v152);
  v654 = 93;
  v653 = 1;
  v652 = 4;
  sub_119C884((void **)&v650, "dev_enable_profiler");
  v153 = sub_119C854(&v651, &Options::do_not_save);
  v649 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[27],std::string,bool>(
    (unsigned int *)&v654,
    (unsigned int *)&v653,
    &v652,
    "options.dev_enableProfiler",
    v153,
    &v649);
  v154 = (void *)(v651 - 12);
  if ( (int *)(v651 - 12) != &dword_28898C0 )
    v364 = (unsigned int *)(v651 - 4);
        v365 = __ldrex(v364);
      while ( __strex(v365 - 1, v364) );
      v365 = (*v364)--;
    if ( v365 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v154);
  v155 = (void *)(v650 - 12);
  if ( (int *)(v650 - 12) != &dword_28898C0 )
    v366 = (unsigned int *)(v650 - 4);
        v367 = __ldrex(v366);
      while ( __strex(v367 - 1, v366) );
      v367 = (*v366)--;
    if ( v367 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v155);
  v648 = 94;
  v647 = 1;
  v646 = 4;
  sub_119C884((void **)&v644, "dev_benchmark_mode_time");
  v156 = sub_119C854(&v645, &Options::do_not_save);
  v643 = 0;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],std::string,int>(
    (unsigned int *)&v648,
    (unsigned int *)&v647,
    &v646,
    "dev_benchmark_mode_time",
    v156,
    &v643);
  v157 = (void *)(v645 - 12);
  if ( (int *)(v645 - 12) != &dword_28898C0 )
    v368 = (unsigned int *)(v645 - 4);
        v369 = __ldrex(v368);
      while ( __strex(v369 - 1, v368) );
      v369 = (*v368)--;
    if ( v369 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v157);
  v158 = (void *)(v644 - 12);
  if ( (int *)(v644 - 12) != &dword_28898C0 )
    v370 = (unsigned int *)(v644 - 4);
        v371 = __ldrex(v370);
      while ( __strex(v371 - 1, v370) );
      v371 = (*v370)--;
    if ( v371 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v158);
  v642 = 95;
  v641 = 1;
  v640 = 4;
  sub_119C884((void **)&v638, "dev_connection_quality");
  v159 = sub_119C854(&v639, &Options::do_not_save);
  v637 = 0;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[30],std::string,int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v642,
    (unsigned int *)&v641,
    &v640,
    "options.dev_connectionQuality",
    v159,
    &v637,
    (__int64 *)&dword_27CB868);
  v160 = (void *)(v639 - 12);
  if ( (int *)(v639 - 12) != &dword_28898C0 )
    v372 = (unsigned int *)(v639 - 4);
        v373 = __ldrex(v372);
      while ( __strex(v373 - 1, v372) );
      v373 = (*v372)--;
    if ( v373 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v160);
  v161 = (void *)(v638 - 12);
  if ( (int *)(v638 - 12) != &dword_28898C0 )
    v374 = (unsigned int *)(v638 - 4);
        v375 = __ldrex(v374);
      while ( __strex(v375 - 1, v374) );
      v375 = (*v374)--;
    if ( v375 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v161);
  v636 = 147;
  v635 = 1;
  v634 = 4;
  sub_119C884((void **)&v632, "dev_render_attach_pos");
  v162 = sub_119C854(&v633, &Options::do_not_save);
  v631 = 0;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[33],std::string,int,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v636,
    (unsigned int *)&v635,
    &v634,
    "options.dev_attachPosRenderLevel",
    v162,
    &v631,
    (__int64 *)&dword_27CB874);
  v163 = (void *)(v633 - 12);
  if ( (int *)(v633 - 12) != &dword_28898C0 )
    v376 = (unsigned int *)(v633 - 4);
        v377 = __ldrex(v376);
      while ( __strex(v377 - 1, v376) );
      v377 = (*v376)--;
    if ( v377 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v163);
  v164 = (void *)(v632 - 12);
  if ( (int *)(v632 - 12) != &dword_28898C0 )
    v378 = (unsigned int *)(v632 - 4);
        v379 = __ldrex(v378);
      while ( __strex(v379 - 1, v378) );
      v379 = (*v378)--;
    if ( v379 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v164);
  v630 = 144;
  v629 = 1;
  v628 = 4;
  sub_119C884((void **)&v626, "mem_check_timer");
  sub_119C854(&v627, &Options::do_not_save);
    v165 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v165 = &ServiceLocator<AppPlatform>::mDefaultService;
  _R0 = (*(int (**)(void))(**(_DWORD **)v165 + 624))();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xD48+var_A00]
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[22],std::string,double,std::vector<int,std::allocator<int>> const&>(
    (unsigned int *)&v630,
    (unsigned int *)&v629,
    &v628,
    "options.dev_mem_check",
    &v627,
    (int)&v625,
    (__int64 *)&dword_27CB880);
  v170 = (void *)(v627 - 12);
  if ( (int *)(v627 - 12) != &dword_28898C0 )
    v380 = (unsigned int *)(v627 - 4);
        v381 = __ldrex(v380);
      while ( __strex(v381 - 1, v380) );
      v381 = (*v380)--;
    if ( v381 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  v171 = (void *)(v626 - 12);
  if ( (int *)(v626 - 12) != &dword_28898C0 )
    v382 = (unsigned int *)(v626 - 4);
        v383 = __ldrex(v382);
      while ( __strex(v383 - 1, v382) );
      v383 = (*v382)--;
    if ( v383 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v171);
  v624 = 163;
  v623 = 1;
  v622 = 4;
  v621 = 0;
    (unsigned int *)&v624,
    (unsigned int *)&v623,
    &v622,
    "options.dev_findMobs",
    &v621);
  v620 = 96;
  v618 = 4;
  v619 = 1;
  v617 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[30],std::string const&,bool>(
    (unsigned int *)&v620,
    (unsigned int *)&v619,
    &v618,
    "options.dev_renderBoundingBox",
    &v617);
  v616 = 97;
  v614 = 4;
  v615 = 1;
  v613 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],std::string const&,bool>(
    (unsigned int *)&v616,
    (unsigned int *)&v615,
    &v614,
    "options.dev_renderPaths",
    &v613);
  v612 = 98;
  v610 = 4;
  v611 = 1;
  v609 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[28],std::string const&,bool>(
    (unsigned int *)&v612,
    (unsigned int *)&v611,
    &v610,
    "options.dev_renderGoalState",
    &v609);
  v608 = 99;
  v606 = 4;
  v607 = 1;
  v605 = 0;
    (unsigned int *)&v608,
    (unsigned int *)&v607,
    &v606,
    &v605);
  v604 = 100;
  v602 = 4;
  v603 = 1;
  sub_119C884((void **)&v600, "dev_autoloadlevel");
  v172 = sub_119C854(&v601, &Options::do_not_save);
  v599 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,std::string,bool>(
    (unsigned int *)&v604,
    (unsigned int *)&v603,
    &v602,
    v172,
    &v599);
  v173 = (void *)(v601 - 12);
  if ( (int *)(v601 - 12) != &dword_28898C0 )
    v384 = (unsigned int *)(v601 - 4);
        v385 = __ldrex(v384);
      while ( __strex(v385 - 1, v384) );
      v385 = (*v384)--;
    if ( v385 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v173);
  v174 = (void *)(v600 - 12);
  if ( (int *)(v600 - 12) != &dword_28898C0 )
    v386 = (unsigned int *)(v600 - 4);
        v387 = __ldrex(v386);
      while ( __strex(v387 - 1, v386) );
      v387 = (*v386)--;
    if ( v387 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v174);
  v598 = 101;
  v597 = 1;
  v596 = 4;
  sub_119C884((void **)&v594, "dev_achievements_always_enabled");
  v175 = sub_119C854(&v595, &Options::do_not_save);
  v593 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[38],std::string,bool>(
    (unsigned int *)&v598,
    (unsigned int *)&v597,
    &v596,
    "options.dev_achievementsAlwaysEnabled",
    v175,
    &v593);
  v176 = (void *)(v595 - 12);
  if ( (int *)(v595 - 12) != &dword_28898C0 )
    v388 = (unsigned int *)(v595 - 4);
        v389 = __ldrex(v388);
      while ( __strex(v389 - 1, v388) );
      v389 = (*v388)--;
    if ( v389 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v176);
  v177 = (void *)(v594 - 12);
  if ( (int *)(v594 - 12) != &dword_28898C0 )
    v390 = (unsigned int *)(v594 - 4);
        v391 = __ldrex(v390);
      while ( __strex(v391 - 1, v390) );
      v391 = (*v390)--;
    if ( v391 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v177);
  v592 = 102;
  v591 = 1;
  v590 = 4;
  sub_119C884((void **)&v588, "dev_createRealmWithoutPurchase");
  v178 = sub_119C854(&v589, &Options::do_not_save);
  v587 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[39],std::string,bool>(
    (unsigned int *)&v592,
    (unsigned int *)&v591,
    &v590,
    "options.dev_createRealmWithoutPurchase",
    v178,
    &v587);
  v179 = (void *)(v589 - 12);
  if ( (int *)(v589 - 12) != &dword_28898C0 )
    v392 = (unsigned int *)(v589 - 4);
        v393 = __ldrex(v392);
      while ( __strex(v393 - 1, v392) );
      v393 = (*v392)--;
    if ( v393 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v179);
  v180 = (void *)(v588 - 12);
  if ( (int *)(v588 - 12) != &dword_28898C0 )
    v394 = (unsigned int *)(v588 - 4);
        v395 = __ldrex(v394);
      while ( __strex(v395 - 1, v394) );
      v395 = (*v394)--;
    if ( v395 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v180);
  v586 = 103;
  v585 = 1;
  v584 = 4;
  sub_119C884((void **)&v582, "dev_use_ipv6_only");
  v181 = sub_119C854(&v583, &Options::do_not_save);
  v581 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],std::string,bool>(
    (unsigned int *)&v586,
    (unsigned int *)&v585,
    &v584,
    "options.dev_useIPv6Only",
    v181,
    &v581);
  v182 = (void *)(v583 - 12);
  if ( (int *)(v583 - 12) != &dword_28898C0 )
    v396 = (unsigned int *)(v583 - 4);
        v397 = __ldrex(v396);
      while ( __strex(v397 - 1, v396) );
      v397 = (*v396)--;
    if ( v397 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v182);
  v183 = (void *)(v582 - 12);
  if ( (int *)(v582 - 12) != &dword_28898C0 )
    v398 = (unsigned int *)(v582 - 4);
        v399 = __ldrex(v398);
      while ( __strex(v399 - 1, v398) );
      v399 = (*v398)--;
    if ( v399 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v183);
  v580 = 104;
  v579 = 1;
  v578 = 4;
  sub_119C884((void **)&v576, "dev_use_retail_xbox_sandbox");
  v184 = sub_119C854(&v577, &Options::do_not_save);
  v575 = 1;
    (unsigned int *)&v580,
    (unsigned int *)&v579,
    &v578,
    "options.dev_useRetailXboxSandbox",
    v184,
    &v575);
  v185 = (void *)(v577 - 12);
  if ( (int *)(v577 - 12) != &dword_28898C0 )
    v400 = (unsigned int *)(v577 - 4);
        v401 = __ldrex(v400);
      while ( __strex(v401 - 1, v400) );
      v401 = (*v400)--;
    if ( v401 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v185);
  v186 = (void *)(v576 - 12);
  if ( (int *)(v576 - 12) != &dword_28898C0 )
    v402 = (unsigned int *)(v576 - 4);
        v403 = __ldrex(v402);
      while ( __strex(v403 - 1, v402) );
      v403 = (*v402)--;
    if ( v403 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v186);
  v574 = 105;
  v573 = 1;
  v572 = 4;
  sub_119C884((void **)&v570, "dev_realms_environment");
  v187 = sub_119C854(&v571, &Options::do_not_save);
  Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[30],std::string,int &,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
    (unsigned int *)&v574,
    (unsigned int *)&v573,
    &v572,
    "options.dev_realmsEnvironment",
    v187,
    &v1190,
    (__int64 *)&dword_27CB88C,
    (int)&realmsEnvironmentLabels);
  v188 = (void *)(v571 - 12);
  if ( (int *)(v571 - 12) != &dword_28898C0 )
    v404 = (unsigned int *)(v571 - 4);
        v405 = __ldrex(v404);
      while ( __strex(v405 - 1, v404) );
      v405 = (*v404)--;
    if ( v405 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v188);
  v189 = (void *)(v570 - 12);
  if ( (int *)(v570 - 12) != &dword_28898C0 )
    v406 = (unsigned int *)(v570 - 4);
        v407 = __ldrex(v406);
      while ( __strex(v407 - 1, v406) );
      v407 = (*v406)--;
    if ( v407 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v189);
  v569 = 110;
  v568 = 1;
  v567 = 4;
  sub_119C884((void **)&v565, "dev_storeOfferQueryRequiresXbl");
  v190 = sub_119C854(&v566, &Options::do_not_save);
  v564 = 0;
    (unsigned int *)&v569,
    (unsigned int *)&v568,
    &v567,
    "options.dev_storeOfferQueryRequiresXbl",
    v190,
    &v564);
  v191 = (void *)(v566 - 12);
  if ( (int *)(v566 - 12) != &dword_28898C0 )
    v408 = (unsigned int *)(v566 - 4);
        v409 = __ldrex(v408);
      while ( __strex(v409 - 1, v408) );
      v409 = (*v408)--;
    if ( v409 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v191);
  v192 = (void *)(v565 - 12);
  if ( (int *)(v565 - 12) != &dword_28898C0 )
    v410 = (unsigned int *)(v565 - 4);
        v411 = __ldrex(v410);
      while ( __strex(v411 - 1, v410) );
      v411 = (*v410)--;
    if ( v411 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v192);
  v563 = 111;
  v562 = 1;
  v561 = 4;
  sub_119C884((void **)&v559, "dev_resetClientId");
  v193 = sub_119C854(&v560, &Options::do_not_save);
  v558 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[26],std::string,bool>(
    (unsigned int *)&v563,
    (unsigned int *)&v562,
    &v561,
    "options.dev_resetClientId",
    v193,
    &v558);
  v194 = (void *)(v560 - 12);
  if ( (int *)(v560 - 12) != &dword_28898C0 )
    v412 = (unsigned int *)(v560 - 4);
        v413 = __ldrex(v412);
      while ( __strex(v413 - 1, v412) );
      v413 = (*v412)--;
    if ( v413 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v194);
  v195 = (void *)(v559 - 12);
  if ( (int *)(v559 - 12) != &dword_28898C0 )
    v414 = (unsigned int *)(v559 - 4);
        v415 = __ldrex(v414);
      while ( __strex(v415 - 1, v414) );
      v415 = (*v414)--;
    if ( v415 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v195);
  v557 = 112;
  v556 = 1;
  v555 = 4;
  sub_119C884((void **)&v553, "dev_logflushimmediate");
  v196 = sub_119C854(&v554, &Options::do_not_save);
  v552 = 0;
    (unsigned int *)&v557,
    (unsigned int *)&v556,
    &v555,
    v196,
    &v552);
  v197 = (void *)(v554 - 12);
  if ( (int *)(v554 - 12) != &dword_28898C0 )
    v416 = (unsigned int *)(v554 - 4);
        v417 = __ldrex(v416);
      while ( __strex(v417 - 1, v416) );
      v417 = (*v416)--;
    if ( v417 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v197);
  v198 = (void *)(v553 - 12);
  if ( (int *)(v553 - 12) != &dword_28898C0 )
    v418 = (unsigned int *)(v553 - 4);
        v419 = __ldrex(v418);
      while ( __strex(v419 - 1, v418) );
      v419 = (*v418)--;
    if ( v419 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v198);
  v551 = 113;
  v550 = 1;
  v549 = 4;
  sub_119C884((void **)&v547, "dev_logtimestamp");
  v199 = sub_119C854(&v548, &Options::do_not_save);
  v546 = 0;
    (unsigned int *)&v551,
    (unsigned int *)&v550,
    &v549,
    v199,
    &v546);
  v200 = (void *)(v548 - 12);
  if ( (int *)(v548 - 12) != &dword_28898C0 )
    v420 = (unsigned int *)(v548 - 4);
        v421 = __ldrex(v420);
      while ( __strex(v421 - 1, v420) );
      v421 = (*v420)--;
    if ( v421 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v200);
  v201 = (void *)(v547 - 12);
  if ( (int *)(v547 - 12) != &dword_28898C0 )
    v422 = (unsigned int *)(v547 - 4);
        v423 = __ldrex(v422);
      while ( __strex(v423 - 1, v422) );
      v423 = (*v422)--;
    if ( v423 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v201);
  v545 = 114;
  v544 = 1;
  v543 = 4;
  sub_119C884((void **)&v541, "dev_logtrace");
  v202 = sub_119C854(&v542, &Options::do_not_save);
  v540 = 0;
    (unsigned int *)&v545,
    (unsigned int *)&v544,
    &v543,
    v202,
    &v540);
  v203 = (void *)(v542 - 12);
  if ( (int *)(v542 - 12) != &dword_28898C0 )
    v424 = (unsigned int *)(v542 - 4);
        v425 = __ldrex(v424);
      while ( __strex(v425 - 1, v424) );
      v425 = (*v424)--;
    if ( v425 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v203);
  v204 = (void *)(v541 - 12);
  if ( (int *)(v541 - 12) != &dword_28898C0 )
    v426 = (unsigned int *)(v541 - 4);
        v427 = __ldrex(v426);
      while ( __strex(v427 - 1, v426) );
      v427 = (*v426)--;
    if ( v427 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v204);
  v539 = 115;
  v538 = 1;
  v537 = 4;
  sub_119C884((void **)&v535, "dev_logappend");
  v205 = sub_119C854(&v536, &Options::do_not_save);
  v534 = 0;
    (unsigned int *)&v539,
    (unsigned int *)&v538,
    &v537,
    v205,
    &v534);
  v206 = (void *)(v536 - 12);
  if ( (int *)(v536 - 12) != &dword_28898C0 )
    v428 = (unsigned int *)(v536 - 4);
        v429 = __ldrex(v428);
      while ( __strex(v429 - 1, v428) );
      v429 = (*v428)--;
    if ( v429 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v206);
  v207 = (void *)(v535 - 12);
  if ( (int *)(v535 - 12) != &dword_28898C0 )
    v430 = (unsigned int *)(v535 - 4);
        v431 = __ldrex(v430);
      while ( __strex(v431 - 1, v430) );
      v431 = (*v430)--;
    if ( v431 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v207);
  v533 = 116;
  v532 = 1;
  v531 = 4;
  sub_119C884((void **)&v529, "dev_priorityfilter");
  v208 = sub_119C854(&v530, &Options::do_not_save);
  v528 = -1;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,std::string,unsigned int>(
    (unsigned int *)&v533,
    (unsigned int *)&v532,
    &v531,
    v208,
    &v528);
  v209 = (void *)(v530 - 12);
  if ( (int *)(v530 - 12) != &dword_28898C0 )
    v432 = (unsigned int *)(v530 - 4);
        v433 = __ldrex(v432);
      while ( __strex(v433 - 1, v432) );
      v433 = (*v432)--;
    if ( v433 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v209);
  v210 = (void *)(v529 - 12);
  if ( (int *)(v529 - 12) != &dword_28898C0 )
    v434 = (unsigned int *)(v529 - 4);
        v435 = __ldrex(v434);
      while ( __strex(v435 - 1, v434) );
      v435 = (*v434)--;
    if ( v435 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v210);
  v527 = 117;
  v526 = 1;
  v525 = 4;
  sub_119C884((void **)&v523, "dev_areafilter");
  v211 = sub_119C854(&v524, &Options::do_not_save);
  v522 = -1;
    (unsigned int *)&v527,
    (unsigned int *)&v526,
    &v525,
    v211,
    &v522);
  v212 = (void *)(v524 - 12);
  if ( (int *)(v524 - 12) != &dword_28898C0 )
    v436 = (unsigned int *)(v524 - 4);
        v437 = __ldrex(v436);
      while ( __strex(v437 - 1, v436) );
      v437 = (*v436)--;
    if ( v437 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v212);
  v213 = (void *)(v523 - 12);
  if ( (int *)(v523 - 12) != &dword_28898C0 )
    v438 = (unsigned int *)(v523 - 4);
        v439 = __ldrex(v438);
      while ( __strex(v439 - 1, v438) );
      v439 = (*v438)--;
    if ( v439 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v213);
  v521 = 118;
  v518 = 0;
  v520 = 1;
  v519 = 4;
  Options::registerOption<EnumOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[34],std::string const&,int,std::vector<int,std::allocator<int>> const&,std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>> const&>(
    (unsigned int *)&v521,
    (unsigned int *)&v520,
    &v519,
    "options.dev_enableDebugHudOverlay",
    &v518,
    (__int64 *)&dword_27CB85C,
    (int)&debugHudLabels);
  v517 = 158;
  v515 = 4;
  v516 = 1;
  sub_119C884((void **)&v513, "dev_use_zipped_in_package_packs");
  sub_119C854(&v514, &Options::do_not_save);
    v214 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v214 = &ServiceLocator<AppPlatform>::mDefaultService;
  v512 = (*(int (**)(void))(**(_DWORD **)v214 + 628))();
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[36],std::string,bool>(
    (unsigned int *)&v517,
    (unsigned int *)&v516,
    &v515,
    "options.dev_useZippedInPackagePacks",
    &v514,
    &v512);
  v215 = (void *)(v514 - 12);
  if ( (int *)(v514 - 12) != &dword_28898C0 )
    v440 = (unsigned int *)(v514 - 4);
        v441 = __ldrex(v440);
      while ( __strex(v441 - 1, v440) );
      v441 = (*v440)--;
    if ( v441 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v215);
  v216 = (void *)(v513 - 12);
  if ( (int *)(v513 - 12) != &dword_28898C0 )
    v442 = (unsigned int *)(v513 - 4);
        v443 = __ldrex(v442);
      while ( __strex(v443 - 1, v442) );
      v443 = (*v442)--;
    if ( v443 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v216);
  v511 = 159;
  v510 = 1;
  v509 = 4;
  sub_119C884((void **)&v507, "dev_import_packs_as_zip");
  sub_119C854(&v508, &Options::do_not_save);
    v217 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v217 = &ServiceLocator<AppPlatform>::mDefaultService;
  v506 = (*(int (**)(void))(**(_DWORD **)v217 + 628))();
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[29],std::string,bool>(
    (unsigned int *)&v511,
    (unsigned int *)&v510,
    &v509,
    "options.dev_importPacksAsZip",
    &v508,
    &v506);
  v218 = (void *)(v508 - 12);
  if ( (int *)(v508 - 12) != &dword_28898C0 )
    v444 = (unsigned int *)(v508 - 4);
        v445 = __ldrex(v444);
      while ( __strex(v445 - 1, v444) );
      v445 = (*v444)--;
    if ( v445 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v218);
  v219 = (void *)(v507 - 12);
  if ( (int *)(v507 - 12) != &dword_28898C0 )
    v446 = (unsigned int *)(v507 - 4);
        v447 = __ldrex(v446);
      while ( __strex(v447 - 1, v446) );
      v447 = (*v446)--;
    if ( v447 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v219);
  v505 = 120;
  v504 = 0;
  v502 = 0;
  v503 = 4;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[23],int>(
    (unsigned int *)&v505,
    (unsigned int *)&v504,
    &v503,
    "old_game_version_major",
    &v502);
  v501 = 121;
  v499 = 0;
  v500 = 4LL;
    (unsigned int *)&v501,
    (unsigned int *)&v500 + 1,
    (int *)&v500,
    "old_game_version_minor",
    &v499);
  v498 = 122;
  v496 = 0;
  v497 = 4LL;
    (unsigned int *)&v498,
    (unsigned int *)&v497 + 1,
    (int *)&v497,
    "old_game_version_patch",
    &v496);
  v495 = 123;
  v493 = 0;
  v494 = 4LL;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[22],int>(
    (unsigned int *)&v495,
    (unsigned int *)&v494 + 1,
    (int *)&v494,
    "old_game_version_beta",
    &v493);
  v492 = 124;
  v491 = 4LL;
  v490 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[32],bool>(
    (unsigned int *)&v492,
    (unsigned int *)&v491 + 1,
    (int *)&v491,
    "realms_show_friend_invites_only",
    &v490);
  v489 = 125;
  v487 = 0;
  v488 = 4LL;
    (unsigned int *)&v489,
    (unsigned int *)&v488 + 1,
    (int *)&v488,
    "number_of_owned_realms",
    &v487);
  v486 = 126;
  v484 = 0;
  v485 = 4LL;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[25],int>(
    (unsigned int *)&v486,
    (unsigned int *)&v485 + 1,
    (int *)&v485,
    "number_of_friends_realms",
    &v484);
  v483 = 127;
  v482 = 4LL;
  v481 = 3;
  Options::registerOption<IntOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[32],int>(
    (unsigned int *)&v483,
    (unsigned int *)&v482 + 1,
    (int *)&v482,
    "realms_view_upsell_screen_count",
    &v481);
  v480 = 128;
  v479 = 4LL;
  v478 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,char const(&)[25],bool>(
    (unsigned int *)&v480,
    (unsigned int *)&v479 + 1,
    (int *)&v479,
    "show_worlds_trial_button",
    &v478);
  v477 = 129;
  v475 = 4;
  v476 = 1;
  v474 = 0;
    (unsigned int *)&v477,
    (unsigned int *)&v476,
    &v475,
    "options.allowCellularData",
    "allow_cellular_data",
    &v474);
  v473 = 130;
  v471 = 4;
  v472 = 1;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[28],char const(&)[21],bool &>(
    (unsigned int *)&v473,
    (unsigned int *)&v472,
    &v471,
    "options.websocketencryption",
    "websocket_encryption",
    &v1181);
  v470 = 131;
  v468 = 3;
  v469 = 1;
  v467 = 0;
  Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[31],char const(&)[20],bool>(
    (unsigned int *)&v470,
    (unsigned int *)&v469,
    &v468,
    "options.enableChatTextToSpeech",
    "chat_text_to_speech",
    &v467);
  v466 = 140;
  v464 = 4;
  v465 = 1;
  v463 = 1;
  v220 = Options::registerOption<BoolOption,OptionID,OptionOwnerType,OptionResetType,char const(&)[24],std::string const&,bool>(
           (unsigned int *)&v466,
           (unsigned int *)&v465,
           &v464,
           "options.multiplayergame",
           &Options::do_not_save,
           &v463);
  sub_119C884((void **)&v462, "multiplayerGame");
  Option::registerTelemetryProperty((int)v220, &v462);
  v221 = (void *)(v462 - 12);
  if ( (int *)(v462 - 12) != &dword_28898C0 )
    v448 = (unsigned int *)(v462 - 4);
        v449 = __ldrex(v448);
      while ( __strex(v449 - 1, v448) );
      v449 = (*v448)--;
    if ( v449 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v221);
  v458 = 1051260355;
  v461 = 138;
  v460 = 0;
  v459 = 4;
  Options::registerOption<InputModeFloatOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,std::string const&,float>(
    &v461,
    (float *)&v460,
    (float *)&v459,
    COERCE_FLOAT(&Options::not_available),
    (int)&v458);
  v455 = 4;
  v456 = 0;
  v457 = 139;
  v454 = 1056964608;
  LODWORD(v222) = &Options::not_available;
  HIDWORD(v222) = &Options::do_not_save;
  Options::registerOption<FloatOption,OptionID,OptionOwnerType,OptionResetType,std::string const&,std::string const&,float>(
    &v457,
    (float *)&v456,
    (float *)&v455,
    v222,
    (int)&v454);
    v453 = 139;
    v223 = *(_DWORD *)std::map<OptionID,std::shared_ptr<Option>,std::less<OptionID>,std::allocator<std::pair<OptionID const,std::shared_ptr<Option>>>>::operator[](
                        (int)v1,
                        &v453);
    sub_119C884((void **)&v452, "gameSensitivity");
    Option::registerTelemetryProperty(v223, &v452);
    v224 = (void *)(v452 - 12);
    if ( (int *)(v452 - 12) == &dword_28898C0 )
      return;
    v225 = (unsigned int *)(v452 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      goto LABEL_1053;
    v451 = 138;
    v227 = *(_DWORD *)std::map<OptionID,std::shared_ptr<Option>,std::less<OptionID>,std::allocator<std::pair<OptionID const,std::shared_ptr<Option>>>>::operator[](
                        &v451);
    sub_119C884((void **)&v450, "gameSensitivity");
    Option::registerTelemetryProperty(v227, &v450);
    v224 = (void *)(v450 - 12);
    if ( (int *)(v450 - 12) == &dword_28898C0 )
    v225 = (unsigned int *)(v450 - 4);
  v226 = (*v225)--;
LABEL_1053:
  if ( v226 <= 0 )
    j_j_j_j_j__ZdlPv_9_1(v224);
}


void __fastcall Options::_readKeyboardMapping(__int64 a1, unsigned int *a2)
{
  Options::_readKeyboardMapping(a1, a2);
}


int __fastcall Options::getBobView(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@16
  int result; // r0@21
  char *v8; // r2@22
  char *v9; // r1@23
  char *v10; // r0@24

  v1 = this;
  if ( *((_BYTE *)this + 37) )
  {
    v2 = (char *)*((_DWORD *)this + 2);
    v3 = (char *)this + 4;
    if ( v2 )
    {
      v4 = (char *)this + 4;
      do
      {
        v5 = v2;
        while ( *((_DWORD *)v5 + 4) < 84 )
        {
          v5 = (char *)*((_DWORD *)v5 + 3);
          if ( !v5 )
          {
            v5 = v4;
            goto LABEL_12;
          }
        }
        v2 = (char *)*((_DWORD *)v5 + 2);
        v4 = v5;
      }
      while ( v2 );
    }
    else
      v5 = (char *)this + 4;
LABEL_12:
    if ( v5 == v3 )
      v6 = 0;
      if ( *((_DWORD *)v5 + 4) > 84 )
        v5 = (char *)v1 + 4;
      if ( v5 == v3 )
        v6 = 0;
      else
        v6 = (Option *)*((_DWORD *)v5 + 5);
    if ( Option::getBool(v6) != 1 )
      return 0;
  }
  else
  v8 = (char *)*((_DWORD *)v1 + 2);
  if ( v8 )
    v9 = v3;
    do
      v10 = v8;
      while ( *((_DWORD *)v10 + 4) < 21 )
        v10 = (char *)*((_DWORD *)v10 + 3);
        if ( !v10 )
          v10 = v9;
          goto LABEL_31;
      v8 = (char *)*((_DWORD *)v10 + 2);
      v9 = v10;
    while ( v8 );
    v10 = v3;
LABEL_31:
  if ( v10 == v3 )
    goto LABEL_39;
  if ( *((_DWORD *)v10 + 4) > 21 )
LABEL_39:
    result = Option::getBool(0);
    result = Option::getBool(*((Option **)v10 + 5));
  return result;
}


int __fastcall Options::getShowAutoSaveIcon(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 161 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 161 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRequireWebsocketEncryption(Options *this, int a2)
{
  char *v2; // r3@1
  int v3; // r4@1
  char *v4; // r1@1
  char *v5; // r2@2
  char *v6; // r0@3
  Option *v7; // r5@14
  int result; // r0@18

  v2 = (char *)*((_DWORD *)this + 2);
  v3 = a2;
  v4 = (char *)this + 4;
  if ( v2 )
  {
    v5 = (char *)this + 4;
    do
    {
      v6 = v2;
      while ( *((_DWORD *)v6 + 4) < 130 )
      {
        v6 = (char *)*((_DWORD *)v6 + 3);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v2 = (char *)*((_DWORD *)v6 + 2);
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = (char *)this + 4;
LABEL_10:
  if ( v6 == v4 )
    v7 = 0;
    if ( *((_DWORD *)v6 + 4) > 130 )
      v6 = v4;
    if ( v6 == v4 )
      v7 = 0;
    else
      v7 = (Option *)*((_DWORD *)v6 + 5);
  result = Option::hasOverrideSource(v7);
  if ( !result )
    result = j_j_j__ZN10BoolOption3setEb_0(v7, v3);
  return result;
}


void __fastcall Options::_readGamepadMapping(int a1, unsigned int *a2, unsigned int *a3)
{
  Options::_readGamepadMapping(a1, a2, a3);
}


int __fastcall Options::getDevShowMinecraftTCUIReplacement(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 148 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 148 )
LABEL_18:
    result = j_j_j__ZNK6Option7getBoolEv(0);
    result = j_j_j__ZNK6Option7getBoolEv(*((Option **)v4 + 5));
  return result;
}


int __fastcall Options::setRenderDebug(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < 118 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > 118 )
    v5 = v3;
LABEL_18:
    result = j_j_j__ZN6Option3setEi(0, a2);
    result = j_j_j__ZN6Option3setEi(*(Option **)(v5 + 20), a2);
  return result;
}


int __fastcall Options::getVRJoystickAim(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 85 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 85 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::getVRRightStickGazeAdjust(Options *this)
{
  Options *v1; // r4@1
  char *v2; // r2@2
  char *v3; // r5@2
  char *v4; // r1@3
  char *v5; // r0@4
  Option *v6; // r0@15
  int v7; // r2@20
  int v8; // r1@21
  int v9; // r0@22
  int result; // r0@28

  v1 = this;
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_38;
  v2 = (char *)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  if ( v2 )
  {
    v4 = (char *)this + 4;
    do
    {
      v5 = v2;
      while ( *((_DWORD *)v5 + 4) < 74 )
      {
        v5 = (char *)*((_DWORD *)v5 + 3);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_11;
        }
      }
      v2 = (char *)*((_DWORD *)v5 + 2);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = (char *)this + 4;
LABEL_11:
  if ( v5 == v3 )
    v6 = 0;
    if ( *((_DWORD *)v5 + 4) > 74 )
      v5 = (char *)v1 + 4;
    v6 = (Option *)(v5 == v3 ? 0 : *((_DWORD *)v5 + 5));
  if ( Option::getBool(v6) == 1 )
    v7 = *((_DWORD *)v1 + 2);
    if ( v7 )
      v8 = (int)v1 + 4;
      do
        v9 = v7;
        while ( *(_DWORD *)(v9 + 16) < 61 )
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_30;
          }
        v7 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      while ( v7 );
    else
      v9 = (int)v1 + 4;
LABEL_30:
    if ( (char *)v9 == v3 )
      goto LABEL_39;
    if ( *(_DWORD *)(v9 + 16) > 61 )
LABEL_39:
      result = Option::getBool(0);
      result = Option::getBool(*(Option **)(v9 + 20));
LABEL_38:
    result = 0;
  return result;
}


int __fastcall Options::getDevRenderAttachPos(Options *this)
{
  char *v1; // r3@1
  char *v2; // r0@1
  char *v3; // r2@2
  char *v4; // r1@3
  int result; // r0@14

  v1 = (char *)*((_DWORD *)this + 2);
  v2 = (char *)this + 4;
  if ( v1 )
  {
    v3 = v2;
    do
    {
      v4 = v1;
      while ( *((_DWORD *)v4 + 4) < 147 )
      {
        v4 = (char *)*((_DWORD *)v4 + 3);
        if ( !v4 )
        {
          v4 = v3;
          goto LABEL_10;
        }
      }
      v1 = (char *)*((_DWORD *)v4 + 2);
      v3 = v4;
    }
    while ( v1 );
  }
  else
    v4 = v2;
LABEL_10:
  if ( v4 == v2 )
    goto LABEL_18;
  if ( *((_DWORD *)v4 + 4) > 147 )
LABEL_18:
    result = j_j_j__ZNK6Option6getIntEv(0);
    result = j_j_j__ZNK6Option6getIntEv(*((Option **)v4 + 5));
  return result;
}
