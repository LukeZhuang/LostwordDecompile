private static byte[] GenerateBytes(string password, int length) { }

int FileEncryptor__GenerateBytes(undefined4 param_1,uint param_2)

{
  undefined uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (cRam02a74f68 == '\0') {
    FUN_003d2672(0x3836);
    cRam02a74f68 = '\x01';
  }
  if (**(int **)(_FileEncryptor_TypeInfo + 0x5c) == 0) {
    piVar3 = (int *)System_Text_Encoding__get_UTF8(0);
    if (piVar3 == (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_0040041c(0);
    }
    iVar4 = (**(code **)(*piVar3 + 0x150))(piVar3,param_1,*(undefined4 *)(*piVar3 + 0x154));
    iVar2 = FUN_0041654a(_byte___TypeInfo,param_2);
    if (0 < (int)param_2) {
      uVar6 = 0;
      do {
        if (iVar4 == 0) {
                    // WARNING: Subroutine does not return
          FUN_0040041c(0);
        }
        if ((int)uVar6 < (int)*(uint *)(iVar4 + 0xc)) {
          if (*(uint *)(iVar4 + 0xc) <= uVar6) {
            uVar5 = FUN_00401256();
                    // WARNING: Subroutine does not return
            FUN_00400342(uVar5,0,0);
          }
          uVar1 = *(undefined *)(iVar4 + 0x10 + uVar6);
        }
        else {
          uVar1 = 0;
        }
        if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
          FUN_0040041c(0);
        }
        if (*(uint *)(iVar2 + 0xc) < uVar6 || *(uint *)(iVar2 + 0xc) == uVar6) {
          uVar5 = FUN_00401256();
                    // WARNING: Subroutine does not return
          FUN_00400342(uVar5,0,0);
        }
        *(undefined *)(iVar2 + 0x10 + uVar6) = uVar1;
        uVar6 = uVar6 + 1;
      } while (param_2 != uVar6);
    }
  }
  else {
    iVar2 = XLua_DelegateBridge____Gen_Delegate_Imp98
                      (**(int **)(_FileEncryptor_TypeInfo + 0x5c),param_1,param_2,0);
  }
  return iVar2;
}