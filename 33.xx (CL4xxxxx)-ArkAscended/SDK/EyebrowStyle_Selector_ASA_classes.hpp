#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x391 - 0x381)
// WidgetBlueprintGeneratedClass EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C
class UEyebrowStyle_Selector_ASA_C : public USelector_ASA_Widget_C
{
public:
	uint8                                        Pad_57D6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bIsFemale;                                         // 0x390(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UEyebrowStyle_Selector_ASA_C* GetDefaultObj();

	class FText RefreshOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, const struct FHairStyleDefinition& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, class UWidget** CallFunc_GetChildAt_ReturnValue, class UOptionSelector_Widget_C** K2Node_DynamicCast_AsOption_Selector_Widget, bool* K2Node_DynamicCast_bSuccess);
	int32 GetOptions(TArray<class UTexture2D*>* Icons, TArray<class UTexture2D*>* HairIcons, TArray<class FString>* HairNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, const struct FHairStyleDefinition& CallFunc_Array_Get_Item);
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	bool ExecuteUbergraph_EyebrowStyle_Selector_ASA(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue);
};

}


