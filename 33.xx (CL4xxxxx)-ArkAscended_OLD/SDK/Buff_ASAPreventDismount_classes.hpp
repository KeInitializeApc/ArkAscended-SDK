#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB60 - 0xB60)
// BlueprintGeneratedClass Buff_ASAPreventDismount.Buff_ASAPreventDismount_C
class ABuff_ASAPreventDismount_C : public APrimalBuff
{
public:

	static class UClass* StaticClass();
	static class ABuff_ASAPreventDismount_C* GetDefaultObj();

	void BPBypassPreventDinoDismount(bool* FromRider, bool bCancelForceLand, bool SpawnDinoDefaultController, int32 OverrideUnboardDirection, bool bForceEvenIfBuffPreventsClear, bool bFromUse, bool* ReturnValue);
};

}


