#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1088 - 0x1078)
// BlueprintGeneratedClass WeapFists.WeapFists_C
class AWeapFists_C : public AShooterWeapon_Melee
{
public:
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1;                // 0x1078(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base;                 // 0x1080(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AWeapFists_C* GetDefaultObj();

	class FName BPOverrideMeleeSwingSocket(class FName ReturnValue, bool* Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FName* K2Node_Select_Default);
};

}


