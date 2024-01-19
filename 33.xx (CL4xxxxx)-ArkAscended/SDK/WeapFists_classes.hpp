#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1060 - 0x1050)
// BlueprintGeneratedClass WeapFists.WeapFists_C
class AWeapFists_C : public AShooterWeapon_Melee
{
public:
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1;                // 0x1050(0x8)(ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base;                 // 0x1058(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AWeapFists_C* GetDefaultObj();

	int32 BPOverrideMeleeSwingSocket(class FName FromSocket, class FName ReturnValue, bool Temp_bool_Variable, class FString* CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue_1, class FName* CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_Select_Default);
};

}


