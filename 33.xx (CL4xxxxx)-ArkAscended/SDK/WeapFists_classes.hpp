#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10B8 - 0x10A8)
// BlueprintGeneratedClass WeapFists.WeapFists_C
class AWeapFists_C : public AShooterWeapon_Melee
{
public:
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1;                // 0x10A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base;                 // 0x10B0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AWeapFists_C* GetDefaultObj();

	class FName BPOverrideMeleeSwingSocket(class FName* FromSocket, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_Select_Default);
};

}


