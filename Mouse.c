

int __fastcall Mouse::getY(Mouse *this)
{
  return unk_27E850E;
}


int __fastcall Mouse::isButtonDown(Mouse *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)this - 1 <= 3 )
    result = *((_BYTE *)this + 41846040) != 0;
  else
    result = 0;
  return result;
}


void *__fastcall Mouse::reset(Mouse *this)
{
  void *result; // r0@1

  result = &Mouse::_instance;
  Mouse::_instance = -1;
  unk_27E8524 = dword_27E8520;
  unk_27E851C = 0;
  return result;
}


int __fastcall Mouse::getDY(Mouse *this)
{
  int result; // r0@1

  LOWORD(result) = word_27E8510[1];
  if ( word_27E8510[1] == -9999 )
    LOWORD(result) = unk_27E850E - word_27E8510[3];
  return (signed __int16)result;
}


int __fastcall Mouse::getX(Mouse *this)
{
  return word_27E850C;
}


void *__fastcall Mouse::rewind(Mouse *this)
{
  void *result; // r0@1

  result = &Mouse::_instance;
  Mouse::_instance = -1;
  return result;
}


int __fastcall Mouse::getEvent(Mouse *this)
{
  return dword_27E8520 + 20 * Mouse::_instance;
}


void *__fastcall Mouse::reset2(Mouse *this)
{
  void *result; // r0@1

  result = &Mouse::_instance;
  word_27E8510[2] = word_27E850C;
  word_27E8510[3] = unk_27E850E;
  *(_DWORD *)word_27E8510 = -655238927;
  return result;
}


int __fastcall Mouse::getDX(Mouse *this)
{
  int result; // r0@1

  LOWORD(result) = word_27E8510[0];
  if ( word_27E8510[0] == -9999 )
    LOWORD(result) = word_27E850C - word_27E8510[2];
  return (signed __int16)result;
}


int __fastcall Mouse::getEventButtonState(Mouse *this)
{
  int result; // r0@1

  result = *(_BYTE *)(dword_27E8520 + 20 * Mouse::_instance + 9);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall Mouse::next(Mouse *this)
{
  signed int result; // r0@2

  if ( Mouse::_instance + 1 < -858993459 * ((unk_27E8524 - dword_27E8520) >> 2) )
  {
    ++Mouse::_instance;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Mouse::getButtonState(Mouse *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)this - 1 <= 3 )
    result = *((_BYTE *)this + 41846040);
  else
    result = 0;
  return result;
}
