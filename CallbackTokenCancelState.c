

int __fastcall CallbackTokenCancelState::cancel(int result)
{
  __dmb();
  *(_BYTE *)result = 1;
  return result;
}


int __fastcall CallbackTokenCancelState::wasCanceled(CallbackTokenCancelState *this)
{
  char v1; // r0@1

  v1 = *(_BYTE *)this;
  __dmb();
  return v1 & 1;
}


_BYTE *__fastcall CallbackTokenCancelState::CallbackTokenCancelState(_BYTE *result)
{
  *result = 0;
  return result;
}
