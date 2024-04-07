#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x489 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C
class UDataListButtonHairLength_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         IsFacialHair;                                      // 0x480(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5645[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HairIndex;                                         // 0x484(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFemale;                                          // 0x488(0x1)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButtonHairLength_Widget_ASA_C* GetDefaultObj();

	class USliderClamp_Widget_C* ExtraSetupWidget(class UPrimalUserWidget* UserWidget, bool* K2Node_DynamicCast_bSuccess);
	int32 GetQuantityMeshes(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue);
	class FText SetupTextValue(class FText* ReturnText);
	void RefreshHairData(int32 HairIndex, bool IsFemale);
	class FText ExecuteUbergraph_DataListButtonHairLength_Widget_ASA(int32* EntryPoint, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


