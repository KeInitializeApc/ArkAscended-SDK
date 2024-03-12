#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xF00 - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       LastTorchDurabilityLossTime;                       // 0xEF0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance)
	double                                       SavedSaddleDurability;                             // 0xEF8(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

	double BPOverrideEquippedDurabilityPercentage();
	float ResetSaddleDurabilityToSavedValue();
	double SaveSaddleDurability();
	double BlueprintEquipped();
	class UActorComponent* BPPostConstructAttachment();
	bool ExecuteUbergraph_PrimalItemArmor_SaddleGeneric(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1);
};

}


