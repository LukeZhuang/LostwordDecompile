private static string GenerateEncryptionKey(string secret_key, byte xor) { }

void MasterMsgPack__GenerateEncryptionKey(int param_1,byte param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (cRam02aad187 == '\0') {
    FUN_003d2672(0x5283);
    cRam02aad187 = '\x01';
  }
  iVar2 = *(int *)(*(int *)(_MasterMsgPack_TypeInfo + 0x5c) + 0x10);
  if (iVar2 == 0) {
    if (param_1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    iVar2 = System_String__ToCharArray(param_1,0);
    uVar5 = 0;
    while( true ) {
      if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
        FUN_0040041c(0);
      }
      if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar5) break;
      if (*(uint *)(iVar2 + 0xc) <= uVar5) {
        uVar3 = FUN_00401256();
                    // WARNING: Subroutine does not return
        FUN_00400342(uVar3,0,0);
      }
      uVar1 = *(undefined2 *)(iVar2 + 0x10 + uVar5 * 2);
      if (((*(byte *)(_System_Convert_TypeInfo + 0xbf) & 2) != 0) &&
         (*(int *)(_System_Convert_TypeInfo + 0x70) == 0)) {
        FUN_003e071a(_System_Convert_TypeInfo);
      }
      uVar4 = System_Convert__ToByte(uVar1,0);
      if (((*(byte *)(_System_Convert_TypeInfo + 0xbf) & 2) != 0) &&
         (*(int *)(_System_Convert_TypeInfo + 0x70) == 0)) {
        FUN_003e071a(_System_Convert_TypeInfo);
        uVar4 = uVar4 & 0xff;
      }
      uVar1 = System_Convert__ToChar((uint)param_2 << ((byte)uVar5 & 1) ^ uVar4 & 0xff,0);
      if (*(uint *)(iVar2 + 0xc) < uVar5 || *(uint *)(iVar2 + 0xc) == uVar5) {
        uVar3 = FUN_00401256();
                    // WARNING: Subroutine does not return
        FUN_00400342(uVar3,0,0);
      }
      *(undefined2 *)(iVar2 + 0x10 + uVar5 * 2) = uVar1;
      uVar5 = uVar5 + 1;
    }
    System_String__CreateString(0,iVar2,0);
  }
  else {
    XLua_DelegateBridge____Gen_Delegate_Imp497(iVar2,param_1,param_2,0);
  }
  return;
}