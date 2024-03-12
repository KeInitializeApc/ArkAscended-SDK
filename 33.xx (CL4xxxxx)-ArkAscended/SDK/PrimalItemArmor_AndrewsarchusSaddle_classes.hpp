#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF00 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C
class UPrimalItemArmor_AndrewsarchusSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemArmor_AndrewsarchusSaddle_C* GetDefaultObj();

	bool BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_BPHandleUseButtonPress_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess_1);
	bool BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess_1);
	class FString GetInventoryIconDisplayText(class FString* CallFunc_GetNewlineCharacter_ReturnValue, class FString* CallFunc_GetItemStatString_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, class FString* CallFunc_GetItemStatString_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
};

}


