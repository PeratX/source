

signed int __fastcall TripodCameraComponent::getInteraction(TripodCameraComponent *this, Player *a2, EntityInteraction *a3)
{
  EntityInteraction *v3; // r4@1
  TripodCameraComponent *v4; // r6@1
  Player *v5; // r5@1
  _DWORD *v6; // r0@2
  __int64 v7; // r1@2
  void *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int v12; // [sp+8h] [bp-28h]@4
  _DWORD *v13; // [sp+Ch] [bp-24h]@2
  __int64 v14; // [sp+14h] [bp-1Ch]@2

  v3 = a3;
  v4 = this;
  v5 = a2;
  if ( j_EntityInteraction::shouldCapture(a3) == 1 )
  {
    v6 = j_operator new(8u);
    LODWORD(v7) = sub_1A9633C;
    *v6 = v4;
    v6[1] = v5;
    HIDWORD(v7) = sub_1A96330;
    v13 = v6;
    v14 = v7;
    j_EntityInteraction::capture((int)v3, (int)&v13);
    if ( (_DWORD)v14 )
      ((void (*)(void))v14)();
  }
  sub_21E94B4((void **)&v12, "action.interact.takepicture");
  j_EntityInteraction::setInteractText();
  v8 = (void *)(v12 - 12);
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
      j_j_j_j__ZdlPv_9(v8);
  return 1;
}


_DWORD *__fastcall TripodCameraComponent::TripodCameraComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
