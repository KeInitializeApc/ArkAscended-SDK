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
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base1;                // 0x1050(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UBP_PrimalWindSourceComponent_Base_C*  BP_PrimalWindSourceComponent_Base;                 // 0x1058(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class AWeapFists_C* GetDefaultObj();

	bool BPOverrideMeleeSwingSocket(bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, class FName* K2Node_Select_Default);
};

}


