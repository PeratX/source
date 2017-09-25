

void *__fastcall Keyboard::feedText(int *a1, char a2, char a3)
{
  char v3; // r5@1
  char v4; // r4@1
  int v5; // r7@1
  int v6; // r0@1
  int v7; // r1@2
  char *v8; // r0@4
  void *result; // r0@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  char *v12; // [sp+4h] [bp-2Ch]@1
  int v13; // [sp+8h] [bp-28h]@1
  int v14; // [sp+Ch] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = Keyboard::_gameControllerId;
  v12 = (char *)&unk_28898CC;
  EntityInteraction::setInteractText((int *)&v12, a1);
  LOBYTE(v13) = v3;
  v14 = v5;
  v6 = dword_27E7CF0;
  if ( dword_27E7CF0 == unk_27E7CF4 )
  {
    std::vector<TextInput,std::allocator<TextInput>>::_M_emplace_back_aux<TextInput>(&Keyboard::_inputText, (int)&v12);
  }
  else
    *(_DWORD *)dword_27E7CF0 = v12;
    v12 = (char *)&unk_28898CC;
    v7 = v14;
    *(_DWORD *)(v6 + 4) = v13;
    *(_DWORD *)(v6 + 8) = v7;
    dword_27E7CF0 += 12;
  v8 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  result = &Keyboard::_lastTextId;
  Keyboard::_lastTextId = v4;
  return result;
}


void __fastcall Keyboard::feed(Keyboard *this, unsigned __int8 a2, int a3)
{
  JUMPOUT(Keyboard::feed);
}
