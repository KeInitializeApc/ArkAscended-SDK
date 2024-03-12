#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xF04 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C
class UPrimalItemArmor_TropeSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	int32                                        TooltipDisplayQualityOffset;                       // 0xF00(0x4)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_TropeSaddle_C* GetDefaultObj();

	class FString GetInventoryIconDisplayText(class FString* CallFunc_GetItemStatString_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
};

}


